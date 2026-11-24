package androidx.media3.transformer;

import androidx.media3.common.C;
import androidx.media3.common.Format;
import androidx.media3.common.Metadata;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Log;
import androidx.media3.container.Mp4OrientationData;
import androidx.media3.muxer.BufferInfo;
import androidx.media3.muxer.FragmentedMp4Muxer;
import androidx.media3.muxer.Muxer;
import androidx.media3.muxer.MuxerException;
import androidx.media3.muxer.MuxerUtil;
import com.google.common.collect.ImmutableList;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.nio.ByteBuffer;
import java.util.Locale;

/* JADX INFO: loaded from: classes4.dex */
public final class InAppFragmentedMp4Muxer implements Muxer {
    public static final String MUXER_NAME = "androidx.media3:media3-muxer:1.8.0";
    private static final String TAG = "InAppFragmentedMp4Muxer";
    private static final int TRACK_ID_UNSET = -1;
    private final FragmentedMp4Muxer muxer;
    private final long videoDurationUs;
    private int videoTrackId;

    public static final class Factory implements Muxer.Factory {
        private final long fragmentDurationMs;
        private long videoDurationUs;

        public Factory() {
            this(C.TIME_UNSET);
        }

        public Factory(long j) {
            this.fragmentDurationMs = j;
            this.videoDurationUs = C.TIME_UNSET;
        }

        public Factory setVideoDurationUs(long j) {
            this.videoDurationUs = j;
            return this;
        }

        @Override // androidx.media3.muxer.Muxer.Factory
        public InAppFragmentedMp4Muxer create(String str) throws MuxerException {
            try {
                FragmentedMp4Muxer.Builder builder = new FragmentedMp4Muxer.Builder(new FileOutputStream(str));
                long j = this.fragmentDurationMs;
                if (j != C.TIME_UNSET) {
                    builder.setFragmentDurationMs(j);
                }
                return new InAppFragmentedMp4Muxer(builder.build(), this.videoDurationUs);
            } catch (FileNotFoundException e) {
                throw new MuxerException("Error creating file output stream", e);
            }
        }

        @Override // androidx.media3.muxer.Muxer.Factory
        public ImmutableList<String> getSupportedSampleMimeTypes(int i) {
            if (i == 2) {
                return FragmentedMp4Muxer.SUPPORTED_VIDEO_SAMPLE_MIME_TYPES;
            }
            if (i == 1) {
                return FragmentedMp4Muxer.SUPPORTED_AUDIO_SAMPLE_MIME_TYPES;
            }
            return ImmutableList.of();
        }
    }

    private InAppFragmentedMp4Muxer(FragmentedMp4Muxer fragmentedMp4Muxer, long j) {
        this.muxer = fragmentedMp4Muxer;
        this.videoDurationUs = j;
        this.videoTrackId = -1;
    }

    @Override // androidx.media3.muxer.Muxer
    public int addTrack(Format format) {
        int iAddTrack = this.muxer.addTrack(format);
        if (MimeTypes.isVideo(format.sampleMimeType)) {
            this.muxer.addMetadataEntry(new Mp4OrientationData(format.rotationDegrees));
            this.videoTrackId = iAddTrack;
        }
        return iAddTrack;
    }

    @Override // androidx.media3.muxer.Muxer
    public void writeSampleData(int i, ByteBuffer byteBuffer, BufferInfo bufferInfo) throws MuxerException {
        if (this.videoDurationUs != C.TIME_UNSET && i == this.videoTrackId && bufferInfo.presentationTimeUs > this.videoDurationUs) {
            Log.w(TAG, String.format(Locale.US, "Skipped sample with presentation time (%d) > video duration (%d)", Long.valueOf(bufferInfo.presentationTimeUs), Long.valueOf(this.videoDurationUs)));
        } else {
            this.muxer.writeSampleData(i, byteBuffer, bufferInfo);
        }
    }

    @Override // androidx.media3.muxer.Muxer
    public void addMetadataEntry(Metadata.Entry entry) {
        if (MuxerUtil.isMetadataSupported(entry)) {
            this.muxer.addMetadataEntry(entry);
        }
    }

    @Override // androidx.media3.muxer.Muxer, java.lang.AutoCloseable
    public void close() throws MuxerException {
        if (this.videoDurationUs != C.TIME_UNSET && this.videoTrackId != -1) {
            writeSampleData(this.videoTrackId, ByteBuffer.allocateDirect(0), new BufferInfo(this.videoDurationUs, 0, 4));
        }
        this.muxer.close();
    }
}
