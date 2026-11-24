package io.sentry.flutter;

import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import androidx.media3.extractor.text.ttml.TtmlNode;
import io.sentry.IScope;
import io.sentry.ScopeCallback;
import io.sentry.Sentry;
import io.sentry.android.replay.Recorder;
import io.sentry.android.replay.ReplayIntegration;
import io.sentry.android.replay.ScreenshotRecorderConfig;
import io.sentry.protocol.SentryId;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* JADX INFO: compiled from: SentryFlutterReplayRecorder.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\b\u0010\b\u001a\u00020\tH\u0016J\b\u0010\n\u001a\u00020\tH\u0016J\u0010\u0010\u000b\u001a\u00020\t2\u0006\u0010\f\u001a\u00020\rH\u0016J\b\u0010\u000e\u001a\u00020\tH\u0016J\b\u0010\u000f\u001a\u00020\tH\u0016J\b\u0010\u0010\u001a\u00020\tH\u0016J\b\u0010\u0011\u001a\u00020\tH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lio/sentry/flutter/SentryFlutterReplayRecorder;", "Lio/sentry/android/replay/Recorder;", "callbacks", "Lio/sentry/flutter/ReplayRecorderCallbacks;", "integration", "Lio/sentry/android/replay/ReplayIntegration;", "<init>", "(Lio/sentry/flutter/ReplayRecorderCallbacks;Lio/sentry/android/replay/ReplayIntegration;)V", TtmlNode.START, "", "resume", "onConfigurationChanged", "config", "Lio/sentry/android/replay/ScreenshotRecorderConfig;", "reset", "pause", "stop", "close", "sentry_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class SentryFlutterReplayRecorder implements Recorder {
    private final ReplayRecorderCallbacks callbacks;
    private final ReplayIntegration integration;

    public SentryFlutterReplayRecorder(ReplayRecorderCallbacks callbacks, ReplayIntegration integration) {
        Intrinsics.checkNotNullParameter(callbacks, "callbacks");
        Intrinsics.checkNotNullParameter(integration, "integration");
        this.callbacks = callbacks;
        this.integration = integration;
    }

    @Override // io.sentry.android.replay.Recorder
    public void start() {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: io.sentry.flutter.SentryFlutterReplayRecorder$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                SentryFlutterReplayRecorder.start$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void start$lambda$0(SentryFlutterReplayRecorder sentryFlutterReplayRecorder) {
        try {
            String string = sentryFlutterReplayRecorder.integration.getReplayId().toString();
            Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
            final Ref.BooleanRef booleanRef = new Ref.BooleanRef();
            Sentry.configureScope(new ScopeCallback() { // from class: io.sentry.flutter.SentryFlutterReplayRecorder$$ExternalSyntheticLambda4
                @Override // io.sentry.ScopeCallback
                public final void run(IScope iScope) {
                    SentryFlutterReplayRecorder.start$lambda$0$0(booleanRef, iScope);
                }
            });
            sentryFlutterReplayRecorder.callbacks.replayStarted(string, booleanRef.element);
        } catch (Exception e) {
            Log.w("Sentry", "Failed to start replay recorder", e);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void start$lambda$0$0(Ref.BooleanRef booleanRef, IScope scope) {
        Intrinsics.checkNotNullParameter(scope, "scope");
        booleanRef.element = Intrinsics.areEqual(scope.getReplayId(), SentryId.EMPTY_ID);
    }

    @Override // io.sentry.android.replay.Recorder
    public void resume() {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: io.sentry.flutter.SentryFlutterReplayRecorder$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                SentryFlutterReplayRecorder.resume$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void resume$lambda$0(SentryFlutterReplayRecorder sentryFlutterReplayRecorder) {
        try {
            sentryFlutterReplayRecorder.callbacks.replayResumed();
        } catch (Exception e) {
            Log.w("Sentry", "Failed to resume replay recorder", e);
        }
    }

    @Override // io.sentry.android.replay.Recorder
    public void onConfigurationChanged(final ScreenshotRecorderConfig config) {
        Intrinsics.checkNotNullParameter(config, "config");
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: io.sentry.flutter.SentryFlutterReplayRecorder$$ExternalSyntheticLambda6
            @Override // java.lang.Runnable
            public final void run() {
                SentryFlutterReplayRecorder.onConfigurationChanged$lambda$0(this.f$0, config);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onConfigurationChanged$lambda$0(SentryFlutterReplayRecorder sentryFlutterReplayRecorder, ScreenshotRecorderConfig screenshotRecorderConfig) {
        try {
            sentryFlutterReplayRecorder.callbacks.replayConfigChanged(screenshotRecorderConfig.getRecordingWidth(), screenshotRecorderConfig.getRecordingHeight(), screenshotRecorderConfig.getFrameRate());
        } catch (Exception e) {
            Log.w("Sentry", "Failed to propagate configuration change to Flutter", e);
        }
    }

    @Override // io.sentry.android.replay.Recorder
    public void reset() {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: io.sentry.flutter.SentryFlutterReplayRecorder$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                SentryFlutterReplayRecorder.reset$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void reset$lambda$0(SentryFlutterReplayRecorder sentryFlutterReplayRecorder) {
        try {
            sentryFlutterReplayRecorder.callbacks.replayReset();
        } catch (Exception e) {
            Log.w("Sentry", "Failed to reset replay recorder", e);
        }
    }

    @Override // io.sentry.android.replay.Recorder
    public void pause() {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: io.sentry.flutter.SentryFlutterReplayRecorder$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                SentryFlutterReplayRecorder.pause$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void pause$lambda$0(SentryFlutterReplayRecorder sentryFlutterReplayRecorder) {
        try {
            sentryFlutterReplayRecorder.callbacks.replayPaused();
        } catch (Exception e) {
            Log.w("Sentry", "Failed to pause replay recorder", e);
        }
    }

    @Override // io.sentry.android.replay.Recorder
    public void stop() {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: io.sentry.flutter.SentryFlutterReplayRecorder$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                SentryFlutterReplayRecorder.stop$lambda$0(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void stop$lambda$0(SentryFlutterReplayRecorder sentryFlutterReplayRecorder) {
        try {
            sentryFlutterReplayRecorder.callbacks.replayStopped();
        } catch (Exception e) {
            Log.w("Sentry", "Failed to stop replay recorder", e);
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public void close() {
        stop();
    }
}
