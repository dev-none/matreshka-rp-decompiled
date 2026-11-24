package androidx.media3.transformer;

import android.content.Context;
import android.media.metrics.LogSessionId;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.SparseArray;
import androidx.media3.common.C;
import androidx.media3.common.DebugViewProvider;
import androidx.media3.common.Format;
import androidx.media3.common.MediaItem;
import androidx.media3.common.MediaLibraryInfo;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.VideoFrameProcessor;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.Clock;
import androidx.media3.common.util.ConditionVariable;
import androidx.media3.common.util.Consumer;
import androidx.media3.common.util.HandlerWrapper;
import androidx.media3.common.util.Util;
import androidx.media3.effect.DebugTraceUtil;
import androidx.media3.muxer.MuxerException;
import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

/* JADX INFO: loaded from: classes4.dex */
final class TransformerInternal {
    private static final int DRAIN_EXPORTERS_DELAY_MS = 10;
    private static final int END_REASON_CANCELLED = 1;
    private static final int END_REASON_COMPLETED = 0;
    private static final int END_REASON_ERROR = 2;
    private static final int MSG_DRAIN_EXPORTERS = 3;
    private static final int MSG_END = 4;
    private static final int MSG_REGISTER_SAMPLE_EXPORTER = 2;
    private static final int MSG_START = 1;
    private static final String TAG = "TransformerInternal";
    private final ImmutableList<Integer> allowedEncodingRotationDegrees;
    private final HandlerWrapper applicationHandler;
    private final boolean applyMp4EditListTrim;
    private final AssetLoaderInputTracker assetLoaderInputTracker;
    private final Object assetLoaderLock;
    private RuntimeException cancelException;
    private final ConditionVariable canceledConditionVariable;
    private final Clock clock;
    private final Composition composition;
    private final boolean compositionHasLoopingSequence;
    private final Context context;
    private long currentMaxSequenceDurationUs;
    private final CapturingEncoderFactory encoderFactory;
    private final HandlerWrapper internalHandler;
    private final HandlerThread internalHandlerThread;
    private final ProgressHolder internalProgressHolder;
    private boolean isDrainingExporters;
    private final Listener listener;
    private final int maxFramesInEncoder;
    private final MuxerWrapper muxerWrapper;
    private int nonLoopingSequencesWithNonFinalDuration;
    private final Object progressLock;
    private int progressState;
    private int progressValue;
    private final Object releaseLock;
    private boolean released;
    private final List<SampleExporter> sampleExporters;
    private final List<SequenceAssetLoader> sequenceAssetLoaders;
    private final Object setMaxSequenceDurationUsLock;
    private final long videoSampleTimestampOffsetUs;

    public interface Listener {
        void onCompleted(ImmutableList<ExportResult.ProcessedInput> immutableList, String str, String str2);

        void onError(ImmutableList<ExportResult.ProcessedInput> immutableList, String str, String str2, ExportException exportException);
    }

