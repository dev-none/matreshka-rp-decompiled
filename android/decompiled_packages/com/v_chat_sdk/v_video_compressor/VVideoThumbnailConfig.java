package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u000e\n\u0002\u0010\u000b\n\u0002\b\u000e\b\u0086\b\u0018\u0000 &2\u00020\u0001:\u0001&BI\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\u0003\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\u0004\b\u000b\u0010\fJ\u0006\u0010\u0018\u001a\u00020\u0019J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\u0010\u0010\u001b\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0010J\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0010J\t\u0010\u001d\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001e\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u001f\u001a\u0004\u0018\u00010\nHÆ\u0003JP\u0010 \u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00032\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\nHÆ\u0001¢\u0006\u0002\u0010!J\u0013\u0010\"\u001a\u00020\u00192\b\u0010#\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010$\u001a\u00020\u0003HÖ\u0001J\t\u0010%\u001a\u00020\nHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0015\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u0011\u001a\u0004\b\u000f\u0010\u0010R\u0015\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u0011\u001a\u0004\b\u0012\u0010\u0010R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u000eR\u0013\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017¨\u0006'"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailConfig;", "", "timeMs", "", "maxWidth", "maxHeight", "format", "Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;", "quality", "outputPath", "", "<init>", "(ILjava/lang/Integer;Ljava/lang/Integer;Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;ILjava/lang/String;)V", "getTimeMs", "()I", "getMaxWidth", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getMaxHeight", "getFormat", "()Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;", "getQuality", "getOutputPath", "()Ljava/lang/String;", "isValid", "", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "(ILjava/lang/Integer;Ljava/lang/Integer;Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;ILjava/lang/String;)Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailConfig;", "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "Companion", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoThumbnailConfig {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final VThumbnailFormat format;
    private final Integer maxHeight;
    private final Integer maxWidth;
    private final String outputPath;
    private final int quality;
    private final int timeMs;

    public VVideoThumbnailConfig() {
        this(0, null, null, null, 0, null, 63, null);
    }

    public static /* synthetic */ VVideoThumbnailConfig copy$default(VVideoThumbnailConfig vVideoThumbnailConfig, int i, Integer num, Integer num2, VThumbnailFormat vThumbnailFormat, int i2, String str, int i3, Object obj) {
        if ((i3 & 1) != 0) {
            i = vVideoThumbnailConfig.timeMs;
        }
        if ((i3 & 2) != 0) {
            num = vVideoThumbnailConfig.maxWidth;
        }
        if ((i3 & 4) != 0) {
            num2 = vVideoThumbnailConfig.maxHeight;
        }
        if ((i3 & 8) != 0) {
            vThumbnailFormat = vVideoThumbnailConfig.format;
        }
        if ((i3 & 16) != 0) {
            i2 = vVideoThumbnailConfig.quality;
        }
        if ((i3 & 32) != 0) {
            str = vVideoThumbnailConfig.outputPath;
        }
        int i4 = i2;
        String str2 = str;
        return vVideoThumbnailConfig.copy(i, num, num2, vThumbnailFormat, i4, str2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final int getTimeMs() {
        return this.timeMs;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final Integer getMaxWidth() {
        return this.maxWidth;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final Integer getMaxHeight() {
        return this.maxHeight;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final VThumbnailFormat getFormat() {
        return this.format;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final int getQuality() {
        return this.quality;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getOutputPath() {
        return this.outputPath;
    }

    public final VVideoThumbnailConfig copy(int timeMs, Integer maxWidth, Integer maxHeight, VThumbnailFormat format, int quality, String outputPath) {
        Intrinsics.checkNotNullParameter(format, "format");
        return new VVideoThumbnailConfig(timeMs, maxWidth, maxHeight, format, quality, outputPath);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoThumbnailConfig)) {
            return false;
        }
        VVideoThumbnailConfig vVideoThumbnailConfig = (VVideoThumbnailConfig) other;
        return this.timeMs == vVideoThumbnailConfig.timeMs && Intrinsics.areEqual(this.maxWidth, vVideoThumbnailConfig.maxWidth) && Intrinsics.areEqual(this.maxHeight, vVideoThumbnailConfig.maxHeight) && this.format == vVideoThumbnailConfig.format && this.quality == vVideoThumbnailConfig.quality && Intrinsics.areEqual(this.outputPath, vVideoThumbnailConfig.outputPath);
    }

    public int hashCode() {
        int iHashCode = Integer.hashCode(this.timeMs) * 31;
        Integer num = this.maxWidth;
        int iHashCode2 = (iHashCode + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.maxHeight;
        int iHashCode3 = (((((iHashCode2 + (num2 == null ? 0 : num2.hashCode())) * 31) + this.format.hashCode()) * 31) + Integer.hashCode(this.quality)) * 31;
        String str = this.outputPath;
        return iHashCode3 + (str != null ? str.hashCode() : 0);
    }

    public String toString() {
        return "VVideoThumbnailConfig(timeMs=" + this.timeMs + ", maxWidth=" + this.maxWidth + ", maxHeight=" + this.maxHeight + ", format=" + this.format + ", quality=" + this.quality + ", outputPath=" + this.outputPath + ")";
    }

    public VVideoThumbnailConfig(int i, Integer num, Integer num2, VThumbnailFormat format, int i2, String str) {
        Intrinsics.checkNotNullParameter(format, "format");
        this.timeMs = i;
        this.maxWidth = num;
        this.maxHeight = num2;
        this.format = format;
        this.quality = i2;
        this.outputPath = str;
    }

    public final int getTimeMs() {
        return this.timeMs;
    }

    public final Integer getMaxWidth() {
        return this.maxWidth;
    }

    public final Integer getMaxHeight() {
        return this.maxHeight;
    }

    public /* synthetic */ VVideoThumbnailConfig(int i, Integer num, Integer num2, VThumbnailFormat vThumbnailFormat, int i2, String str, int i3, DefaultConstructorMarker defaultConstructorMarker) {
        this((i3 & 1) != 0 ? 0 : i, (i3 & 2) != 0 ? null : num, (i3 & 4) != 0 ? null : num2, (i3 & 8) != 0 ? VThumbnailFormat.JPEG : vThumbnailFormat, (i3 & 16) != 0 ? 80 : i2, (i3 & 32) != 0 ? null : str);
    }

    public final VThumbnailFormat getFormat() {
        return this.format;
    }

    public final int getQuality() {
        return this.quality;
    }

    public final String getOutputPath() {
        return this.outputPath;
    }

    public final boolean isValid() {
        int i;
        if (this.timeMs < 0) {
            return false;
        }
        Integer num = this.maxWidth;
        if (num != null && num.intValue() <= 0) {
            return false;
        }
        Integer num2 = this.maxHeight;
        return (num2 == null || num2.intValue() > 0) && (i = this.quality) >= 0 && i <= 100;
    }

    /* JADX INFO: compiled from: VVideoModels.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0004\u001a\u00020\u00052\u0014\u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\b\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\t"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailConfig$Companion;", "", "<init>", "()V", "fromMap", "Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailConfig;", "map", "", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final VVideoThumbnailConfig fromMap(Map<String, ? extends Object> map) {
            Intrinsics.checkNotNullParameter(map, "map");
            Object obj = map.get("timeMs");
            Number number = obj instanceof Number ? (Number) obj : null;
            int iIntValue = number != null ? number.intValue() : 0;
            Object obj2 = map.get("maxWidth");
            Number number2 = obj2 instanceof Number ? (Number) obj2 : null;
            Integer numValueOf = number2 != null ? Integer.valueOf(number2.intValue()) : null;
            Object obj3 = map.get("maxHeight");
            Number number3 = obj3 instanceof Number ? (Number) obj3 : null;
            Integer numValueOf2 = number3 != null ? Integer.valueOf(number3.intValue()) : null;
            VThumbnailFormat.Companion companion = VThumbnailFormat.INSTANCE;
            Object obj4 = map.get("format");
            VThumbnailFormat vThumbnailFormatFromString = companion.fromString(obj4 instanceof String ? (String) obj4 : null);
            Object obj5 = map.get("quality");
            Number number4 = obj5 instanceof Number ? (Number) obj5 : null;
            int iIntValue2 = number4 != null ? number4.intValue() : 80;
            Object obj6 = map.get("outputPath");
            return new VVideoThumbnailConfig(iIntValue, numValueOf, numValueOf2, vThumbnailFormatFromString, iIntValue2, obj6 instanceof String ? (String) obj6 : null);
        }
    }
}
