package androidx.media3.muxer;

import androidx.media3.common.Format;
import androidx.media3.common.Metadata;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.Log;
import androidx.media3.container.MdtaMetadataEntry;
import com.google.common.collect.ImmutableList;
import com.google.common.io.ByteStreams;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import java.util.ArrayList;
import java.util.List;
import org.checkerframework.checker.nullness.qual.EnsuresNonNull;

/* JADX INFO: loaded from: classes4.dex */
public final class Mp4Muxer implements Muxer {
    public static final int FILE_FORMAT_DEFAULT = 0;
    public static final int FILE_FORMAT_MP4_WITH_AUXILIARY_TRACKS_EXTENSION = 1;
    public static final int LAST_SAMPLE_DURATION_BEHAVIOR_SET_FROM_END_OF_STREAM_BUFFER_OR_DUPLICATE_PREVIOUS = 1;
    public static final int LAST_SAMPLE_DURATION_BEHAVIOR_SET_TO_ZERO = 0;
    private static final String TAG = "Mp4Muxer";
    private final AnnexBToAvccConverter annexBToAvccConverter;
    private final boolean attemptStreamableOutputEnabled;
    private final List<Track> auxiliaryTracks;
    private MetadataCollector auxiliaryTracksMetadataCollector;
    private Mp4Writer auxiliaryTracksMp4Writer;
    private FileOutputStream cacheFileOutputStream;
    private String cacheFilePath;
    private final int freeSpaceAfterFtypInBytes;
    private final int lastSampleDurationBehavior;
    private final MetadataCollector metadataCollector;
    private final Mp4AtFileParameters mp4AtFileParameters;
    private final Mp4Writer mp4Writer;
    private int nextTrackId;
    private final FileChannel outputChannel;
    private final int outputFileFormat;
    private final FileOutputStream outputStream;
    private final boolean sampleBatchingEnabled;
    private final boolean sampleCopyEnabled;
    private final List<Track> trackIdToTrack;
    public static final ImmutableList<String> SUPPORTED_VIDEO_SAMPLE_MIME_TYPES = ImmutableList.of("video/av01", MimeTypes.VIDEO_H263, "video/avc", "video/hevc", MimeTypes.VIDEO_MP4V, MimeTypes.VIDEO_VP9, MimeTypes.VIDEO_APV, MimeTypes.VIDEO_DOLBY_VISION);
    public static final ImmutableList<String> SUPPORTED_AUDIO_SAMPLE_MIME_TYPES = ImmutableList.of(MimeTypes.AUDIO_AAC, MimeTypes.AUDIO_AMR_NB, MimeTypes.AUDIO_AMR_WB, MimeTypes.AUDIO_OPUS, MimeTypes.AUDIO_VORBIS, MimeTypes.AUDIO_RAW);

    @Target({ElementType.TYPE_USE})
    @Documented
    @Retention(RetentionPolicy.SOURCE)
    public @interface FileFormat {
    }

    @Target({ElementType.TYPE_USE})
    @Documented
    @Retention(RetentionPolicy.SOURCE)
    public @interface LastSampleDurationBehavior {
    }

    public static final class Mp4AtFileParameters {
        public final CacheFileProvider cacheFileProvider;
        public final boolean shouldInterleaveSamples;

        public interface CacheFileProvider {
            String getCacheFilePath();
        }

        public Mp4AtFileParameters(boolean z, CacheFileProvider cacheFileProvider) {
            Assertions.checkArgument(z || cacheFileProvider != null);
            this.shouldInterleaveSamples = z;
            this.cacheFileProvider = cacheFileProvider;
        }
    }

    public static final class Builder {
        private AnnexBToAvccConverter annexBToAvccConverter;
        private int freeSpaceAfterFtypInBytes;
        private Mp4AtFileParameters mp4AtFileParameters;
        private final FileOutputStream outputStream;
        private boolean sampleBatchingEnabled;
        private boolean sampleCopyEnabled;
        private int lastSampleDurationBehavior = 1;
        private boolean attemptStreamableOutputEnabled = true;
        private int outputFileFormat = 0;

        public Builder(FileOutputStream fileOutputStream) {
            this.outputStream = fileOutputStream;
        }

        public Builder setLastSampleDurationBehavior(int i) {
            this.lastSampleDurationBehavior = i;
            return this;
        }

        public Builder setAnnexBToAvccConverter(AnnexBToAvccConverter annexBToAvccConverter) {
            this.annexBToAvccConverter = annexBToAvccConverter;
            return this;
        }

        public Builder setSampleCopyingEnabled(boolean z) {
            this.sampleCopyEnabled = z;
            return this;
        }

        public Builder setSampleBatchingEnabled(boolean z) {
            this.sampleBatchingEnabled = z;
            return this;
        }

        public Builder setAttemptStreamableOutputEnabled(boolean z) {
            this.attemptStreamableOutputEnabled = z;
            return this;
        }

