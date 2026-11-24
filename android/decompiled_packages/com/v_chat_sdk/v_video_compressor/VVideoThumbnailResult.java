package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.Arrays;
import java.util.Map;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0012\n\u0002\u0010$\n\u0002\b\b\n\u0002\u0010\u000b\n\u0002\b\u0004\b\u0086\b\u0018\u00002\u00020\u0001B7\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\u0005¢\u0006\u0004\b\f\u0010\rJ\u0010\u0010\u001a\u001a\u00020\u00032\u0006\u0010\u001b\u001a\u00020\bH\u0002J\u0012\u0010\u001c\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00010\u001dJ\t\u0010\u001e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001f\u001a\u00020\u0005HÆ\u0003J\t\u0010 \u001a\u00020\u0005HÆ\u0003J\t\u0010!\u001a\u00020\bHÆ\u0003J\t\u0010\"\u001a\u00020\nHÆ\u0003J\t\u0010#\u001a\u00020\u0005HÆ\u0003JE\u0010$\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u000b\u001a\u00020\u0005HÆ\u0001J\u0013\u0010%\u001a\u00020&2\b\u0010'\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010(\u001a\u00020\u0005HÖ\u0001J\t\u0010)\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0011R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\t\u001a\u00020\n¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0011\u0010\u000b\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0011R\u0011\u0010\u0018\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b\u0019\u0010\u000f¨\u0006*"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoThumbnailResult;", "", "thumbnailPath", "", "width", "", "height", "fileSizeBytes", "", "format", "Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;", "timeMs", "<init>", "(Ljava/lang/String;IIJLcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;I)V", "getThumbnailPath", "()Ljava/lang/String;", "getWidth", "()I", "getHeight", "getFileSizeBytes", "()J", "getFormat", "()Lcom/v_chat_sdk/v_video_compressor/VThumbnailFormat;", "getTimeMs", "fileSizeFormatted", "getFileSizeFormatted", "formatFileSize", "bytes", "toMap", "", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoThumbnailResult {
    private final long fileSizeBytes;
    private final VThumbnailFormat format;
    private final int height;
    private final String thumbnailPath;
    private final int timeMs;
    private final int width;

    public static /* synthetic */ VVideoThumbnailResult copy$default(VVideoThumbnailResult vVideoThumbnailResult, String str, int i, int i2, long j, VThumbnailFormat vThumbnailFormat, int i3, int i4, Object obj) {
        if ((i4 & 1) != 0) {
            str = vVideoThumbnailResult.thumbnailPath;
        }
        if ((i4 & 2) != 0) {
            i = vVideoThumbnailResult.width;
        }
        if ((i4 & 4) != 0) {
            i2 = vVideoThumbnailResult.height;
        }
        if ((i4 & 8) != 0) {
            j = vVideoThumbnailResult.fileSizeBytes;
        }
        if ((i4 & 16) != 0) {
            vThumbnailFormat = vVideoThumbnailResult.format;
        }
        if ((i4 & 32) != 0) {
            i3 = vVideoThumbnailResult.timeMs;
        }
        long j2 = j;
        int i5 = i2;
        return vVideoThumbnailResult.copy(str, i, i5, j2, vThumbnailFormat, i3);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getThumbnailPath() {
        return this.thumbnailPath;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final int getWidth() {
        return this.width;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final int getHeight() {
        return this.height;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final long getFileSizeBytes() {
        return this.fileSizeBytes;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final VThumbnailFormat getFormat() {
        return this.format;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final int getTimeMs() {
        return this.timeMs;
    }

    public final VVideoThumbnailResult copy(String thumbnailPath, int width, int height, long fileSizeBytes, VThumbnailFormat format, int timeMs) {
        Intrinsics.checkNotNullParameter(thumbnailPath, "thumbnailPath");
        Intrinsics.checkNotNullParameter(format, "format");
        return new VVideoThumbnailResult(thumbnailPath, width, height, fileSizeBytes, format, timeMs);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoThumbnailResult)) {
            return false;
        }
        VVideoThumbnailResult vVideoThumbnailResult = (VVideoThumbnailResult) other;
        return Intrinsics.areEqual(this.thumbnailPath, vVideoThumbnailResult.thumbnailPath) && this.width == vVideoThumbnailResult.width && this.height == vVideoThumbnailResult.height && this.fileSizeBytes == vVideoThumbnailResult.fileSizeBytes && this.format == vVideoThumbnailResult.format && this.timeMs == vVideoThumbnailResult.timeMs;
    }

    public int hashCode() {
        return (((((((((this.thumbnailPath.hashCode() * 31) + Integer.hashCode(this.width)) * 31) + Integer.hashCode(this.height)) * 31) + Long.hashCode(this.fileSizeBytes)) * 31) + this.format.hashCode()) * 31) + Integer.hashCode(this.timeMs);
    }

    public String toString() {
        return "VVideoThumbnailResult(thumbnailPath=" + this.thumbnailPath + ", width=" + this.width + ", height=" + this.height + ", fileSizeBytes=" + this.fileSizeBytes + ", format=" + this.format + ", timeMs=" + this.timeMs + ")";
    }

    public VVideoThumbnailResult(String thumbnailPath, int i, int i2, long j, VThumbnailFormat format, int i3) {
        Intrinsics.checkNotNullParameter(thumbnailPath, "thumbnailPath");
        Intrinsics.checkNotNullParameter(format, "format");
        this.thumbnailPath = thumbnailPath;
        this.width = i;
        this.height = i2;
        this.fileSizeBytes = j;
        this.format = format;
        this.timeMs = i3;
    }

    public final String getThumbnailPath() {
        return this.thumbnailPath;
    }

    public final int getWidth() {
        return this.width;
    }

    public final int getHeight() {
        return this.height;
    }

    public final long getFileSizeBytes() {
        return this.fileSizeBytes;
    }

    public final VThumbnailFormat getFormat() {
        return this.format;
    }

    public final int getTimeMs() {
        return this.timeMs;
    }

    public final String getFileSizeFormatted() {
        return formatFileSize(this.fileSizeBytes);
    }

    private final String formatFileSize(long bytes) {
        double d = bytes / 1024.0d;
        double d2 = d / 1024.0d;
        if (d2 >= 1.0d) {
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            String str = String.format("%.1f MB", Arrays.copyOf(new Object[]{Double.valueOf(d2)}, 1));
            Intrinsics.checkNotNullExpressionValue(str, "format(...)");
            return str;
        }
        if (d >= 1.0d) {
            StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
            String str2 = String.format("%.1f KB", Arrays.copyOf(new Object[]{Double.valueOf(d)}, 1));
            Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
            return str2;
        }
        return bytes + " B";
    }

    public final Map<String, Object> toMap() {
        return MapsKt.mapOf(TuplesKt.to("thumbnailPath", this.thumbnailPath), TuplesKt.to("width", Integer.valueOf(this.width)), TuplesKt.to("height", Integer.valueOf(this.height)), TuplesKt.to("fileSizeBytes", Long.valueOf(this.fileSizeBytes)), TuplesKt.to("format", this.format.getValue()), TuplesKt.to("timeMs", Integer.valueOf(this.timeMs)));
    }
}
