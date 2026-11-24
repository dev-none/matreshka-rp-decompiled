package androidx.media3.transformer;

import android.content.Context;
import android.graphics.Bitmap;
import android.media.MediaCodec;
import android.media.metrics.LogSessionId;
import android.util.Pair;
import android.view.Surface;
import androidx.media3.common.C;
import androidx.media3.common.ColorInfo;
import androidx.media3.common.DebugViewProvider;
import androidx.media3.common.Effect;
import androidx.media3.common.Format;
import androidx.media3.common.MediaItem;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.OnInputFrameProcessedListener;
import androidx.media3.common.SurfaceInfo;
import androidx.media3.common.VideoCompositorSettings;
import androidx.media3.common.VideoFrameProcessingException;
import androidx.media3.common.VideoFrameProcessor;
import androidx.media3.common.VideoGraph;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.Consumer;
import androidx.media3.common.util.TimestampIterator;
import androidx.media3.decoder.DecoderInputBuffer;
import androidx.media3.effect.MultipleInputVideoGraph;
import androidx.media3.effect.SingleInputVideoGraph;
import com.google.common.collect.ImmutableList;
import com.google.common.util.concurrent.MoreExecutors;
import java.nio.ByteBuffer;
import java.util.List;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicLong;
import org.checkerframework.dataflow.qual.Pure;

/* JADX INFO: loaded from: classes4.dex */
final class VideoSampleExporter extends SampleExporter {
    private final DecoderInputBuffer encoderOutputBuffer;
    private final EncoderWrapper encoderWrapper;
    private volatile long finalFramePresentationTimeUs;
    private boolean hasMuxedTimestampZero;
    private long lastMuxerInputBufferTimestampUs;
    private final VideoGraphWrapper videoGraph;

    public VideoSampleExporter(Context context, Format format, TransformationRequest transformationRequest, VideoCompositorSettings videoCompositorSettings, List<Effect> list, VideoFrameProcessor.Factory factory, Codec.EncoderFactory encoderFactory, MuxerWrapper muxerWrapper, Consumer<ExportException> consumer, FallbackListener fallbackListener, DebugViewProvider debugViewProvider, long j, boolean z, ImmutableList<Integer> immutableList, int i, LogSessionId logSessionId) throws ExportException {
        ColorInfo colorInfoBuild;
        VideoGraph.Factory factory2;
        super(format, muxerWrapper);
        boolean z2 = i < 1;
        this.finalFramePresentationTimeUs = C.TIME_UNSET;
        this.lastMuxerInputBufferTimestampUs = C.TIME_UNSET;
        ColorInfo colorInfo = (ColorInfo) Assertions.checkNotNull(format.colorInfo);
        if (colorInfo.colorTransfer != 2) {
            colorInfoBuild = colorInfo;
        } else if (Objects.equals(format.sampleMimeType, MimeTypes.IMAGE_JPEG_R)) {
            colorInfoBuild = new ColorInfo.Builder().setColorSpace(6).setColorTransfer(7).setColorRange(1).build();
        } else {
            colorInfoBuild = ColorInfo.SDR_BT709_LIMITED;
        }
        EncoderWrapper encoderWrapper = new EncoderWrapper(encoderFactory, format.buildUpon().setColorInfo(colorInfoBuild).build(), immutableList, muxerWrapper.getSupportedSampleMimeTypes(2), transformationRequest, fallbackListener, logSessionId);
        this.encoderWrapper = encoderWrapper;
        this.encoderOutputBuffer = new DecoderInputBuffer(0);
        if (encoderWrapper.getHdrModeAfterFallback() == 2 && ColorInfo.isTransferHdr(colorInfo)) {
            colorInfoBuild = ColorInfo.SDR_BT709_LIMITED;
        }
        ColorInfo colorInfo2 = colorInfoBuild;
        try {
            if (z) {
                factory2 = new MultipleInputVideoGraph.Factory(factory);
            } else {
                factory2 = new SingleInputVideoGraph.Factory(factory);
            }
            VideoGraphWrapper videoGraphWrapper = new VideoGraphWrapper(context, factory2, colorInfo2, debugViewProvider, videoCompositorSettings, list, consumer, j, i, z2);
            this.videoGraph = videoGraphWrapper;
            videoGraphWrapper.initialize();
        } catch (VideoFrameProcessingException e) {
            throw ExportException.createForVideoFrameProcessingException(e);
        }
    }

