package io.sentry.flutter;

import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;

/* JADX INFO: compiled from: ReplayRecorderCallbacks.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\b\n\u0002\b\u0003\bf\u0018\u00002\u00020\u0001J\u0018\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H&J\b\u0010\b\u001a\u00020\u0003H&J\b\u0010\t\u001a\u00020\u0003H&J\b\u0010\n\u001a\u00020\u0003H&J\b\u0010\u000b\u001a\u00020\u0003H&J \u0010\f\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u000e2\u0006\u0010\u0010\u001a\u00020\u000eH&¨\u0006\u0011À\u0006\u0003"}, d2 = {"Lio/sentry/flutter/ReplayRecorderCallbacks;", "", "replayStarted", "", "replayId", "", "replayIsBuffering", "", "replayResumed", "replayPaused", "replayStopped", "replayReset", "replayConfigChanged", "width", "", "height", RRWebVideoEvent.JsonKeys.FRAME_RATE, "sentry_flutter_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public interface ReplayRecorderCallbacks {
    void replayConfigChanged(int width, int height, int frameRate);

    void replayPaused();

    void replayReset();

    void replayResumed();

    void replayStarted(String replayId, boolean replayIsBuffering);

    void replayStopped();
}
