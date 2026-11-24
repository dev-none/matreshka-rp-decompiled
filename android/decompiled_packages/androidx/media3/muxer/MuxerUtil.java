package androidx.media3.muxer;

import android.media.MediaCodec;
import androidx.media3.common.Format;
import androidx.media3.common.Metadata;
import androidx.media3.common.util.Util;
import androidx.media3.container.MdtaMetadataEntry;
import androidx.media3.container.Mp4LocationData;
import androidx.media3.container.Mp4OrientationData;
import androidx.media3.container.Mp4TimestampData;
import androidx.media3.container.XmpData;
import com.google.common.primitives.Longs;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class MuxerUtil {
    public static final long UNSIGNED_INT_MAX_VALUE = 4294967295L;

    private MuxerUtil() {
    }

    public static boolean isMetadataSupported(Metadata.Entry entry) {
        if ((entry instanceof Mp4OrientationData) || (entry instanceof Mp4LocationData)) {
            return true;
        }
        if ((entry instanceof Mp4TimestampData) && isMp4TimestampDataSupported((Mp4TimestampData) entry)) {
            return true;
        }
        return ((entry instanceof MdtaMetadataEntry) && isMdtaMetadataEntrySupported((MdtaMetadataEntry) entry)) || (entry instanceof XmpData);
    }

    public static BufferInfo getMuxerBufferInfoFromMediaCodecBufferInfo(MediaCodec.BufferInfo bufferInfo) {
        return new BufferInfo(bufferInfo.presentationTimeUs, bufferInfo.size, Util.getBufferFlagsFromMediaCodecFlags(bufferInfo.flags));
    }

    static boolean isAuxiliaryTrack(Format format) {
        if ((format.roleFlags & 32768) > 0) {
            return format.auxiliaryTrackType == 1 || format.auxiliaryTrackType == 2 || format.auxiliaryTrackType == 3 || format.auxiliaryTrackType == 4;
        }
        return false;
    }

    static MdtaMetadataEntry getAuxiliaryTracksOffsetMetadata(long j) {
        return new MdtaMetadataEntry(MdtaMetadataEntry.KEY_AUXILIARY_TRACKS_OFFSET, Longs.toByteArray(j), 78);
    }

    static MdtaMetadataEntry getAuxiliaryTracksLengthMetadata(long j) {
        return new MdtaMetadataEntry(MdtaMetadataEntry.KEY_AUXILIARY_TRACKS_LENGTH, Longs.toByteArray(j), 78);
    }

    static void populateAuxiliaryTracksMetadata(MetadataCollector metadataCollector, Mp4TimestampData mp4TimestampData, boolean z, List<Track> list) {
        metadataCollector.addMetadata(mp4TimestampData);
        metadataCollector.addMetadata(getAuxiliaryTracksSamplesLocationMetadata(z));
        metadataCollector.addMetadata(getAuxiliaryTracksMapMetadata(list));
    }

    private static MdtaMetadataEntry getAuxiliaryTracksSamplesLocationMetadata(boolean z) {
        return new MdtaMetadataEntry(MdtaMetadataEntry.KEY_AUXILIARY_TRACKS_INTERLEAVED, new byte[]{z ? (byte) 1 : (byte) 0}, 75);
    }

    private static MdtaMetadataEntry getAuxiliaryTracksMapMetadata(List<Track> list) {
        int i;
        int size = list.size();
        byte[] bArr = new byte[size + 2];
        bArr[0] = 1;
        bArr[1] = (byte) size;
        for (int i2 = 0; i2 < size; i2++) {
            Track track = list.get(i2);
            int i3 = track.format.auxiliaryTrackType;
            if (i3 != 1) {
                i = 2;
                if (i3 == 2) {
                    i = 1;
                } else if (i3 == 3) {
                    continue;
                } else {
                    if (i3 != 4) {
                        throw new IllegalArgumentException("Unsupported auxiliary track type " + track.format.auxiliaryTrackType);
                    }
                    i = 3;
                }
            } else {
                i = 0;
            }
            bArr[i2 + 2] = (byte) i;
        }
        return new MdtaMetadataEntry(MdtaMetadataEntry.KEY_AUXILIARY_TRACKS_MAP, bArr, 0);
    }

    private static boolean isMdtaMetadataEntrySupported(MdtaMetadataEntry mdtaMetadataEntry) {
        return mdtaMetadataEntry.typeIndicator == 1 || mdtaMetadataEntry.typeIndicator == 23;
    }

    private static boolean isMp4TimestampDataSupported(Mp4TimestampData mp4TimestampData) {
        return mp4TimestampData.creationTimestampSeconds <= 4294967295L && mp4TimestampData.modificationTimestampSeconds <= 4294967295L;
    }
}