    @Override // androidx.media3.transformer.SampleExporter
    public GraphInput getInput(EditedMediaItem editedMediaItem, Format format, int i) throws ExportException {
        try {
            return this.videoGraph.createInput(i);
        } catch (VideoFrameProcessingException e) {
            throw ExportException.createForVideoFrameProcessingException(e);
        }
    }

    @Override // androidx.media3.transformer.SampleExporter
    public void release() {
        this.videoGraph.release();
        this.encoderWrapper.release();
    }

    @Override // androidx.media3.transformer.SampleExporter
    protected Format getMuxerInputFormat() throws ExportException {
        return this.encoderWrapper.getOutputFormat();
    }

    @Override // androidx.media3.transformer.SampleExporter
    protected DecoderInputBuffer getMuxerInputBuffer() throws ExportException {
        this.encoderOutputBuffer.data = this.encoderWrapper.getOutputBuffer();
        if (this.encoderOutputBuffer.data == null) {
            return null;
        }
        MediaCodec.BufferInfo bufferInfo = (MediaCodec.BufferInfo) Assertions.checkNotNull(this.encoderWrapper.getOutputBufferInfo());
        if (bufferInfo.presentationTimeUs == 0 && this.videoGraph.hasProducedFrameWithTimestampZero() == this.hasMuxedTimestampZero && this.finalFramePresentationTimeUs != C.TIME_UNSET && bufferInfo.size > 0) {
            bufferInfo.presentationTimeUs = this.finalFramePresentationTimeUs;
        }
        this.encoderOutputBuffer.timeUs = bufferInfo.presentationTimeUs;
        this.encoderOutputBuffer.setFlags(bufferInfo.flags);
        this.lastMuxerInputBufferTimestampUs = bufferInfo.presentationTimeUs;
        return this.encoderOutputBuffer;
    }

    @Override // androidx.media3.transformer.SampleExporter
    protected void releaseMuxerInputBuffer() throws ExportException {
        if (this.lastMuxerInputBufferTimestampUs == 0) {
            this.hasMuxedTimestampZero = true;
        }
        this.encoderWrapper.releaseOutputBuffer(false);
        this.videoGraph.onEncoderBufferReleased();
    }

    @Override // androidx.media3.transformer.SampleExporter
    protected boolean isMuxerInputEnded() {
        return this.encoderWrapper.isEnded() || this.videoGraph.hasEncoderReleasedAllBuffersAfterEndOfStream();
    }

    static final class EncoderWrapper {
        private static final String DEFAULT_OUTPUT_MIME_TYPE = "video/hevc";
        private final ImmutableList<Integer> allowedEncodingRotationDegrees;
        private volatile Codec encoder;
        private final Codec.EncoderFactory encoderFactory;
        private SurfaceInfo encoderSurfaceInfo;
        private final FallbackListener fallbackListener;
        private final int hdrModeAfterFallback;
        private final Format inputFormat;
        private final LogSessionId logSessionId;
        private final List<String> muxerSupportedMimeTypes;
        private volatile int outputRotationDegrees;
        private volatile boolean releaseEncoder;
        private final String requestedOutputMimeType;
        private final TransformationRequest transformationRequest;

        public EncoderWrapper(Codec.EncoderFactory encoderFactory, Format format, ImmutableList<Integer> immutableList, List<String> list, TransformationRequest transformationRequest, FallbackListener fallbackListener, LogSessionId logSessionId) {
            Assertions.checkArgument(format.colorInfo != null);
            this.encoderFactory = encoderFactory;
            this.inputFormat = format;
            this.allowedEncodingRotationDegrees = immutableList;
            this.muxerSupportedMimeTypes = list;
            this.transformationRequest = transformationRequest;
            this.fallbackListener = fallbackListener;
            this.logSessionId = logSessionId;
            Pair<String, Integer> requestedOutputMimeTypeAndHdrModeAfterFallback = getRequestedOutputMimeTypeAndHdrModeAfterFallback(format, transformationRequest);
            this.requestedOutputMimeType = (String) requestedOutputMimeTypeAndHdrModeAfterFallback.first;
            this.hdrModeAfterFallback = ((Integer) requestedOutputMimeTypeAndHdrModeAfterFallback.second).intValue();
        }

        private static Pair<String, Integer> getRequestedOutputMimeTypeAndHdrModeAfterFallback(Format format, TransformationRequest transformationRequest) {
            String str = (String) Assertions.checkNotNull(format.sampleMimeType);
            if (transformationRequest.videoMimeType != null) {
                str = transformationRequest.videoMimeType;
            } else if (MimeTypes.isImage(str)) {
                str = "video/hevc";
            }
            return TransformerUtil.getOutputMimeTypeAndHdrModeAfterFallback(transformationRequest.hdrMode, str, format.colorInfo);
        }

