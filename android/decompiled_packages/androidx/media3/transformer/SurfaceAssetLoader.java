package androidx.media3.transformer;

import android.os.Handler;
import android.os.Looper;
import android.view.Surface;
import androidx.media3.common.C;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.Format;
import androidx.media3.common.MediaItem;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import com.google.common.collect.ImmutableMap;
import java.util.Objects;

/* JADX INFO: loaded from: classes4.dex */
public final class SurfaceAssetLoader implements AssetLoader {
    public static final String MEDIA_ITEM_URI_SCHEME = "transformer_surface_asset";
    private final Callback callback;
    private Format contentFormat;
    private final EditedMediaItem editedMediaItem;
    private final Handler handler;
    private boolean isStarted;
    private boolean isVideoEndOfStreamSignaled;
    private final AssetLoader.Listener listener;
    private int progressState;
    private SampleConsumer sampleConsumer;

    public interface Callback {
        void onSurfaceAssetLoaderCreated(SurfaceAssetLoader surfaceAssetLoader);

        void onSurfaceReady(Surface surface, EditedMediaItem editedMediaItem);
    }

    @Override // androidx.media3.transformer.AssetLoader
    public void release() {
    }

    public static final class Factory implements AssetLoader.Factory {
        private final Callback callback;

        public Factory(Callback callback) {
            this.callback = callback;
        }

        @Override // androidx.media3.transformer.AssetLoader.Factory
        public SurfaceAssetLoader createAssetLoader(EditedMediaItem editedMediaItem, Looper looper, AssetLoader.Listener listener, AssetLoader.CompositionSettings compositionSettings) {
            Assertions.checkState(((String) Assertions.checkNotNull(((MediaItem.LocalConfiguration) Assertions.checkNotNull(editedMediaItem.mediaItem.localConfiguration)).uri.getScheme())).equals(SurfaceAssetLoader.MEDIA_ITEM_URI_SCHEME));
            SurfaceAssetLoader surfaceAssetLoader = new SurfaceAssetLoader(editedMediaItem, looper, listener, this.callback);
            this.callback.onSurfaceAssetLoaderCreated(surfaceAssetLoader);
            return surfaceAssetLoader;
        }
    }

    private SurfaceAssetLoader(EditedMediaItem editedMediaItem, Looper looper, AssetLoader.Listener listener, Callback callback) {
        this.editedMediaItem = editedMediaItem;
        this.listener = listener;
        this.callback = callback;
        this.handler = new Handler(looper);
        this.progressState = 0;
    }

    public void setContentFormat(final Format format) {
        Assertions.checkArgument(Objects.equals(format.sampleMimeType, MimeTypes.VIDEO_RAW));
        Assertions.checkArgument(format.width != -1);
        Assertions.checkArgument(format.height != -1);
        Assertions.checkArgument(((ColorInfo) Assertions.checkNotNull(format.colorInfo)).isDataSpaceValid());
        this.handler.post(new Runnable() { // from class: androidx.media3.transformer.SurfaceAssetLoader$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7652x9fdea11(format);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$setContentFormat$0$androidx-media3-transformer-SurfaceAssetLoader, reason: not valid java name */
    /* synthetic */ void m7652x9fdea11(Format format) {
        this.contentFormat = format;
        try {
            maybeFinishPreparation();
        } catch (RuntimeException e) {
            this.listener.onError(ExportException.createForAssetLoader(e, 1000));
        }
    }

    public EditedMediaItem getEditedMediaItem() {
        return this.editedMediaItem;
    }

    public void signalEndOfInput() {
        this.handler.post(new Runnable() { // from class: androidx.media3.transformer.SurfaceAssetLoader$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7653xab4f631e();
            }
        });
    }

    /* JADX INFO: renamed from: lambda$signalEndOfInput$1$androidx-media3-transformer-SurfaceAssetLoader, reason: not valid java name */
    /* synthetic */ void m7653xab4f631e() {
        SampleConsumer sampleConsumer;
        try {
            if (this.isVideoEndOfStreamSignaled || (sampleConsumer = this.sampleConsumer) == null) {
                return;
            }
            this.isVideoEndOfStreamSignaled = true;
            sampleConsumer.signalEndOfVideoInput();
        } catch (RuntimeException e) {
            this.listener.onError(ExportException.createForAssetLoader(e, 1000));
        }
    }

    @Override // androidx.media3.transformer.AssetLoader
    public void start() {
        this.isStarted = true;
        maybeFinishPreparation();
    }

    @Override // androidx.media3.transformer.AssetLoader
    public int getProgress(ProgressHolder progressHolder) {
        return this.progressState;
    }

    @Override // androidx.media3.transformer.AssetLoader
    public ImmutableMap<Integer, String> getDecoderNames() {
        return ImmutableMap.of();
    }

    private void maybeFinishPreparation() {
        if (!this.isStarted || this.contentFormat == null) {
            return;
        }
        this.listener.onTrackCount(1);
        this.listener.onDurationUs(C.TIME_UNSET);
        this.listener.onTrackAdded(this.contentFormat, 2);
        try {
            SampleConsumer sampleConsumer = (SampleConsumer) Assertions.checkNotNull(this.listener.onOutputFormat(this.contentFormat));
            this.sampleConsumer = sampleConsumer;
            sampleConsumer.setOnInputSurfaceReadyListener(new Runnable() { // from class: androidx.media3.transformer.SurfaceAssetLoader$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7651x73173d61();
                }
            });
        } catch (ExportException e) {
            this.listener.onError(e);
        }
        this.progressState = 3;
    }

    /* JADX INFO: renamed from: lambda$maybeFinishPreparation$2$androidx-media3-transformer-SurfaceAssetLoader, reason: not valid java name */
    /* synthetic */ void m7651x73173d61() {
        this.callback.onSurfaceReady(((SampleConsumer) Assertions.checkNotNull(this.sampleConsumer)).getInputSurface(), this.editedMediaItem);
    }
}