        public Builder setOutputFileFormat(int i) {
            this.outputFileFormat = i;
            return this;
        }

        public Builder setMp4AtFileParameters(Mp4AtFileParameters mp4AtFileParameters) {
            this.mp4AtFileParameters = mp4AtFileParameters;
            return this;
        }

        public Builder experimentalSetFreeSpaceAfterFileTypeBox(int i) {
            Assertions.checkArgument(i >= 0);
            this.freeSpaceAfterFtypInBytes = i;
            return this;
        }

        public Mp4Muxer build() {
            boolean z = false;
            if (this.outputFileFormat != 1 ? this.mp4AtFileParameters == null : this.mp4AtFileParameters != null) {
                z = true;
            }
            Assertions.checkArgument(z, "Mp4AtFileParameters must be set for FILE_FORMAT_MP4_WITH_AUXILIARY_TRACKS_EXTENSION");
            FileOutputStream fileOutputStream = this.outputStream;
            int i = this.lastSampleDurationBehavior;
            AnnexBToAvccConverter annexBToAvccConverter = this.annexBToAvccConverter;
            if (annexBToAvccConverter == null) {
                annexBToAvccConverter = AnnexBToAvccConverter.DEFAULT;
            }
            return new Mp4Muxer(fileOutputStream, i, annexBToAvccConverter, this.sampleCopyEnabled, this.sampleBatchingEnabled, this.attemptStreamableOutputEnabled, this.outputFileFormat, this.mp4AtFileParameters, this.freeSpaceAfterFtypInBytes);
        }
    }

    private Mp4Muxer(FileOutputStream fileOutputStream, int i, AnnexBToAvccConverter annexBToAvccConverter, boolean z, boolean z2, boolean z3, int i2, Mp4AtFileParameters mp4AtFileParameters, int i3) {
        this.outputStream = fileOutputStream;
        FileChannel channel = fileOutputStream.getChannel();
        this.outputChannel = channel;
        this.lastSampleDurationBehavior = i;
        this.annexBToAvccConverter = annexBToAvccConverter;
        this.sampleCopyEnabled = z2 && z;
        this.sampleBatchingEnabled = z2;
        this.attemptStreamableOutputEnabled = z3;
        this.outputFileFormat = i2;
        this.mp4AtFileParameters = mp4AtFileParameters;
        this.freeSpaceAfterFtypInBytes = i3;
        MetadataCollector metadataCollector = new MetadataCollector();
        this.metadataCollector = metadataCollector;
        this.mp4Writer = new Mp4Writer(channel, metadataCollector, annexBToAvccConverter, i, z, z2, z3, i3);
        this.trackIdToTrack = new ArrayList();
        this.auxiliaryTracks = new ArrayList();
    }

    @Override // androidx.media3.muxer.Muxer
    public int addTrack(Format format) throws MuxerException {
        return addTrack(1, format);
    }

    public int addTrack(int i, Format format) throws MuxerException {
        Track trackAddTrack;
        if (this.outputFileFormat == 1 && MuxerUtil.isAuxiliaryTrack(format)) {
            if (((Mp4AtFileParameters) Assertions.checkNotNull(this.mp4AtFileParameters)).shouldInterleaveSamples) {
                Mp4Writer mp4Writer = this.mp4Writer;
                int i2 = this.nextTrackId;
                this.nextTrackId = i2 + 1;
                trackAddTrack = mp4Writer.addAuxiliaryTrack(i2, i, format);
            } else {
                try {
                    ensureSetupForAuxiliaryTracks();
                    Mp4Writer mp4Writer2 = this.auxiliaryTracksMp4Writer;
                    int i3 = this.nextTrackId;
                    this.nextTrackId = i3 + 1;
                    trackAddTrack = mp4Writer2.addTrack(i3, i, format);
                    this.auxiliaryTracks.add(trackAddTrack);
                } catch (FileNotFoundException e) {
                    throw new MuxerException("Cache file not found", e);
                }
            }
        } else {
            Mp4Writer mp4Writer3 = this.mp4Writer;
            int i4 = this.nextTrackId;
            this.nextTrackId = i4 + 1;
            trackAddTrack = mp4Writer3.addTrack(i4, i, format);
        }
        this.trackIdToTrack.add(trackAddTrack);
        return trackAddTrack.id;
    }

    @Override // androidx.media3.muxer.Muxer
    public void writeSampleData(int i, ByteBuffer byteBuffer, BufferInfo bufferInfo) throws MuxerException {
        Track track = this.trackIdToTrack.get(i);
        try {
            if (this.auxiliaryTracks.contains(track)) {
                ((Mp4Writer) Assertions.checkNotNull(this.auxiliaryTracksMp4Writer)).writeSampleData(track, byteBuffer, bufferInfo);
            } else {
                this.mp4Writer.writeSampleData(track, byteBuffer, bufferInfo);
            }
        } catch (IOException e) {
            throw new MuxerException("Failed to write sample for presentationTimeUs=" + bufferInfo.presentationTimeUs + ", size=" + bufferInfo.size, e);
        }
    }

