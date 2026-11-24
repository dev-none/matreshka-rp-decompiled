package androidx.media3.transformer;

import androidx.media3.common.C;
import androidx.media3.common.StreamKey;
import androidx.media3.common.Timeline;
import androidx.media3.common.audio.SpeedProvider;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.LongArray;
import androidx.media3.common.util.Util;
import androidx.media3.decoder.DecoderInputBuffer;
import androidx.media3.exoplayer.FormatHolder;
import androidx.media3.exoplayer.LoadingInfo;
import androidx.media3.exoplayer.SeekParameters;
import androidx.media3.exoplayer.source.ForwardingTimeline;
import androidx.media3.exoplayer.source.MediaPeriod;
import androidx.media3.exoplayer.source.MediaSource;
import androidx.media3.exoplayer.source.SampleStream;
import androidx.media3.exoplayer.source.TrackGroupArray;
import androidx.media3.exoplayer.source.WrappingMediaSource;
import androidx.media3.exoplayer.trackselection.ExoTrackSelection;
import androidx.media3.exoplayer.upstream.Allocator;
import com.google.common.primitives.Floats;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
final class SpeedChangingMediaSource extends WrappingMediaSource {
    private final long durationUs;
    private final SpeedProvider speedProvider;

    public SpeedChangingMediaSource(MediaSource mediaSource, SpeedProvider speedProvider, long j) {
        super(mediaSource);
        this.speedProvider = speedProvider;
        this.durationUs = j;
    }

    @Override // androidx.media3.exoplayer.source.WrappingMediaSource, androidx.media3.exoplayer.source.MediaSource
    public MediaPeriod createPeriod(MediaSource.MediaPeriodId mediaPeriodId, Allocator allocator, long j) {
        return new SpeedProviderMediaPeriod(super.createPeriod(mediaPeriodId, allocator, j), this.speedProvider);
    }

    @Override // androidx.media3.exoplayer.source.WrappingMediaSource, androidx.media3.exoplayer.source.MediaSource
    public void releasePeriod(MediaPeriod mediaPeriod) {
        super.releasePeriod(((SpeedProviderMediaPeriod) mediaPeriod).getWrappedMediaPeriod());
    }

    @Override // androidx.media3.exoplayer.source.WrappingMediaSource
    protected void onChildSourceInfoRefreshed(final Timeline timeline) {
        super.onChildSourceInfoRefreshed(new ForwardingTimeline(timeline) { // from class: androidx.media3.transformer.SpeedChangingMediaSource.1
            @Override // androidx.media3.exoplayer.source.ForwardingTimeline, androidx.media3.common.Timeline
            public Timeline.Window getWindow(int i, Timeline.Window window, long j) {
                Timeline.Window window2 = timeline.getWindow(i, window, j);
                window2.durationUs = SpeedChangingMediaSource.this.durationUs;
                return window2;
            }

            @Override // androidx.media3.exoplayer.source.ForwardingTimeline, androidx.media3.common.Timeline
            public Timeline.Period getPeriod(int i, Timeline.Period period, boolean z) {
                Timeline.Period period2 = timeline.getPeriod(i, period, z);
                period2.durationUs = SpeedChangingMediaSource.this.durationUs;
                return period2;
            }
        });
    }

    static final class SpeedProviderMediaPeriod implements MediaPeriod, MediaPeriod.Callback {
        private MediaPeriod.Callback callback;
        public final MediaPeriod mediaPeriod;
        private final SpeedProviderMapper speedProviderMapper;

        public SpeedProviderMediaPeriod(MediaPeriod mediaPeriod, SpeedProvider speedProvider) {
            this.mediaPeriod = mediaPeriod;
            this.speedProviderMapper = new SpeedProviderMapper(speedProvider);
        }

