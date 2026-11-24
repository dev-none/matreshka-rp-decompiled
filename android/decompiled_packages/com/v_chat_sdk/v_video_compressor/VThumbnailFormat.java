package com.v_chat_sdk.v_video_compressor;

import androidx.media3.common.MimeTypes;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.enums.EnumEntriesKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\f\b\u0086\u0081\u0002\u0018\u0000 \u000e2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u000eB!\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003¢\u0006\u0004\b\u0006\u0010\u0007R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\tj\u0002\b\fj\u0002\b\r¨\u0006\u000f"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;", "", "value", "", "mimeType", "extension", "<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getValue", "()Ljava/lang/String;", "getMimeType", "getExtension", "JPEG", "PNG", "Companion", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public enum VThumbnailFormat {
    JPEG("JPEG", "image/jpeg", ".jpg"),
    PNG("PNG", MimeTypes.IMAGE_PNG, ".png");

    private final String extension;
    private final String mimeType;
    private final String value;
    private static final /* synthetic */ EnumEntries $ENTRIES = EnumEntriesKt.enumEntries(values());

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    public static EnumEntries<VThumbnailFormat> getEntries() {
        return $ENTRIES;
    }

    VThumbnailFormat(String str, String str2, String str3) {
        this.value = str;
        this.mimeType = str2;
        this.extension = str3;
    }

    public final String getExtension() {
        return this.extension;
    }

    public final String getMimeType() {
        return this.mimeType;
    }

    public final String getValue() {
        return this.value;
    }

    /* JADX INFO: compiled from: VVideoModels.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¨\u0006\b"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat$Companion;", "", "<init>", "()V", "fromString", "Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;", "value", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX WARN: Code duplicated, block: B:10:0x001b  */
        /* JADX WARN: Code duplicated, block: B:12:0x001e A[RETURN] */
        public final VThumbnailFormat fromString(String value) {
            for (VThumbnailFormat vThumbnailFormat : VThumbnailFormat.values()) {
                if (Intrinsics.areEqual(vThumbnailFormat.getValue(), value)) {
                    if (vThumbnailFormat == null) {
                        return VThumbnailFormat.JPEG;
                    }
                    return vThumbnailFormat;
                }
            }
            vThumbnailFormat = null;
            if (vThumbnailFormat == null) {
                return VThumbnailFormat.JPEG;
            }
            return vThumbnailFormat;
        }
    }
}