        public int getHdrModeAfterFallback() {
            return this.hdrModeAfterFallback;
        }

        public SurfaceInfo getSurfaceInfo(int i, int i2) throws ExportException {
            if (this.releaseEncoder) {
                return null;
            }
            SurfaceInfo surfaceInfo = this.encoderSurfaceInfo;
            if (surfaceInfo != null) {
                return surfaceInfo;
            }
            if (i < i2) {
                this.outputRotationDegrees = 90;
                i2 = i;
                i = i2;
            }
            if (this.inputFormat.rotationDegrees % 180 == this.outputRotationDegrees % 180) {
                this.outputRotationDegrees = this.inputFormat.rotationDegrees;
            }
            if (!this.allowedEncodingRotationDegrees.contains(Integer.valueOf(this.outputRotationDegrees))) {
                int i3 = (this.outputRotationDegrees + 180) % 360;
                if (this.allowedEncodingRotationDegrees.contains(Integer.valueOf(i3))) {
                    this.outputRotationDegrees = i3;
                } else {
                    this.outputRotationDegrees = this.allowedEncodingRotationDegrees.get(0).intValue();
                    int i4 = i2;
                    i2 = i;
                    i = i4;
                }
            }
            Format formatBuild = new Format.Builder().setWidth(i).setHeight(i2).setRotationDegrees(0).setFrameRate(this.inputFormat.frameRate).setSampleMimeType(this.requestedOutputMimeType).setColorInfo(getSupportedInputColor()).setCodecs(this.inputFormat.codecs).build();
            this.encoder = this.encoderFactory.createForVideoEncoding(formatBuild.buildUpon().setSampleMimeType(SampleExporter.findSupportedMimeTypeForEncoderAndMuxer(formatBuild, this.muxerSupportedMimeTypes)).build(), this.logSessionId);
            Format configurationFormat = this.encoder.getConfigurationFormat();
            this.fallbackListener.onTransformationRequestFinalized(createSupportedTransformationRequest(this.transformationRequest, this.outputRotationDegrees != 0, formatBuild, configurationFormat, this.hdrModeAfterFallback));
            this.encoderSurfaceInfo = new SurfaceInfo(this.encoder.getInputSurface(), configurationFormat.width, configurationFormat.height, this.outputRotationDegrees, true);
            if (this.releaseEncoder) {
                this.encoder.release();
            }
            return this.encoderSurfaceInfo;
        }

        private ColorInfo getSupportedInputColor() {
            if (ColorInfo.isTransferHdr(this.inputFormat.colorInfo) && this.hdrModeAfterFallback != 0) {
                return ColorInfo.SDR_BT709_LIMITED;
            }
            if (ColorInfo.SRGB_BT709_FULL.equals(this.inputFormat.colorInfo)) {
                return ColorInfo.SDR_BT709_LIMITED;
            }
            return (ColorInfo) Assertions.checkNotNull(this.inputFormat.colorInfo);
        }

        @Pure
        private static TransformationRequest createSupportedTransformationRequest(TransformationRequest transformationRequest, boolean z, Format format, Format format2, int i) {
            TransformationRequest.Builder builderBuildUpon = transformationRequest.buildUpon();
            if (transformationRequest.hdrMode != i) {
                builderBuildUpon.setHdrMode(i);
            }
            if (!Objects.equals(format.sampleMimeType, format2.sampleMimeType)) {
                builderBuildUpon.setVideoMimeType(format2.sampleMimeType);
            }
            if (z) {
                if (format.width != format2.width) {
                    builderBuildUpon.setResolution(format2.width);
                }
            } else if (format.height != format2.height) {
                builderBuildUpon.setResolution(format2.height);
            }
            return builderBuildUpon.build();
        }

        public void signalEndOfInputStream() throws ExportException {
            if (this.encoder != null) {
                this.encoder.signalEndOfInputStream();
            }
        }

        public Format getOutputFormat() throws ExportException {
            if (this.encoder == null) {
                return null;
            }
            Format outputFormat = this.encoder.getOutputFormat();
            return (outputFormat == null || this.outputRotationDegrees == 0) ? outputFormat : outputFormat.buildUpon().setRotationDegrees(this.outputRotationDegrees).build();
        }

