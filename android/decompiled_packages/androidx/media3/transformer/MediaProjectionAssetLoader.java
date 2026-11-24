package androidx.media3.transformer;

import android.graphics.Rect;
import android.hardware.display.VirtualDisplay;
import android.media.projection.MediaProjection;
import android.os.Handler;
import android.os.Looper;
import android.view.Surface;
import androidx.media3.common.C;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.Format;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import com.google.common.collect.ImmutableMap;

/* JADX INFO: loaded from: classes4.dex */
public final class MediaProjectionAssetLoader implements AssetLoader {
    private static final String VIRTUAL_DISPLAY_NAME = "MediaProjectionAssetLoader";
    private final int densityDpi;
    private final Handler handler;
    private final AssetLoader.Listener listener;
    private final MediaProjection mediaProjection;
    private final Format screenCaptureFormat;
    private final SurfaceAssetLoader surfaceAssetLoader;
    private Format videoFormat;
    private VirtualDisplay virtualDisplay;

    public static final class Factory implements AssetLoader.Factory {
        private final Rect bounds;
        private final int densityDpi;
        private final MediaProjection mediaProjection;

        public Factory(MediaProjection mediaProjection, Rect rect, int i) {
            this.mediaProjection = mediaProjection;
            this.bounds = rect;
            this.densityDpi = i;
        }

        @Override // androidx.media3.transformer.AssetLoader.Factory
        public MediaProjectionAssetLoader createAssetLoader(EditedMediaItem editedMediaItem, Looper looper, AssetLoader.Listener listener, AssetLoader.CompositionSettings compositionSettings) {
            return new MediaProjectionAssetLoader(this.mediaProjection, this.bounds, this.densityDpi, editedMediaItem, looper, listener, compositionSettings);
        }
    }

    private MediaProjectionAssetLoader(MediaProjection mediaProjection, Rect rect, int i, EditedMediaItem editedMediaItem, Looper looper, AssetLoader.Listener listener, AssetLoader.CompositionSettings compositionSettings) {
        this.mediaProjection = mediaProjection;
        Format formatBuild = new Format.Builder().setSampleMimeType(MimeTypes.VIDEO_RAW).setWidth(rect.width()).setHeight(rect.height()).setColorInfo(ColorInfo.SRGB_BT709_FULL).build();
        this.screenCaptureFormat = formatBuild;
        this.densityDpi = i;
        this.listener = listener;
        this.handler = new Handler(Looper.getMainLooper());
        ComponentListener componentListener = new ComponentListener();
        SurfaceAssetLoader surfaceAssetLoaderCreateAssetLoader = new SurfaceAssetLoader.Factory(componentListener).createAssetLoader(editedMediaItem, looper, (AssetLoader.Listener) componentListener, compositionSettings);
        this.surfaceAssetLoader = surfaceAssetLoaderCreateAssetLoader;
        surfaceAssetLoaderCreateAssetLoader.setContentFormat(formatBuild);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void startCapture(Surface surface) {
        this.mediaProjection.registerCallback(new MediaProjection.Callback() { // from class: androidx.media3.transformer.MediaProjectionAssetLoader.1
            @Override // android.media.projection.MediaProjection.Callback
            public void onStop() {
                super.onStop();
                if (MediaProjectionAssetLoader.this.virtualDisplay != null) {
                    MediaProjectionAssetLoader.this.virtualDisplay.setSurface(null);
                    MediaProjectionAssetLoader.this.virtualDisplay.release();
                }
                MediaProjectionAssetLoader.this.surfaceAssetLoader.signalEndOfInput();
            }
        }, new Handler());
        this.virtualDisplay = ((MediaProjection) Assertions.checkNotNull(this.mediaProjection)).createVirtualDisplay(VIRTUAL_DISPLAY_NAME, ((Format) Assertions.checkNotNull(this.screenCaptureFormat)).width, this.screenCaptureFormat.height, this.densityDpi, 16, surface, null, null);
    }

    @Override // androidx.media3.transformer.AssetLoader
    public void start() {
        this.surfaceAssetLoader.start();
    }

    @Override // androidx.media3.transformer.AssetLoader
    public int getProgress(ProgressHolder progressHolder) {
        return this.surfaceAssetLoader.getProgress(progressHolder);
    }

    @Override // androidx.media3.transformer.AssetLoader
    public ImmutableMap<Integer, String> getDecoderNames() {
        return this.surfaceAssetLoader.getDecoderNames();
    }

    @Override // androidx.media3.transformer.AssetLoader
    public void release() {
        this.surfaceAssetLoader.release();
    }

    /* JADX INFO: Access modifiers changed from: private */
    final class ComponentListener implements SurfaceAssetLoader.Callback, AssetLoader.Listener {
        @Override // androidx.media3.transformer.AssetLoader.Listener
        public void onDurationUs(long j) {
        }

        @Override // androidx.media3.transformer.SurfaceAssetLoader.Callback
        public void onSurfaceAssetLoaderCreated(SurfaceAssetLoader surfaceAssetLoader) {
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public void onTrackCount(int i) {
        }

        private ComponentListener() {
        }

        /* JADX INFO: renamed from: lambda$onSurfaceReady$0$androidx-media3-transformer-MediaProjectionAssetLoader$ComponentListener, reason: not valid java name */
        /* synthetic */ void m7647xc217fd71(Surface surface) {
            MediaProjectionAssetLoader.this.startCapture(surface);
        }

        @Override // androidx.media3.transformer.SurfaceAssetLoader.Callback
        public void onSurfaceReady(final Surface surface, EditedMediaItem editedMediaItem) {
            MediaProjectionAssetLoader.this.handler.post(new Runnable() { // from class: androidx.media3.transformer.MediaProjectionAssetLoader$ComponentListener$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7647xc217fd71(surface);
                }
            });
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public boolean onTrackAdded(Format format, int i) {
            if (MimeTypes.isVideo(format.sampleMimeType)) {
                MediaProjectionAssetLoader.this.videoFormat = format;
                MediaProjectionAssetLoader.this.listener.onDurationUs(C.TIME_UNSET);
                MediaProjectionAssetLoader.this.listener.onTrackCount(1);
                MediaProjectionAssetLoader.this.listener.onTrackAdded(format, 2);
            }
            return true;
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public SampleConsumer onOutputFormat(Format format) throws ExportException {
            if (MediaProjectionAssetLoader.this.videoFormat == null) {
                return null;
            }
            return MediaProjectionAssetLoader.this.listener.onOutputFormat(format);
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public void onError(ExportException exportException) {
            MediaProjectionAssetLoader.this.listener.onError(exportException);
        }
    }
}
