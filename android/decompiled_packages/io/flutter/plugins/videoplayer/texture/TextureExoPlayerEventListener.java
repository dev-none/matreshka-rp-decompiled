package io.flutter.plugins.videoplayer.texture;

import androidx.media3.common.Format;
import androidx.media3.common.VideoSize;
import androidx.media3.exoplayer.ExoPlayer;
import io.flutter.plugins.videoplayer.ExoPlayerEventListener;
import io.flutter.plugins.videoplayer.VideoPlayerCallbacks;
import java.util.Objects;

/* JADX INFO: loaded from: classes7.dex */
public final class TextureExoPlayerEventListener extends ExoPlayerEventListener {
    private boolean surfaceProducerHandlesCropAndRotation;

    public TextureExoPlayerEventListener(ExoPlayer exoPlayer, VideoPlayerCallbacks videoPlayerCallbacks, boolean z) {
        super(exoPlayer, videoPlayerCallbacks);
        this.surfaceProducerHandlesCropAndRotation = z;
    }

    @Override // io.flutter.plugins.videoplayer.ExoPlayerEventListener
    protected void sendInitialized() {
        VideoSize videoSize = this.exoPlayer.getVideoSize();
        ExoPlayerEventListener.RotationDegrees rotationDegreesFromDegrees = ExoPlayerEventListener.RotationDegrees.ROTATE_0;
        int iRound = videoSize.width;
        int i = videoSize.height;
        float f = videoSize.pixelWidthHeightRatio;
        if (f > 0.0f && f != 1.0f && iRound != 0) {
            iRound = Math.round(iRound * f);
        }
        int i2 = iRound;
        if (i2 != 0 && i != 0) {
            if (this.surfaceProducerHandlesCropAndRotation) {
                rotationDegreesFromDegrees = ExoPlayerEventListener.RotationDegrees.ROTATE_0;
            } else {
                try {
                    rotationDegreesFromDegrees = ExoPlayerEventListener.RotationDegrees.fromDegrees(getRotationCorrectionFromFormat(this.exoPlayer));
                } catch (IllegalArgumentException unused) {
                    rotationDegreesFromDegrees = ExoPlayerEventListener.RotationDegrees.ROTATE_0;
                }
            }
        }
        this.events.onInitialized(i2, i, this.exoPlayer.getDuration(), rotationDegreesFromDegrees.getDegrees());
    }

    private ExoPlayerEventListener.RotationDegrees getRotationCorrectionFromUnappliedRotation(ExoPlayerEventListener.RotationDegrees rotationDegrees) {
        return rotationDegrees == ExoPlayerEventListener.RotationDegrees.ROTATE_180 ? rotationDegrees : ExoPlayerEventListener.RotationDegrees.ROTATE_0;
    }

    private int getRotationCorrectionFromFormat(ExoPlayer exoPlayer) {
        return ((Format) Objects.requireNonNull(exoPlayer.getVideoFormat())).rotationDegrees;
    }
}
