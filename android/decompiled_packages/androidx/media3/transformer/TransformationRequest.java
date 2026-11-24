package androidx.media3.transformer;

import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import java.util.Objects;

/* JADX INFO: loaded from: classes4.dex */
public final class TransformationRequest {
    public final String audioMimeType;
    public final int hdrMode;
    public final int outputHeight;
    public final String videoMimeType;

    public static final class Builder {
        private String audioMimeType;
        private int hdrMode;
        private int outputHeight;
        private String videoMimeType;

        public Builder() {
            this.outputHeight = -1;
        }

        private Builder(TransformationRequest transformationRequest) {
            this.outputHeight = transformationRequest.outputHeight;
            this.audioMimeType = transformationRequest.audioMimeType;
            this.videoMimeType = transformationRequest.videoMimeType;
            this.hdrMode = transformationRequest.hdrMode;
        }

        public Builder setVideoMimeType(String str) {
            String strNormalizeMimeType = MimeTypes.normalizeMimeType(str);
            Assertions.checkArgument(strNormalizeMimeType == null || MimeTypes.isVideo(strNormalizeMimeType), "Not a video MIME type: " + strNormalizeMimeType);
            this.videoMimeType = strNormalizeMimeType;
            return this;
        }

        public Builder setAudioMimeType(String str) {
            String strNormalizeMimeType = MimeTypes.normalizeMimeType(str);
            Assertions.checkArgument(strNormalizeMimeType == null || MimeTypes.isAudio(strNormalizeMimeType), "Not an audio MIME type: " + strNormalizeMimeType);
            this.audioMimeType = strNormalizeMimeType;
            return this;
        }

        public Builder setHdrMode(int i) {
            this.hdrMode = i;
            return this;
        }

        Builder setResolution(int i) {
            this.outputHeight = i;
            return this;
        }

        public TransformationRequest build() {
            return new TransformationRequest(this.outputHeight, this.audioMimeType, this.videoMimeType, this.hdrMode);
        }
    }

    private TransformationRequest(int i, String str, String str2, int i2) {
        this.outputHeight = i;
        this.audioMimeType = str;
        this.videoMimeType = str2;
        this.hdrMode = i2;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof TransformationRequest)) {
            return false;
        }
        TransformationRequest transformationRequest = (TransformationRequest) obj;
        return this.outputHeight == transformationRequest.outputHeight && Objects.equals(this.audioMimeType, transformationRequest.audioMimeType) && Objects.equals(this.videoMimeType, transformationRequest.videoMimeType) && this.hdrMode == transformationRequest.hdrMode;
    }

    public int hashCode() {
        int i = this.outputHeight * 31;
        String str = this.audioMimeType;
        int iHashCode = (i + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.videoMimeType;
        return ((iHashCode + (str2 != null ? str2.hashCode() : 0)) * 31) + this.hdrMode;
    }

    public String toString() {
        return "TransformationRequest{outputHeight=" + this.outputHeight + ", audioMimeType='" + this.audioMimeType + "', videoMimeType='" + this.videoMimeType + "', hdrMode=" + this.hdrMode + '}';
    }

    public Builder buildUpon() {
        return new Builder();
    }
}
