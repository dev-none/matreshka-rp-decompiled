package io.sentry.android.core;

import android.app.Activity;
import android.app.Application;
import android.os.Bundle;
import io.sentry.IScopes;
import io.sentry.Integration;
import io.sentry.NoOpLogger;
import io.sentry.SentryLevel;
import io.sentry.SentryOptions;
import io.sentry.util.IntegrationUtils;
import io.sentry.util.Objects;
import java.io.Closeable;
import java.io.IOException;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes7.dex */
public final class FeedbackShakeIntegration implements Integration, Closeable, Application.ActivityLifecycleCallbacks {
    private final Application application;
    private volatile WeakReference<Activity> currentActivityRef;
    private SentryAndroidOptions options;
    private volatile Runnable previousOnFormClose;
    private volatile boolean isDialogShowing = false;
    private final SentryShakeDetector shakeDetector = new SentryShakeDetector(NoOpLogger.getInstance());

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityCreated(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivitySaveInstanceState(Activity activity, Bundle bundle) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStarted(Activity activity) {
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityStopped(Activity activity) {
    }

    public FeedbackShakeIntegration(Application application) {
        this.application = (Application) Objects.requireNonNull(application, "Application is required");
    }

    @Override // io.sentry.Integration
    public void register(IScopes iScopes, SentryOptions sentryOptions) {
        SentryAndroidOptions sentryAndroidOptions = (SentryAndroidOptions) Objects.requireNonNull(sentryOptions instanceof SentryAndroidOptions ? (SentryAndroidOptions) sentryOptions : null, "SentryAndroidOptions is required");
        this.options = sentryAndroidOptions;
        if (sentryAndroidOptions.getFeedbackOptions().isUseShakeGesture()) {
            this.shakeDetector.init(this.application, this.options.getLogger());
            IntegrationUtils.addIntegrationToSdkVersion("FeedbackShake");
            this.application.registerActivityLifecycleCallbacks(this);
            this.options.getLogger().log(SentryLevel.DEBUG, "FeedbackShakeIntegration installed.", new Object[0]);
            Activity activity = CurrentActivityHolder.getInstance().getActivity();
            if (activity != null) {
                this.currentActivityRef = new WeakReference<>(activity);
                startShakeDetection(activity);
            }
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        this.application.unregisterActivityLifecycleCallbacks(this);
        this.shakeDetector.close();
        if (this.isDialogShowing) {
            this.isDialogShowing = false;
            SentryAndroidOptions sentryAndroidOptions = this.options;
            if (sentryAndroidOptions != null) {
                sentryAndroidOptions.getFeedbackOptions().setOnFormClose(this.previousOnFormClose);
            }
            this.previousOnFormClose = null;
        }
        this.currentActivityRef = null;
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityResumed(Activity activity) {
        Activity activity2 = this.currentActivityRef != null ? this.currentActivityRef.get() : null;
        if (this.isDialogShowing && activity2 != null && activity2 != activity) {
            this.isDialogShowing = false;
            SentryAndroidOptions sentryAndroidOptions = this.options;
            if (sentryAndroidOptions != null) {
                sentryAndroidOptions.getFeedbackOptions().setOnFormClose(this.previousOnFormClose);
            }
            this.previousOnFormClose = null;
        }
        this.currentActivityRef = new WeakReference<>(activity);
        startShakeDetection(activity);
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityPaused(Activity activity) {
        if (activity == (this.currentActivityRef != null ? this.currentActivityRef.get() : null)) {
            stopShakeDetection();
            if (this.isDialogShowing) {
                return;
            }
            this.currentActivityRef = null;
        }
    }

    @Override // android.app.Application.ActivityLifecycleCallbacks
    public void onActivityDestroyed(Activity activity) {
        Activity activity2 = this.currentActivityRef != null ? this.currentActivityRef.get() : null;
        if (this.isDialogShowing && activity == activity2) {
            this.isDialogShowing = false;
            this.currentActivityRef = null;
            SentryAndroidOptions sentryAndroidOptions = this.options;
            if (sentryAndroidOptions != null) {
                sentryAndroidOptions.getFeedbackOptions().setOnFormClose(this.previousOnFormClose);
            }
            this.previousOnFormClose = null;
        }
    }

    private void startShakeDetection(Activity activity) {
        if (this.options == null) {
            return;
        }
        stopShakeDetection();
        this.shakeDetector.start(activity, new SentryShakeDetector.Listener() { // from class: io.sentry.android.core.FeedbackShakeIntegration$$ExternalSyntheticLambda0
            @Override // io.sentry.android.core.SentryShakeDetector.Listener
            public final void onShake() {
                this.f$0.m9768xa7a2fbca();
            }
        });
    }

    /* JADX INFO: renamed from: lambda$startShakeDetection$2$io-sentry-android-core-FeedbackShakeIntegration, reason: not valid java name */
    /* synthetic */ void m9768xa7a2fbca() {
        WeakReference<Activity> weakReference = this.currentActivityRef;
        final Activity activity = weakReference != null ? weakReference.get() : null;
        Boolean boolIsInBackground = AppState.getInstance().isInBackground();
        if (activity == null || this.options == null || this.isDialogShowing || Boolean.TRUE.equals(boolIsInBackground)) {
            return;
        }
        activity.runOnUiThread(new Runnable() { // from class: io.sentry.android.core.FeedbackShakeIntegration$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m9767xa81961c9(activity);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$startShakeDetection$1$io-sentry-android-core-FeedbackShakeIntegration, reason: not valid java name */
    /* synthetic */ void m9767xa81961c9(Activity activity) {
        if (this.isDialogShowing || activity.isFinishing() || activity.isDestroyed()) {
            return;
        }
        try {
            this.isDialogShowing = true;
            final Runnable onFormClose = this.options.getFeedbackOptions().getOnFormClose();
            this.previousOnFormClose = onFormClose;
            this.options.getFeedbackOptions().setOnFormClose(new Runnable() { // from class: io.sentry.android.core.FeedbackShakeIntegration$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m9766xa88fc7c8(onFormClose);
                }
            });
            new SentryUserFeedbackDialog.Builder(activity).create().show();
        } catch (Throwable th) {
            this.isDialogShowing = false;
            this.options.getFeedbackOptions().setOnFormClose(this.previousOnFormClose);
            this.previousOnFormClose = null;
            this.options.getLogger().log(SentryLevel.ERROR, "Failed to show feedback dialog on shake.", th);
        }
    }

    /* JADX INFO: renamed from: lambda$startShakeDetection$0$io-sentry-android-core-FeedbackShakeIntegration, reason: not valid java name */
    /* synthetic */ void m9766xa88fc7c8(Runnable runnable) {
        this.isDialogShowing = false;
        this.options.getFeedbackOptions().setOnFormClose(runnable);
        if (runnable != null) {
            runnable.run();
        }
        this.previousOnFormClose = null;
    }

    private void stopShakeDetection() {
        this.shakeDetector.stop();
    }
}
