package androidx.media3.transformer;

import androidx.media3.common.ColorInfo;
import androidx.media3.common.Format;
import androidx.media3.common.Metadata;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import androidx.media3.decoder.DecoderInputBuffer;
import androidx.media3.exoplayer.mediacodec.MediaCodecUtil;
import androidx.media3.muxer.MuxerException;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import java.nio.ByteBuffer;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
abstract class SampleExporter {
    private final Metadata metadata;
    private final MuxerWrapper muxerWrapper;
    private boolean muxerWrapperTrackAdded;
    private final int outputTrackType;

    public abstract GraphInput getInput(EditedMediaItem editedMediaItem, Format format, int i) throws ExportException;

    protected abstract DecoderInputBuffer getMuxerInputBuffer() throws ExportException;

    protected abstract Format getMuxerInputFormat() throws ExportException;

    protected abstract boolean isMuxerInputEnded();

    protected boolean processDataUpToMuxer() throws ExportException {
        return false;
    }

    public abstract void release();

    protected abstract void releaseMuxerInputBuffer() throws ExportException;

    public SampleExporter(Format format, MuxerWrapper muxerWrapper) {
        this.muxerWrapper = muxerWrapper;
        this.metadata = format.metadata;
        this.outputTrackType = TransformerUtil.getProcessedTrackType(format.sampleMimeType);
    }

    public final boolean processData() throws ExportException {
        if (feedMuxer()) {
            return true;
        }
        return !isMuxerInputEnded() && processDataUpToMuxer();
    }

    private boolean feedMuxer() throws ExportException {
        if (!this.muxerWrapperTrackAdded) {
            Format muxerInputFormat = getMuxerInputFormat();
            if (muxerInputFormat == null) {
                return false;
            }
            if (this.metadata != null) {
                muxerInputFormat = muxerInputFormat.buildUpon().setMetadata(this.metadata).build();
            }
            if (!this.muxerWrapper.supportsSampleMimeType(muxerInputFormat.sampleMimeType)) {
                String alternativeCodecMimeType = MediaCodecUtil.getAlternativeCodecMimeType(muxerInputFormat);
                if (this.muxerWrapper.supportsSampleMimeType(alternativeCodecMimeType)) {
                    muxerInputFormat = muxerInputFormat.buildUpon().setSampleMimeType(alternativeCodecMimeType).build();
                }
            }
            try {
                this.muxerWrapper.addTrackFormat(muxerInputFormat);
                this.muxerWrapperTrackAdded = true;
            } catch (MuxerException e) {
                throw ExportException.createForMuxer(e, 7001);
            } catch (MuxerWrapper.AppendTrackFormatException e2) {
                throw ExportException.createForMuxer(e2, ExportException.ERROR_CODE_MUXING_APPEND);
            }
        }
        if (isMuxerInputEnded()) {
            this.muxerWrapper.endTrack(this.outputTrackType);
            return false;
        }
        DecoderInputBuffer muxerInputBuffer = getMuxerInputBuffer();
        if (muxerInputBuffer == null) {
            return false;
        }
        try {
            if (!this.muxerWrapper.writeSample(this.outputTrackType, (ByteBuffer) Assertions.checkStateNotNull(muxerInputBuffer.data), muxerInputBuffer.isKeyFrame(), muxerInputBuffer.timeUs)) {
                return false;
            }
            releaseMuxerInputBuffer();
            return true;
        } catch (MuxerException e3) {
            throw ExportException.createForMuxer(e3, 7001);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected static String findSupportedMimeTypeForEncoderAndMuxer(Format format, List<String> list) {
        boolean zIsVideo = MimeTypes.isVideo((String) Assertions.checkNotNull(format.sampleMimeType));
        ImmutableSet.Builder builderAdd = new ImmutableSet.Builder().add(format.sampleMimeType);
        if (zIsVideo) {
            builderAdd.add("video/hevc").add("video/avc");
        }
        builderAdd.addAll((Iterable) list);
        ImmutableList immutableListAsList = builderAdd.build().asList();
        for (int i = 0; i < immutableListAsList.size(); i++) {
            String str = (String) immutableListAsList.get(i);
            if (list.contains(str)) {
                if (zIsVideo && ColorInfo.isTransferHdr(format.colorInfo)) {
                    if (!EncoderUtil.getSupportedEncodersForHdrEditing(str, format.colorInfo).isEmpty()) {
                        return str;
                    }
                } else if (!EncoderUtil.getSupportedEncoders(str).isEmpty()) {
                    return str;
                }
            }
        }
        return null;
    }
}