        public MediaPeriod getWrappedMediaPeriod() {
            return this.mediaPeriod;
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public void prepare(MediaPeriod.Callback callback, long j) {
            this.callback = callback;
            this.mediaPeriod.prepare(this, this.speedProviderMapper.getOriginalTimeUs(j));
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public void maybeThrowPrepareError() throws IOException {
            this.mediaPeriod.maybeThrowPrepareError();
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public TrackGroupArray getTrackGroups() {
            return this.mediaPeriod.getTrackGroups();
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public List<StreamKey> getStreamKeys(List<ExoTrackSelection> list) {
            return this.mediaPeriod.getStreamKeys(list);
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public long selectTracks(ExoTrackSelection[] exoTrackSelectionArr, boolean[] zArr, SampleStream[] sampleStreamArr, boolean[] zArr2, long j) {
            SampleStream[] sampleStreamArr2 = new SampleStream[sampleStreamArr.length];
            int i = 0;
            while (true) {
                SampleStream childStream = null;
                if (i >= sampleStreamArr.length) {
                    break;
                }
                SpeedProviderMapperSampleStream speedProviderMapperSampleStream = (SpeedProviderMapperSampleStream) sampleStreamArr[i];
                if (speedProviderMapperSampleStream != null) {
                    childStream = speedProviderMapperSampleStream.getChildStream();
                }
                sampleStreamArr2[i] = childStream;
                i++;
            }
            long jSelectTracks = this.mediaPeriod.selectTracks(exoTrackSelectionArr, zArr, sampleStreamArr2, zArr2, this.speedProviderMapper.getOriginalTimeUs(j));
            for (int i2 = 0; i2 < sampleStreamArr.length; i2++) {
                SampleStream sampleStream = sampleStreamArr2[i2];
                if (sampleStream == null) {
                    sampleStreamArr[i2] = null;
                } else {
                    SampleStream sampleStream2 = sampleStreamArr[i2];
                    if (sampleStream2 == null || ((SpeedProviderMapperSampleStream) sampleStream2).getChildStream() != sampleStream) {
                        sampleStreamArr[i2] = new SpeedProviderMapperSampleStream(sampleStream, this.speedProviderMapper);
                    }
                }
            }
            return this.speedProviderMapper.getAdjustedTimeUs(jSelectTracks);
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public void discardBuffer(long j, boolean z) {
            this.mediaPeriod.discardBuffer(this.speedProviderMapper.getOriginalTimeUs(j), z);
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public long readDiscontinuity() {
            long discontinuity = this.mediaPeriod.readDiscontinuity();
            return discontinuity == C.TIME_UNSET ? C.TIME_UNSET : this.speedProviderMapper.getAdjustedTimeUs(discontinuity);
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public long seekToUs(long j) {
            SpeedProviderMapper speedProviderMapper = this.speedProviderMapper;
            return speedProviderMapper.getAdjustedTimeUs(this.mediaPeriod.seekToUs(speedProviderMapper.getOriginalTimeUs(j)));
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod
        public long getAdjustedSeekPositionUs(long j, SeekParameters seekParameters) {
            SpeedProviderMapper speedProviderMapper = this.speedProviderMapper;
            return speedProviderMapper.getAdjustedTimeUs(this.mediaPeriod.getAdjustedSeekPositionUs(speedProviderMapper.getOriginalTimeUs(j), seekParameters));
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod, androidx.media3.exoplayer.source.SequenceableLoader
        public long getBufferedPositionUs() {
            long bufferedPositionUs = this.mediaPeriod.getBufferedPositionUs();
            if (bufferedPositionUs == Long.MIN_VALUE) {
                return Long.MIN_VALUE;
            }
            return this.speedProviderMapper.getAdjustedTimeUs(bufferedPositionUs);
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod, androidx.media3.exoplayer.source.SequenceableLoader
        public long getNextLoadPositionUs() {
            long nextLoadPositionUs = this.mediaPeriod.getNextLoadPositionUs();
            if (nextLoadPositionUs == Long.MIN_VALUE) {
                return Long.MIN_VALUE;
            }
            return this.speedProviderMapper.getAdjustedTimeUs(nextLoadPositionUs);
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod, androidx.media3.exoplayer.source.SequenceableLoader
        public boolean continueLoading(LoadingInfo loadingInfo) {
            return this.mediaPeriod.continueLoading(loadingInfo.buildUpon().setPlaybackPositionUs(this.speedProviderMapper.getOriginalTimeUs(loadingInfo.playbackPositionUs)).build());
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod, androidx.media3.exoplayer.source.SequenceableLoader
        public boolean isLoading() {
            return this.mediaPeriod.isLoading();
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod, androidx.media3.exoplayer.source.SequenceableLoader
        public void reevaluateBuffer(long j) {
            this.mediaPeriod.reevaluateBuffer(this.speedProviderMapper.getOriginalTimeUs(j));
        }

        @Override // androidx.media3.exoplayer.source.MediaPeriod.Callback
        public void onPrepared(MediaPeriod mediaPeriod) {
            ((MediaPeriod.Callback) Assertions.checkNotNull(this.callback)).onPrepared(this);
        }

        @Override // androidx.media3.exoplayer.source.SequenceableLoader.Callback
        public void onContinueLoadingRequested(MediaPeriod mediaPeriod) {
            ((MediaPeriod.Callback) Assertions.checkNotNull(this.callback)).onContinueLoadingRequested(this);
        }

        private static final class SpeedProviderMapper {
            private final long[] inputSegmentStartTimesUs;
            private final long[] outputSegmentStartTimesUs;
            private final float[] speeds;

            public SpeedProviderMapper(SpeedProvider speedProvider) {
                LongArray longArray = new LongArray();
                LongArray longArray2 = new LongArray();
                ArrayList arrayList = new ArrayList();
                float speed = speedProvider.getSpeed(0L);
                longArray.add(0L);
                longArray2.add(0L);
                arrayList.add(Float.valueOf(speed));
                float speed2 = speed;
                long nextSpeedChangeTimeUs = speedProvider.getNextSpeedChangeTimeUs(0L);
                long j = 0;
                long j2 = 0;
                while (true) {
                    long j3 = nextSpeedChangeTimeUs;
                    if (j3 != C.TIME_UNSET) {
                        j += (long) ((j3 - j2) / speed2);
                        speed2 = speedProvider.getSpeed(j3);
                        longArray.add(j);
                        longArray2.add(j3);
                        arrayList.add(Float.valueOf(speed2));
                        nextSpeedChangeTimeUs = speedProvider.getNextSpeedChangeTimeUs(j3);
                        j2 = j3;
                    } else {
                        this.outputSegmentStartTimesUs = longArray.toArray();
                        this.inputSegmentStartTimesUs = longArray2.toArray();
                        this.speeds = Floats.toArray(arrayList);
                        return;
                    }
                }
            }

            public long getAdjustedTimeUs(long j) {
                int iBinarySearchFloor = Util.binarySearchFloor(this.inputSegmentStartTimesUs, j, true, true);
                return (long) (this.outputSegmentStartTimesUs[iBinarySearchFloor] + ((j - this.inputSegmentStartTimesUs[iBinarySearchFloor]) / this.speeds[iBinarySearchFloor]));
            }

            public long getOriginalTimeUs(long j) {
                int iBinarySearchFloor = Util.binarySearchFloor(this.outputSegmentStartTimesUs, j, true, true);
                return (long) (this.inputSegmentStartTimesUs[iBinarySearchFloor] + ((j - this.outputSegmentStartTimesUs[iBinarySearchFloor]) * this.speeds[iBinarySearchFloor]));
            }
        }

        private static final class SpeedProviderMapperSampleStream implements SampleStream {
            private final SampleStream sampleStream;
            private final SpeedProviderMapper speedProviderMapper;

            public SpeedProviderMapperSampleStream(SampleStream sampleStream, SpeedProviderMapper speedProviderMapper) {
                this.sampleStream = sampleStream;
                this.speedProviderMapper = speedProviderMapper;
            }

            public SampleStream getChildStream() {
                return this.sampleStream;
            }

            @Override // androidx.media3.exoplayer.source.SampleStream
            public boolean isReady() {
                return this.sampleStream.isReady();
            }

            @Override // androidx.media3.exoplayer.source.SampleStream
            public void maybeThrowError() throws IOException {
                this.sampleStream.maybeThrowError();
            }

            @Override // androidx.media3.exoplayer.source.SampleStream
            public int readData(FormatHolder formatHolder, DecoderInputBuffer decoderInputBuffer, int i) {
                int data = this.sampleStream.readData(formatHolder, decoderInputBuffer, i);
                if (data == -4) {
                    decoderInputBuffer.timeUs = this.speedProviderMapper.getAdjustedTimeUs(decoderInputBuffer.timeUs);
                }
                return data;
            }

            @Override // androidx.media3.exoplayer.source.SampleStream
            public int skipData(long j) {
                return this.sampleStream.skipData(this.speedProviderMapper.getOriginalTimeUs(j));
            }
        }
    }
}
