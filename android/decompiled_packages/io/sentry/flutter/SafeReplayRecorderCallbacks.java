package io.sentry.flutter;

import android.util.Log;
import io.sentry.rrweb.RRWebVideoEvent;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SafeReplayRecorderCallbacks.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\n\b\u0000\u0018\u0000 \u00182\u00020\u0001:\u0001\u0018B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0001¢\u0006\u0004\b\u0003\u0010\u0004J\u0017\u0010\u0007\u001a\u00020\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\b0\nH\u0082\bJ\u0018\u0010\u000b\u001a\u00020\b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\bH\u0016J\b\u0010\u0011\u001a\u00020\bH\u0016J\b\u0010\u0012\u001a\u00020\bH\u0016J\b\u0010\u0013\u001a\u00020\bH\u0016J \u0010\u0014\u001a\u00020\b2\u0006\u0010\u0015\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u0017\u001a\u00020\u0006H\u0016R\u000e\u0010\u0002\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lio/sentry/flutter/SafeReplayRecorderCallbacks;", "Lio/sentry/flutter/ReplayRecorderCallbacks;", "delegate", "<init>", "(Lio/sentry/flutter/ReplayRecorderCallbacks;)V", "generationSnapshot", "", "guard", "", "block", "Lkotlin/Function0;", "replayStarted", "replayId", "", "replayIsBuffering", "", "replayResumed", "replayPaused", "replayStopped", "replayReset", "replayConfigChanged", "width", "height", RRWebVideoEvent.JsonKeys.FRAME_RATE, "Companion", "sentry_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class SafeReplayRecorderCallbacks implements ReplayRecorderCallbacks {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final AtomicInteger generationCounter = new AtomicInteger(0);
    private final ReplayRecorderCallbacks delegate;
    private final int generationSnapshot;

    public SafeReplayRecorderCallbacks(ReplayRecorderCallbacks delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.delegate = delegate;
        this.generationSnapshot = INSTANCE.currentGeneration();
    }

    /* JADX INFO: compiled from: SafeReplayRecorderCallbacks.kt */
    @Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0006\u0010\u0006\u001a\u00020\u0007J\u0006\u0010\b\u001a\u00020\tR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lio/sentry/flutter/SafeReplayRecorderCallbacks$Companion;", "", "<init>", "()V", "generationCounter", "Ljava/util/concurrent/atomic/AtomicInteger;", "bumpGeneration", "", "currentGeneration", "", "sentry_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final void bumpGeneration() {
            SafeReplayRecorderCallbacks.generationCounter.incrementAndGet();
        }

        public final int currentGeneration() {
            return SafeReplayRecorderCallbacks.generationCounter.get();
        }
    }

    private final void guard(Function0<Unit> block) {
        if (this.generationSnapshot != INSTANCE.currentGeneration()) {
            return;
        }
        try {
            block.invoke();
        } catch (Throwable th) {
            Log.w("Sentry", "Replay recorder callback failed", th);
        }
    }

    @Override // io.sentry.flutter.ReplayRecorderCallbacks
    public void replayStarted(String replayId, boolean replayIsBuffering) {
        Intrinsics.checkNotNullParameter(replayId, "replayId");
        if (this.generationSnapshot == INSTANCE.currentGeneration()) {
            try {
                this.delegate.replayStarted(replayId, replayIsBuffering);
            } catch (Throwable th) {
                Log.w("Sentry", "Replay recorder callback failed", th);
            }
        }
    }

    @Override // io.sentry.flutter.ReplayRecorderCallbacks
    public void replayResumed() {
        if (this.generationSnapshot == INSTANCE.currentGeneration()) {
            try {
                this.delegate.replayResumed();
            } catch (Throwable th) {
                Log.w("Sentry", "Replay recorder callback failed", th);
            }
        }
    }

    @Override // io.sentry.flutter.ReplayRecorderCallbacks
    public void replayPaused() {
        if (this.generationSnapshot == INSTANCE.currentGeneration()) {
            try {
                this.delegate.replayPaused();
            } catch (Throwable th) {
                Log.w("Sentry", "Replay recorder callback failed", th);
            }
        }
    }

    @Override // io.sentry.flutter.ReplayRecorderCallbacks
    public void replayStopped() {
        if (this.generationSnapshot == INSTANCE.currentGeneration()) {
            try {
                this.delegate.replayStopped();
            } catch (Throwable th) {
                Log.w("Sentry", "Replay recorder callback failed", th);
            }
        }
    }

    @Override // io.sentry.flutter.ReplayRecorderCallbacks
    public void replayReset() {
        if (this.generationSnapshot == INSTANCE.currentGeneration()) {
            try {
                this.delegate.replayReset();
            } catch (Throwable th) {
                Log.w("Sentry", "Replay recorder callback failed", th);
            }
        }
    }

    @Override // io.sentry.flutter.ReplayRecorderCallbacks
    public void replayConfigChanged(int width, int height, int frameRate) {
        if (this.generationSnapshot == INSTANCE.currentGeneration()) {
            try {
                this.delegate.replayConfigChanged(width, height, frameRate);
            } catch (Throwable th) {
                Log.w("Sentry", "Replay recorder callback failed", th);
            }
        }
    }
}
