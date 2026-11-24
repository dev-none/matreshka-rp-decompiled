package androidx.media3.transformer;

import androidx.media3.common.C;
import androidx.media3.common.Format;
import androidx.media3.common.Metadata;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Log;
import androidx.media3.container.Mp4OrientationData;
import androidx.media3.muxer.BufferInfo;
import androidx.media3.muxer.Mp4Muxer;
import androidx.media3.muxer.Muxer;
import androidx.media3.muxer.MuxerException;
import androidx.media3.muxer.MuxerUtil;
import com.google.common.collect.ImmutableList;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.nio.ByteBuffer;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Locale;
import java.util.Set;

/* JADX INFO: loaded from: classes4.dex */
public final class InAppMp4Muxer implements Muxer {
    public static final String MUXER_NAME = "androidx.media3:media3-muxer:1.8.0";
    private static final String TAG = "InAppMp4Muxer";
    private static final int TRACK_ID_UNSET = -1;
    private final Set<Metadata.Entry> metadataEntries;
    private final MetadataProvider metadataProvider;
    private final Mp4Muxer muxer;
    private final long videoDurationUs;
    private int videoTrackId;

    public interface MetadataProvider {
        void updateMetadataEntries(Set<Metadata.Entry> set);
    }

    public static final class Factory implements Muxer.Factory {
        private final MetadataProvider metadataProvider;
        private long videoDurationUs;

        @Override // androidx.media3.muxer.Muxer.Factory
        public boolean supportsWritingNegativeTimestampsInEditList() {
            return true;
        }

        public Factory() {
            this(null);
        }

        public Factory(MetadataProvider metadataProvider) {
            this.metadataProvider = metadataProvider;
            this.videoDurationUs = C.TIME_UNSET;
        }

        public Factory setVideoDurationUs(long j) {
            this.videoDurationUs = j;
            return this;
        }

        @Override // androidx.media3.muxer.Muxer.Factory
        public InAppMp4Muxer create(String str) throws MuxerException {
            try {
                return new InAppMp4Muxer(new Mp4Muxer.Builder(new FileOutputStream(str)).build(), this.metadataProvider, this.videoDurationUs);
            } catch (FileNotFoundException e) {
                throw new MuxerException("Error creating file output stream", e);
            }
        }

        @Override // androidx.media3.muxer.Muxer.Factory
        public ImmutableList<String> getSupportedSampleMimeTypes(int i) {
            if (i == 2) {
                return Mp4Muxer.SUPPORTED_VIDEO_SAMPLE_MIME_TYPES;
            }
            if (i == 1) {
                return Mp4Muxer.SUPPORTED_AUDIO_SAMPLE_MIME_TYPES;
            }
            return ImmutableList.of();
        }
    }

    private InAppMp4Muxer(Mp4Muxer mp4Muxer, MetadataProvider metadataProvider, long j) {
        this.muxer = mp4Muxer;
        this.metadataProvider = metadataProvider;
        this.videoDurationUs = j;
        this.metadataEntries = new LinkedHashSet();
        this.videoTrackId = -1;
    }

    @Override // androidx.media3.muxer.Muxer
    public int addTrack(Format format) throws MuxerException {
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
            this.metadataEntries.add(entry);
        }
    }

    @Override // androidx.media3.muxer.Muxer, java.lang.AutoCloseable
    public void close() throws MuxerException {
        if (this.videoDurationUs != C.TIME_UNSET && this.videoTrackId != -1) {
            writeSampleData(this.videoTrackId, ByteBuffer.allocateDirect(0), new BufferInfo(this.videoDurationUs, 0, 4));
        }
        writeMetadata();
        this.muxer.close();
    }

    private void writeMetadata() {
        if (this.metadataProvider != null) {
            LinkedHashSet linkedHashSet = new LinkedHashSet(this.metadataEntries);
            this.metadataProvider.updateMetadataEntries(linkedHashSet);
            this.metadataEntries.clear();
            this.metadataEntries.addAll(linkedHashSet);
        }
        Iterator<Metadata.Entry> it = this.metadataEntries.iterator();
        while (it.hasNext()) {
            this.muxer.addMetadataEntry(it.next());
        }
    }
}
