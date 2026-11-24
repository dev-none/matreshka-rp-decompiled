package io.sentry.android.core.anr;

import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import io.sentry.ILogger;
import io.sentry.IScopes;
import io.sentry.ISentryLifecycleToken;
import io.sentry.Integration;
import io.sentry.NoOpLogger;
import io.sentry.SentryLevel;
import io.sentry.SentryOptions;
import io.sentry.android.core.AppState;
import io.sentry.android.core.SentryAndroidOptions;
import io.sentry.util.AutoClosableReentrantLock;
import io.sentry.util.IntegrationUtils;
import io.sentry.util.Objects;
import io.sentry.util.SentryRandom;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import ru.ok.tracer.base.ucum.UcumUtils;

/* JADX INFO: loaded from: classes7.dex */
public class AnrProfilingIntegration implements Integration, Closeable, AppState.AppStateListener, Runnable {
    static final int MAX_NUM_STACKS = 151;
    public static final long POLLING_INTERVAL_MS = 66;
    public static final long THRESHOLD_ANR_MS = 4000;
    private static final long THRESHOLD_SUSPICION_MS = 1000;
    private volatile Handler mainHandler;
    private volatile Thread mainThread;
    private volatile SentryAndroidOptions options;
    private volatile AnrProfileManager profileManager;
    private final AtomicBoolean enabled = new AtomicBoolean(true);
    private final Runnable updater = new Runnable() { // from class: io.sentry.android.core.anr.AnrProfilingIntegration$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            this.f$0.m9780lambda$new$0$iosentryandroidcoreanrAnrProfilingIntegration();
        }
    };
    private final AutoClosableReentrantLock lifecycleLock = new AutoClosableReentrantLock();
    private final AutoClosableReentrantLock profileManagerLock = new AutoClosableReentrantLock();
    private volatile long lastMainThreadExecutionTime = SystemClock.uptimeMillis();
    final AtomicInteger numCollectedStacks = new AtomicInteger();
    private volatile MainThreadState mainThreadState = MainThreadState.IDLE;
    private volatile ILogger logger = NoOpLogger.getInstance();
    private volatile Thread thread = null;
    private volatile boolean sampled = false;
    private volatile boolean inForeground = false;

    protected enum MainThreadState {
        IDLE,
        SUSPICIOUS,
        ANR_DETECTED
    }

    /* JADX INFO: renamed from: lambda$new$0$io-sentry-android-core-anr-AnrProfilingIntegration, reason: not valid java name */
    /* synthetic */ void m9780lambda$new$0$iosentryandroidcoreanrAnrProfilingIntegration() {
        this.lastMainThreadExecutionTime = SystemClock.uptimeMillis();
    }

    @Override // io.sentry.Integration
    public void register(IScopes iScopes, SentryOptions sentryOptions) {
        this.options = (SentryAndroidOptions) Objects.requireNonNull(sentryOptions instanceof SentryAndroidOptions ? (SentryAndroidOptions) sentryOptions : null, "SentryAndroidOptions is required");
        this.logger = sentryOptions.getLogger();
        if (this.options.isAnrProfilingEnabled()) {
            if (this.options.getCacheDirPath() == null) {
                this.logger.log(SentryLevel.WARNING, "ANR Profiling is enabled but cacheDirPath is not set", new Object[0]);
                return;
            }
            Looper mainLooper = Looper.getMainLooper();
            this.mainThread = mainLooper.getThread();
            this.mainHandler = new Handler(mainLooper);
            IntegrationUtils.addIntegrationToSdkVersion("AnrProfiling");
            AppState.getInstance().addAppStateListener(this);
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.enabled.set(false);
        AppState.getInstance().removeAppStateListener(this);
        Handler handler = this.mainHandler;
        if (handler != null) {
            handler.removeCallbacks(this.updater);
        }
        Thread thread = this.thread;
        if (thread != null) {
            synchronized (this) {
                notifyAll();
            }
            thread.interrupt();
        }
        SentryAndroidOptions sentryAndroidOptions = this.options;
        ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.profileManagerLock.acquire();
        try {
            final AnrProfileManager anrProfileManager = this.profileManager;
            this.profileManager = null;
            if (iSentryLifecycleTokenAcquire != null) {
                iSentryLifecycleTokenAcquire.close();
            }
            if (sentryAndroidOptions != null) {
                try {
                    sentryAndroidOptions.getExecutorService().submit(new Runnable() { // from class: io.sentry.android.core.anr.AnrProfilingIntegration$$ExternalSyntheticLambda1
                        @Override // java.lang.Runnable
                        public final void run() {
                            this.f$0.m9779x8b7df2be(anrProfileManager);
                        }
                    });
                } catch (Throwable unused) {
                    this.logger.log(SentryLevel.WARNING, "Failed to submit AnrProfileManager close", new Object[0]);
                }
            }
        } catch (Throwable th) {
            if (iSentryLifecycleTokenAcquire != null) {
                try {
                    iSentryLifecycleTokenAcquire.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    /* JADX INFO: renamed from: lambda$close$1$io-sentry-android-core-anr-AnrProfilingIntegration, reason: not valid java name */
    /* synthetic */ void m9779x8b7df2be(AnrProfileManager anrProfileManager) {
        if (anrProfileManager == null) {
            return;
        }
        try {
            anrProfileManager.close();
        } catch (IOException unused) {
            this.logger.log(SentryLevel.WARNING, "Failed to close AnrProfileManager", new Object[0]);
        }
    }

    @Override // io.sentry.android.core.AppState.AppStateListener
    public void onForeground() {
        if (this.enabled.get()) {
            ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.lifecycleLock.acquire();
            try {
                if (this.inForeground) {
                    if (iSentryLifecycleTokenAcquire != null) {
                        iSentryLifecycleTokenAcquire.close();
                        return;
                    }
                    return;
                }
                this.inForeground = true;
                this.updater.run();
                Thread thread = this.thread;
                if (thread != null && thread.isAlive()) {
                    synchronized (this) {
                        notifyAll();
                    }
                }
                if (thread == null || !thread.isAlive()) {
                    Thread thread2 = new Thread(this, "AnrProfilingIntegration");
                    thread2.setDaemon(true);
                    thread2.start();
                    this.thread = thread2;
                }
                if (iSentryLifecycleTokenAcquire != null) {
                    iSentryLifecycleTokenAcquire.close();
                }
            } catch (Throwable th) {
                if (iSentryLifecycleTokenAcquire != null) {
                    try {
                        iSentryLifecycleTokenAcquire.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        }
    }

    @Override // io.sentry.android.core.AppState.AppStateListener
    public void onBackground() {
        if (this.enabled.get()) {
            ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.lifecycleLock.acquire();
            try {
                this.inForeground = false;
                if (iSentryLifecycleTokenAcquire != null) {
                    iSentryLifecycleTokenAcquire.close();
                }
            } catch (Throwable th) {
                if (iSentryLifecycleTokenAcquire != null) {
                    try {
                        iSentryLifecycleTokenAcquire.close();
                    } catch (Throwable th2) {
                        th.addSuppressed(th2);
                    }
                }
                throw th;
            }
        }
    }

    @Override // java.lang.Runnable
    public void run() {
        Handler handler = this.mainHandler;
        Thread thread = this.mainThread;
        if (handler == null || thread == null) {
            return;
        }
        while (this.enabled.get() && !Thread.currentThread().isInterrupted()) {
            try {
                try {
                    if (!this.inForeground) {
                        synchronized (this) {
                            while (!this.inForeground && this.enabled.get()) {
                                try {
                                    wait();
                                } catch (Throwable th) {
                                    throw th;
                                }
                            }
                        }
                        this.updater.run();
                    } else {
                        checkMainThread(thread);
                        handler.removeCallbacks(this.updater);
                        handler.post(this.updater);
                        Thread.sleep(66L);
                    }
                } catch (InterruptedException unused) {
                    Thread.currentThread().interrupt();
                    return;
                }
            } catch (Throwable th2) {
                this.logger.log(SentryLevel.WARNING, "Failed to execute AnrStacktraceIntegration", th2);
                return;
            }
        }
    }

    protected void checkMainThread(Thread thread) throws IOException {
        long jUptimeMillis = SystemClock.uptimeMillis() - this.lastMainThreadExecutionTime;
        if (jUptimeMillis < 1000) {
            this.mainThreadState = MainThreadState.IDLE;
            this.sampled = false;
        }
        if (this.mainThreadState == MainThreadState.IDLE && jUptimeMillis > 1000) {
            if (this.logger.isEnabled(SentryLevel.DEBUG)) {
                this.logger.log(SentryLevel.DEBUG, "ANR: main thread is suspicious", new Object[0]);
            }
            this.mainThreadState = MainThreadState.SUSPICIOUS;
            SentryAndroidOptions sentryAndroidOptions = this.options;
            Double anrProfilingSampleRate = sentryAndroidOptions != null ? sentryAndroidOptions.getAnrProfilingSampleRate() : null;
            if (anrProfilingSampleRate != null && SentryRandom.current().nextDouble() < anrProfilingSampleRate.doubleValue()) {
                this.sampled = true;
            }
            if (this.sampled) {
                clearStacks();
            }
        }
        if (this.sampled && (this.mainThreadState == MainThreadState.SUSPICIOUS || this.mainThreadState == MainThreadState.ANR_DETECTED)) {
            if (this.numCollectedStacks.get() < MAX_NUM_STACKS) {
                long jUptimeMillis2 = SystemClock.uptimeMillis();
                AnrStackTrace anrStackTrace = new AnrStackTrace(System.currentTimeMillis(), thread.getStackTrace());
                long jUptimeMillis3 = SystemClock.uptimeMillis() - jUptimeMillis2;
                if (this.logger.isEnabled(SentryLevel.DEBUG)) {
                    this.logger.log(SentryLevel.DEBUG, "AnrWatchdog: capturing main thread stacktrace took " + jUptimeMillis3 + UcumUtils.UCUM_MILLISECODS, new Object[0]);
                }
                addStackTrace(anrStackTrace);
            } else if (this.logger.isEnabled(SentryLevel.DEBUG)) {
                this.logger.log(SentryLevel.DEBUG, "ANR: reached maximum number of collected stack traces, skipping further collection", new Object[0]);
            }
        }
        if (this.mainThreadState != MainThreadState.SUSPICIOUS || jUptimeMillis <= THRESHOLD_ANR_MS) {
            return;
        }
        if (this.logger.isEnabled(SentryLevel.DEBUG)) {
            this.logger.log(SentryLevel.DEBUG, "ANR: main thread ANR threshold reached", new Object[0]);
        }
        this.mainThreadState = MainThreadState.ANR_DETECTED;
    }

    protected MainThreadState getState() {
        return this.mainThreadState;
    }

    protected AnrProfileManager getProfileManager() {
        ISentryLifecycleToken iSentryLifecycleTokenAcquire = this.profileManagerLock.acquire();
        try {
            if (this.profileManager == null) {
                SentryOptions sentryOptions = (SentryOptions) Objects.requireNonNull(this.options, "Options can't be null");
                String cacheDirPath = sentryOptions.getCacheDirPath();
                if (cacheDirPath == null) {
                    throw new IllegalStateException("cacheDirPath is required for ANR profiling");
                }
                this.profileManager = new AnrProfileManager(sentryOptions, AnrProfileRotationHelper.getFileForRecording(new File(cacheDirPath)));
            }
            AnrProfileManager anrProfileManager = this.profileManager;
            if (iSentryLifecycleTokenAcquire != null) {
                iSentryLifecycleTokenAcquire.close();
            }
            return anrProfileManager;
        } catch (Throwable th) {
            if (iSentryLifecycleTokenAcquire != null) {
                try {
                    iSentryLifecycleTokenAcquire.close();
                } catch (Throwable th2) {
                    th.addSuppressed(th2);
                }
            }
            throw th;
        }
    }

    private void clearStacks() throws IOException {
        this.numCollectedStacks.set(0);
        getProfileManager().clear();
    }

    private void addStackTrace(AnrStackTrace anrStackTrace) throws IOException {
        if (this.enabled.get()) {
            this.numCollectedStacks.incrementAndGet();
            getProfileManager().add(anrStackTrace);
        }
    }
}
