package androidx.media3.transformer;

import android.os.Build;
import androidx.media3.common.Format;
import androidx.media3.common.MimeTypes;
import androidx.media3.common.util.Assertions;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableListMultimap;
import com.google.common.primitives.Ints;
import java.util.Objects;

/* JADX INFO: loaded from: classes4.dex */
public final class CodecDbLite {
    private static final ImmutableListMultimap<Chipset, VideoEncoderEntry> ENCODER_DATASET;
    private static final VideoEncoderEntry ENCODER_DEFAULT = new VideoEncoderEntry("video/avc", 0, 0, 0);

    static {
        int i = 0;
        int i2 = 1;
        int i3 = 0;
        int i4 = 0;
        int i5 = 1;
        int i6 = 0;
        int i7 = 0;
        int i8 = 1;
        int i9 = 1;
        int i10 = 497664000;
        int i11 = 0;
        int i12 = 0;
        int i13 = 0;
        int i14 = 0;
        int i15 = 0;
        ENCODER_DATASET = ImmutableListMultimap.builder().put(new Chipset("Google", "Tensor G2"), new VideoEncoderEntry("video/hevc", i2, 37538929, i)).put(new Chipset("Google", "Tensor G2"), new VideoEncoderEntry("video/avc", i2, 32739600, i)).put(new Chipset("Google", "Tensor G3"), new VideoEncoderEntry("video/hevc", i2, 37538350, i)).put(new Chipset("Google", "Tensor G3"), new VideoEncoderEntry("video/avc", i2, 32750593, i)).put(new Chipset("Google", "Tensor G4"), new VideoEncoderEntry("video/av01", i2, 32844500, i)).put(new Chipset("Google", "Tensor G4"), new VideoEncoderEntry("video/hevc", i2, 51851802, i)).put(new Chipset("Google", "Tensor G4"), new VideoEncoderEntry("video/avc", i2, 44206216, i)).put(new Chipset("Mediatek", "MT6761"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6762"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6765"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6769T"), new VideoEncoderEntry("video/hevc", i3, i4, i)).put(new Chipset("Mediatek", "MT6769T"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6769Z"), new VideoEncoderEntry("video/hevc", i3, i4, i)).put(new Chipset("Mediatek", "MT6769Z"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6785"), new VideoEncoderEntry("video/hevc", i3, i4, i)).put(new Chipset("Mediatek", "MT6785"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6789V/CD"), new VideoEncoderEntry("video/hevc", i3, i4, i)).put(new Chipset("Mediatek", "MT6789V/CD"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6833V/NZA"), new VideoEncoderEntry("video/hevc", i3, i4, i)).put(new Chipset("Mediatek", "MT6833V/NZA"), new VideoEncoderEntry("video/avc", i3, i4, i)).put(new Chipset("Mediatek", "MT6893"), new VideoEncoderEntry("video/hevc", i5, 34028841, i)).put(new Chipset("Mediatek", "MT6893"), new VideoEncoderEntry("video/avc", i5, 457499715, i)).put(new Chipset("Mediatek", "MT6983"), new VideoEncoderEntry("video/hevc", i5, 36134374, i)).put(new Chipset("Mediatek", "MT6983"), new VideoEncoderEntry("video/avc", i5, 189533581, i)).put(new Chipset("QTI", "SDM450"), new VideoEncoderEntry("video/avc", i6, i7, i)).put(new Chipset("QTI", "SM4350"), new VideoEncoderEntry("video/hevc", i6, i7, i)).put(new Chipset("QTI", "SM4350"), new VideoEncoderEntry("video/avc", i6, i7, i)).put(new Chipset("QTI", "SM6125"), new VideoEncoderEntry("video/hevc", i6, i7, i)).put(new Chipset("QTI", "SM6125"), new VideoEncoderEntry("video/avc", i6, i7, i)).put(new Chipset("QTI", "SM6225"), new VideoEncoderEntry("video/hevc", i6, i7, i)).put(new Chipset("QTI", "SM6225"), new VideoEncoderEntry("video/avc", i6, i7, i)).put(new Chipset("QTI", "SM6375"), new VideoEncoderEntry("video/hevc", i6, i7, i)).put(new Chipset("QTI", "SM6375"), new VideoEncoderEntry("video/avc", i6, i7, i)).put(new Chipset("QTI", "SM8250"), new VideoEncoderEntry("video/hevc", i6, i7, i)).put(new Chipset("QTI", "SM8250"), new VideoEncoderEntry("video/avc", i6, i7, i)).put(new Chipset("QTI", "SM8350"), new VideoEncoderEntry("video/hevc", i6, i7, i)).put(new Chipset("QTI", "SM8350"), new VideoEncoderEntry("video/avc", i6, i7, i)).put(new Chipset("QTI", "SM8450"), new VideoEncoderEntry("video/hevc", i9, i10, i8)).put(new Chipset("QTI", "SM8450"), new VideoEncoderEntry("video/avc", i9, i10, i8)).put(new Chipset("QTI", "SM8475"), new VideoEncoderEntry("video/hevc", i9, i10, i8)).put(new Chipset("QTI", "SM8475"), new VideoEncoderEntry("video/avc", i9, i10, i8)).put(new Chipset("QTI", "SM8550"), new VideoEncoderEntry("video/hevc", i9, i10, i8)).put(new Chipset("QTI", "SM8550"), new VideoEncoderEntry("video/avc", i9, 110196681, i8)).put(new Chipset("QTI", "SM8650"), new VideoEncoderEntry("video/hevc", i9, 34344411, i8)).put(new Chipset("QTI", "SM8650"), new VideoEncoderEntry("video/avc", i9, 132451733, i8)).put(new Chipset("QTI", "SM8750"), new VideoEncoderEntry("video/hevc", i9, 52435727, i8)).put(new Chipset("QTI", "SM8750"), new VideoEncoderEntry("video/avc", i9, 159007069, i8)).put(new Chipset("Samsung", "Exynos 850"), new VideoEncoderEntry("video/hevc", i12, i13, i11)).put(new Chipset("Samsung", "Exynos 850"), new VideoEncoderEntry("video/avc", i12, i13, i11)).put(new Chipset("Samsung", "s5e8825"), new VideoEncoderEntry("video/hevc", i12, i13, i11)).put(new Chipset("Samsung", "s5e8825"), new VideoEncoderEntry("video/avc", i12, i13, i11)).put(new Chipset("Samsung", "s5e9925"), new VideoEncoderEntry("video/hevc", 1, 51506898, i11)).put(new Chipset("Samsung", "s5e9925"), new VideoEncoderEntry("video/avc", 2, 40856748, i11)).put(new Chipset("Spreadtrum", "SC9863A"), new VideoEncoderEntry("video/avc", i14, i15, i11)).put(new Chipset("Spreadtrum", "SC9863A"), new VideoEncoderEntry("video/hevc", i14, i15, i11)).put(new Chipset("Spreadtrum", "T606"), new VideoEncoderEntry("video/avc", i14, i15, i11)).put(new Chipset("Spreadtrum", "T606"), new VideoEncoderEntry("video/hevc", i14, i15, i11)).build();
    }

    private CodecDbLite() {
    }

    public static String getRecommendedVideoMimeType() {
        Chipset chipsetCurrent = Chipset.current();
        if (!chipsetCurrent.equals(Chipset.UNKNOWN)) {
            ImmutableListMultimap<Chipset, VideoEncoderEntry> immutableListMultimap = ENCODER_DATASET;
            return !immutableListMultimap.containsKey(chipsetCurrent) ? ENCODER_DEFAULT.mimeType : immutableListMultimap.get(chipsetCurrent).get(0).mimeType;
        }
        return ENCODER_DEFAULT.mimeType;
    }

    public static VideoEncoderSettings getRecommendedVideoEncoderSettings(Format format) {
        VideoEncoderEntry videoEncoderEntry;
        Assertions.checkArgument(MimeTypes.isVideo(format.sampleMimeType), "MIME must be a video MIME type.");
        Chipset chipsetCurrent = Chipset.current();
        ImmutableListMultimap<Chipset, VideoEncoderEntry> immutableListMultimap = ENCODER_DATASET;
        if (!immutableListMultimap.containsKey(chipsetCurrent)) {
            return VideoEncoderSettings.DEFAULT;
        }
        VideoEncoderSettings.Builder builder = new VideoEncoderSettings.Builder();
        ImmutableList<VideoEncoderEntry> immutableList = immutableListMultimap.get(chipsetCurrent);
        int i = 0;
        while (true) {
            if (i >= immutableList.size()) {
                videoEncoderEntry = null;
                break;
            }
            if (immutableList.get(i).mimeType.equals(format.sampleMimeType)) {
                videoEncoderEntry = immutableList.get(i);
                break;
            }
            i++;
        }
        if (videoEncoderEntry == null) {
            return builder.build();
        }
        if (((format.getPixelCount() == -1 || format.frameRate == -1.0f) ? Integer.MAX_VALUE : Ints.saturatedCast(Math.round(format.getPixelCount() * format.frameRate))) < videoEncoderEntry.bFrameResolutionCutoff) {
            builder.setMaxBFrames(videoEncoderEntry.maxBFrames);
            if ((videoEncoderEntry.formatOptimizations & 1) != 0) {
                builder.setTemporalLayers(1, 2);
            }
        }
        return builder.build();
    }

    private static final class Chipset {
        private static final Chipset UNKNOWN = new Chipset("", "");
        private final String manufacturer;
        private final String model;

        public Chipset(String str, String str2) {
            this.manufacturer = str;
            this.model = str2;
        }

        public static Chipset current() {
            if (Build.VERSION.SDK_INT >= 31) {
                return new Chipset(Build.SOC_MANUFACTURER, Build.SOC_MODEL);
            }
            return UNKNOWN;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof Chipset)) {
                return false;
            }
            Chipset chipset = (Chipset) obj;
            return Objects.equals(this.manufacturer, chipset.manufacturer) && Objects.equals(this.model, chipset.model);
        }

        public int hashCode() {
            return Objects.hash(this.manufacturer, this.model);
        }

        public String toString() {
            return String.format("Chipset(%s %s)", this.manufacturer, this.model);
        }
    }

    private static final class VideoEncoderEntry {
        private final int bFrameResolutionCutoff;
        private final int formatOptimizations;
        private final int maxBFrames;
        private final String mimeType;

        private VideoEncoderEntry(String str, int i, int i2, int i3) {
            this.mimeType = str;
            this.maxBFrames = i;
            this.bFrameResolutionCutoff = i2;
            this.formatOptimizations = i3;
        }
    }
}
