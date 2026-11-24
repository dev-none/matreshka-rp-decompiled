package androidx.media3.muxer;

import android.util.Pair;
import androidx.media3.common.Format;
import androidx.media3.common.util.Assertions;
import androidx.media3.common.util.CodecSpecificDataUtil;
import androidx.media3.extractor.AacUtil;
import androidx.media3.extractor.OpusUtil;
import com.google.common.collect.ImmutableMap;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;

/* JADX INFO: loaded from: classes4.dex */
final class AacWriter {
    private static final int ADTS_HEADER_LENGTH = 7;
    private static final ImmutableMap<Integer, Integer> SAMPLE_RATE_TABLE_INDEX = ImmutableMap.ofEntries(AacWriter$$ExternalSyntheticBackport0.m(96000, 0), AacWriter$$ExternalSyntheticBackport0.m(88200, 1), AacWriter$$ExternalSyntheticBackport0.m(64000, 2), AacWriter$$ExternalSyntheticBackport0.m(Integer.valueOf(OpusUtil.SAMPLE_RATE), 3), AacWriter$$ExternalSyntheticBackport0.m(44100, 4), AacWriter$$ExternalSyntheticBackport0.m(32000, 5), AacWriter$$ExternalSyntheticBackport0.m(24000, 6), AacWriter$$ExternalSyntheticBackport0.m(22050, 7), AacWriter$$ExternalSyntheticBackport0.m(Integer.valueOf(AacUtil.AAC_HE_V1_MAX_RATE_BYTES_PER_SECOND), 8), AacWriter$$ExternalSyntheticBackport0.m(12000, 9), AacWriter$$ExternalSyntheticBackport0.m(11025, 10), AacWriter$$ExternalSyntheticBackport0.m(8000, 11), AacWriter$$ExternalSyntheticBackport0.m(7350, 12));
    private Format format;
    private final FileChannel outputFileChannel;
    private int profileCode;
    private int sampleFreqIndex;

    public AacWriter(FileOutputStream fileOutputStream) {
        this.outputFileChannel = fileOutputStream.getChannel();
    }

    public void setFormat(Format format) {
        Assertions.checkArgument(format.channelCount >= 1 && format.channelCount <= 7, "Channel count must be between 1 and 7, got " + format.channelCount);
        this.profileCode = ((Integer) ((Pair) Assertions.checkNotNull(CodecSpecificDataUtil.getCodecProfileAndLevel(format))).first).intValue();
        this.sampleFreqIndex = ((Integer) Assertions.checkNotNull(SAMPLE_RATE_TABLE_INDEX.get(Integer.valueOf(format.sampleRate)))).intValue();
        this.format = format;
    }

    public void writeSampleData(ByteBuffer byteBuffer, BufferInfo bufferInfo) throws IOException {
        this.outputFileChannel.write(createAdtsHeader(bufferInfo.size + 7));
        this.outputFileChannel.write(byteBuffer);
    }

    private ByteBuffer createAdtsHeader(int i) {
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(7);
        byteBufferAllocate.put((byte) -1);
        byteBufferAllocate.put((byte) -15);
        int i2 = ((Format) Assertions.checkNotNull(this.format)).channelCount;
        byteBufferAllocate.put((byte) ((this.profileCode << 6) | (this.sampleFreqIndex << 2) | (i2 >> 2)));
        byteBufferAllocate.put((byte) (((i2 & 3) << 6) | ((i & 6144) >> 11)));
        byteBufferAllocate.put((byte) ((i & 2040) >> 3));
        byteBufferAllocate.put((byte) (((i & 7) << 5) | 31));
        byteBufferAllocate.put((byte) 252);
        byteBufferAllocate.flip();
        return byteBufferAllocate;
    }
}