        public ByteBuffer getOutputBuffer() throws ExportException {
            if (this.encoder != null) {
                return this.encoder.getOutputBuffer();
            }
            return null;
        }

        public MediaCodec.BufferInfo getOutputBufferInfo() throws ExportException {
            if (this.encoder != null) {
                return this.encoder.getOutputBufferInfo();
            }
            return null;
        }

        public void releaseOutputBuffer(boolean z) throws ExportException {
            if (this.encoder != null) {
                this.encoder.releaseOutputBuffer(z);
            }
        }

        public boolean isEnded() {
            return this.encoder != null && this.encoder.isEnded();
        }

        public void release() {
            if (this.encoder != null) {
                this.encoder.release();
            }
            this.releaseEncoder = true;
        }
    }

    private final class VideoGraphWrapper implements VideoGraph.Listener {
        private final Consumer<ExportException> errorConsumer;
        private int framesAvailableToRender;
        private int framesInEncoder;
        private final long initialTimestampOffsetUs;
        private final Object lock = new Object();
        private final int maxFramesInEncoder;
        private final boolean renderFramesAutomatically;
        private final VideoGraph videoGraph;

        public VideoGraphWrapper(Context context, VideoGraph.Factory factory, ColorInfo colorInfo, DebugViewProvider debugViewProvider, VideoCompositorSettings videoCompositorSettings, List<Effect> list, Consumer<ExportException> consumer, long j, int i, boolean z) throws VideoFrameProcessingException {
            this.errorConsumer = consumer;
            this.renderFramesAutomatically = z;
            this.initialTimestampOffsetUs = j;
            this.maxFramesInEncoder = i;
            VideoGraph videoGraphCreate = factory.create(context, colorInfo, debugViewProvider, this, MoreExecutors.directExecutor(), j, z);
            this.videoGraph = videoGraphCreate;
            videoGraphCreate.setCompositionEffects(list);
            videoGraphCreate.setCompositorSettings(videoCompositorSettings);
        }

        public void initialize() throws VideoFrameProcessingException {
            this.videoGraph.initialize();
        }

        public boolean hasProducedFrameWithTimestampZero() {
            return this.videoGraph.hasProducedFrameWithTimestampZero();
        }

        public GraphInput createInput(int i) throws VideoFrameProcessingException {
            this.videoGraph.registerInput(i);
            return new VideoGraphInput(this.videoGraph, i, this.initialTimestampOffsetUs);
        }

        public void release() {
            this.videoGraph.release();
        }

        @Override // androidx.media3.common.VideoGraph.Listener
        public void onOutputSizeChanged(int i, int i2) {
            SurfaceInfo surfaceInfo;
            try {
                surfaceInfo = VideoSampleExporter.this.encoderWrapper.getSurfaceInfo(i, i2);
            } catch (ExportException e) {
                this.errorConsumer.accept(e);
                surfaceInfo = null;
            }
            this.videoGraph.setOutputSurfaceInfo(surfaceInfo);
        }

        @Override // androidx.media3.common.VideoGraph.Listener
        public void onOutputFrameAvailableForRendering(long j, boolean z) {
            if (this.renderFramesAutomatically) {
                return;
            }
            synchronized (this.lock) {
                this.framesAvailableToRender++;
            }
            maybeRenderEarliestOutputFrame();
        }

        @Override // androidx.media3.common.VideoGraph.Listener
        public void onEnded(long j) {
            VideoSampleExporter.this.finalFramePresentationTimeUs = j;
            try {
                VideoSampleExporter.this.encoderWrapper.signalEndOfInputStream();
            } catch (ExportException e) {
                this.errorConsumer.accept(e);
            }
        }

        @Override // androidx.media3.common.VideoGraph.Listener
        public void onError(VideoFrameProcessingException videoFrameProcessingException) {
            this.errorConsumer.accept(ExportException.createForVideoFrameProcessingException(videoFrameProcessingException));
        }

        public boolean hasEncoderReleasedAllBuffersAfterEndOfStream() {
            boolean z = false;
            if (this.renderFramesAutomatically) {
                return false;
            }
            boolean z2 = VideoSampleExporter.this.finalFramePresentationTimeUs != C.TIME_UNSET;
            synchronized (this.lock) {
                if (this.framesInEncoder == 0 && z2) {
                    z = true;
                }
            }
            return z;
        }

        public void onEncoderBufferReleased() {
            if (this.renderFramesAutomatically) {
                return;
            }
            synchronized (this.lock) {
                Assertions.checkState(this.framesInEncoder > 0);
                this.framesInEncoder--;
            }
            maybeRenderEarliestOutputFrame();
        }

