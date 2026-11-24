package io.sentry.android.core;

import android.app.Activity;
import android.graphics.Bitmap;
import android.view.View;
import androidx.media3.common.MimeTypes;
import io.sentry.Attachment;
import io.sentry.EventProcessor;
import io.sentry.Hint;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.TypeCheckHint;
import io.sentry.android.core.internal.util.AndroidCurrentDateProvider;
import io.sentry.android.core.internal.util.Debouncer;
import io.sentry.android.core.internal.util.ScreenshotUtils;
import io.sentry.android.replay.util.MaskRenderer;
import io.sentry.android.replay.util.ViewsKt;
import io.sentry.android.replay.viewhierarchy.ViewHierarchyNode;
import io.sentry.protocol.SentryTransaction;
import io.sentry.util.HintUtils;
import io.sentry.util.IntegrationUtils;
import io.sentry.util.Objects;
import java.util.concurrent.Callable;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: classes7.dex */
public final class ScreenshotEventProcessor implements EventProcessor {
    private static final int DEBOUNCE_MAX_EXECUTIONS = 3;
    private static final long DEBOUNCE_WAIT_TIME_MS = 2000;
    private static final long MASKING_TIMEOUT_MS = 2000;
    private final BuildInfoProvider buildInfoProvider;
    private final boolean isReplayAvailable;
    private final SentryAndroidOptions options;
    private final AtomicBoolean isReplayModuleAbsenceLogged = new AtomicBoolean(false);
    private final Debouncer debouncer = new Debouncer(AndroidCurrentDateProvider.getInstance(), 2000, 3);

    @Override // io.sentry.EventProcessor
    public SentryTransaction process(SentryTransaction sentryTransaction, Hint hint) {
        return sentryTransaction;
    }

    public ScreenshotEventProcessor(SentryAndroidOptions sentryAndroidOptions, BuildInfoProvider buildInfoProvider, boolean z) {
        this.options = (SentryAndroidOptions) Objects.requireNonNull(sentryAndroidOptions, "SentryAndroidOptions is required");
        this.buildInfoProvider = (BuildInfoProvider) Objects.requireNonNull(buildInfoProvider, "BuildInfoProvider is required");
        this.isReplayAvailable = z;
        if (sentryAndroidOptions.isAttachScreenshot()) {
            IntegrationUtils.addIntegrationToSdkVersion("Screenshot");
        }
    }

    private boolean isMaskingEnabled() {
        return !this.options.getScreenshot().getMaskViewClasses().isEmpty() && this.isReplayAvailable;
    }

    /* JADX WARN: Code duplicated, block: B:41:0x00a3 A[PHI: r2
  0x00a3: PHI (r2v6 android.graphics.Bitmap) = (r2v5 android.graphics.Bitmap), (r2v8 android.graphics.Bitmap) binds: [B:33:0x0090, B:39:0x00a0] A[DONT_GENERATE, DONT_INLINE]] */
    @Override // io.sentry.EventProcessor
    public SentryEvent process(SentryEvent sentryEvent, Hint hint) {
        if (sentryEvent.isErrored()) {
            if (!this.options.isAttachScreenshot()) {
                this.options.getLogger().log(SentryLevel.DEBUG, "attachScreenshot is disabled.", new Object[0]);
                return sentryEvent;
            }
            if (!this.isReplayAvailable && !this.options.getScreenshot().getMaskViewClasses().isEmpty()) {
                if (!this.isReplayModuleAbsenceLogged.getAndSet(true)) {
                    this.options.getLogger().log(SentryLevel.WARNING, "Screenshot masking requires sentry-android-replay module", new Object[0]);
                    return sentryEvent;
                }
            } else {
                Activity activity = CurrentActivityHolder.getInstance().getActivity();
                if (activity != null && !HintUtils.isFromHybridSdk(hint)) {
                    boolean zCheckForDebounce = this.debouncer.checkForDebounce();
                    SentryAndroidOptions.BeforeCaptureCallback beforeScreenshotCaptureCallback = this.options.getBeforeScreenshotCaptureCallback();
                    if (beforeScreenshotCaptureCallback == null ? !zCheckForDebounce : beforeScreenshotCaptureCallback.execute(sentryEvent, hint, zCheckForDebounce)) {
                        final Bitmap bitmapCaptureScreenshot = ScreenshotUtils.captureScreenshot(activity, this.options.getThreadChecker(), this.options.getLogger(), this.buildInfoProvider);
                        if (bitmapCaptureScreenshot != null) {
                            if (isMaskingEnabled()) {
                                ViewHierarchyNode viewHierarchyNodeCaptureViewHierarchy = captureViewHierarchy(activity);
                                if (viewHierarchyNodeCaptureViewHierarchy == null) {
                                    bitmapCaptureScreenshot.recycle();
                                    return sentryEvent;
                                }
                                bitmapCaptureScreenshot = applyMasking(bitmapCaptureScreenshot, viewHierarchyNodeCaptureViewHierarchy);
                                if (bitmapCaptureScreenshot != null) {
                                    hint.setScreenshot(Attachment.fromByteProvider(new Callable() { // from class: io.sentry.android.core.ScreenshotEventProcessor$$ExternalSyntheticLambda1
                                        @Override // java.util.concurrent.Callable
                                        public final Object call() {
                                            return this.f$0.m9771lambda$process$0$iosentryandroidcoreScreenshotEventProcessor(bitmapCaptureScreenshot);
                                        }
                                    }, "screenshot.png", MimeTypes.IMAGE_PNG, false));
                                    hint.set(TypeCheckHint.ANDROID_ACTIVITY, activity);
                                }
                            } else {
                                hint.setScreenshot(Attachment.fromByteProvider(new Callable() { // from class: io.sentry.android.core.ScreenshotEventProcessor$$ExternalSyntheticLambda1
                                    @Override // java.util.concurrent.Callable
                                    public final Object call() {
                                        return this.f$0.m9771lambda$process$0$iosentryandroidcoreScreenshotEventProcessor(bitmapCaptureScreenshot);
                                    }
                                }, "screenshot.png", MimeTypes.IMAGE_PNG, false));
                                hint.set(TypeCheckHint.ANDROID_ACTIVITY, activity);
                            }
                        }
                    }
                }
            }
        }
        return sentryEvent;
    }

