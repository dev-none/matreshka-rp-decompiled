package androidx.media3.transformer;

import android.media.metrics.LogSessionId;
import android.view.Surface;
import androidx.media3.common.Format;

/* JADX INFO: loaded from: classes4.dex */
final class CapturingDecoderFactory implements Codec.DecoderFactory {
    private String audioDecoderName;
    private final Codec.DecoderFactory decoderFactory;
    private String videoDecoderName;

    public CapturingDecoderFactory(Codec.DecoderFactory decoderFactory) {
        this.decoderFactory = decoderFactory;
    }

    @Override // androidx.media3.transformer.Codec.DecoderFactory
    public Codec createForAudioDecoding(Format format, LogSessionId logSessionId) throws ExportException {
        Codec codecCreateForAudioDecoding = this.decoderFactory.createForAudioDecoding(format, logSessionId);
        this.audioDecoderName = codecCreateForAudioDecoding.getName();
        return codecCreateForAudioDecoding;
    }

    @Override // androidx.media3.transformer.Codec.DecoderFactory
    public Codec createForVideoDecoding(Format format, Surface surface, boolean z, LogSessionId logSessionId) throws ExportException {
        Codec codecCreateForVideoDecoding = this.decoderFactory.createForVideoDecoding(format, surface, z, logSessionId);
        this.videoDecoderName = codecCreateForVideoDecoding.getName();
        return codecCreateForVideoDecoding;
    }

    public String getAudioDecoderName() {
        return this.audioDecoderName;
    }

    public String getVideoDecoderName() {
        return this.videoDecoderName;
    }
}
