package androidx.media3.transformer;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.ColorSpace;
import android.graphics.Matrix;
import android.opengl.GLES20;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.util.DisplayMetrics;
import androidx.browser.customtabs.CustomTabsClient$2$$ExternalSyntheticLambda3;
import androidx.compose.animation.core.MutatorMutex$$ExternalSyntheticBackportWithForwarding0;
import androidx.concurrent.futures.CallbackToFutureAdapter;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.Effect;
import androidx.media3.common.Format;
import androidx.media3.common.GlObjectsProvider;
import androidx.media3.common.GlTextureInfo;
import androidx.media3.common.MediaItem;
import androidx.media3.common.PlaybackException;
import androidx.media3.common.VideoFrameProcessingException;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.ConditionVariable;
import androidx.media3.common.util.GlProgram;
import androidx.media3.common.util.GlUtil;
import androidx.media3.common.util.Util;
import androidx.media3.effect.GlEffect;
import androidx.media3.effect.GlShaderProgram;
import androidx.media3.effect.MatrixTransformation;
import androidx.media3.effect.PassthroughShaderProgram;
import androidx.media3.effect.ScaleAndRotateTransformation;
import androidx.media3.exoplayer.DecoderCounters;
import androidx.media3.exoplayer.DecoderReuseEvaluation;
import androidx.media3.exoplayer.ExoPlaybackException;
import androidx.media3.exoplayer.ExoPlayer;
import androidx.media3.exoplayer.FormatHolder;
import androidx.media3.exoplayer.Renderer;
import androidx.media3.exoplayer.RenderersFactory;
import androidx.media3.exoplayer.SeekParameters;
import androidx.media3.exoplayer.analytics.AnalyticsListener;
import androidx.media3.exoplayer.audio.AudioRendererEventListener;
import androidx.media3.exoplayer.mediacodec.MediaCodecAdapter;
import androidx.media3.exoplayer.mediacodec.MediaCodecSelector;
import androidx.media3.exoplayer.metadata.MetadataOutput;
import androidx.media3.exoplayer.source.DefaultMediaSourceFactory;
import androidx.media3.exoplayer.source.MediaSource;
import androidx.media3.exoplayer.text.TextOutput;
import androidx.media3.exoplayer.video.MediaCodecVideoRenderer;
import androidx.media3.exoplayer.video.VideoRendererEventListener;
import androidx.media3.extractor.DefaultExtractorsFactory;
import com.google.common.collect.ImmutableList;
import com.google.common.util.concurrent.FutureCallback;
import com.google.common.util.concurrent.Futures;
import com.google.common.util.concurrent.ListenableFuture;
import com.google.common.util.concurrent.MoreExecutors;
import com.google.common.util.concurrent.SettableFuture;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.List;
import java.util.Objects;
import java.util.concurrent.Callable;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: classes4.dex */
public final class ExperimentalFrameExtractor {
    private final Configuration configuration;
    private final AtomicBoolean extractedFrameNeedsRendering;
    private final AtomicReference<CallbackToFutureAdapter.Completer<Frame>> frameBeingExtractedCompleterAtomicReference;
    private Frame lastExtractedFrame;
    private ListenableFuture<Frame> lastRequestedFrameFuture;
    private final ExoPlayer player;
    private final Handler playerApplicationThreadHandler;

    public static final class Configuration {
        public final boolean extractHdrFrames;
        public final MediaCodecSelector mediaCodecSelector;
        public final SeekParameters seekParameters;

        public static final class Builder {
            private SeekParameters seekParameters = SeekParameters.DEFAULT;
            private MediaCodecSelector mediaCodecSelector = MediaCodecSelector.PREFER_SOFTWARE;
            private boolean extractHdrFrames = false;

            public Builder setSeekParameters(SeekParameters seekParameters) {
                this.seekParameters = seekParameters;
                return this;
            }

            public Builder setMediaCodecSelector(MediaCodecSelector mediaCodecSelector) {
                this.mediaCodecSelector = mediaCodecSelector;
                return this;
            }

            public Builder setExtractHdrFrames(boolean z) {
                this.extractHdrFrames = z;
                return this;
            }

            public Configuration build() {
                return new Configuration(this.seekParameters, this.mediaCodecSelector, this.extractHdrFrames);
            }
        }

        private Configuration(SeekParameters seekParameters, MediaCodecSelector mediaCodecSelector, boolean z) {
            this.seekParameters = seekParameters;
            this.mediaCodecSelector = mediaCodecSelector;
            this.extractHdrFrames = z;
        }
    }

