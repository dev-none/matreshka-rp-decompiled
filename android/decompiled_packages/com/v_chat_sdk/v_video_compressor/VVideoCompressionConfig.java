package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0016\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\b\u0018\u0000 $2\u00020\u0001:\u0001$BE\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007\u0012\b\b\u0002\u0010\b\u001a\u00020\u0007\u0012\b\b\u0002\u0010\t\u001a\u00020\u0007\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\f\u0010\rJ\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0007HÆ\u0003J\u000b\u0010\u001d\u001a\u0004\u0018\u00010\u000bHÆ\u0003JI\u0010\u001e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00072\b\b\u0002\u0010\t\u001a\u00020\u00072\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u000bHÆ\u0001J\u0013\u0010\u001f\u001a\u00020\u00072\b\u0010 \u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010!\u001a\u00020\"HÖ\u0001J\t\u0010#\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0013R\u0011\u0010\t\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0013R\u0013\u0010\n\u001a\u0004\u0018\u00010\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017¨\u0006%"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;", "", "quality", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "outputPath", "", "deleteOriginal", "", "fallbackToOriginalIfNotSmaller", "includeAudio", "advanced", "Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "<init>", "(Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;Ljava/lang/String;ZZZLcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;)V", "getQuality", "()Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "getOutputPath", "()Ljava/lang/String;", "getDeleteOriginal", "()Z", "getFallbackToOriginalIfNotSmaller", "getIncludeAudio", "getAdvanced", "()Lcom/v_chat_sdk/v_video_compressor/VVideoAdvancedConfig;", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "Companion", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoCompressionConfig {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final VVideoAdvancedConfig advanced;
    private final boolean deleteOriginal;
    private final boolean fallbackToOriginalIfNotSmaller;
    private final boolean includeAudio;
    private final String outputPath;
    private final VVideoCompressQuality quality;

    public static /* synthetic */ VVideoCompressionConfig copy$default(VVideoCompressionConfig vVideoCompressionConfig, VVideoCompressQuality vVideoCompressQuality, String str, boolean z, boolean z2, boolean z3, VVideoAdvancedConfig vVideoAdvancedConfig, int i, Object obj) {
        if ((i & 1) != 0) {
            vVideoCompressQuality = vVideoCompressionConfig.quality;
        }
        if ((i & 2) != 0) {
            str = vVideoCompressionConfig.outputPath;
        }
        if ((i & 4) != 0) {
            z = vVideoCompressionConfig.deleteOriginal;
        }
        if ((i & 8) != 0) {
            z2 = vVideoCompressionConfig.fallbackToOriginalIfNotSmaller;
        }
        if ((i & 16) != 0) {
            z3 = vVideoCompressionConfig.includeAudio;
        }
        if ((i & 32) != 0) {
            vVideoAdvancedConfig = vVideoCompressionConfig.advanced;
        }
        boolean z4 = z3;
        VVideoAdvancedConfig vVideoAdvancedConfig2 = vVideoAdvancedConfig;
        return vVideoCompressionConfig.copy(vVideoCompressQuality, str, z, z2, z4, vVideoAdvancedConfig2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final VVideoCompressQuality getQuality() {
        return this.quality;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getOutputPath() {
        return this.outputPath;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final boolean getDeleteOriginal() {
        return this.deleteOriginal;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final boolean getFallbackToOriginalIfNotSmaller() {
        return this.fallbackToOriginalIfNotSmaller;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final boolean getIncludeAudio() {
        return this.includeAudio;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final VVideoAdvancedConfig getAdvanced() {
        return this.advanced;
    }

    public final VVideoCompressionConfig copy(VVideoCompressQuality quality, String outputPath, boolean deleteOriginal, boolean fallbackToOriginalIfNotSmaller, boolean includeAudio, VVideoAdvancedConfig advanced) {
        Intrinsics.checkNotNullParameter(quality, "quality");
        return new VVideoCompressionConfig(quality, outputPath, deleteOriginal, fallbackToOriginalIfNotSmaller, includeAudio, advanced);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoCompressionConfig)) {
            return false;
        }
        VVideoCompressionConfig vVideoCompressionConfig = (VVideoCompressionConfig) other;
        return this.quality == vVideoCompressionConfig.quality && Intrinsics.areEqual(this.outputPath, vVideoCompressionConfig.outputPath) && this.deleteOriginal == vVideoCompressionConfig.deleteOriginal && this.fallbackToOriginalIfNotSmaller == vVideoCompressionConfig.fallbackToOriginalIfNotSmaller && this.includeAudio == vVideoCompressionConfig.includeAudio && Intrinsics.areEqual(this.advanced, vVideoCompressionConfig.advanced);
    }

    public int hashCode() {
        int iHashCode = this.quality.hashCode() * 31;
        String str = this.outputPath;
        int iHashCode2 = (((((((iHashCode + (str == null ? 0 : str.hashCode())) * 31) + Boolean.hashCode(this.deleteOriginal)) * 31) + Boolean.hashCode(this.fallbackToOriginalIfNotSmaller)) * 31) + Boolean.hashCode(this.includeAudio)) * 31;
        VVideoAdvancedConfig vVideoAdvancedConfig = this.advanced;
        return iHashCode2 + (vVideoAdvancedConfig != null ? vVideoAdvancedConfig.hashCode() : 0);
    }

    public String toString() {
        return "VVideoCompressionConfig(quality=" + this.quality + ", outputPath=" + this.outputPath + ", deleteOriginal=" + this.deleteOriginal + ", fallbackToOriginalIfNotSmaller=" + this.fallbackToOriginalIfNotSmaller + ", includeAudio=" + this.includeAudio + ", advanced=" + this.advanced + ")";
    }

    public VVideoCompressionConfig(VVideoCompressQuality quality, String str, boolean z, boolean z2, boolean z3, VVideoAdvancedConfig vVideoAdvancedConfig) {
        Intrinsics.checkNotNullParameter(quality, "quality");
        this.quality = quality;
        this.outputPath = str;
        this.deleteOriginal = z;
        this.fallbackToOriginalIfNotSmaller = z2;
        this.includeAudio = z3;
        this.advanced = vVideoAdvancedConfig;
    }

    public /* synthetic */ VVideoCompressionConfig(VVideoCompressQuality vVideoCompressQuality, String str, boolean z, boolean z2, boolean z3, VVideoAdvancedConfig vVideoAdvancedConfig, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(vVideoCompressQuality, (i & 2) != 0 ? null : str, (i & 4) != 0 ? false : z, (i & 8) != 0 ? true : z2, (i & 16) != 0 ? true : z3, (i & 32) != 0 ? null : vVideoAdvancedConfig);
    }

    public final VVideoCompressQuality getQuality() {
        return this.quality;
    }

    public final String getOutputPath() {
        return this.outputPath;
    }

    public final boolean getDeleteOriginal() {
        return this.deleteOriginal;
    }

    public final boolean getFallbackToOriginalIfNotSmaller() {
        return this.fallbackToOriginalIfNotSmaller;
    }

    public final boolean getIncludeAudio() {
        return this.includeAudio;
    }

    public final VVideoAdvancedConfig getAdvanced() {
        return this.advanced;
    }

    /* JADX INFO: compiled from: VVideoModels.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0004\u001a\u00020\u00052\u0014\u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\b\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\t"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig$Companion;", "", "<init>", "()V", "fromMap", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionConfig;", "map", "", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final VVideoCompressionConfig fromMap(Map<String, ? extends Object> map) {
            Intrinsics.checkNotNullParameter(map, "map");
            VVideoCompressQuality.Companion companion = VVideoCompressQuality.INSTANCE;
            Object obj = map.get("quality");
            String str = obj instanceof String ? (String) obj : null;
            if (str == null) {
                str = "MEDIUM";
            }
            VVideoCompressQuality vVideoCompressQualityFromString = companion.fromString(str);
            Object obj2 = map.get("outputPath");
            String str2 = obj2 instanceof String ? (String) obj2 : null;
            Object obj3 = map.get("deleteOriginal");
            Boolean bool = obj3 instanceof Boolean ? (Boolean) obj3 : null;
            boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
            Object obj4 = map.get("fallbackToOriginalIfNotSmaller");
            Boolean bool2 = obj4 instanceof Boolean ? (Boolean) obj4 : null;
            boolean zBooleanValue2 = bool2 != null ? bool2.booleanValue() : true;
            Object obj5 = map.get("includeAudio");
            Boolean bool3 = obj5 instanceof Boolean ? (Boolean) obj5 : null;
            boolean zBooleanValue3 = bool3 != null ? bool3.booleanValue() : true;
            VVideoAdvancedConfig.Companion companion2 = VVideoAdvancedConfig.INSTANCE;
            Object obj6 = map.get("advanced");
            return new VVideoCompressionConfig(vVideoCompressQualityFromString, str2, zBooleanValue, zBooleanValue2, zBooleanValue3, companion2.fromMap(obj6 instanceof Map ? (Map) obj6 : null));
        }
    }
}