        private void maybeRenderEarliestOutputFrame() {
            boolean z;
            int i;
            synchronized (this.lock) {
                int i2 = this.framesAvailableToRender;
                if (i2 <= 0 || (i = this.framesInEncoder) >= this.maxFramesInEncoder) {
                    z = false;
                } else {
                    z = true;
                    this.framesInEncoder = i + 1;
                    this.framesAvailableToRender = i2 - 1;
                }
            }
            if (z) {
                this.videoGraph.renderOutputFrame(-3L);
            }
        }
    }

    private static final class VideoGraphInput implements GraphInput {
        private final long initialTimestampOffsetUs;
        private final int inputIndex;
        private final AtomicLong mediaItemOffsetUs = new AtomicLong();
        private final VideoGraph videoGraph;

        public VideoGraphInput(VideoGraph videoGraph, int i, long j) {
            this.videoGraph = videoGraph;
            this.inputIndex = i;
            this.initialTimestampOffsetUs = j;
        }

        @Override // androidx.media3.transformer.OnMediaItemChangedListener
        public void onMediaItemChanged(EditedMediaItem editedMediaItem, long j, Format format, boolean z) {
            boolean zIsMediaItemForSurfaceAssetLoader = isMediaItemForSurfaceAssetLoader(editedMediaItem);
            long durationAfterEffectsApplied = editedMediaItem.getDurationAfterEffectsApplied(j);
            if (format != null) {
                Format formatApplyDecoderRotation = applyDecoderRotation(format);
                this.videoGraph.registerInputStream(this.inputIndex, zIsMediaItemForSurfaceAssetLoader ? 4 : getInputTypeForMimeType((String) Assertions.checkNotNull(formatApplyDecoderRotation.sampleMimeType)), formatApplyDecoderRotation, editedMediaItem.effects.videoEffects, this.mediaItemOffsetUs.get() + this.initialTimestampOffsetUs);
            }
            this.mediaItemOffsetUs.addAndGet(durationAfterEffectsApplied);
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public int queueInputBitmap(Bitmap bitmap, TimestampIterator timestampIterator) {
            return this.videoGraph.queueInputBitmap(this.inputIndex, bitmap, timestampIterator) ? 1 : 2;
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public void setOnInputFrameProcessedListener(OnInputFrameProcessedListener onInputFrameProcessedListener) {
            this.videoGraph.setOnInputFrameProcessedListener(this.inputIndex, onInputFrameProcessedListener);
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public void setOnInputSurfaceReadyListener(Runnable runnable) {
            this.videoGraph.setOnInputSurfaceReadyListener(this.inputIndex, runnable);
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public int queueInputTexture(int i, long j) {
            return this.videoGraph.queueInputTexture(this.inputIndex, i, j) ? 1 : 2;
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public Surface getInputSurface() {
            return this.videoGraph.getInputSurface(this.inputIndex);
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public int getPendingVideoFrameCount() {
            return this.videoGraph.getPendingInputFrameCount(this.inputIndex);
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public boolean registerVideoFrame(long j) {
            return this.videoGraph.registerInputFrame(this.inputIndex);
        }

        @Override // androidx.media3.transformer.SampleConsumer
        public void signalEndOfVideoInput() {
            this.videoGraph.signalEndOfInput(this.inputIndex);
        }

        private static Format applyDecoderRotation(Format format) {
            return format.rotationDegrees % 180 == 0 ? format : format.buildUpon().setWidth(format.height).setHeight(format.width).setRotationDegrees(0).build();
        }

        private static int getInputTypeForMimeType(String str) {
            if (MimeTypes.isImage(str)) {
                return 2;
            }
            if (str.equals(MimeTypes.VIDEO_RAW)) {
                return 3;
            }
            if (MimeTypes.isVideo(str)) {
                return 1;
            }
            throw new IllegalArgumentException("MIME type not supported " + str);
        }

        private static boolean isMediaItemForSurfaceAssetLoader(EditedMediaItem editedMediaItem) {
            String scheme;
            MediaItem.LocalConfiguration localConfiguration = editedMediaItem.mediaItem.localConfiguration;
            if (localConfiguration == null || (scheme = localConfiguration.uri.getScheme()) == null) {
                return false;
            }
            return scheme.equals(SurfaceAssetLoader.MEDIA_ITEM_URI_SCHEME);
        }
    }
}