    /* JADX INFO: renamed from: lambda$process$0$io-sentry-android-core-ScreenshotEventProcessor, reason: not valid java name */
    /* synthetic */ byte[] m9771lambda$process$0$iosentryandroidcoreScreenshotEventProcessor(Bitmap bitmap) throws Exception {
        return ScreenshotUtils.compressBitmapToPng(bitmap, this.options.getLogger());
    }

    private ViewHierarchyNode captureViewHierarchy(final Activity activity) {
        if (this.options.getThreadChecker().isMainThread()) {
            return buildViewHierarchy(activity);
        }
        final AtomicReference atomicReference = new AtomicReference(null);
        final CountDownLatch countDownLatch = new CountDownLatch(1);
        try {
            activity.runOnUiThread(new Runnable() { // from class: io.sentry.android.core.ScreenshotEventProcessor$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m9770xb3ea7df7(atomicReference, activity, countDownLatch);
                }
            });
            if (!countDownLatch.await(2000L, TimeUnit.MILLISECONDS)) {
                this.options.getLogger().log(SentryLevel.WARNING, "Timed out waiting for view hierarchy capture on main thread", new Object[0]);
                return null;
            }
            return (ViewHierarchyNode) atomicReference.get();
        } catch (Throwable th) {
            this.options.getLogger().log(SentryLevel.ERROR, "Failed to capture view hierarchy", th);
            return null;
        }
    }

    /* JADX INFO: renamed from: lambda$captureViewHierarchy$1$io-sentry-android-core-ScreenshotEventProcessor, reason: not valid java name */
    /* synthetic */ void m9770xb3ea7df7(AtomicReference atomicReference, Activity activity, CountDownLatch countDownLatch) {
        try {
            atomicReference.set(buildViewHierarchy(activity));
        } finally {
            countDownLatch.countDown();
        }
    }

    private ViewHierarchyNode buildViewHierarchy(Activity activity) {
        try {
            View rootView = (activity.getWindow() == null || activity.getWindow().peekDecorView() == null || activity.getWindow().peekDecorView().getRootView() == null) ? null : activity.getWindow().peekDecorView().getRootView();
            if (rootView == null) {
                return null;
            }
            ViewHierarchyNode viewHierarchyNodeFromView = ViewHierarchyNode.INSTANCE.fromView(rootView, null, 0, this.options.getScreenshot());
            ViewsKt.traverse(rootView, viewHierarchyNodeFromView, this.options.getScreenshot(), this.options.getLogger());
            return viewHierarchyNodeFromView;
        } catch (Throwable th) {
            this.options.getLogger().log(SentryLevel.ERROR, "Failed to build view hierarchy", th);
            return null;
        }
    }

    /* JADX WARN: Code duplicated, block: B:40:0x0061  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v3 */
    /* JADX WARN: Type inference failed for: r3v5, types: [boolean] */
    private Bitmap applyMasking(Bitmap bitmap, ViewHierarchyNode viewHierarchyNode) {
        Bitmap bitmapIsMutable;
        Bitmap bitmapCopy;
        boolean z = false;
        try {
            try {
                MaskRenderer maskRenderer = new MaskRenderer();
                try {
                    bitmapIsMutable = bitmap.isMutable();
                    try {
                        if (bitmapIsMutable == 0) {
                            bitmapCopy = bitmap.copy(Bitmap.Config.ARGB_8888, true);
                            if (bitmapCopy == null) {
                                bitmap.recycle();
                                maskRenderer.close();
                                return null;
                            }
                            z = true;
                        } else {
                            bitmapCopy = bitmap;
                        }
                        maskRenderer.renderMasks(bitmapCopy, viewHierarchyNode, null);
                        if (z && !bitmap.isRecycled()) {
                            bitmap.recycle();
                        }
                        maskRenderer.close();
                        return bitmapCopy;
                    } catch (Throwable th) {
                        th = th;
                        try {
                            maskRenderer.close();
                        } catch (Throwable th2) {
                            th.addSuppressed(th2);
                        }
                        throw th;
                    }
                } catch (Throwable th3) {
                    th = th3;
                    bitmapIsMutable = bitmap;
                }
            } catch (Throwable th4) {
                th = th4;
                bitmapIsMutable = bitmap;
                this.options.getLogger().log(SentryLevel.ERROR, "Failed to mask screenshot", th);
                if (0 != 0 && !bitmapIsMutable.isRecycled()) {
                    bitmapIsMutable.recycle();
                }
                if (!bitmap.isRecycled()) {
                    bitmap.recycle();
                }
                return null;
            }
        } catch (Throwable th5) {
            th = th5;
            this.options.getLogger().log(SentryLevel.ERROR, "Failed to mask screenshot", th);
            if (0 != 0) {
                bitmapIsMutable.recycle();
            }
            if (!bitmap.isRecycled()) {
                bitmap.recycle();
            }
            return null;
        }
    }

    @Override // io.sentry.EventProcessor
    public Long getOrder() {
        return 10000L;
    }
}