    public static final class Frame {
        public final Bitmap bitmap;
        public final long presentationTimeMs;

        private Frame(long j, Bitmap bitmap) {
            this.presentationTimeMs = j;
            this.bitmap = bitmap;
        }
    }

    public ExperimentalFrameExtractor(final Context context, final Configuration configuration) {
        this.configuration = configuration;
        ExoPlayer exoPlayerBuild = new ExoPlayer.Builder(context, new RenderersFactory() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda0
            @Override // androidx.media3.exoplayer.RenderersFactory
            public final Renderer[] createRenderers(Handler handler, VideoRendererEventListener videoRendererEventListener, AudioRendererEventListener audioRendererEventListener, TextOutput textOutput, MetadataOutput metadataOutput) {
                return this.f$0.m7638xe81030a2(context, configuration, handler, videoRendererEventListener, audioRendererEventListener, textOutput, metadataOutput);
            }
        }, new DefaultMediaSourceFactory(context, new DefaultExtractorsFactory()).experimentalSetCodecsToParseWithinGopSampleDependencies(3)).setSeekParameters(configuration.seekParameters).build();
        this.player = exoPlayerBuild;
        exoPlayerBuild.addAnalyticsListener(new PlayerListener());
        this.playerApplicationThreadHandler = new Handler(exoPlayerBuild.getApplicationLooper());
        this.extractedFrameNeedsRendering = new AtomicBoolean();
        this.frameBeingExtractedCompleterAtomicReference = new AtomicReference<>(null);
        this.lastRequestedFrameFuture = Futures.immediateCancelledFuture();
    }

    /* JADX INFO: renamed from: lambda$new$0$androidx-media3-transformer-ExperimentalFrameExtractor, reason: not valid java name */
    /* synthetic */ Renderer[] m7638xe81030a2(Context context, Configuration configuration, Handler handler, VideoRendererEventListener videoRendererEventListener, AudioRendererEventListener audioRendererEventListener, TextOutput textOutput, MetadataOutput metadataOutput) {
        return new Renderer[]{new FrameExtractorRenderer(context, configuration.mediaCodecSelector, videoRendererEventListener, !configuration.extractHdrFrames)};
    }

    public void setMediaItem(final MediaItem mediaItem, final List<Effect> list) {
        final ListenableFuture<Frame> listenableFuture = this.lastRequestedFrameFuture;
        this.lastRequestedFrameFuture = CallbackToFutureAdapter.getFuture(new CallbackToFutureAdapter.Resolver() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda1
            @Override // androidx.concurrent.futures.CallbackToFutureAdapter.Resolver
            public final Object attachCompleter(CallbackToFutureAdapter.Completer completer) {
                return this.f$0.m7641x65fb07f1(listenableFuture, list, mediaItem, completer);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$setMediaItem$2$androidx-media3-transformer-ExperimentalFrameExtractor, reason: not valid java name */
    /* synthetic */ Object m7641x65fb07f1(ListenableFuture listenableFuture, final List list, final MediaItem mediaItem, final CallbackToFutureAdapter.Completer completer) throws Exception {
        Runnable runnable = new Runnable() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7640x64c4b512(completer, list, mediaItem);
            }
        };
        Handler handler = this.playerApplicationThreadHandler;
        Objects.requireNonNull(handler);
        listenableFuture.addListener(runnable, new CustomTabsClient$2$$ExternalSyntheticLambda3(handler));
        return "ExperimentalFrameExtractor.setMediaItem";
    }

    /* JADX INFO: renamed from: lambda$setMediaItem$1$androidx-media3-transformer-ExperimentalFrameExtractor, reason: not valid java name */
    /* synthetic */ void m7640x64c4b512(CallbackToFutureAdapter.Completer completer, List list, MediaItem mediaItem) {
        this.frameBeingExtractedCompleterAtomicReference.set(completer);
        this.lastExtractedFrame = null;
        this.player.setVideoEffects(buildVideoEffects(list));
        this.player.setMediaItem(mediaItem);
        this.player.setPlayWhenReady(false);
        this.player.prepare();
    }

    public ListenableFuture<Frame> getFrame(long j) {
        return getFrame(j, this.configuration.seekParameters);
    }

    public ListenableFuture<Frame> getFrame(final long j, final SeekParameters seekParameters) {
        final ListenableFuture<Frame> listenableFuture = this.lastRequestedFrameFuture;
        final ListenableFuture<Frame> future = CallbackToFutureAdapter.getFuture(new CallbackToFutureAdapter.Resolver() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda6
            @Override // androidx.concurrent.futures.CallbackToFutureAdapter.Resolver
            public final Object attachCompleter(CallbackToFutureAdapter.Completer completer) {
                return this.f$0.m7637x498c5dae(listenableFuture, j, seekParameters, completer);
            }
        });
        this.lastRequestedFrameFuture = Futures.whenAllComplete(this.lastRequestedFrameFuture, future).call(new Callable() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda7
            @Override // java.util.concurrent.Callable
            public final Object call() {
                return ExperimentalFrameExtractor.lambda$getFrame$4(future);
            }
        }, MoreExecutors.directExecutor());
        return future;
    }

    /* JADX INFO: renamed from: lambda$getFrame$3$androidx-media3-transformer-ExperimentalFrameExtractor, reason: not valid java name */
    /* synthetic */ Object m7637x498c5dae(ListenableFuture listenableFuture, final long j, final SeekParameters seekParameters, final CallbackToFutureAdapter.Completer completer) throws Exception {
        FutureCallback<Frame> futureCallback = new FutureCallback<Frame>() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor.1
            @Override // com.google.common.util.concurrent.FutureCallback
            public void onSuccess(Frame frame) {
                ExperimentalFrameExtractor.this.lastExtractedFrame = frame;
                ExperimentalFrameExtractor.this.processNext(j, seekParameters, completer);
            }

            @Override // com.google.common.util.concurrent.FutureCallback
            public void onFailure(Throwable th) {
                ExperimentalFrameExtractor.this.processNext(j, seekParameters, completer);
            }
        };
        Handler handler = this.playerApplicationThreadHandler;
        Objects.requireNonNull(handler);
        Futures.addCallback(listenableFuture, futureCallback, new CustomTabsClient$2$$ExternalSyntheticLambda3(handler));
        return "ExperimentalFrameExtractor.getFrame";
    }

    static /* synthetic */ Frame lambda$getFrame$4(ListenableFuture listenableFuture) throws Exception {
        return (Frame) Futures.getDone(listenableFuture);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void processNext(long j, SeekParameters seekParameters, CallbackToFutureAdapter.Completer<Frame> completer) {
        Throwable playerError;
        final AtomicBoolean atomicBoolean = new AtomicBoolean(false);
        completer.addCancellationListener(new Runnable() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                atomicBoolean.set(true);
            }
        }, MoreExecutors.directExecutor());
        if (atomicBoolean.get()) {
            return;
        }
        if (this.player.isReleased()) {
            playerError = new PlaybackException("The player is already released", null, 1004);
        } else {
            playerError = this.player.getPlayerError();
        }
        if (playerError != null) {
            completer.setException(playerError);
            return;
        }
        if (this.player.getCurrentMediaItem() == null) {
            completer.setException(new PlaybackException("Player has no current item. Call setMediaItem before getFrame.", null, PlaybackException.ERROR_CODE_SETUP_REQUIRED));
            return;
        }
        Assertions.checkState(MutatorMutex$$ExternalSyntheticBackportWithForwarding0.m(this.frameBeingExtractedCompleterAtomicReference, null, completer));
        this.extractedFrameNeedsRendering.set(false);
        this.player.setSeekParameters(seekParameters);
        this.player.seekTo(j);
    }

    public void release() {
        if (this.player.getApplicationLooper() == Looper.myLooper()) {
            this.player.release();
            return;
        }
        final ConditionVariable conditionVariable = new ConditionVariable();
        this.playerApplicationThreadHandler.removeCallbacksAndMessages(null);
        this.playerApplicationThreadHandler.post(new Runnable() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda8
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7639x2e3a8ad5(conditionVariable);
            }
        });
        conditionVariable.blockUninterruptible();
    }

    /* JADX INFO: renamed from: lambda$release$6$androidx-media3-transformer-ExperimentalFrameExtractor, reason: not valid java name */
    /* synthetic */ void m7639x2e3a8ad5(ConditionVariable conditionVariable) {
        this.player.release();
        conditionVariable.open();
    }

    ListenableFuture<DecoderCounters> getDecoderCounters() {
        final SettableFuture settableFutureCreate = SettableFuture.create();
        this.playerApplicationThreadHandler.post(new Runnable() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda3
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7636xcd20c0bc(settableFutureCreate);
            }
        });
        return settableFutureCreate;
    }

    /* JADX INFO: renamed from: lambda$getDecoderCounters$7$androidx-media3-transformer-ExperimentalFrameExtractor, reason: not valid java name */
    /* synthetic */ void m7636xcd20c0bc(SettableFuture settableFuture) {
        settableFuture.set(this.player.getVideoDecoderCounters());
    }

    private ImmutableList<Effect> buildVideoEffects(List<Effect> list) {
        ImmutableList.Builder builder = new ImmutableList.Builder();
        builder.addAll((Iterable) list);
        builder.add(new MatrixTransformation() { // from class: androidx.media3.transformer.ExperimentalFrameExtractor$$ExternalSyntheticLambda2
            @Override // androidx.media3.effect.MatrixTransformation
            public final Matrix getMatrix(long j) {
                return ExperimentalFrameExtractor.lambda$buildVideoEffects$8(j);
            }
        });
        builder.add(new FrameReader());
        return builder.build();
    }

    static /* synthetic */ Matrix lambda$buildVideoEffects$8(long j) {
        Matrix matrix = new Matrix();
        matrix.setScale(1.0f, -1.0f);
        return matrix;
    }

    private final class PlayerListener implements AnalyticsListener {
        private PlayerListener() {
        }

        @Override // androidx.media3.exoplayer.analytics.AnalyticsListener
        public void onPlayerError(AnalyticsListener.EventTime eventTime, PlaybackException playbackException) {
            CallbackToFutureAdapter.Completer completer = (CallbackToFutureAdapter.Completer) ExperimentalFrameExtractor.this.frameBeingExtractedCompleterAtomicReference.getAndSet(null);
            if (completer != null) {
                completer.setException(playbackException);
            }
        }

        @Override // androidx.media3.exoplayer.analytics.AnalyticsListener
        public void onPlaybackStateChanged(AnalyticsListener.EventTime eventTime, int i) {
            if (i != 3 || ExperimentalFrameExtractor.this.extractedFrameNeedsRendering.get()) {
                return;
            }
            ((CallbackToFutureAdapter.Completer) Assertions.checkNotNull((CallbackToFutureAdapter.Completer) ExperimentalFrameExtractor.this.frameBeingExtractedCompleterAtomicReference.getAndSet(null))).set((Frame) Assertions.checkNotNull(ExperimentalFrameExtractor.this.lastExtractedFrame));
        }
    }

    private final class FrameReader implements GlEffect {
        private FrameReader() {
        }

        @Override // androidx.media3.effect.GlEffect
        public GlShaderProgram toGlShaderProgram(Context context, boolean z) throws VideoFrameProcessingException {
            return ExperimentalFrameExtractor.this.new FrameReadingGlShaderProgram(context, z);
        }
    }

    private final class FrameReadingGlShaderProgram extends PassthroughShaderProgram {
        private static final int BYTES_PER_PIXEL = 4;
        private ByteBuffer byteBuffer;
        private GlProgram glProgram;
        private GlTextureInfo hlgTextureInfo;
        private final boolean useHdr;
        private final ImmutableList<float[]> visiblePolygon;

        public FrameReadingGlShaderProgram(Context context, boolean z) throws VideoFrameProcessingException {
            ImmutableList<float[]> immutableListOf = ImmutableList.of(new float[]{-1.0f, -1.0f, 0.0f, 1.0f}, new float[]{-1.0f, 1.0f, 0.0f, 1.0f}, new float[]{1.0f, 1.0f, 0.0f, 1.0f}, new float[]{1.0f, -1.0f, 0.0f, 1.0f});
            this.visiblePolygon = immutableListOf;
            this.byteBuffer = ByteBuffer.allocateDirect(0);
            this.useHdr = z;
            if (z) {
                Assertions.checkState(Build.VERSION.SDK_INT >= 34);
                try {
                    GlProgram glProgram = new GlProgram(context, "shaders/vertex_shader_transformation_es3.glsl", "shaders/fragment_shader_oetf_es3.glsl");
                    this.glProgram = glProgram;
                    glProgram.setFloatsUniform("uTexTransformationMatrix", GlUtil.create4x4IdentityMatrix());
                    this.glProgram.setFloatsUniform("uTransformationMatrix", GlUtil.create4x4IdentityMatrix());
                    this.glProgram.setFloatsUniform("uRgbMatrix", GlUtil.create4x4IdentityMatrix());
                    this.glProgram.setIntUniform("uOutputColorTransfer", 7);
                    this.glProgram.setBufferAttribute("aFramePosition", GlUtil.createVertexBuffer(immutableListOf), 4);
                } catch (GlUtil.GlException | IOException e) {
                    throw new VideoFrameProcessingException(e);
                }
            }
        }

        @Override // androidx.media3.effect.PassthroughShaderProgram, androidx.media3.effect.GlShaderProgram
        public void queueInputFrame(GlObjectsProvider glObjectsProvider, GlTextureInfo glTextureInfo, long j) {
            Bitmap bitmapCreateBitmap;
            GlTextureInfo glTextureInfo2;
            ensureConfigured(glObjectsProvider, glTextureInfo.width, glTextureInfo.height);
            if (this.useHdr) {
                if (Build.VERSION.SDK_INT < 34 || (glTextureInfo2 = this.hlgTextureInfo) == null) {
                    onError(ExoPlaybackException.createForUnexpected(new IllegalArgumentException(), -2));
                    return;
                }
                try {
                    GlUtil.focusFramebufferUsingCurrentContext(glTextureInfo2.fboId, this.hlgTextureInfo.width, this.hlgTextureInfo.height);
                    GlUtil.checkGlError();
                    ((GlProgram) Assertions.checkNotNull(this.glProgram)).use();
                    this.glProgram.setSamplerTexIdUniform("uTexSampler", glTextureInfo.texId, 0);
                    this.glProgram.bindAttributesAndUniforms();
                    GLES20.glDrawArrays(6, 0, this.visiblePolygon.size());
                    GlUtil.checkGlError();
                    GLES20.glReadPixels(0, 0, this.hlgTextureInfo.width, this.hlgTextureInfo.height, 6408, 33640, this.byteBuffer);
                    GlUtil.checkGlError();
                    bitmapCreateBitmap = Bitmap.createBitmap((DisplayMetrics) null, this.hlgTextureInfo.width, this.hlgTextureInfo.height, Bitmap.Config.RGBA_1010102, false, ColorSpace.get(ColorSpace.Named.BT2020_HLG));
                } catch (GlUtil.GlException e) {
                    onError(e);
                    return;
                }
            } else {
                try {
                    GlUtil.focusFramebufferUsingCurrentContext(glTextureInfo.fboId, glTextureInfo.width, glTextureInfo.height);
                    GlUtil.checkGlError();
                    GLES20.glReadPixels(0, 0, glTextureInfo.width, glTextureInfo.height, 6408, 5121, this.byteBuffer);
                    GlUtil.checkGlError();
                    bitmapCreateBitmap = Bitmap.createBitmap(glTextureInfo.width, glTextureInfo.height, Bitmap.Config.ARGB_8888);
                } catch (GlUtil.GlException e2) {
                    onError(e2);
                    return;
                }
            }
            bitmapCreateBitmap.copyPixelsFromBuffer(this.byteBuffer);
            ((CallbackToFutureAdapter.Completer) Assertions.checkNotNull((CallbackToFutureAdapter.Completer) ExperimentalFrameExtractor.this.frameBeingExtractedCompleterAtomicReference.getAndSet(null))).set(new Frame(Util.usToMs(j), bitmapCreateBitmap));
            getInputListener().onInputFrameProcessed(glTextureInfo);
        }

        private void ensureConfigured(GlObjectsProvider glObjectsProvider, int i, int i2) {
            int i3 = i * i2 * 4;
            if (this.byteBuffer.capacity() != i3) {
                this.byteBuffer = ByteBuffer.allocateDirect(i3);
            }
            this.byteBuffer.clear();
            if (this.useHdr) {
                GlTextureInfo glTextureInfo = this.hlgTextureInfo;
                if (glTextureInfo != null && glTextureInfo.width == i && this.hlgTextureInfo.height == i2) {
                    return;
                }
                try {
                    GlTextureInfo glTextureInfo2 = this.hlgTextureInfo;
                    if (glTextureInfo2 != null) {
                        glTextureInfo2.release();
                    }
                    this.hlgTextureInfo = glObjectsProvider.createBuffersForTexture(GlUtil.createRgb10A2Texture(i, i2), i, i2);
                } catch (GlUtil.GlException e) {
                    onError(e);
                }
            }
        }
    }

    private final class FrameExtractorRenderer extends MediaCodecVideoRenderer {
        private List<Effect> effectsFromPlayer;
        private boolean frameRenderedSinceLastPositionReset;
        private Effect rotation;
        private final boolean toneMapHdrToSdr;

        public FrameExtractorRenderer(Context context, MediaCodecSelector mediaCodecSelector, VideoRendererEventListener videoRendererEventListener, boolean z) {
            super(new MediaCodecVideoRenderer.Builder(context).setMediaCodecSelector(mediaCodecSelector).setAllowedJoiningTimeMs(0L).setEventHandler(Util.createHandlerForCurrentOrMainLooper()).setEventListener(videoRendererEventListener).setMaxDroppedFramesToNotify(0));
            this.toneMapHdrToSdr = z;
            this.effectsFromPlayer = ImmutableList.of();
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer, androidx.media3.exoplayer.mediacodec.MediaCodecRenderer, androidx.media3.exoplayer.BaseRenderer
        protected void onStreamChanged(Format[] formatArr, long j, long j2, MediaSource.MediaPeriodId mediaPeriodId) throws ExoPlaybackException {
            super.onStreamChanged(formatArr, j, j2, mediaPeriodId);
            this.frameRenderedSinceLastPositionReset = false;
            setRotation(null);
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer
        public void setVideoEffects(List<Effect> list) {
            this.effectsFromPlayer = list;
            setEffectsWithRotation();
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer, androidx.media3.exoplayer.mediacodec.MediaCodecRenderer
        protected boolean maybeInitializeProcessingPipeline(Format format) throws ExoPlaybackException {
            if (ColorInfo.isTransferHdr(format.colorInfo) && this.toneMapHdrToSdr) {
                format = format.buildUpon().setColorInfo(ColorInfo.SDR_BT709_LIMITED).build();
            }
            return super.maybeInitializeProcessingPipeline(format);
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer, androidx.media3.exoplayer.mediacodec.MediaCodecRenderer
        protected DecoderReuseEvaluation onInputFormatChanged(FormatHolder formatHolder) throws ExoPlaybackException {
            if (formatHolder.format != null) {
                Format format = formatHolder.format;
                if (format.rotationDegrees != 0) {
                    setRotation(new ScaleAndRotateTransformation.Builder().setRotationDegrees(360 - format.rotationDegrees).build());
                    formatHolder.format = format.buildUpon().setRotationDegrees(0).build();
                }
            }
            return super.onInputFormatChanged(formatHolder);
        }

        private void setRotation(Effect effect) {
            this.rotation = effect;
            setEffectsWithRotation();
        }

        private void setEffectsWithRotation() {
            ImmutableList.Builder builder = new ImmutableList.Builder();
            Effect effect = this.rotation;
            if (effect != null) {
                builder.add(effect);
            }
            builder.addAll((Iterable) this.effectsFromPlayer);
            super.setVideoEffects(builder.build());
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer, androidx.media3.exoplayer.mediacodec.MediaCodecRenderer, androidx.media3.exoplayer.Renderer
        public boolean isReady() {
            return this.frameRenderedSinceLastPositionReset;
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer, androidx.media3.exoplayer.mediacodec.MediaCodecRenderer, androidx.media3.exoplayer.Renderer
        public void render(long j, long j2) throws ExoPlaybackException {
            if (this.frameRenderedSinceLastPositionReset) {
                return;
            }
            super.render(j, j2);
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer, androidx.media3.exoplayer.mediacodec.MediaCodecRenderer
        protected boolean processOutputBuffer(long j, long j2, MediaCodecAdapter mediaCodecAdapter, ByteBuffer byteBuffer, int i, int i2, int i3, long j3, boolean z, boolean z2, Format format) throws ExoPlaybackException {
            if (this.frameRenderedSinceLastPositionReset) {
                return false;
            }
            return super.processOutputBuffer(j, j2, mediaCodecAdapter, byteBuffer, i, i2, i3, j3, z, z2, format);
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer
        protected void renderOutputBufferV21(MediaCodecAdapter mediaCodecAdapter, int i, long j, long j2) {
            if (this.frameRenderedSinceLastPositionReset) {
                return;
            }
            this.frameRenderedSinceLastPositionReset = true;
            super.renderOutputBufferV21(mediaCodecAdapter, i, j, j2);
        }

        @Override // androidx.media3.exoplayer.video.MediaCodecVideoRenderer, androidx.media3.exoplayer.mediacodec.MediaCodecRenderer, androidx.media3.exoplayer.BaseRenderer
        protected void onPositionReset(long j, boolean z) throws ExoPlaybackException {
            this.frameRenderedSinceLastPositionReset = false;
            ExperimentalFrameExtractor.this.extractedFrameNeedsRendering.set(true);
            super.onPositionReset(j, z);
        }
    }
}
