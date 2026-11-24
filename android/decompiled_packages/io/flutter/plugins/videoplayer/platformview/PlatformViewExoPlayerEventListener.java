package io.flutter.plugins.videoplayer.platformview;

import androidx.media3.common.Format;
import androidx.media3.exoplayer.ExoPlayer;
import io.flutter.plugins.videoplayer.ExoPlayerEventListener;
import io.flutter.plugins.videoplayer.VideoPlayerCallbacks;
import java.util.Objects;

/* JADX INFO: loaded from: classes7.dex */
public final class PlatformViewExoPlayerEventListener extends ExoPlayerEventListener {
    public PlatformViewExoPlayerEventListener(ExoPlayer exoPlayer, VideoPlayerCallbacks videoPlayerCallbacks) {
        super(exoPlayer, videoPlayerCallbacks);
    }

    @Override // io.flutter.plugins.videoplayer.ExoPlayerEventListener
    protected void sendInitialized() {
        int i;
        int i2;
        Format videoFormat = this.exoPlayer.getVideoFormat();
        ExoPlayerEventListener.RotationDegrees rotationDegreesFromDegrees = ExoPlayerEventListener.RotationDegrees.fromDegrees(((Format) Objects.requireNonNull(videoFormat)).rotationDegrees);
        float f = videoFormat.pixelWidthHeightRatio;
        int iRound = videoFormat.width;
        int i3 = videoFormat.height;
        if (f > 0.0f && f != 1.0f && iRound != 0) {
            iRound = Math.round(iRound * f);
        }
        if (rotationDegreesFromDegrees == ExoPlayerEventListener.RotationDegrees.ROTATE_90 || rotationDegreesFromDegrees == ExoPlayerEventListener.RotationDegrees.ROTATE_270) {
            rotationDegreesFromDegrees = ExoPlayerEventListener.RotationDegrees.fromDegrees(0);
            i = i3;
            i2 = iRound;
        } else {
            i2 = i3;
            i = iRound;
        }
        this.events.onInitialized(i, i2, this.exoPlayer.getDuration(), rotationDegreesFromDegrees.getDegrees());
    }
}