    @Override // androidx.media3.muxer.Muxer
    public void addMetadataEntry(Metadata.Entry entry) {
        Assertions.checkArgument(MuxerUtil.isMetadataSupported(entry), "Unsupported metadata");
        this.metadataCollector.addMetadata(entry);
    }

    @Override // androidx.media3.muxer.Muxer, java.lang.AutoCloseable
    public void close() throws MuxerException {
        MuxerException muxerException;
        try {
            finishWritingAuxiliaryTracks();
            finishWritingPrimaryVideoTracks();
            appendAuxiliaryTracksDataToTheOutputFile();
            muxerException = null;
        } catch (IOException e) {
            muxerException = new MuxerException("Failed to finish writing data", e);
        }
        try {
            this.outputStream.close();
        } catch (IOException e2) {
            if (muxerException == null) {
                muxerException = new MuxerException("Failed to close output stream", e2);
            } else {
                Log.e(TAG, "Failed to close output stream", e2);
            }
        }
        FileOutputStream fileOutputStream = this.cacheFileOutputStream;
        if (fileOutputStream != null) {
            try {
                fileOutputStream.close();
            } catch (IOException e3) {
                if (muxerException != null) {
                    Log.e(TAG, "Failed to close cache file output stream", e3);
                } else {
                    muxerException = new MuxerException("Failed to close the cache file output stream", e3);
                }
            }
        }
        if (muxerException != null) {
            throw muxerException;
        }
    }

    @EnsuresNonNull({"auxiliaryTracksMp4Writer"})
    private void ensureSetupForAuxiliaryTracks() throws FileNotFoundException {
        if (this.auxiliaryTracksMp4Writer == null) {
            this.cacheFilePath = ((Mp4AtFileParameters.CacheFileProvider) Assertions.checkNotNull(((Mp4AtFileParameters) Assertions.checkNotNull(this.mp4AtFileParameters)).cacheFileProvider)).getCacheFilePath();
            this.cacheFileOutputStream = new FileOutputStream(this.cacheFilePath);
            this.auxiliaryTracksMetadataCollector = new MetadataCollector();
            this.auxiliaryTracksMp4Writer = new Mp4Writer(this.cacheFileOutputStream.getChannel(), (MetadataCollector) Assertions.checkNotNull(this.auxiliaryTracksMetadataCollector), this.annexBToAvccConverter, this.lastSampleDurationBehavior, this.sampleCopyEnabled, this.sampleBatchingEnabled, this.attemptStreamableOutputEnabled, this.freeSpaceAfterFtypInBytes);
        }
    }

    private void finishWritingAuxiliaryTracks() throws IOException {
        if (this.auxiliaryTracksMp4Writer == null) {
            return;
        }
        MuxerUtil.populateAuxiliaryTracksMetadata((MetadataCollector) Assertions.checkNotNull(this.auxiliaryTracksMetadataCollector), this.metadataCollector.timestampData, false, this.auxiliaryTracks);
        ((Mp4Writer) Assertions.checkNotNull(this.auxiliaryTracksMp4Writer)).finishWritingSamplesAndFinalizeMoovBox();
    }

    private void finishWritingPrimaryVideoTracks() throws IOException {
        MdtaMetadataEntry auxiliaryTracksOffsetMetadata = MuxerUtil.getAuxiliaryTracksOffsetMetadata(0L);
        if (this.auxiliaryTracksMp4Writer != null) {
            this.metadataCollector.addMetadata(MuxerUtil.getAuxiliaryTracksLengthMetadata(((FileOutputStream) Assertions.checkNotNull(this.cacheFileOutputStream)).getChannel().size() + 16));
            this.metadataCollector.addMetadata(auxiliaryTracksOffsetMetadata);
        }
        this.mp4Writer.finishWritingSamplesAndFinalizeMoovBox();
        if (this.auxiliaryTracksMp4Writer != null) {
            long size = this.outputChannel.size();
            this.metadataCollector.removeMdtaMetadataEntry(auxiliaryTracksOffsetMetadata);
            this.metadataCollector.addMetadata(MuxerUtil.getAuxiliaryTracksOffsetMetadata(size));
            this.mp4Writer.finalizeMoovBox();
            Assertions.checkState(this.outputChannel.size() == size, "The auxiliary tracks offset should remain the same");
        }
    }

    private void appendAuxiliaryTracksDataToTheOutputFile() throws IOException {
        if (this.auxiliaryTracksMp4Writer == null) {
            return;
        }
        FileChannel fileChannel = this.outputChannel;
        fileChannel.position(fileChannel.size());
        FileInputStream fileInputStream = new FileInputStream((String) Assertions.checkNotNull(this.cacheFilePath));
        this.outputChannel.write(Boxes.getAxteBoxHeader(fileInputStream.getChannel().size()));
        ByteStreams.copy(fileInputStream, this.outputStream);
        fileInputStream.close();
    }
}
