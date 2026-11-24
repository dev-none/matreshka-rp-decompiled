package androidx.media3.transformer;

import android.content.Context;
import android.os.HandlerThread;
import android.os.Looper;
import android.util.SparseBooleanArray;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import androidx.collection.SieveCacheKt;
import androidx.media3.common.C;
import androidx.media3.common.Effect;
import androidx.media3.common.GlObjectsProvider;
import androidx.media3.common.MediaItem;
import androidx.media3.common.PlaybackException;
import androidx.media3.common.Player;
import androidx.media3.common.SimpleBasePlayer;
import androidx.media3.common.VideoFrameProcessingException;
import androidx.media3.common.VideoGraph;
import androidx.media3.common.VideoSize;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.Clock;
import androidx.media3.common.util.HandlerWrapper;
import androidx.media3.common.util.Log;
import androidx.media3.common.util.Size;
import androidx.media3.common.util.Util;
import androidx.media3.effect.DefaultVideoFrameProcessor;
import androidx.media3.effect.SingleInputVideoGraph;
import androidx.media3.effect.TimestampAdjustment;
import androidx.media3.exoplayer.ExoPlayer;
import androidx.media3.exoplayer.analytics.DefaultAnalyticsCollector;
import androidx.media3.exoplayer.audio.AudioSink;
import androidx.media3.exoplayer.audio.DefaultAudioSink;
import androidx.media3.exoplayer.image.BitmapFactoryImageDecoder;
import androidx.media3.exoplayer.image.ImageDecoder;
import androidx.media3.exoplayer.source.ClippingMediaSource;
import androidx.media3.exoplayer.source.ConcatenatingMediaSource2;
import androidx.media3.exoplayer.source.DefaultMediaSourceFactory;
import androidx.media3.exoplayer.source.MediaSource;
import androidx.media3.exoplayer.source.MergingMediaSource;
import androidx.media3.exoplayer.source.SilenceMediaSource;
import androidx.media3.exoplayer.util.EventLogger;
import androidx.media3.exoplayer.video.PlaybackVideoGraphWrapper;
import androidx.media3.exoplayer.video.VideoFrameMetadataListener;
import androidx.media3.exoplayer.video.VideoFrameReleaseControl;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.UnmodifiableIterator;
import com.google.common.util.concurrent.Futures;
import com.google.common.util.concurrent.ListenableFuture;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

/* JADX INFO: loaded from: classes4.dex */
public final class CompositionPlayer extends SimpleBasePlayer implements CompositionPlayerInternal.Listener, PlaybackVideoGraphWrapper.Listener, SurfaceHolder.Callback {
    private static final Player.Commands AVAILABLE_COMMANDS = new Player.Commands.Builder().addAll(1, 2, 3, 5, 8, 4, 11, 12, 16, 17, 15, 27, 22, 24, 32).build();
    private static final int[] SUPPORTED_LISTENER_EVENTS = {4, 5, 10, 11, 1};
    private static final String TAG = "CompositionPlayer";
    private final HandlerWrapper applicationHandler;
    private SimpleBasePlayer.LivePositionSupplier bufferedPositionSupplier;
    private final Clock clock;
    private Composition composition;
    private long compositionDurationUs;
    private final HandlerWrapper compositionInternalListenerHandler;
    private CompositionPlayerInternal compositionPlayerInternal;
    private boolean compositionPlayerInternalPrepared;
    private final Context context;
    private Surface displaySurface;
    private final boolean enableReplayableCache;
    private final AudioSink finalAudioSink;
    private final ImageDecoder.Factory imageDecoderFactory;
    private final MediaSource.Factory mediaSourceFactory;
    private VideoFrameMetadataListener pendingVideoFrameMetadatListener;
    private boolean playWhenReady;
    private int playWhenReadyChangeReason;
    private PlaybackAudioGraphWrapper playbackAudioGraphWrapper;
    private PlaybackException playbackException;
    private int playbackState;
    private int playbackSuppressionReason;
    private HandlerThread playbackThread;
    private HandlerWrapper playbackThreadHandler;
    private PlaybackVideoGraphWrapper playbackVideoGraphWrapper;
    private final List<SequencePlayerHolder> playerHolders;
    private ImmutableList<SimpleBasePlayer.MediaItemData> playlist;
    private SimpleBasePlayer.LivePositionSupplier positionSupplier;
    private boolean renderedFirstFrame;
    private int repeatMode;
    private boolean repeatingCompositionSeekInProgress;
    private boolean scrubbingModeEnabled;
    private SurfaceHolder surfaceHolder;
    private SimpleBasePlayer.LivePositionSupplier totalBufferedDurationSupplier;
    private final VideoGraph.Factory videoGraphFactory;
    private Object videoOutput;
    private Size videoOutputSize;
    private final boolean videoPrewarmingEnabled;
    private final SparseBooleanArray videoTracksSelected;
    private float volume;

    @Override // androidx.media3.exoplayer.video.PlaybackVideoGraphWrapper.Listener
    public void onFrameDropped() {
    }

    @Override // androidx.media3.exoplayer.video.PlaybackVideoGraphWrapper.Listener
    public void onVideoSizeChanged(VideoSize videoSize) {
    }

    public static final class Builder {
        private AudioSink audioSink;
        private boolean built;
        private final Context context;
        private boolean enableReplayableCache;
        private GlObjectsProvider glObjectsProvider;
        private ImageDecoder.Factory imageDecoderFactory;
        private Looper looper;
        private MediaSource.Factory mediaSourceFactory;
        private VideoGraph.Factory videoGraphFactory;
        private boolean videoPrewarmingEnabled = true;
        private Clock clock = Clock.DEFAULT;

