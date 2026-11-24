package com.v_chat_sdk.v_video_compressor;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000f\b\u0086\u0081\u0002\u0018\u0000 \u00112\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0011B!\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003¢\u0006\u0004\b\u0006\u0010\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\tj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010¨\u0006\u0012"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "", "value", "", "displayName", "description", "<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getValue", "()Ljava/lang/String;", "getDisplayName", "getDescription", "HIGH", "MEDIUM", "LOW", "VERY_LOW", "ULTRA_LOW", "Companion", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public enum VVideoCompressQuality {
    HIGH("HIGH", "1080p HD", "High quality with better file size"),
    MEDIUM("MEDIUM", "720p", "Balanced quality and compression"),
    LOW("LOW", "480p", "Good compression for sharing"),
    VERY_LOW("VERY_LOW", "360p", "High compression, smaller files"),
    ULTRA_LOW("ULTRA_LOW", "240p", "Maximum compression, smallest files");

    private final String description;
    private final String displayName;
    private final String value;
    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    public static EnumEntries<VVideoCompressQuality> getEntries() {
        return $ENTRIES;
    }

    VVideoCompressQuality(String str, String str2, String str3) {
        this.value = str;
        this.displayName = str2;
        this.description = str3;
    }

    public final String getDescription() {
        return this.description;
    }

    public final String getDisplayName() {
        return this.displayName;
    }

    public final String getValue() {
        return this.value;
    }

    /* JADX INFO: compiled from: VVideoModels.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality$Companion;", "", "<init>", "()V", "fromString", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "value", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX WARN: Code duplicated, block: B:10:0x0021  */
        /* JADX WARN: Code duplicated, block: B:12:0x0024 A[RETURN] */
        public final VVideoCompressQuality fromString(String value) {
            Intrinsics.checkNotNullParameter(value, "value");
            for (VVideoCompressQuality vVideoCompressQuality : VVideoCompressQuality.values()) {
                if (Intrinsics.areEqual(vVideoCompressQuality.getValue(), value)) {
                    if (vVideoCompressQuality == null) {
                        return VVideoCompressQuality.MEDIUM;
                    }
                    return vVideoCompressQuality;
                }
            }
            vVideoCompressQuality = null;
            if (vVideoCompressQuality == null) {
                return VVideoCompressQuality.MEDIUM;
            }
            return vVideoCompressQuality;
        }
    }
}
