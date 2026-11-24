package io.flutter.plugins.videoplayer;

import androidx.media3.common.AudioAttributes;
import androidx.media3.common.MediaItem;
import androidx.media3.common.PlaybackParameters;
import androidx.media3.exoplayer.ExoPlayer;
import io.flutter.view.TextureRegistry;

/* JADX INFO: loaded from: classes7.dex */
public abstract class VideoPlayer implements Messages.VideoPlayerInstanceApi {
    private DisposeHandler disposeHandler;
    protected ExoPlayer exoPlayer;
    protected final TextureRegistry.SurfaceProducer surfaceProducer;
    protected final VideoPlayerCallbacks videoPlayerEvents;

    public interface DisposeHandler {
        void onDispose();
    }

    public interface ExoPlayerProvider {
        ExoPlayer get();
    }

    protected abstract ExoPlayerEventListener createExoPlayerEventListener(ExoPlayer exoPlayer, TextureRegistry.SurfaceProducer surfaceProducer);

    public VideoPlayer(VideoPlayerCallbacks videoPlayerCallbacks, MediaItem mediaItem, VideoPlayerOptions videoPlayerOptions, TextureRegistry.SurfaceProducer surfaceProducer, ExoPlayerProvider exoPlayerProvider) {
        this.videoPlayerEvents = videoPlayerCallbacks;
        this.surfaceProducer = surfaceProducer;
        ExoPlayer exoPlayer = exoPlayerProvider.get();
        this.exoPlayer = exoPlayer;
        exoPlayer.setMediaItem(mediaItem);
        this.exoPlayer.prepare();
        ExoPlayer exoPlayer2 = this.exoPlayer;
        exoPlayer2.addListener(createExoPlayerEventListener(exoPlayer2, surfaceProducer));
        setAudioAttributes(this.exoPlayer, videoPlayerOptions.mixWithOthers);
    }

    public void setDisposeHandler(DisposeHandler disposeHandler) {
        this.disposeHandler = disposeHandler;
    }

    private static void setAudioAttributes(ExoPlayer exoPlayer, boolean z) {
        exoPlayer.setAudioAttributes(new AudioAttributes.Builder().setContentType(3).build(), !z);
    }

    @Override // io.flutter.plugins.videoplayer.Messages.VideoPlayerInstanceApi
    public void play() {
        this.exoPlayer.play();
    }

    @Override // io.flutter.plugins.videoplayer.Messages.VideoPlayerInstanceApi
    public void pause() {
        this.exoPlayer.pause();
    }

    @Override // io.flutter.plugins.videoplayer.Messages.VideoPlayerInstanceApi
    public void setLooping(Boolean bool) {
        this.exoPlayer.setRepeatMode(bool.booleanValue() ? 2 : 0);
    }

    @Override // io.flutter.plugins.videoplayer.Messages.VideoPlayerInstanceApi
    public void setVolume(Double d) {
        this.exoPlayer.setVolume((float) Math.max(0.0d, Math.min(1.0d, d.doubleValue())));
    }

    @Override // io.flutter.plugins.videoplayer.Messages.VideoPlayerInstanceApi
    public void setPlaybackSpeed(Double d) {
        this.exoPlayer.setPlaybackParameters(new PlaybackParameters(d.floatValue()));
    }

    @Override // io.flutter.plugins.videoplayer.Messages.VideoPlayerInstanceApi
    public Messages.PlaybackState getPlaybackState() {
        return new Messages.PlaybackState.Builder().setPlayPosition(Long.valueOf(this.exoPlayer.getCurrentPosition())).setBufferPosition(Long.valueOf(this.exoPlayer.getBufferedPosition())).build();
    }

    @Override // io.flutter.plugins.videoplayer.Messages.VideoPlayerInstanceApi
    public void seekTo(Long l) {
        this.exoPlayer.seekTo(l.longValue());
    }

    public ExoPlayer getExoPlayer() {
        return this.exoPlayer;
    }

    public void dispose() {
        DisposeHandler disposeHandler = this.disposeHandler;
        if (disposeHandler != null) {
            disposeHandler.onDispose();
        }
        this.exoPlayer.release();
    }
}