        public Builder(Context context) {
            this.context = context.getApplicationContext();
            this.mediaSourceFactory = new DefaultMediaSourceFactory(context);
            this.imageDecoderFactory = new BitmapFactoryImageDecoder.Factory(context).setMaxOutputSize(4096);
        }

        public Builder setLooper(Looper looper) {
            this.looper = looper;
            return this;
        }

        public Builder setAudioSink(AudioSink audioSink) {
            this.audioSink = audioSink;
            return this;
        }

        public Builder setMediaSourceFactory(MediaSource.Factory factory) {
            this.mediaSourceFactory = factory;
            return this;
        }

        public Builder setImageDecoderFactory(ImageDecoder.Factory factory) {
            this.imageDecoderFactory = factory;
            return this;
        }

        Builder setVideoPrewarmingEnabled(boolean z) {
            this.videoPrewarmingEnabled = z;
            return this;
        }

        public Builder setClock(Clock clock) {
            this.clock = clock;
            return this;
        }

        public Builder setVideoGraphFactory(VideoGraph.Factory factory) {
            this.videoGraphFactory = factory;
            return this;
        }

        public Builder setGlObjectsProvider(GlObjectsProvider glObjectsProvider) {
            this.glObjectsProvider = glObjectsProvider;
            return this;
        }

        public Builder experimentalSetEnableReplayableCache(boolean z) {
            this.enableReplayableCache = z;
            return this;
        }

        public CompositionPlayer build() {
            Assertions.checkState(!this.built);
            if (this.looper == null) {
                this.looper = (Looper) Assertions.checkStateNotNull(Looper.myLooper());
            }
            if (this.audioSink == null) {
                this.audioSink = new DefaultAudioSink.Builder(this.context).build();
            }
            if (this.videoGraphFactory == null) {
                DefaultVideoFrameProcessor.Factory.Builder enableReplayableCache = new DefaultVideoFrameProcessor.Factory.Builder().setEnableReplayableCache(this.enableReplayableCache);
                GlObjectsProvider glObjectsProvider = this.glObjectsProvider;
                if (glObjectsProvider != null) {
                    enableReplayableCache.setGlObjectsProvider(glObjectsProvider);
                }
                this.videoGraphFactory = new SingleInputVideoGraph.Factory(enableReplayableCache.build());
            }
            CompositionPlayer compositionPlayer = new CompositionPlayer(this);
            DefaultAnalyticsCollector defaultAnalyticsCollector = new DefaultAnalyticsCollector(this.clock);
            defaultAnalyticsCollector.setPlayer(compositionPlayer, this.looper);
            defaultAnalyticsCollector.addListener(new EventLogger(CompositionPlayer.TAG));
            compositionPlayer.addListener(defaultAnalyticsCollector);
            this.built = true;
            return compositionPlayer;
        }
    }

    private CompositionPlayer(Builder builder) {
        super((Looper) Assertions.checkNotNull(builder.looper), builder.clock);
        this.context = builder.context;
        Clock clock = builder.clock;
        this.clock = clock;
        this.applicationHandler = clock.createHandler(builder.looper, null);
        this.finalAudioSink = (AudioSink) Assertions.checkNotNull(builder.audioSink);
        this.mediaSourceFactory = builder.mediaSourceFactory;
        this.imageDecoderFactory = builder.imageDecoderFactory;
        this.videoGraphFactory = (VideoGraph.Factory) Assertions.checkNotNull(builder.videoGraphFactory);
        this.videoPrewarmingEnabled = builder.videoPrewarmingEnabled;
        this.compositionInternalListenerHandler = clock.createHandler(builder.looper, null);
        this.enableReplayableCache = builder.enableReplayableCache;
        this.videoTracksSelected = new SparseBooleanArray();
        this.playerHolders = new ArrayList();
        this.compositionDurationUs = C.TIME_UNSET;
        this.playbackState = 1;
        this.volume = 1.0f;
        this.positionSupplier = new SimpleBasePlayer.LivePositionSupplier(new CompositionPlayer$$ExternalSyntheticLambda1(this));
        this.bufferedPositionSupplier = new SimpleBasePlayer.LivePositionSupplier(new CompositionPlayer$$ExternalSyntheticLambda2(this));
        this.totalBufferedDurationSupplier = new SimpleBasePlayer.LivePositionSupplier(new CompositionPlayer$$ExternalSyntheticLambda3(this));
    }

    public void setComposition(Composition composition) {
        verifyApplicationThread();
        Assertions.checkArgument(!composition.sequences.isEmpty());
        Composition compositionDeactivateSpeedAdjustingVideoEffects = deactivateSpeedAdjustingVideoEffects(composition);
        if (compositionDeactivateSpeedAdjustingVideoEffects.sequences.size() > 1 && !this.videoGraphFactory.supportsMultipleInputs()) {
            Log.w(TAG, "Setting multi-sequence Composition with single input video graph.");
        }
        setCompositionInternal(compositionDeactivateSpeedAdjustingVideoEffects);
        this.composition = compositionDeactivateSpeedAdjustingVideoEffects;
        maybeSetVideoOutput();
    }