    static /* synthetic */ int access$1310(TransformerInternal transformerInternal) {
        int i = transformerInternal.nonLoopingSequencesWithNonFinalDuration;
        transformerInternal.nonLoopingSequencesWithNonFinalDuration = i - 1;
        return i;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v0, types: [androidx.media3.transformer.TransformerInternal, java.lang.Object] */
    public TransformerInternal(Context context, Composition composition, TransformationRequest transformationRequest, AssetLoader.Factory factory, AudioMixer.Factory factory2, VideoFrameProcessor.Factory factory3, Codec.EncoderFactory encoderFactory, ImmutableList<Integer> immutableList, int i, MuxerWrapper muxerWrapper, Listener listener, FallbackListener fallbackListener, HandlerWrapper handlerWrapper, DebugViewProvider debugViewProvider, Clock clock, long j, LogSessionId logSessionId, boolean z) {
        Composition composition2 = composition;
        Clock clock2 = clock;
        ?? obj = new Object();
        obj.context = context;
        obj.composition = composition2;
        obj.encoderFactory = new CapturingEncoderFactory(encoderFactory);
        obj.allowedEncodingRotationDegrees = immutableList;
        obj.maxFramesInEncoder = i;
        obj.listener = listener;
        obj.applicationHandler = handlerWrapper;
        obj.clock = clock2;
        obj.videoSampleTimestampOffsetUs = j;
        obj.muxerWrapper = muxerWrapper;
        obj.applyMp4EditListTrim = z;
        Log.i("TransformerInternal", "Init " + Integer.toHexString(System.identityHashCode(obj)) + " [AndroidXMedia3/1.8.0] [" + Util.DEVICE_DEBUG_INFO + "]");
        HandlerThread handlerThread = new HandlerThread("Transformer:Internal");
        obj.internalHandlerThread = handlerThread;
        handlerThread.start();
        obj.sequenceAssetLoaders = new ArrayList();
        Looper looper = handlerThread.getLooper();
        obj.assetLoaderLock = new Object();
        obj.assetLoaderInputTracker = new AssetLoaderInputTracker(composition2);
        int i2 = 0;
        TransformerInternal transformerInternal = obj;
        while (i2 < composition2.sequences.size()) {
            SequenceAssetLoaderListener sequenceAssetLoaderListener = transformerInternal.new SequenceAssetLoaderListener(i2, composition2, transformationRequest, factory2, factory3, fallbackListener, debugViewProvider, logSessionId);
            TransformerInternal transformerInternal2 = transformerInternal;
            int i3 = i2;
            Composition composition3 = composition2;
            EditedMediaItemSequence editedMediaItemSequence = composition3.sequences.get(i3);
            Clock clock3 = clock2;
            Looper looper2 = looper;
            transformerInternal2.sequenceAssetLoaders.add(new SequenceAssetLoader(editedMediaItemSequence, factory, new AssetLoader.CompositionSettings(transformationRequest.hdrMode, composition3.retainHdrFromUltraHdrImage), sequenceAssetLoaderListener, clock3, looper2));
            if (!editedMediaItemSequence.isLooping) {
                transformerInternal2.nonLoopingSequencesWithNonFinalDuration++;
            }
            i2 = i3 + 1;
            clock2 = clock3;
            looper = looper2;
            transformerInternal = transformerInternal2;
            composition2 = composition3;
        }
        final TransformerInternal transformerInternal3 = transformerInternal;
        Clock clock4 = clock2;
        Looper looper3 = looper;
        transformerInternal3.compositionHasLoopingSequence = transformerInternal3.nonLoopingSequencesWithNonFinalDuration != composition2.sequences.size();
        transformerInternal3.setMaxSequenceDurationUsLock = new Object();
        transformerInternal3.canceledConditionVariable = new ConditionVariable();
        transformerInternal3.progressLock = new Object();
        transformerInternal3.internalProgressHolder = new ProgressHolder();
        transformerInternal3.releaseLock = new Object();
        transformerInternal3.sampleExporters = new ArrayList();
        transformerInternal3.internalHandler = clock4.createHandler(looper3, new Handler.Callback() { // from class: androidx.media3.transformer.TransformerInternal$$ExternalSyntheticLambda0
            @Override // android.os.Handler.Callback
            public final boolean handleMessage(Message message) {
                return this.f$0.handleMessage(message);
            }
        });
    }

    public void start() {
        verifyInternalThreadAlive();
        this.internalHandler.sendEmptyMessage(1);
        synchronized (this.progressLock) {
            this.progressState = 1;
            this.progressValue = 0;
        }
        DebugTraceUtil.logEvent("TransformerInternal", DebugTraceUtil.EVENT_START, C.TIME_UNSET, "%s", Util.DEVICE_DEBUG_INFO);
    }

    public int getProgress(ProgressHolder progressHolder) {
        int i;
        synchronized (this.progressLock) {
            if (this.progressState == 2) {
                progressHolder.progress = this.progressValue;
            }
            i = this.progressState;
        }
        return i;
    }

    public void cancel() {
        synchronized (this.releaseLock) {
            if (this.released) {
                return;
            }
            verifyInternalThreadAlive();
            this.internalHandler.obtainMessage(4, 1, 0, null).sendToTarget();
            this.clock.onThreadBlocked();
            this.canceledConditionVariable.blockUninterruptible();
            this.canceledConditionVariable.close();
            RuntimeException runtimeException = this.cancelException;
            if (runtimeException != null) {
                throw runtimeException;
            }
        }
    }

    public void endWithCompletion() {
        verifyInternalThreadAlive();
        this.internalHandler.obtainMessage(4, 0, 0, null).sendToTarget();
    }

    public void endWithException(ExportException exportException) {
        synchronized (this.releaseLock) {
            if (this.released) {
                Log.w("TransformerInternal", "Export error after export ended", exportException);
            } else {
                verifyInternalThreadAlive();
                this.internalHandler.obtainMessage(4, 2, 0, exportException).sendToTarget();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void verifyInternalThreadAlive() {
        Assertions.checkState(this.internalHandlerThread.isAlive(), "Internal thread is dead.");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean handleMessage(Message message) {
        if (this.released && message.what != 4) {
            return true;
        }
        try {
            int i = message.what;
            if (i == 1) {
                startInternal();
            } else if (i == 2) {
                registerSampleExporterInternal((SampleExporter) message.obj);
            } else if (i == 3) {
                drainExportersInternal();
            } else {
                if (i != 4) {
                    return false;
                }
                endInternal(message.arg1, (ExportException) message.obj);
            }
        } catch (ExportException e) {
            endInternal(2, e);
        } catch (RuntimeException e2) {
            endInternal(2, ExportException.createForUnexpected(e2));
        }
        return true;
    }

    private void startInternal() {
        for (int i = 0; i < this.sequenceAssetLoaders.size(); i++) {
            this.sequenceAssetLoaders.get(i).start();
        }
    }

    private void registerSampleExporterInternal(SampleExporter sampleExporter) {
        this.sampleExporters.add(sampleExporter);
        if (this.isDrainingExporters) {
            return;
        }
        this.internalHandler.sendEmptyMessage(3);
        this.isDrainingExporters = true;
    }

    private void drainExportersInternal() throws ExportException {
        for (int i = 0; i < this.sampleExporters.size(); i++) {
            while (this.sampleExporters.get(i).processData()) {
            }
        }
        updateProgressInternal();
        if (this.muxerWrapper.isEnded()) {
            return;
        }
        this.internalHandler.sendEmptyMessageDelayed(3, 10);
    }

    private void endInternal(int i, final ExportException exportException) {
        final ImmutableList.Builder builder = new ImmutableList.Builder();
        for (int i2 = 0; i2 < this.sequenceAssetLoaders.size(); i2++) {
            builder.addAll((Iterable) this.sequenceAssetLoaders.get(i2).getProcessedInputs());
        }
        boolean z = i == 1;
        boolean z2 = this.released;
        ExportException exportExceptionCreateForMuxer = null;
        if (!z2) {
            synchronized (this.releaseLock) {
                this.released = true;
            }
            Log.i("TransformerInternal", "Release " + Integer.toHexString(System.identityHashCode(this)) + " [AndroidXMedia3/1.8.0] [" + Util.DEVICE_DEBUG_INFO + "] [" + MediaLibraryInfo.registeredModules() + "]");
            for (int i3 = 0; i3 < this.sampleExporters.size(); i3++) {
                try {
                    this.sampleExporters.get(i3).release();
                } catch (RuntimeException e) {
                    if (exportExceptionCreateForMuxer == null) {
                        exportExceptionCreateForMuxer = ExportException.createForUnexpected(e);
                        this.cancelException = e;
                    }
                }
            }
            for (int i4 = 0; i4 < this.sequenceAssetLoaders.size(); i4++) {
                try {
                    this.sequenceAssetLoaders.get(i4).release();
                } catch (RuntimeException e2) {
                    if (exportExceptionCreateForMuxer == null) {
                        exportExceptionCreateForMuxer = ExportException.createForUnexpected(e2);
                        this.cancelException = e2;
                    }
                }
            }
            try {
                this.muxerWrapper.finishWritingAndMaybeRelease(getMuxerReleaseReason(i));
            } catch (MuxerException e3) {
                if (exportExceptionCreateForMuxer == null) {
                    exportExceptionCreateForMuxer = ExportException.createForMuxer(e3, 7001);
                }
            } catch (RuntimeException e4) {
                if (exportExceptionCreateForMuxer == null) {
                    ExportException exportExceptionCreateForUnexpected = ExportException.createForUnexpected(e4);
                    this.cancelException = e4;
                    exportExceptionCreateForMuxer = exportExceptionCreateForUnexpected;
                }
            }
            HandlerWrapper handlerWrapper = this.internalHandler;
            final HandlerThread handlerThread = this.internalHandlerThread;
            Objects.requireNonNull(handlerThread);
            handlerWrapper.post(new Runnable() { // from class: androidx.media3.transformer.TransformerInternal$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    handlerThread.quitSafely();
                }
            });
        }
        if (z) {
            this.canceledConditionVariable.open();
            return;
        }
        if (exportException == null) {
            exportException = exportExceptionCreateForMuxer;
        }
        if (exportException == null) {
            if (z2) {
                return;
            }
            Assertions.checkState(this.applicationHandler.post(new Runnable() { // from class: androidx.media3.transformer.TransformerInternal$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7659x4638ca0c(builder);
                }
            }));
        } else if (z2) {
            Log.w("TransformerInternal", "Export error after export ended", exportException);
        } else {
            Assertions.checkState(this.applicationHandler.post(new Runnable() { // from class: androidx.media3.transformer.TransformerInternal$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.m7658x46af300b(builder, exportException);
                }
            }));
        }
    }

    /* JADX INFO: renamed from: lambda$endInternal$0$androidx-media3-transformer-TransformerInternal, reason: not valid java name */
    /* synthetic */ void m7658x46af300b(ImmutableList.Builder builder, ExportException exportException) {
        this.listener.onError(builder.build(), this.encoderFactory.getAudioEncoderName(), this.encoderFactory.getVideoEncoderName(), exportException);
    }

    /* JADX INFO: renamed from: lambda$endInternal$1$androidx-media3-transformer-TransformerInternal, reason: not valid java name */
    /* synthetic */ void m7659x4638ca0c(ImmutableList.Builder builder) {
        this.listener.onCompleted(builder.build(), this.encoderFactory.getAudioEncoderName(), this.encoderFactory.getVideoEncoderName());
    }

    private int getMuxerReleaseReason(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        if (i == 2) {
            return 2;
        }
        throw new IllegalStateException("Unexpected end reason " + i);
    }

    private void updateProgressInternal() {
        if (this.released) {
            return;
        }
        int i = 0;
        int i2 = 0;
        for (int i3 = 0; i3 < this.sequenceAssetLoaders.size(); i3++) {
            if (!this.composition.sequences.get(i3).isLooping) {
                this.internalProgressHolder.progress = 0;
                int progress = this.sequenceAssetLoaders.get(i3).getProgress(this.internalProgressHolder);
                if (progress != 2) {
                    synchronized (this.progressLock) {
                        this.progressState = progress;
                        this.progressValue = 0;
                    }
                    return;
                }
                i += this.internalProgressHolder.progress;
                i2++;
            }
        }
        synchronized (this.progressLock) {
            this.progressState = 2;
            this.progressValue = i / i2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    final class SequenceAssetLoaderListener implements AssetLoader.Listener {
        private final AudioMixer.Factory audioMixerFactory;
        private final Composition composition;
        private long currentSequenceDurationUs;
        private final DebugViewProvider debugViewProvider;
        private final FallbackListener fallbackListener;
        private final EditedMediaItem firstEditedMediaItem;
        private final LogSessionId logSessionId;
        private final int sequenceIndex;
        private final TransformationRequest transformationRequest;
        private final VideoFrameProcessor.Factory videoFrameProcessorFactory;

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public void onDurationUs(long j) {
        }

        public SequenceAssetLoaderListener(int i, Composition composition, TransformationRequest transformationRequest, AudioMixer.Factory factory, VideoFrameProcessor.Factory factory2, FallbackListener fallbackListener, DebugViewProvider debugViewProvider, LogSessionId logSessionId) {
            this.sequenceIndex = i;
            this.firstEditedMediaItem = composition.sequences.get(i).editedMediaItems.get(0);
            this.composition = composition;
            this.transformationRequest = transformationRequest;
            this.audioMixerFactory = factory;
            this.videoFrameProcessorFactory = factory2;
            this.fallbackListener = fallbackListener;
            this.debugViewProvider = debugViewProvider;
            this.logSessionId = logSessionId;
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public void onTrackCount(int i) {
            if (i > 0) {
                synchronized (TransformerInternal.this.assetLoaderLock) {
                    TransformerInternal.this.assetLoaderInputTracker.setTrackCount(this.sequenceIndex, i);
                }
                return;
            }
            onError(ExportException.createForAssetLoader(new IllegalStateException("AssetLoader instances must provide at least 1 track."), 1001));
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public boolean onTrackAdded(Format format, int i) {
            boolean zShouldTranscode;
            int processedTrackType = TransformerUtil.getProcessedTrackType(format.sampleMimeType);
            synchronized (TransformerInternal.this.assetLoaderLock) {
                TransformerInternal.this.assetLoaderInputTracker.registerTrack(this.sequenceIndex, format);
                if (TransformerInternal.this.assetLoaderInputTracker.hasRegisteredAllTracks()) {
                    int outputTrackCount = TransformerInternal.this.assetLoaderInputTracker.getOutputTrackCount();
                    TransformerInternal.this.muxerWrapper.setTrackCount(outputTrackCount);
                    this.fallbackListener.setTrackCount(outputTrackCount);
                }
                zShouldTranscode = shouldTranscode(format, i);
                if (!zShouldTranscode && TransformerUtil.getProcessedTrackType(format.sampleMimeType) == 2) {
                    TransformerUtil.maybeSetMuxerWrapperAdditionalRotationDegrees(TransformerInternal.this.muxerWrapper, this.firstEditedMediaItem.effects.videoEffects, format);
                }
                TransformerInternal.this.assetLoaderInputTracker.setShouldTranscode(processedTrackType, zShouldTranscode);
            }
            return zShouldTranscode;
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public SampleConsumer onOutputFormat(Format format) throws ExportException {
            synchronized (TransformerInternal.this.assetLoaderLock) {
                if (!TransformerInternal.this.assetLoaderInputTracker.hasRegisteredAllTracks()) {
                    return null;
                }
                final int processedTrackType = TransformerUtil.getProcessedTrackType(format.sampleMimeType);
                if (TransformerInternal.this.assetLoaderInputTracker.shouldTranscode(processedTrackType)) {
                    if (TransformerInternal.this.assetLoaderInputTracker.getIndexForPrimarySequence(processedTrackType) == this.sequenceIndex) {
                        createDecodedSampleExporter(format);
                    }
                } else {
                    createEncodedSampleExporter(processedTrackType);
                }
                SampleExporter sampleExporter = TransformerInternal.this.assetLoaderInputTracker.getSampleExporter(processedTrackType);
                if (sampleExporter == null) {
                    return null;
                }
                final GraphInput input = sampleExporter.getInput(this.firstEditedMediaItem, format, this.sequenceIndex);
                ((SequenceAssetLoader) TransformerInternal.this.sequenceAssetLoaders.get(this.sequenceIndex)).addOnMediaItemChangedListener(new OnMediaItemChangedListener() { // from class: androidx.media3.transformer.TransformerInternal$SequenceAssetLoaderListener$$ExternalSyntheticLambda1
                    @Override // androidx.media3.transformer.OnMediaItemChangedListener
                    public final void onMediaItemChanged(EditedMediaItem editedMediaItem, long j, Format format2, boolean z) {
                        this.f$0.m7660xcfd36976(processedTrackType, input, editedMediaItem, j, format2, z);
                    }
                }, processedTrackType);
                TransformerInternal.this.assetLoaderInputTracker.registerGraphInput(processedTrackType);
                if (TransformerInternal.this.assetLoaderInputTracker.hasAssociatedAllTracksWithGraphInput(processedTrackType)) {
                    TransformerInternal.this.verifyInternalThreadAlive();
                    TransformerInternal.this.internalHandler.obtainMessage(2, sampleExporter).sendToTarget();
                }
                return input;
            }
        }

        /* JADX INFO: renamed from: lambda$onOutputFormat$0$androidx-media3-transformer-TransformerInternal$SequenceAssetLoaderListener, reason: not valid java name */
        /* synthetic */ void m7660xcfd36976(int i, GraphInput graphInput, EditedMediaItem editedMediaItem, long j, Format format, boolean z) {
            onMediaItemChanged(i, j, z);
            graphInput.onMediaItemChanged(editedMediaItem, j, format, z);
        }

        @Override // androidx.media3.transformer.AssetLoader.Listener
        public void onError(ExportException exportException) {
            TransformerInternal.this.endWithException(exportException);
        }

        private void createDecodedSampleExporter(Format format) throws ExportException {
            Format formatBuild;
            int processedTrackType = TransformerUtil.getProcessedTrackType(format.sampleMimeType);
            Assertions.checkState(TransformerInternal.this.assetLoaderInputTracker.getSampleExporter(processedTrackType) == null);
            Format assetLoaderInputFormat = TransformerInternal.this.assetLoaderInputTracker.getAssetLoaderInputFormat(this.sequenceIndex, processedTrackType);
            if (MimeTypes.isAudio(format.sampleMimeType)) {
                TransformerInternal.this.assetLoaderInputTracker.registerSampleExporter(1, new AudioSampleExporter(assetLoaderInputFormat, format, this.transformationRequest, this.firstEditedMediaItem, this.composition.effects.audioProcessors, this.audioMixerFactory, TransformerInternal.this.encoderFactory, TransformerInternal.this.muxerWrapper, this.fallbackListener, this.logSessionId));
                return;
            }
            if (MimeTypes.isVideo(format.sampleMimeType)) {
                formatBuild = assetLoaderInputFormat.buildUpon().setColorInfo(TransformerUtil.getDecoderOutputColor(TransformerUtil.getValidColor(assetLoaderInputFormat.colorInfo), this.transformationRequest.hdrMode == 1)).build();
            } else if (MimeTypes.isImage(format.sampleMimeType)) {
                formatBuild = format.buildUpon().setColorInfo(TransformerUtil.getValidColor(format.colorInfo)).build();
            } else {
                throw ExportException.createForUnexpected(new IllegalArgumentException("assetLoaderOutputFormat has to have a audio, video or image mimetype."));
            }
            TransformerInternal.this.assetLoaderInputTracker.registerSampleExporter(2, new VideoSampleExporter(TransformerInternal.this.context, formatBuild, this.transformationRequest, this.composition.videoCompositorSettings, this.composition.effects.videoEffects, this.videoFrameProcessorFactory, TransformerInternal.this.encoderFactory, TransformerInternal.this.muxerWrapper, new Consumer() { // from class: androidx.media3.transformer.TransformerInternal$SequenceAssetLoaderListener$$ExternalSyntheticLambda0
                @Override // androidx.media3.common.util.Consumer
                public final void accept(Object obj) {
                    this.f$0.onError((ExportException) obj);
                }
            }, this.fallbackListener, this.debugViewProvider, TransformerInternal.this.videoSampleTimestampOffsetUs, TransformerInternal.this.assetLoaderInputTracker.hasMultipleConcurrentVideoTracks(), TransformerInternal.this.allowedEncodingRotationDegrees, TransformerInternal.this.maxFramesInEncoder, this.logSessionId));
        }

        private void createEncodedSampleExporter(int i) {
            Assertions.checkState(TransformerInternal.this.assetLoaderInputTracker.getSampleExporter(i) == null);
            Assertions.checkArgument(!this.composition.sequences.get(this.sequenceIndex).hasGaps(), "Gaps can not be transmuxed.");
            TransformerInternal.this.assetLoaderInputTracker.registerSampleExporter(i, new EncodedSampleExporter(TransformerInternal.this.assetLoaderInputTracker.getAssetLoaderInputFormat(this.sequenceIndex, i), this.transformationRequest, TransformerInternal.this.muxerWrapper, this.fallbackListener, TransformerInternal.this.videoSampleTimestampOffsetUs));
        }

        /* JADX WARN: Code duplicated, block: B:27:0x0063  */
        /* JADX WARN: Code duplicated, block: B:28:0x0064  */
        /* JADX WARN: Code duplicated, block: B:32:0x0073 A[Catch: all -> 0x00a8, TryCatch #0 {, blocks: (B:24:0x0056, B:25:0x005b, B:29:0x0065, B:36:0x00a6, B:32:0x0073, B:33:0x0082, B:35:0x008e), top: B:44:0x0056 }] */
        /* JADX WARN: Code duplicated, block: B:35:0x008e A[Catch: all -> 0x00a8, LOOP:0: B:33:0x0082->B:35:0x008e, LOOP_END, TryCatch #0 {, blocks: (B:24:0x0056, B:25:0x005b, B:29:0x0065, B:36:0x00a6, B:32:0x0073, B:33:0x0082, B:35:0x008e), top: B:44:0x0056 }] */
        private void onMediaItemChanged(int i, long j, boolean z) {
            if (TransformerInternal.this.compositionHasLoopingSequence) {
                synchronized (TransformerInternal.this.assetLoaderLock) {
                    if (TransformerInternal.this.assetLoaderInputTracker.sequenceHasMultipleTracks(this.sequenceIndex) && i == 2) {
                        return;
                    }
                    if (this.composition.sequences.get(this.sequenceIndex).isLooping) {
                        return;
                    }
                    boolean z2 = true;
                    Assertions.checkState(j != C.TIME_UNSET, "MediaItem duration required for sequence looping could not be extracted.");
                    this.currentSequenceDurationUs += j;
                    synchronized (TransformerInternal.this.setMaxSequenceDurationUsLock) {
                        if (!z) {
                            if (TransformerInternal.this.nonLoopingSequencesWithNonFinalDuration == 0) {
                                z2 = false;
                            }
                            if (this.currentSequenceDurationUs <= TransformerInternal.this.currentMaxSequenceDurationUs) {
                                TransformerInternal transformerInternal = TransformerInternal.this;
                                transformerInternal.currentMaxSequenceDurationUs = Math.max(this.currentSequenceDurationUs, transformerInternal.currentMaxSequenceDurationUs);
                                for (int i2 = 0; i2 < TransformerInternal.this.sequenceAssetLoaders.size(); i2++) {
                                    ((SequenceAssetLoader) TransformerInternal.this.sequenceAssetLoaders.get(i2)).setMaxSequenceDurationUs(TransformerInternal.this.currentMaxSequenceDurationUs, z2);
                                }
                            } else {
                                TransformerInternal transformerInternal2 = TransformerInternal.this;
                                transformerInternal2.currentMaxSequenceDurationUs = Math.max(this.currentSequenceDurationUs, transformerInternal2.currentMaxSequenceDurationUs);
                                while (i2 < TransformerInternal.this.sequenceAssetLoaders.size()) {
                                    ((SequenceAssetLoader) TransformerInternal.this.sequenceAssetLoaders.get(i2)).setMaxSequenceDurationUs(TransformerInternal.this.currentMaxSequenceDurationUs, z2);
                                }
                            }
                        } else {
                            TransformerInternal.access$1310(TransformerInternal.this);
                            if (TransformerInternal.this.nonLoopingSequencesWithNonFinalDuration == 0) {
                                z2 = false;
                            }
                            if (this.currentSequenceDurationUs <= TransformerInternal.this.currentMaxSequenceDurationUs || z2) {
                                TransformerInternal transformerInternal3 = TransformerInternal.this;
                                transformerInternal3.currentMaxSequenceDurationUs = Math.max(this.currentSequenceDurationUs, transformerInternal3.currentMaxSequenceDurationUs);
                                while (i2 < TransformerInternal.this.sequenceAssetLoaders.size()) {
                                    ((SequenceAssetLoader) TransformerInternal.this.sequenceAssetLoaders.get(i2)).setMaxSequenceDurationUs(TransformerInternal.this.currentMaxSequenceDurationUs, z2);
                                }
                            }
                        }
                        throw th;
                    }
                }
            }
        }

        private boolean shouldTranscode(Format format, int i) {
            boolean zShouldTranscodeAudio;
            boolean z = (i & 2) != 0;
            boolean z2 = (i & 1) != 0;
            Assertions.checkArgument(z || z2);
            int processedTrackType = TransformerUtil.getProcessedTrackType(format.sampleMimeType);
            if (!z2) {
                zShouldTranscodeAudio = true;
            } else if (processedTrackType == 1) {
                zShouldTranscodeAudio = TransformerUtil.shouldTranscodeAudio(format, this.composition, this.sequenceIndex, this.transformationRequest, TransformerInternal.this.encoderFactory, TransformerInternal.this.muxerWrapper);
            } else if (processedTrackType == 2) {
                zShouldTranscodeAudio = TransformerUtil.shouldTranscodeVideo(format, this.composition, this.sequenceIndex, this.transformationRequest, TransformerInternal.this.encoderFactory, TransformerInternal.this.muxerWrapper) || TransformerInternal.this.clippingRequiresTranscode(this.firstEditedMediaItem.mediaItem);
                Assertions.checkState((TransformerInternal.this.applyMp4EditListTrim && zShouldTranscodeAudio) ? false : true, String.format("Transcoding is required for track %s but MP4 edit list trimming is enabled. Disable mp4EditListTrimEnabled or ensure this track does not require transcoding.", format));
            } else {
                zShouldTranscodeAudio = false;
            }
            Assertions.checkState(!zShouldTranscodeAudio || z);
            return zShouldTranscodeAudio;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean clippingRequiresTranscode(MediaItem mediaItem) {
        return (this.applyMp4EditListTrim || mediaItem.clippingConfiguration.startPositionMs <= 0 || mediaItem.clippingConfiguration.startsAtKeyFrame) ? false : true;
    }

    private static final class AssetLoaderInputTracker {
        private final List<SequenceMetadata> sequencesMetadata = new ArrayList();
        private final SparseArray<Integer> trackTypeToNumberOfRegisteredGraphInput;
        private final SparseArray<SampleExporter> trackTypeToSampleExporter;
        private final SparseArray<Boolean> trackTypeToShouldTranscode;

        private static final class SequenceMetadata {
            public final SparseArray<Format> trackTypeToFirstAssetLoaderInputFormat = new SparseArray<>();
            public int requiredTrackCount = -1;
        }

        public AssetLoaderInputTracker(Composition composition) {
            for (int i = 0; i < composition.sequences.size(); i++) {
                this.sequencesMetadata.add(new SequenceMetadata());
            }
            this.trackTypeToSampleExporter = new SparseArray<>();
            this.trackTypeToShouldTranscode = new SparseArray<>();
            this.trackTypeToNumberOfRegisteredGraphInput = new SparseArray<>();
        }

        public Format getAssetLoaderInputFormat(int i, int i2) {
            SparseArray<Format> sparseArray = this.sequencesMetadata.get(i).trackTypeToFirstAssetLoaderInputFormat;
            Assertions.checkState(Util.contains(sparseArray, i2));
            return sparseArray.get(i2);
        }

        public boolean sequenceHasMultipleTracks(int i) {
            return this.sequencesMetadata.get(i).trackTypeToFirstAssetLoaderInputFormat.size() > 1;
        }

        public void setTrackCount(int i, int i2) {
            this.sequencesMetadata.get(i).requiredTrackCount = i2;
        }

        public boolean hasAllTrackCounts() {
            for (int i = 0; i < this.sequencesMetadata.size(); i++) {
                if (this.sequencesMetadata.get(i).requiredTrackCount == -1) {
                    return false;
                }
            }
            return true;
        }

        public void registerTrack(int i, Format format) {
            int processedTrackType = TransformerUtil.getProcessedTrackType(format.sampleMimeType);
            SparseArray<Format> sparseArray = this.sequencesMetadata.get(i).trackTypeToFirstAssetLoaderInputFormat;
            Assertions.checkState(!Util.contains(sparseArray, processedTrackType));
            sparseArray.put(processedTrackType, format);
        }

        public int getIndexForPrimarySequence(int i) {
            Assertions.checkState(hasRegisteredAllTracks(), "Primary track can only be queried after all tracks are added.");
            for (int i2 = 0; i2 < this.sequencesMetadata.size(); i2++) {
                if (Util.contains(this.sequencesMetadata.get(i2).trackTypeToFirstAssetLoaderInputFormat, i)) {
                    return i2;
                }
            }
            return -1;
        }

        public boolean hasRegisteredAllTracks() {
            if (!hasAllTrackCounts()) {
                return false;
            }
            for (int i = 0; i < this.sequencesMetadata.size(); i++) {
                SequenceMetadata sequenceMetadata = this.sequencesMetadata.get(i);
                if (sequenceMetadata.requiredTrackCount != sequenceMetadata.trackTypeToFirstAssetLoaderInputFormat.size()) {
                    return false;
                }
            }
            return true;
        }

        public void registerGraphInput(int i) {
            this.trackTypeToNumberOfRegisteredGraphInput.put(i, Integer.valueOf(Util.contains(this.trackTypeToNumberOfRegisteredGraphInput, i) ? 1 + this.trackTypeToNumberOfRegisteredGraphInput.get(i).intValue() : 1));
        }

        public boolean hasAssociatedAllTracksWithGraphInput(int i) {
            int i2 = 0;
            for (int i3 = 0; i3 < this.sequencesMetadata.size(); i3++) {
                if (Util.contains(this.sequencesMetadata.get(i3).trackTypeToFirstAssetLoaderInputFormat, i)) {
                    i2++;
                }
            }
            return this.trackTypeToNumberOfRegisteredGraphInput.get(i).intValue() == i2;
        }

        public int getOutputTrackCount() {
            int i = 0;
            int i2 = 0;
            for (int i3 = 0; i3 < this.sequencesMetadata.size(); i3++) {
                SparseArray<Format> sparseArray = this.sequencesMetadata.get(i3).trackTypeToFirstAssetLoaderInputFormat;
                if (Util.contains(sparseArray, 1)) {
                    i = 1;
                }
                if (Util.contains(sparseArray, 2)) {
                    i2 = 1;
                }
            }
            return i + i2;
        }

        public boolean hasMultipleConcurrentVideoTracks() {
            if (this.sequencesMetadata.size() < 2) {
                return false;
            }
            int i = 0;
            for (int i2 = 0; i2 < this.sequencesMetadata.size(); i2++) {
                if (Util.contains(this.sequencesMetadata.get(i2).trackTypeToFirstAssetLoaderInputFormat, 2)) {
                    i++;
                }
            }
            return i > 1;
        }

        public void registerSampleExporter(int i, SampleExporter sampleExporter) {
            Assertions.checkState(!Util.contains(this.trackTypeToSampleExporter, i), "Exactly one SampleExporter can be added for each track type.");
            this.trackTypeToSampleExporter.put(i, sampleExporter);
        }

        public void setShouldTranscode(int i, boolean z) {
            if (Util.contains(this.trackTypeToShouldTranscode, i)) {
                Assertions.checkState(z == this.trackTypeToShouldTranscode.get(i).booleanValue());
            } else {
                this.trackTypeToShouldTranscode.put(i, Boolean.valueOf(z));
            }
        }

        public boolean shouldTranscode(int i) {
            Assertions.checkState(Util.contains(this.trackTypeToShouldTranscode, i));
            return this.trackTypeToShouldTranscode.get(i).booleanValue();
        }

        public SampleExporter getSampleExporter(int i) {
            return this.trackTypeToSampleExporter.get(i);
        }
    }
}
