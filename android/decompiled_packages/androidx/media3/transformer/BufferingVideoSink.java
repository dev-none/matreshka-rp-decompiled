package androidx.media3.transformer;

import android.content.Context;
import android.graphics.Bitmap;
import android.view.Surface;
import androidx.media3.common.Effect;
import androidx.media3.common.Format;
import androidx.media3.common.util.Size;
import androidx.media3.common.util.TimestampIterator;
import androidx.media3.exoplayer.video.PlaceholderSurface;
import androidx.media3.exoplayer.video.VideoFrameMetadataListener;
import androidx.media3.exoplayer.video.VideoSink;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes4.dex */
final class BufferingVideoSink implements VideoSink {
    private final Context context;
    private boolean isInitialized;
    private final List<VideoSinkOperation> pendingOperations = new ArrayList();
    private PlaceholderSurface placeholderSurface;
    private VideoSink videoSink;

    /* JADX INFO: Access modifiers changed from: private */
    interface VideoSinkOperation {
        void execute(VideoSink videoSink);
    }

    public BufferingVideoSink(Context context) {
        this.context = context;
    }

    public void setVideoSink(VideoSink videoSink) {
        this.videoSink = videoSink;
        if (videoSink == null) {
            return;
        }
        for (int i = 0; i < this.pendingOperations.size(); i++) {
            this.pendingOperations.get(i).execute(videoSink);
        }
        this.pendingOperations.clear();
    }

    public VideoSink getVideoSink() {
        return this.videoSink;
    }

    public void clearPendingOperations() {
        this.pendingOperations.clear();
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void startRendering() {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda13
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.startRendering();
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void stopRendering() {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda5
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.stopRendering();
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void setListener(final VideoSink.Listener listener, final Executor executor) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda12
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.setListener(listener, executor);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public boolean initialize(Format format) throws VideoSink.VideoSinkException {
        VideoSink videoSink = this.videoSink;
        boolean z = videoSink == null || videoSink.initialize(format);
        this.isInitialized = z;
        return z;
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public boolean isInitialized() {
        if (this.isInitialized) {
            return true;
        }
        VideoSink videoSink = this.videoSink;
        return videoSink != null && videoSink.isInitialized();
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void redraw() {
        throw new UnsupportedOperationException();
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void flush(boolean z) {
        VideoSink videoSink = this.videoSink;
        if (videoSink != null) {
            videoSink.flush(z);
        }
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public boolean isReady(boolean z) {
        VideoSink videoSink = this.videoSink;
        return videoSink == null || videoSink.isReady(z);
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void signalEndOfCurrentInputStream() {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda1
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.signalEndOfCurrentInputStream();
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void signalEndOfInput() {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda8
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.signalEndOfInput();
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public boolean isEnded() {
        VideoSink videoSink = this.videoSink;
        return videoSink != null && videoSink.isEnded();
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public Surface getInputSurface() {
        VideoSink videoSink = this.videoSink;
        return videoSink == null ? getPlaceholderSurface() : videoSink.getInputSurface();
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void setVideoFrameMetadataListener(final VideoFrameMetadataListener videoFrameMetadataListener) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda11
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.setVideoFrameMetadataListener(videoFrameMetadataListener);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void setPlaybackSpeed(final float f) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda6
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.setPlaybackSpeed(f);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void setVideoEffects(final List<Effect> list) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda9
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.setVideoEffects(list);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void setBufferTimestampAdjustmentUs(final long j) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda0
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.setBufferTimestampAdjustmentUs(j);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void setOutputSurfaceInfo(final Surface surface, final Size size) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda3
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.setOutputSurfaceInfo(surface, size);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void clearOutputSurfaceInfo() {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda2
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.clearOutputSurfaceInfo();
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void setChangeFrameRateStrategy(final int i) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda15
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.setChangeFrameRateStrategy(i);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void onInputStreamChanged(final int i, final Format format, final long j, final int i2, final List<Effect> list) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda7
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.onInputStreamChanged(i, format, j, i2, list);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void allowReleaseFirstFrameBeforeStarted() {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda10
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.allowReleaseFirstFrameBeforeStarted();
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public boolean handleInputFrame(long j, VideoSink.VideoFrameHandler videoFrameHandler) {
        VideoSink videoSink = this.videoSink;
        return videoSink != null && videoSink.handleInputFrame(j, videoFrameHandler);
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public boolean handleInputBitmap(Bitmap bitmap, TimestampIterator timestampIterator) {
        VideoSink videoSink = this.videoSink;
        return videoSink != null && videoSink.handleInputBitmap(bitmap, timestampIterator);
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void render(long j, long j2) throws VideoSink.VideoSinkException {
        VideoSink videoSink = this.videoSink;
        if (videoSink != null) {
            videoSink.render(j, j2);
        }
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void join(final boolean z) {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda4
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.join(z);
            }
        });
    }

    @Override // androidx.media3.exoplayer.video.VideoSink
    public void release() {
        executeOrDelay(new VideoSinkOperation() { // from class: androidx.media3.transformer.BufferingVideoSink$$ExternalSyntheticLambda14
            @Override // androidx.media3.transformer.BufferingVideoSink.VideoSinkOperation
            public final void execute(VideoSink videoSink) {
                videoSink.release();
            }
        });
        PlaceholderSurface placeholderSurface = this.placeholderSurface;
        if (placeholderSurface != null) {
            placeholderSurface.release();
        }
    }

    private void executeOrDelay(VideoSinkOperation videoSinkOperation) {
        VideoSink videoSink = this.videoSink;
        if (videoSink != null) {
            videoSinkOperation.execute(videoSink);
        } else {
            this.pendingOperations.add(videoSinkOperation);
        }
    }

    private PlaceholderSurface getPlaceholderSurface() {
        if (this.placeholderSurface == null) {
            this.placeholderSurface = PlaceholderSurface.newInstance(this.context, false);
        }
        return this.placeholderSurface;
    }
}