    public void setScrubbingModeEnabled(boolean z) {
        this.scrubbingModeEnabled = z;
        for (int i = 0; i < this.playerHolders.size(); i++) {
            this.playerHolders.get(i).player.setScrubbingModeEnabled(z);
        }
    }

    public boolean isScrubbingModeEnabled() {
        return this.scrubbingModeEnabled;
    }

    public void experimentalRedrawLastFrame() {
        Assertions.checkState(this.enableReplayableCache);
        HandlerWrapper handlerWrapper = this.playbackThreadHandler;
        if (handlerWrapper == null || this.playbackVideoGraphWrapper == null) {
            return;
        }
        handlerWrapper.post(new Runnable() { // from class: androidx.media3.transformer.CompositionPlayer$$ExternalSyntheticLambda4
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7632x488f3b00();
            }
        });
    }

    /* JADX INFO: renamed from: lambda$experimentalRedrawLastFrame$0$androidx-media3-transformer-CompositionPlayer, reason: not valid java name */
    /* synthetic */ void m7632x488f3b00() {
        ((PlaybackVideoGraphWrapper) Assertions.checkNotNull(this.playbackVideoGraphWrapper)).getSink(0).redraw();
    }

    public void setVideoSurface(Surface surface, Size size) {
        this.videoOutput = surface;
        this.videoOutputSize = size;
        setVideoSurfaceInternal(surface, size);
    }

    @Override // androidx.media3.exoplayer.video.PlaybackVideoGraphWrapper.Listener
    public void onFirstFrameRendered() {
        this.applicationHandler.post(new Runnable() { // from class: androidx.media3.transformer.CompositionPlayer$$ExternalSyntheticLambda5
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7634x9345b5d4();
            }
        });
    }

    /* JADX INFO: renamed from: lambda$onFirstFrameRendered$1$androidx-media3-transformer-CompositionPlayer, reason: not valid java name */
    /* synthetic */ void m7634x9345b5d4() {
        this.renderedFirstFrame = true;
        invalidateState();
    }

    @Override // androidx.media3.exoplayer.video.PlaybackVideoGraphWrapper.Listener
    public void onError(final VideoFrameProcessingException videoFrameProcessingException) {
        this.applicationHandler.post(new Runnable() { // from class: androidx.media3.transformer.CompositionPlayer$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.m7633lambda$onError$2$androidxmedia3transformerCompositionPlayer(videoFrameProcessingException);
            }
        });
    }

    /* JADX INFO: renamed from: lambda$onError$2$androidx-media3-transformer-CompositionPlayer, reason: not valid java name */
    /* synthetic */ void m7633lambda$onError$2$androidxmedia3transformerCompositionPlayer(VideoFrameProcessingException videoFrameProcessingException) {
        maybeUpdatePlaybackError("Error processing video frames", videoFrameProcessingException, 7001);
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceCreated(SurfaceHolder surfaceHolder) {
        this.videoOutputSize = new Size(surfaceHolder.getSurfaceFrame().width(), surfaceHolder.getSurfaceFrame().height());
        setVideoSurfaceInternal(surfaceHolder.getSurface(), this.videoOutputSize);
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
        maybeSetOutputSurfaceInfo(i2, i3);
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceDestroyed(SurfaceHolder surfaceHolder) {
        clearVideoSurfaceInternal();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected SimpleBasePlayer.State getState() {
        SimpleBasePlayer.State.Builder playbackSuppressionReason = new SimpleBasePlayer.State.Builder().setAvailableCommands(AVAILABLE_COMMANDS).setPlaybackState(this.playbackState).setPlayerError(this.playbackException).setPlayWhenReady(this.playWhenReady, this.playWhenReadyChangeReason).setRepeatMode(this.repeatMode).setVolume(this.volume).setContentPositionMs(this.positionSupplier).setContentBufferedPositionMs(this.bufferedPositionSupplier).setTotalBufferedDurationMs(this.totalBufferedDurationSupplier).setNewlyRenderedFirstFrame(getRenderedFirstFrameAndReset()).setPlaybackSuppressionReason(this.playbackSuppressionReason);
        if (this.repeatingCompositionSeekInProgress) {
            playbackSuppressionReason.setPositionDiscontinuity(0, C.TIME_UNSET);
            this.repeatingCompositionSeekInProgress = false;
        }
        ImmutableList<SimpleBasePlayer.MediaItemData> immutableList = this.playlist;
        if (immutableList != null) {
            playbackSuppressionReason.setPlaylist(immutableList);
        }
        return playbackSuppressionReason.build();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handlePrepare() {
        Assertions.checkStateNotNull(this.composition, "No composition set");
        if (this.playbackState != 1) {
            return Futures.immediateVoidFuture();
        }
        for (int i = 0; i < this.playerHolders.size(); i++) {
            this.playerHolders.get(i).player.prepare();
        }
        return Futures.immediateVoidFuture();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleSetPlayWhenReady(boolean z) {
        this.playWhenReady = z;
        this.playWhenReadyChangeReason = 1;
        if (this.playbackState == 3) {
            if (z) {
                ((CompositionPlayerInternal) Assertions.checkStateNotNull(this.compositionPlayerInternal)).startRendering();
            } else {
                ((CompositionPlayerInternal) Assertions.checkStateNotNull(this.compositionPlayerInternal)).stopRendering();
            }
            for (int i = 0; i < this.playerHolders.size(); i++) {
                this.playerHolders.get(i).player.setPlayWhenReady(z);
            }
        }
        return Futures.immediateVoidFuture();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleSetRepeatMode(int i) {
        Assertions.checkArgument(i != 1);
        this.repeatMode = i;
        return Futures.immediateVoidFuture();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleStop() {
        for (int i = 0; i < this.playerHolders.size(); i++) {
            this.playerHolders.get(i).player.stop();
        }
        return Futures.immediateVoidFuture();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleRelease() {
        if (this.composition == null) {
            return Futures.immediateVoidFuture();
        }
        Assertions.checkState(((HandlerThread) Assertions.checkStateNotNull(this.playbackThread)).isAlive());
        for (int i = 0; i < this.playerHolders.size(); i++) {
            this.playerHolders.get(i).player.release();
        }
        ((CompositionPlayerInternal) Assertions.checkStateNotNull(this.compositionPlayerInternal)).release();
        removeSurfaceCallbacks();
        this.compositionInternalListenerHandler.removeCallbacksAndMessages(null);
        this.displaySurface = null;
        ((HandlerThread) Assertions.checkStateNotNull(this.playbackThread)).quitSafely();
        this.applicationHandler.removeCallbacksAndMessages(null);
        return Futures.immediateVoidFuture();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleClearVideoOutput(Object obj) {
        Assertions.checkArgument(Objects.equals(obj, this.videoOutput));
        this.videoOutput = null;
        if (this.composition == null) {
            return Futures.immediateVoidFuture();
        }
        removeSurfaceCallbacks();
        clearVideoSurfaceInternal();
        return Futures.immediateVoidFuture();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleSetVideoOutput(Object obj) {
        if (!(obj instanceof SurfaceHolder) && !(obj instanceof SurfaceView)) {
            throw new UnsupportedOperationException(obj.getClass() + ". Use CompositionPlayer.setVideoSurface() for Surface output.");
        }
        this.videoOutput = obj;
        return maybeSetVideoOutput();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleSetVolume(float f) {
        float fConstrainValue = Util.constrainValue(f, 0.0f, 1.0f);
        this.volume = fConstrainValue;
        CompositionPlayerInternal compositionPlayerInternal = this.compositionPlayerInternal;
        if (compositionPlayerInternal != null) {
            compositionPlayerInternal.setVolume(fConstrainValue);
        }
        return Futures.immediateVoidFuture();
    }

    @Override // androidx.media3.common.SimpleBasePlayer
    protected ListenableFuture<?> handleSeek(int i, long j, int i2) {
        resetLivePositionSuppliers();
        CompositionPlayerInternal compositionPlayerInternal = (CompositionPlayerInternal) Assertions.checkStateNotNull(this.compositionPlayerInternal);
        compositionPlayerInternal.startSeek(j);
        for (int i3 = 0; i3 < this.playerHolders.size(); i3++) {
            this.playerHolders.get(i3).player.seekTo(j);
        }
        compositionPlayerInternal.endSeek();
        return Futures.immediateVoidFuture();
    }

    public void setVideoFrameMetadataListener(VideoFrameMetadataListener videoFrameMetadataListener) {
        if (this.playerHolders.isEmpty()) {
            this.pendingVideoFrameMetadatListener = videoFrameMetadataListener;
        } else {
            this.playerHolders.get(0).player.setVideoFrameMetadataListener(videoFrameMetadataListener);
        }
    }

    @Override // androidx.media3.transformer.CompositionPlayerInternal.Listener
    public void onError(String str, Exception exc, int i) {
        maybeUpdatePlaybackError(str, exc, i);
    }

    private static Composition deactivateSpeedAdjustingVideoEffects(Composition composition) {
        ArrayList arrayList = new ArrayList();
        UnmodifiableIterator<EditedMediaItemSequence> it = composition.sequences.iterator();
        while (it.hasNext()) {
            EditedMediaItemSequence next = it.next();
            ArrayList arrayList2 = new ArrayList();
            UnmodifiableIterator<EditedMediaItem> it2 = next.editedMediaItems.iterator();
            while (it2.hasNext()) {
                EditedMediaItem next2 = it2.next();
                ImmutableList<Effect> immutableList = next2.effects.videoEffects;
                ArrayList arrayList3 = new ArrayList();
                UnmodifiableIterator<Effect> it3 = immutableList.iterator();
                while (it3.hasNext()) {
                    Effect next3 = it3.next();
                    if (next3 instanceof TimestampAdjustment) {
                        arrayList3.add(new InactiveTimestampAdjustment(((TimestampAdjustment) next3).speedProvider));
                    } else {
                        arrayList3.add(next3);
                    }
                }
                arrayList2.add(next2.buildUpon().setEffects(new Effects(next2.effects.audioProcessors, arrayList3)).build());
            }
            arrayList.add(new EditedMediaItemSequence.Builder(arrayList2).setIsLooping(next.isLooping).experimentalSetForceAudioTrack(next.forceAudioTrack).experimentalSetForceVideoTrack(next.forceVideoTrack).build());
        }
        return composition.buildUpon().setSequences(arrayList).build();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updatePlaybackState() {
        if (this.playerHolders.isEmpty() || this.playbackException != null) {
            this.playbackState = 1;
            return;
        }
        int i = this.playbackState;
        this.playbackSuppressionReason = 0;
        int i2 = 0;
        int i3 = 0;
        int i4 = 0;
        for (int i5 = 0; i5 < this.playerHolders.size(); i5++) {
            if (this.playerHolders.get(i5).player.getPlaybackSuppressionReason() != 0) {
                this.playbackSuppressionReason = this.playerHolders.get(i5).player.getPlaybackSuppressionReason();
            }
            int playbackState = this.playerHolders.get(i5).player.getPlaybackState();
            if (playbackState == 1) {
                i2++;
            } else if (playbackState == 2) {
                i3++;
            } else if (playbackState == 3) {
                continue;
            } else {
                if (playbackState != 4) {
                    throw new IllegalStateException(String.valueOf(playbackState));
                }
                i4++;
            }
        }
        if (i2 > 0) {
            this.playbackState = 1;
            return;
        }
        if (i3 > 0) {
            this.playbackState = 2;
            if (i == 3 && this.playWhenReady) {
                for (int i6 = 0; i6 < this.playerHolders.size(); i6++) {
                    this.playerHolders.get(i6).player.setPlayWhenReady(false);
                }
                ((CompositionPlayerInternal) Assertions.checkStateNotNull(this.compositionPlayerInternal)).stopRendering();
                return;
            }
            return;
        }
        if (i4 == this.playerHolders.size()) {
            this.playbackState = 4;
            ((CompositionPlayerInternal) Assertions.checkStateNotNull(this.compositionPlayerInternal)).stopRendering();
            return;
        }
        this.playbackState = 3;
        if (i == 3 || !this.playWhenReady) {
            return;
        }
        for (int i7 = 0; i7 < this.playerHolders.size(); i7++) {
            this.playerHolders.get(i7).player.setPlayWhenReady(true);
        }
        ((CompositionPlayerInternal) Assertions.checkStateNotNull(this.compositionPlayerInternal)).startRendering();
    }

    private void prepareCompositionPlayerInternal() {
        if (this.compositionPlayerInternalPrepared) {
            return;
        }
        HandlerThread handlerThread = new HandlerThread("CompositionPlaybackThread", -16);
        this.playbackThread = handlerThread;
        handlerThread.start();
        this.playbackThreadHandler = this.clock.createHandler(this.playbackThread.getLooper(), null);
        this.playbackAudioGraphWrapper = new PlaybackAudioGraphWrapper(new DefaultAudioMixer.Factory(), (AudioSink) Assertions.checkNotNull(this.finalAudioSink));
        PlaybackVideoGraphWrapper playbackVideoGraphWrapperBuild = new PlaybackVideoGraphWrapper.Builder(this.context, new VideoFrameReleaseControl(this.context, new CompositionFrameTimingEvaluator(), 0L)).setVideoGraphFactory((VideoGraph.Factory) Assertions.checkNotNull(this.videoGraphFactory)).setClock(this.clock).setEnableReplayableCache(this.enableReplayableCache).build();
        this.playbackVideoGraphWrapper = playbackVideoGraphWrapperBuild;
        playbackVideoGraphWrapperBuild.addListener(this);
        CompositionPlayerInternal compositionPlayerInternal = new CompositionPlayerInternal(this.playbackThread.getLooper(), this.clock, this.playbackAudioGraphWrapper, this.playbackVideoGraphWrapper, this, this.compositionInternalListenerHandler);
        this.compositionPlayerInternal = compositionPlayerInternal;
        compositionPlayerInternal.setVolume(this.volume);
        this.compositionPlayerInternalPrepared = true;
    }

    private void setCompositionInternal(Composition composition) {
        prepareCompositionPlayerInternal();
        ((CompositionPlayerInternal) Assertions.checkNotNull(this.compositionPlayerInternal)).setComposition(composition);
        this.compositionDurationUs = getCompositionDurationUs(composition);
        long sequenceDurationUs = getSequenceDurationUs((EditedMediaItemSequence) Assertions.checkNotNull(composition.sequences.get(0)));
        int i = 0;
        while (i < composition.sequences.size()) {
            EditedMediaItemSequence editedMediaItemSequence = composition.sequences.get(i);
            if (this.playerHolders.size() <= i) {
                List<SequencePlayerHolder> list = this.playerHolders;
                int i2 = i;
                SequencePlayerHolder sequencePlayerHolder = new SequencePlayerHolder(this.context, getApplicationLooper(), ((HandlerThread) Assertions.checkStateNotNull(this.playbackThread)).getLooper(), this.clock, SequenceRenderersFactory.create(this.context, (PlaybackAudioGraphWrapper) Assertions.checkStateNotNull(this.playbackAudioGraphWrapper), ((PlaybackVideoGraphWrapper) Assertions.checkStateNotNull(this.playbackVideoGraphWrapper)).getSink(i), this.imageDecoderFactory, i, this.videoPrewarmingEnabled), i2);
                i = i2;
                list.add(sequencePlayerHolder);
            }
            SequencePlayerHolder sequencePlayerHolder2 = this.playerHolders.get(i);
            sequencePlayerHolder2.setSequence(editedMediaItemSequence);
            sequencePlayerHolder2.renderersFactory.setRequestMediaCodecToneMapping(composition.hdrMode == 1);
            ExoPlayer exoPlayer = sequencePlayerHolder2.player;
            exoPlayer.addListener(new PlayerListener(i));
            exoPlayer.addAnalyticsListener(new EventLogger("CompositionPlayer-" + i));
            exoPlayer.setPauseAtEndOfMediaItems(true);
            if (i == 0) {
                exoPlayer.setMediaSource(createPrimarySequenceMediaSource(editedMediaItemSequence, this.mediaSourceFactory));
                VideoFrameMetadataListener videoFrameMetadataListener = this.pendingVideoFrameMetadatListener;
                if (videoFrameMetadataListener != null) {
                    exoPlayer.setVideoFrameMetadataListener(videoFrameMetadataListener);
                }
            } else {
                exoPlayer.setMediaSource(createSecondarySequenceMediaSource(editedMediaItemSequence, this.mediaSourceFactory, sequenceDurationUs));
            }
            if (i == 0) {
                invalidateState();
                this.playlist = createPlaylist();
            }
            if (this.playbackState != 1) {
                exoPlayer.stop();
                exoPlayer.prepare();
            }
            i++;
        }
    }

    private static MediaSource createPrimarySequenceMediaSource(EditedMediaItemSequence editedMediaItemSequence, MediaSource.Factory factory) {
        ConcatenatingMediaSource2.Builder builder = new ConcatenatingMediaSource2.Builder();
        for (int i = 0; i < editedMediaItemSequence.editedMediaItems.size(); i++) {
            EditedMediaItem editedMediaItem = editedMediaItemSequence.editedMediaItems.get(i);
            Assertions.checkArgument(editedMediaItem.durationUs != C.TIME_UNSET);
            long presentationDurationUs = editedMediaItem.getPresentationDurationUs();
            builder.add(wrapWithVideoEffectsBasedMediaSources(createMediaSourceWithSilence(factory, editedMediaItem), editedMediaItem.effects.videoEffects, presentationDurationUs), Util.usToMs(presentationDurationUs));
        }
        return builder.build();
    }

    private static MediaSource createMediaSourceWithSilence(MediaSource.Factory factory, EditedMediaItem editedMediaItem) {
        ClippingMediaSource clippingMediaSourceBuild = new ClippingMediaSource.Builder(new SilenceMediaSource(editedMediaItem.durationUs)).setStartPositionUs(editedMediaItem.mediaItem.clippingConfiguration.startPositionUs).setEndPositionUs(editedMediaItem.mediaItem.clippingConfiguration.endPositionUs).build();
        return editedMediaItem.isGap() ? clippingMediaSourceBuild : new MergingMediaSource(factory.createMediaSource(editedMediaItem.mediaItem), clippingMediaSourceBuild);
    }

    private static MediaSource createSecondarySequenceMediaSource(EditedMediaItemSequence editedMediaItemSequence, MediaSource.Factory factory, long j) {
        ConcatenatingMediaSource2.Builder builder = new ConcatenatingMediaSource2.Builder();
        int size = 0;
        if (!editedMediaItemSequence.isLooping) {
            while (size < editedMediaItemSequence.editedMediaItems.size()) {
                EditedMediaItem editedMediaItem = editedMediaItemSequence.editedMediaItems.get(size);
                builder.add(createMediaSourceWithSilence(factory, editedMediaItem), Util.usToMs(editedMediaItem.getPresentationDurationUs()));
                size++;
            }
            return builder.build();
        }
        long j2 = 0;
        while (j2 < j) {
            EditedMediaItem editedMediaItem2 = editedMediaItemSequence.editedMediaItems.get(size);
            long presentationDurationUs = editedMediaItem2.getPresentationDurationUs();
            long j3 = j2 + presentationDurationUs;
            if (j3 <= j) {
                builder.add(createMediaSourceWithSilence(factory, editedMediaItem2), Util.usToMs(presentationDurationUs));
                size = (size + 1) % editedMediaItemSequence.editedMediaItems.size();
                j2 = j3;
            } else {
                builder.add(createMediaSourceWithSilence(factory, clipToDuration(editedMediaItem2, j - j2)));
                break;
            }
        }
        return builder.build();
    }

    private static EditedMediaItem clipToDuration(EditedMediaItem editedMediaItem, long j) {
        MediaItem.ClippingConfiguration clippingConfiguration = editedMediaItem.mediaItem.clippingConfiguration;
        return editedMediaItem.buildUpon().setMediaItem(editedMediaItem.mediaItem.buildUpon().setClippingConfiguration(clippingConfiguration.buildUpon().setEndPositionUs(clippingConfiguration.startPositionUs + j).build()).build()).build();
    }

    private static MediaSource wrapWithVideoEffectsBasedMediaSources(MediaSource mediaSource, ImmutableList<Effect> immutableList, long j) {
        UnmodifiableIterator<Effect> it = immutableList.iterator();
        while (it.hasNext()) {
            Effect next = it.next();
            if (next instanceof InactiveTimestampAdjustment) {
                mediaSource = new SpeedChangingMediaSource(mediaSource, ((InactiveTimestampAdjustment) next).speedProvider, j);
            }
        }
        return mediaSource;
    }

    private ListenableFuture<?> maybeSetVideoOutput() {
        Object obj = this.videoOutput;
        if (obj == null || this.composition == null) {
            return Futures.immediateVoidFuture();
        }
        if (obj instanceof SurfaceHolder) {
            setVideoSurfaceHolderInternal((SurfaceHolder) obj);
        } else if (obj instanceof SurfaceView) {
            setVideoSurfaceHolderInternal(((SurfaceView) obj).getHolder());
        } else if (obj instanceof Surface) {
            setVideoSurfaceInternal((Surface) obj, (Size) Assertions.checkNotNull(this.videoOutputSize, "VideoOutputSize must be set when using Surface output"));
        } else {
            throw new IllegalStateException(this.videoOutput.getClass().toString());
        }
        return Futures.immediateVoidFuture();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long getContentPositionMs() {
        long jMax = 0;
        if (this.playerHolders.isEmpty()) {
            return 0L;
        }
        for (int i = 0; i < this.playerHolders.size(); i++) {
            jMax = Math.max(jMax, this.playerHolders.get(i).player.getContentPosition());
        }
        return jMax;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long getBufferedPositionMs() {
        if (this.playerHolders.isEmpty()) {
            return 0L;
        }
        long jMin = 2147483647L;
        for (int i = 0; i < this.playerHolders.size(); i++) {
            int playbackState = this.playerHolders.get(i).player.getPlaybackState();
            if (playbackState == 3 || playbackState == 2) {
                jMin = Math.min(jMin, this.playerHolders.get(i).player.getBufferedPosition());
            }
        }
        if (jMin == SieveCacheKt.NodeLinkMask) {
            return 0L;
        }
        return jMin;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public long getTotalBufferedDurationMs() {
        if (this.playerHolders.isEmpty()) {
            return 0L;
        }
        long jMin = 2147483647L;
        for (int i = 0; i < this.playerHolders.size(); i++) {
            int playbackState = this.playerHolders.get(i).player.getPlaybackState();
            if (playbackState == 3 || playbackState == 2) {
                jMin = Math.min(jMin, this.playerHolders.get(i).player.getTotalBufferedDuration());
            }
        }
        if (jMin == SieveCacheKt.NodeLinkMask) {
            return 0L;
        }
        return jMin;
    }

    private boolean getRenderedFirstFrameAndReset() {
        boolean z = this.renderedFirstFrame;
        this.renderedFirstFrame = false;
        return z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void maybeUpdatePlaybackError(String str, Exception exc, int i) {
        if (this.playbackException == null) {
            this.playbackException = new PlaybackException(str, exc, i);
            for (int i2 = 0; i2 < this.playerHolders.size(); i2++) {
                this.playerHolders.get(i2).player.stop();
            }
            updatePlaybackState();
            invalidateState();
            return;
        }
        Log.w(TAG, str, exc);
    }

    private void setVideoSurfaceHolderInternal(SurfaceHolder surfaceHolder) {
        removeSurfaceCallbacks();
        this.surfaceHolder = surfaceHolder;
        surfaceHolder.addCallback(this);
        Surface surface = surfaceHolder.getSurface();
        if (surface != null && surface.isValid()) {
            Size size = new Size(surfaceHolder.getSurfaceFrame().width(), surfaceHolder.getSurfaceFrame().height());
            this.videoOutputSize = size;
            setVideoSurfaceInternal(surface, size);
            return;
        }
        clearVideoSurfaceInternal();
    }

    private void setVideoSurfaceInternal(Surface surface, Size size) {
        this.displaySurface = surface;
        maybeSetOutputSurfaceInfo(size.getWidth(), size.getHeight());
    }

    private void maybeSetOutputSurfaceInfo(int i, int i2) {
        CompositionPlayerInternal compositionPlayerInternal;
        Surface surface = this.displaySurface;
        if (i == 0 || i2 == 0 || surface == null || (compositionPlayerInternal = this.compositionPlayerInternal) == null) {
            return;
        }
        compositionPlayerInternal.setOutputSurfaceInfo(surface, new Size(i, i2));
    }

    private void clearVideoSurfaceInternal() {
        this.displaySurface = null;
        CompositionPlayerInternal compositionPlayerInternal = this.compositionPlayerInternal;
        if (compositionPlayerInternal != null) {
            compositionPlayerInternal.clearOutputSurface();
        }
    }

    private void removeSurfaceCallbacks() {
        SurfaceHolder surfaceHolder = this.surfaceHolder;
        if (surfaceHolder != null) {
            surfaceHolder.removeCallback(this);
            this.surfaceHolder = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void repeatCompositionPlayback() {
        this.repeatingCompositionSeekInProgress = true;
        seekToDefaultPosition();
    }

    private ImmutableList<SimpleBasePlayer.MediaItemData> createPlaylist() {
        Assertions.checkNotNull(Boolean.valueOf(this.compositionDurationUs != C.TIME_UNSET));
        return ImmutableList.of(new SimpleBasePlayer.MediaItemData.Builder("CompositionTimeline").setMediaItem(MediaItem.EMPTY).setDurationUs(this.compositionDurationUs).build());
    }

    private void resetLivePositionSuppliers() {
        this.positionSupplier.disconnect(getContentPositionMs());
        this.bufferedPositionSupplier.disconnect(getBufferedPositionMs());
        this.totalBufferedDurationSupplier.disconnect(getTotalBufferedDurationMs());
        this.positionSupplier = new SimpleBasePlayer.LivePositionSupplier(new CompositionPlayer$$ExternalSyntheticLambda1(this));
        this.bufferedPositionSupplier = new SimpleBasePlayer.LivePositionSupplier(new CompositionPlayer$$ExternalSyntheticLambda2(this));
        this.totalBufferedDurationSupplier = new SimpleBasePlayer.LivePositionSupplier(new CompositionPlayer$$ExternalSyntheticLambda3(this));
    }

    private static long getCompositionDurationUs(Composition composition) {
        Assertions.checkState(!composition.sequences.isEmpty());
        long jMax = SieveCacheKt.NodeMetaAndPreviousMask;
        for (int i = 0; i < composition.sequences.size(); i++) {
            EditedMediaItemSequence editedMediaItemSequence = composition.sequences.get(i);
            if (!editedMediaItemSequence.isLooping) {
                jMax = Math.max(jMax, getSequenceDurationUs(editedMediaItemSequence));
            }
        }
        return jMax;
    }

    private static long getSequenceDurationUs(EditedMediaItemSequence editedMediaItemSequence) {
        long presentationDurationUs = 0;
        for (int i = 0; i < editedMediaItemSequence.editedMediaItems.size(); i++) {
            presentationDurationUs += editedMediaItemSequence.editedMediaItems.get(i).getPresentationDurationUs();
        }
        Assertions.checkState(presentationDurationUs > 0, String.valueOf(presentationDurationUs));
        return presentationDurationUs;
    }

    private static final class CompositionFrameTimingEvaluator implements VideoFrameReleaseControl.FrameTimingEvaluator {
        private static final long FRAME_LATE_THRESHOLD_US = -30000;
        private static final long FRAME_RELEASE_THRESHOLD_US = 100000;

        @Override // androidx.media3.exoplayer.video.VideoFrameReleaseControl.FrameTimingEvaluator
        public boolean shouldDropFrame(long j, long j2, boolean z) {
            return j < FRAME_LATE_THRESHOLD_US && !z;
        }

        @Override // androidx.media3.exoplayer.video.VideoFrameReleaseControl.FrameTimingEvaluator
        public boolean shouldForceReleaseFrame(long j, long j2) {
            return j < FRAME_LATE_THRESHOLD_US && j2 > 100000;
        }

        @Override // androidx.media3.exoplayer.video.VideoFrameReleaseControl.FrameTimingEvaluator
        public boolean shouldIgnoreFrame(long j, long j2, long j3, boolean z, boolean z2) {
            return false;
        }

        private CompositionFrameTimingEvaluator() {
        }
    }

    private final class PlayerListener implements Player.Listener {
        private final int playerIndex;

        public PlayerListener(int i) {
            this.playerIndex = i;
        }

        @Override // androidx.media3.common.Player.Listener
        public void onEvents(Player player, Player.Events events) {
            if (events.containsAny(CompositionPlayer.SUPPORTED_LISTENER_EVENTS)) {
                CompositionPlayer.this.invalidateState();
            }
        }

        @Override // androidx.media3.common.Player.Listener
        public void onPlaybackStateChanged(int i) {
            CompositionPlayer.this.updatePlaybackState();
        }

        @Override // androidx.media3.common.Player.Listener
        public void onPlayWhenReadyChanged(boolean z, int i) {
            CompositionPlayer.this.playWhenReadyChangeReason = i;
            if (i == 5 && CompositionPlayer.this.repeatMode != 0 && this.playerIndex == 0) {
                CompositionPlayer.this.repeatCompositionPlayback();
            }
        }

        @Override // androidx.media3.common.Player.Listener
        public void onPlayerError(PlaybackException playbackException) {
            CompositionPlayer.this.maybeUpdatePlaybackError("error from player " + this.playerIndex, playbackException, playbackException.errorCode);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onVideoTrackSelection(boolean z, int i) {
        this.videoTracksSelected.put(i, z);
        if (this.videoTracksSelected.size() == ((Composition) Assertions.checkNotNull(this.composition)).sequences.size()) {
            int i2 = 0;
            for (int i3 = 0; i3 < this.videoTracksSelected.size(); i3++) {
                SparseBooleanArray sparseBooleanArray = this.videoTracksSelected;
                if (sparseBooleanArray.get(sparseBooleanArray.keyAt(i3))) {
                    i2++;
                }
            }
            ((PlaybackVideoGraphWrapper) Assertions.checkNotNull(this.playbackVideoGraphWrapper)).setTotalVideoInputCount(i2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    final class SequencePlayerHolder {
        public final ExoPlayer player;
        public final SequenceRenderersFactory renderersFactory;
        public final CompositionTrackSelector trackSelector;

        private SequencePlayerHolder(Context context, Looper looper, Looper looper2, Clock clock, SequenceRenderersFactory sequenceRenderersFactory, int i) {
            CompositionTrackSelector compositionTrackSelector = new CompositionTrackSelector(context, new CompositionTrackSelector.Listener() { // from class: androidx.media3.transformer.CompositionPlayer$SequencePlayerHolder$$ExternalSyntheticLambda0
                @Override // androidx.media3.transformer.CompositionTrackSelector.Listener
                public final void onVideoTrackSelection(boolean z, int i2) {
                    compositionPlayer.onVideoTrackSelection(z, i2);
                }
            }, i);
            this.trackSelector = compositionTrackSelector;
            ExoPlayer.Builder builderExperimentalSetDynamicSchedulingEnabled = new ExoPlayer.Builder(context).setLooper(looper).setPlaybackLooper(looper2).setRenderersFactory(sequenceRenderersFactory).setHandleAudioBecomingNoisy(true).setClock(clock).experimentalSetDynamicSchedulingEnabled(true);
            builderExperimentalSetDynamicSchedulingEnabled.setTrackSelector(compositionTrackSelector);
            this.player = builderExperimentalSetDynamicSchedulingEnabled.build();
            this.renderersFactory = sequenceRenderersFactory;
        }

        public void setSequence(EditedMediaItemSequence editedMediaItemSequence) {
            this.renderersFactory.setSequence(editedMediaItemSequence);
            this.trackSelector.setSequence(editedMediaItemSequence);
        }
    }
}
