package io.sentry.android.replay.screenshot;

import android.graphics.Bitmap;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.view.PixelCopy;
import android.view.View;
import android.view.Window;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.SentryOptions;
import io.sentry.SentryReplayOptions;
import io.sentry.android.replay.ExecutorProvider;
import io.sentry.android.replay.ScreenshotRecorderCallback;
import io.sentry.android.replay.ScreenshotRecorderConfig;
import io.sentry.android.replay.WindowsKt;
import io.sentry.android.replay.util.DebugOverlayDrawable;
import io.sentry.android.replay.util.MainLooperHandler;
import io.sentry.android.replay.util.MaskRenderer;
import io.sentry.android.replay.util.ReplayRunnable;
import io.sentry.android.replay.util.ViewsKt;
import io.sentry.android.replay.viewhierarchy.ViewHierarchyNode;
import java.util.List;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.LazyThreadSafetyMode;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PixelCopyStrategy.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B/\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u000b¢\u0006\u0002\u0010\fJ\u0010\u0010\u001f\u001a\u00020 2\u0006\u0010!\u001a\u00020\"H\u0017J\b\u0010#\u001a\u00020 H\u0016J\b\u0010$\u001a\u00020 H\u0016J\b\u0010\u0012\u001a\u00020%H\u0016J\b\u0010&\u001a\u00020 H\u0016R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0016X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u001b\u0010\u0017\u001a\u00020\u00188BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u001b\u0010\u001c\u001a\u0004\b\u0019\u0010\u001aR\u000e\u0010\u001d\u001a\u00020\u001eX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006'"}, d2 = {"Lio/sentry/android/replay/screenshot/PixelCopyStrategy;", "Lio/sentry/android/replay/screenshot/ScreenshotStrategy;", "executorProvider", "Lio/sentry/android/replay/ExecutorProvider;", "screenshotRecorderCallback", "Lio/sentry/android/replay/ScreenshotRecorderCallback;", "options", "Lio/sentry/SentryOptions;", "config", "Lio/sentry/android/replay/ScreenshotRecorderConfig;", "debugOverlayDrawable", "Lio/sentry/android/replay/util/DebugOverlayDrawable;", "(Lio/sentry/android/replay/ExecutorProvider;Lio/sentry/android/replay/ScreenshotRecorderCallback;Lio/sentry/SentryOptions;Lio/sentry/android/replay/ScreenshotRecorderConfig;Lio/sentry/android/replay/util/DebugOverlayDrawable;)V", "contentChanged", "Ljava/util/concurrent/atomic/AtomicBoolean;", "executor", "Ljava/util/concurrent/ScheduledExecutorService;", "isClosed", "lastCaptureSuccessful", "mainLooperHandler", "Lio/sentry/android/replay/util/MainLooperHandler;", "maskRenderer", "Lio/sentry/android/replay/util/MaskRenderer;", "prescaledMatrix", "Landroid/graphics/Matrix;", "getPrescaledMatrix", "()Landroid/graphics/Matrix;", "prescaledMatrix$delegate", "Lkotlin/Lazy;", "screenshot", "Landroid/graphics/Bitmap;", "capture", "", "root", "Landroid/view/View;", "close", "emitLastScreenshot", "", "onContentChanged", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
public final class PixelCopyStrategy implements ScreenshotStrategy {
    public static final int $stable = 8;
    private final ScreenshotRecorderConfig config;
    private final AtomicBoolean contentChanged;
    private final DebugOverlayDrawable debugOverlayDrawable;
    private final ScheduledExecutorService executor;
    private final AtomicBoolean isClosed;
    private final AtomicBoolean lastCaptureSuccessful;
    private final MainLooperHandler mainLooperHandler;
    private final MaskRenderer maskRenderer;
    private final SentryOptions options;

    /* JADX INFO: renamed from: prescaledMatrix$delegate, reason: from kotlin metadata */
    private final Lazy prescaledMatrix;
    private final Bitmap screenshot;
    private final ScreenshotRecorderCallback screenshotRecorderCallback;

    public PixelCopyStrategy(ExecutorProvider executorProvider, ScreenshotRecorderCallback screenshotRecorderCallback, SentryOptions options, ScreenshotRecorderConfig config, DebugOverlayDrawable debugOverlayDrawable) {
        Intrinsics.checkNotNullParameter(executorProvider, "executorProvider");
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(debugOverlayDrawable, "debugOverlayDrawable");
        this.screenshotRecorderCallback = screenshotRecorderCallback;
        this.options = options;
        this.config = config;
        this.debugOverlayDrawable = debugOverlayDrawable;
        this.executor = executorProvider.getExecutor();
        this.mainLooperHandler = executorProvider.getMainLooperHandler();
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(config.getRecordingWidth(), config.getRecordingHeight(), Bitmap.Config.ARGB_8888);
        Intrinsics.checkNotNullExpressionValue(bitmapCreateBitmap, "createBitmap(...)");
        this.screenshot = bitmapCreateBitmap;
        this.prescaledMatrix = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Matrix>() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$prescaledMatrix$2
            {
                super(0);
            }

            /* JADX WARN: Can't rename method to resolve collision */
            @Override // kotlin.jvm.functions.Function0
            public final Matrix invoke() {
                Matrix matrix = new Matrix();
                PixelCopyStrategy pixelCopyStrategy = this.this$0;
                matrix.preScale(pixelCopyStrategy.config.getScaleFactorX(), pixelCopyStrategy.config.getScaleFactorY());
                return matrix;
            }
        });
        this.lastCaptureSuccessful = new AtomicBoolean(false);
        this.maskRenderer = new MaskRenderer();
        this.contentChanged = new AtomicBoolean(false);
        this.isClosed = new AtomicBoolean(false);
    }

    private final Matrix getPrescaledMatrix() {
        return (Matrix) this.prescaledMatrix.getValue();
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public void capture(final View root) {
        Intrinsics.checkNotNullParameter(root, "root");
        Window phoneWindow = WindowsKt.getPhoneWindow(root);
        if (phoneWindow == null) {
            this.options.getLogger().log(SentryLevel.DEBUG, "Window is invalid, not capturing screenshot", new Object[0]);
            return;
        }
        if (this.isClosed.get()) {
            this.options.getLogger().log(SentryLevel.DEBUG, "PixelCopyStrategy is closed, not capturing screenshot", new Object[0]);
            return;
        }
        try {
            this.contentChanged.set(false);
            PixelCopy.request(phoneWindow, this.screenshot, new PixelCopy.OnPixelCopyFinishedListener() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$$ExternalSyntheticLambda0
                @Override // android.view.PixelCopy.OnPixelCopyFinishedListener
                public final void onPixelCopyFinished(int i) {
                    PixelCopyStrategy.capture$lambda$2(this.f$0, root, i);
                }
            }, this.mainLooperHandler.getHandler());
        } catch (Throwable th) {
            this.options.getLogger().log(SentryLevel.WARNING, "Failed to capture replay recording", th);
            this.lastCaptureSuccessful.set(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void capture$lambda$2(final PixelCopyStrategy pixelCopyStrategy, final View view, int i) {
        if (pixelCopyStrategy.isClosed.get()) {
            pixelCopyStrategy.options.getLogger().log(SentryLevel.DEBUG, "PixelCopyStrategy is closed, ignoring capture result", new Object[0]);
            return;
        }
        if (i != 0) {
            pixelCopyStrategy.options.getLogger().log(SentryLevel.INFO, "Failed to capture replay recording: %d", Integer.valueOf(i));
            pixelCopyStrategy.lastCaptureSuccessful.set(false);
            return;
        }
        if (pixelCopyStrategy.contentChanged.get()) {
            pixelCopyStrategy.options.getLogger().log(SentryLevel.INFO, "Failed to determine view hierarchy, not capturing", new Object[0]);
            pixelCopyStrategy.lastCaptureSuccessful.set(false);
            return;
        }
        ViewHierarchyNode.Companion companion = ViewHierarchyNode.INSTANCE;
        SentryReplayOptions sessionReplay = pixelCopyStrategy.options.getSessionReplay();
        Intrinsics.checkNotNullExpressionValue(sessionReplay, "getSessionReplay(...)");
        final ViewHierarchyNode viewHierarchyNodeFromView = companion.fromView(view, null, 0, sessionReplay);
        SentryReplayOptions sessionReplay2 = pixelCopyStrategy.options.getSessionReplay();
        Intrinsics.checkNotNullExpressionValue(sessionReplay2, "getSessionReplay(...)");
        ILogger logger = pixelCopyStrategy.options.getLogger();
        Intrinsics.checkNotNullExpressionValue(logger, "getLogger(...)");
        ViewsKt.traverse(view, viewHierarchyNodeFromView, sessionReplay2, logger);
        pixelCopyStrategy.executor.submit(new ReplayRunnable("screenshot_recorder.mask", new Runnable() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                PixelCopyStrategy.capture$lambda$2$lambda$1(this.f$0, viewHierarchyNodeFromView, view);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void capture$lambda$2$lambda$1(final PixelCopyStrategy pixelCopyStrategy, ViewHierarchyNode viewHierarchyNode, final View view) {
        if (pixelCopyStrategy.isClosed.get() || pixelCopyStrategy.screenshot.isRecycled()) {
            pixelCopyStrategy.options.getLogger().log(SentryLevel.DEBUG, "PixelCopyStrategy is closed, skipping masking", new Object[0]);
            return;
        }
        final List<Rect> listRenderMasks = pixelCopyStrategy.maskRenderer.renderMasks(pixelCopyStrategy.screenshot, viewHierarchyNode, pixelCopyStrategy.getPrescaledMatrix());
        if (pixelCopyStrategy.options.getReplayController().isDebugMaskingOverlayEnabled()) {
            pixelCopyStrategy.mainLooperHandler.post(new Runnable() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    PixelCopyStrategy.capture$lambda$2$lambda$1$lambda$0(this.f$0, view, listRenderMasks);
                }
            });
        }
        ScreenshotRecorderCallback screenshotRecorderCallback = pixelCopyStrategy.screenshotRecorderCallback;
        if (screenshotRecorderCallback != null) {
            screenshotRecorderCallback.onScreenshotRecorded(pixelCopyStrategy.screenshot);
        }
        pixelCopyStrategy.lastCaptureSuccessful.set(true);
        pixelCopyStrategy.contentChanged.set(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void capture$lambda$2$lambda$1$lambda$0(PixelCopyStrategy pixelCopyStrategy, View view, List list) {
        if (pixelCopyStrategy.debugOverlayDrawable.getCallback() == null) {
            view.getOverlay().add(pixelCopyStrategy.debugOverlayDrawable);
        }
        pixelCopyStrategy.debugOverlayDrawable.updateMasks(list);
        view.postInvalidate();
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public void onContentChanged() {
        this.contentChanged.set(true);
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public boolean lastCaptureSuccessful() {
        return this.lastCaptureSuccessful.get();
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public void emitLastScreenshot() {
        ScreenshotRecorderCallback screenshotRecorderCallback;
        if (!lastCaptureSuccessful() || this.screenshot.isRecycled() || (screenshotRecorderCallback = this.screenshotRecorderCallback) == null) {
            return;
        }
        screenshotRecorderCallback.onScreenshotRecorded(this.screenshot);
    }

    @Override // io.sentry.android.replay.screenshot.ScreenshotStrategy
    public void close() {
        this.isClosed.set(true);
        this.executor.submit(new ReplayRunnable("PixelCopyStrategy.close", new Runnable() { // from class: io.sentry.android.replay.screenshot.PixelCopyStrategy$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                PixelCopyStrategy.close$lambda$4(this.f$0);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void close$lambda$4(PixelCopyStrategy pixelCopyStrategy) {
        if (!pixelCopyStrategy.screenshot.isRecycled()) {
            synchronized (pixelCopyStrategy.screenshot) {
                if (!pixelCopyStrategy.screenshot.isRecycled()) {
                    pixelCopyStrategy.screenshot.recycle();
                }
                Unit unit = Unit.INSTANCE;
            }
        }
        pixelCopyStrategy.maskRenderer.close();
    }
}
