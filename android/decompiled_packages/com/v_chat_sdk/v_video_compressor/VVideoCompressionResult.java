package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.flutter.plugins.firebase.analytics.Constants;
import io.sentry.protocol.Request;
import java.util.Arrays;
import java.util.Map;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u0007\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0017\n\u0002\u0010\b\n\u0002\b\r\n\u0002\u0010$\n\u0002\b\u0012\b\u0086\b\u0018\u00002\u00020\u0001Bm\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\b\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\b\u0012\u0006\u0010\r\u001a\u00020\u000e\u0012\u0006\u0010\u000f\u001a\u00020\u0005\u0012\u0006\u0010\u0010\u001a\u00020\u0005\u0012\u0006\u0010\u0011\u001a\u00020\b\u0012\b\b\u0002\u0010\u0012\u001a\u00020\u0013¢\u0006\u0004\b\u0014\u0010\u0015J\u0010\u00104\u001a\u00020\u00052\u0006\u00105\u001a\u00020\bH\u0002J\u0010\u00106\u001a\u00020\u00052\u0006\u00107\u001a\u00020\bH\u0002J\u0014\u00108\u001a\u0010\u0012\u0004\u0012\u00020\u0005\u0012\u0006\u0012\u0004\u0018\u00010\u000109J\t\u0010:\u001a\u00020\u0003HÆ\u0003J\t\u0010;\u001a\u00020\u0005HÆ\u0003J\u000b\u0010<\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\t\u0010=\u001a\u00020\bHÆ\u0003J\t\u0010>\u001a\u00020\bHÆ\u0003J\t\u0010?\u001a\u00020\u000bHÆ\u0003J\t\u0010@\u001a\u00020\bHÆ\u0003J\t\u0010A\u001a\u00020\u000eHÆ\u0003J\t\u0010B\u001a\u00020\u0005HÆ\u0003J\t\u0010C\u001a\u00020\u0005HÆ\u0003J\t\u0010D\u001a\u00020\bHÆ\u0003J\t\u0010E\u001a\u00020\u0013HÆ\u0003J\u0083\u0001\u0010F\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\b2\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\b2\b\b\u0002\u0010\r\u001a\u00020\u000e2\b\b\u0002\u0010\u000f\u001a\u00020\u00052\b\b\u0002\u0010\u0010\u001a\u00020\u00052\b\b\u0002\u0010\u0011\u001a\u00020\b2\b\b\u0002\u0010\u0012\u001a\u00020\u0013HÆ\u0001J\u0013\u0010G\u001a\u00020\u00132\b\u0010H\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010I\u001a\u00020+HÖ\u0001J\t\u0010J\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u0019R\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u0019R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\t\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u001d\u0010\u001cR\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u001e\u0010\u001fR\u0011\u0010\f\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b \u0010\u001cR\u0011\u0010\r\u001a\u00020\u000e¢\u0006\b\n\u0000\u001a\u0004\b!\u0010\"R\u0011\u0010\u000f\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b#\u0010\u0019R\u0011\u0010\u0010\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b$\u0010\u0019R\u0011\u0010\u0011\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b%\u0010\u001cR\u0011\u0010\u0012\u001a\u00020\u0013¢\u0006\b\n\u0000\u001a\u0004\b&\u0010'R\u0011\u0010(\u001a\u00020\u00058F¢\u0006\u0006\u001a\u0004\b)\u0010\u0019R\u0011\u0010*\u001a\u00020+8F¢\u0006\u0006\u001a\u0004\b,\u0010-R\u0011\u0010.\u001a\u00020\u00058F¢\u0006\u0006\u001a\u0004\b/\u0010\u0019R\u0011\u00100\u001a\u00020\u00058F¢\u0006\u0006\u001a\u0004\b1\u0010\u0019R\u0011\u00102\u001a\u00020\u00058F¢\u0006\u0006\u001a\u0004\b3\u0010\u0019¨\u0006K"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionResult;", "", "originalVideo", "Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;", "compressedFilePath", "", "galleryUri", "originalSizeBytes", "", "compressedSizeBytes", "compressionRatio", "", "timeTaken", "quality", "Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "originalResolution", "compressedResolution", "spaceSaved", "usedOriginalFile", "", "<init>", "(Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;Ljava/lang/String;Ljava/lang/String;JJFJLcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;Ljava/lang/String;Ljava/lang/String;JZ)V", "getOriginalVideo", "()Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;", "getCompressedFilePath", "()Ljava/lang/String;", "getGalleryUri", "getOriginalSizeBytes", "()J", "getCompressedSizeBytes", "getCompressionRatio", "()F", "getTimeTaken", "getQuality", "()Lcom/v_chat_sdk/v_video_compressor/VVideoCompressQuality;", "getOriginalResolution", "getCompressedResolution", "getSpaceSaved", "getUsedOriginalFile", "()Z", "spaceSavedFormatted", "getSpaceSavedFormatted", "compressionPercentage", "", "getCompressionPercentage", "()I", "originalSizeFormatted", "getOriginalSizeFormatted", "compressedSizeFormatted", "getCompressedSizeFormatted", "timeTakenFormatted", "getTimeTakenFormatted", "formatFileSize", "bytes", "formatTime", Constants.MILLISECONDS, "toMap", "", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoCompressionResult {
    private final String compressedFilePath;
    private final String compressedResolution;
    private final long compressedSizeBytes;
    private final float compressionRatio;
    private final String galleryUri;
    private final String originalResolution;
    private final long originalSizeBytes;
    private final VVideoInfo originalVideo;
    private final VVideoCompressQuality quality;
    private final long spaceSaved;
    private final long timeTaken;
    private final boolean usedOriginalFile;

    public static /* synthetic */ VVideoCompressionResult copy$default(VVideoCompressionResult vVideoCompressionResult, VVideoInfo vVideoInfo, String str, String str2, long j, long j2, float f, long j3, VVideoCompressQuality vVideoCompressQuality, String str3, String str4, long j4, boolean z, int i, Object obj) {
        VVideoInfo vVideoInfo2 = (i & 1) != 0 ? vVideoCompressionResult.originalVideo : vVideoInfo;
        String str5 = (i & 2) != 0 ? vVideoCompressionResult.compressedFilePath : str;
        return vVideoCompressionResult.copy(vVideoInfo2, str5, (i & 4) != 0 ? vVideoCompressionResult.galleryUri : str2, (i & 8) != 0 ? vVideoCompressionResult.originalSizeBytes : j, (i & 16) != 0 ? vVideoCompressionResult.compressedSizeBytes : j2, (i & 32) != 0 ? vVideoCompressionResult.compressionRatio : f, (i & 64) != 0 ? vVideoCompressionResult.timeTaken : j3, (i & 128) != 0 ? vVideoCompressionResult.quality : vVideoCompressQuality, (i & 256) != 0 ? vVideoCompressionResult.originalResolution : str3, (i & 512) != 0 ? vVideoCompressionResult.compressedResolution : str4, (i & 1024) != 0 ? vVideoCompressionResult.spaceSaved : j4, (i & 2048) != 0 ? vVideoCompressionResult.usedOriginalFile : z);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final VVideoInfo getOriginalVideo() {
        return this.originalVideo;
    }

    /* JADX INFO: renamed from: component10, reason: from getter */
    public final String getCompressedResolution() {
        return this.compressedResolution;
    }

    /* JADX INFO: renamed from: component11, reason: from getter */
    public final long getSpaceSaved() {
        return this.spaceSaved;
    }

    /* JADX INFO: renamed from: component12, reason: from getter */
    public final boolean getUsedOriginalFile() {
        return this.usedOriginalFile;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getCompressedFilePath() {
        return this.compressedFilePath;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getGalleryUri() {
        return this.galleryUri;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final long getOriginalSizeBytes() {
        return this.originalSizeBytes;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final long getCompressedSizeBytes() {
        return this.compressedSizeBytes;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final float getCompressionRatio() {
        return this.compressionRatio;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final long getTimeTaken() {
        return this.timeTaken;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final VVideoCompressQuality getQuality() {
        return this.quality;
    }

    /* JADX INFO: renamed from: component9, reason: from getter */
    public final String getOriginalResolution() {
        return this.originalResolution;
    }

    public final VVideoCompressionResult copy(VVideoInfo originalVideo, String compressedFilePath, String galleryUri, long originalSizeBytes, long compressedSizeBytes, float compressionRatio, long timeTaken, VVideoCompressQuality quality, String originalResolution, String compressedResolution, long spaceSaved, boolean usedOriginalFile) {
        Intrinsics.checkNotNullParameter(originalVideo, "originalVideo");
        Intrinsics.checkNotNullParameter(compressedFilePath, "compressedFilePath");
        Intrinsics.checkNotNullParameter(quality, "quality");
        Intrinsics.checkNotNullParameter(originalResolution, "originalResolution");
        Intrinsics.checkNotNullParameter(compressedResolution, "compressedResolution");
        return new VVideoCompressionResult(originalVideo, compressedFilePath, galleryUri, originalSizeBytes, compressedSizeBytes, compressionRatio, timeTaken, quality, originalResolution, compressedResolution, spaceSaved, usedOriginalFile);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoCompressionResult)) {
            return false;
        }
        VVideoCompressionResult vVideoCompressionResult = (VVideoCompressionResult) other;
        return Intrinsics.areEqual(this.originalVideo, vVideoCompressionResult.originalVideo) && Intrinsics.areEqual(this.compressedFilePath, vVideoCompressionResult.compressedFilePath) && Intrinsics.areEqual(this.galleryUri, vVideoCompressionResult.galleryUri) && this.originalSizeBytes == vVideoCompressionResult.originalSizeBytes && this.compressedSizeBytes == vVideoCompressionResult.compressedSizeBytes && Float.compare(this.compressionRatio, vVideoCompressionResult.compressionRatio) == 0 && this.timeTaken == vVideoCompressionResult.timeTaken && this.quality == vVideoCompressionResult.quality && Intrinsics.areEqual(this.originalResolution, vVideoCompressionResult.originalResolution) && Intrinsics.areEqual(this.compressedResolution, vVideoCompressionResult.compressedResolution) && this.spaceSaved == vVideoCompressionResult.spaceSaved && this.usedOriginalFile == vVideoCompressionResult.usedOriginalFile;
    }

    public int hashCode() {
        int iHashCode = ((this.originalVideo.hashCode() * 31) + this.compressedFilePath.hashCode()) * 31;
        String str = this.galleryUri;
        return ((((((((((((((((((iHashCode + (str == null ? 0 : str.hashCode())) * 31) + Long.hashCode(this.originalSizeBytes)) * 31) + Long.hashCode(this.compressedSizeBytes)) * 31) + Float.hashCode(this.compressionRatio)) * 31) + Long.hashCode(this.timeTaken)) * 31) + this.quality.hashCode()) * 31) + this.originalResolution.hashCode()) * 31) + this.compressedResolution.hashCode()) * 31) + Long.hashCode(this.spaceSaved)) * 31) + Boolean.hashCode(this.usedOriginalFile);
    }

    public String toString() {
        return "VVideoCompressionResult(originalVideo=" + this.originalVideo + ", compressedFilePath=" + this.compressedFilePath + ", galleryUri=" + this.galleryUri + ", originalSizeBytes=" + this.originalSizeBytes + ", compressedSizeBytes=" + this.compressedSizeBytes + ", compressionRatio=" + this.compressionRatio + ", timeTaken=" + this.timeTaken + ", quality=" + this.quality + ", originalResolution=" + this.originalResolution + ", compressedResolution=" + this.compressedResolution + ", spaceSaved=" + this.spaceSaved + ", usedOriginalFile=" + this.usedOriginalFile + ")";
    }

    public VVideoCompressionResult(VVideoInfo originalVideo, String compressedFilePath, String str, long j, long j2, float f, long j3, VVideoCompressQuality quality, String originalResolution, String compressedResolution, long j4, boolean z) {
        Intrinsics.checkNotNullParameter(originalVideo, "originalVideo");
        Intrinsics.checkNotNullParameter(compressedFilePath, "compressedFilePath");
        Intrinsics.checkNotNullParameter(quality, "quality");
        Intrinsics.checkNotNullParameter(originalResolution, "originalResolution");
        Intrinsics.checkNotNullParameter(compressedResolution, "compressedResolution");
        this.originalVideo = originalVideo;
        this.compressedFilePath = compressedFilePath;
        this.galleryUri = str;
        this.originalSizeBytes = j;
        this.compressedSizeBytes = j2;
        this.compressionRatio = f;
        this.timeTaken = j3;
        this.quality = quality;
        this.originalResolution = originalResolution;
        this.compressedResolution = compressedResolution;
        this.spaceSaved = j4;
        this.usedOriginalFile = z;
    }

    public /* synthetic */ VVideoCompressionResult(VVideoInfo vVideoInfo, String str, String str2, long j, long j2, float f, long j3, VVideoCompressQuality vVideoCompressQuality, String str3, String str4, long j4, boolean z, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(vVideoInfo, str, (i & 4) != 0 ? null : str2, j, j2, f, j3, vVideoCompressQuality, str3, str4, j4, (i & 2048) != 0 ? false : z);
    }

    public final VVideoInfo getOriginalVideo() {
        return this.originalVideo;
    }

    public final String getCompressedFilePath() {
        return this.compressedFilePath;
    }

    public final String getGalleryUri() {
        return this.galleryUri;
    }

    public final long getOriginalSizeBytes() {
        return this.originalSizeBytes;
    }

    public final long getCompressedSizeBytes() {
        return this.compressedSizeBytes;
    }

    public final float getCompressionRatio() {
        return this.compressionRatio;
    }

    public final long getTimeTaken() {
        return this.timeTaken;
    }

    public final VVideoCompressQuality getQuality() {
        return this.quality;
    }

    public final String getOriginalResolution() {
        return this.originalResolution;
    }

    public final String getCompressedResolution() {
        return this.compressedResolution;
    }

    public final long getSpaceSaved() {
        return this.spaceSaved;
    }

    public final boolean getUsedOriginalFile() {
        return this.usedOriginalFile;
    }

    public final String getSpaceSavedFormatted() {
        return formatFileSize(this.spaceSaved);
    }

    public final int getCompressionPercentage() {
        return (int) ((1 - this.compressionRatio) * 100);
    }

    public final String getOriginalSizeFormatted() {
        return formatFileSize(this.originalSizeBytes);
    }

    public final String getCompressedSizeFormatted() {
        return formatFileSize(this.compressedSizeBytes);
    }

    public final String getTimeTakenFormatted() {
        return formatTime(this.timeTaken);
    }

    private final String formatFileSize(long bytes) {
        double d = bytes / 1024.0d;
        double d2 = d / 1024.0d;
        double d3 = d2 / 1024.0d;
        if (d3 >= 1.0d) {
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            String str = String.format("%.1f GB", Arrays.copyOf(new Object[]{Double.valueOf(d3)}, 1));
            Intrinsics.checkNotNullExpressionValue(str, "format(...)");
            return str;
        }
        if (d2 >= 1.0d) {
            StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
            String str2 = String.format("%.1f MB", Arrays.copyOf(new Object[]{Double.valueOf(d2)}, 1));
            Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
            return str2;
        }
        StringCompanionObject stringCompanionObject3 = StringCompanionObject.INSTANCE;
        String str3 = String.format("%.1f KB", Arrays.copyOf(new Object[]{Double.valueOf(d)}, 1));
        Intrinsics.checkNotNullExpressionValue(str3, "format(...)");
        return str3;
    }

    private final String formatTime(long milliseconds) {
        long j = milliseconds / ((long) 1000);
        long j2 = 60;
        long j3 = j / j2;
        long j4 = j % j2;
        if (j3 > 0) {
            return j3 + "m " + j4 + "s";
        }
        return j4 + "s";
    }

    public final Map<String, Object> toMap() {
        return MapsKt.mapOf(TuplesKt.to("originalVideo", this.originalVideo.toMap()), TuplesKt.to("compressedFilePath", this.compressedFilePath), TuplesKt.to("galleryUri", this.galleryUri), TuplesKt.to("originalSizeBytes", Long.valueOf(this.originalSizeBytes)), TuplesKt.to("compressedSizeBytes", Long.valueOf(this.compressedSizeBytes)), TuplesKt.to("compressionRatio", Float.valueOf(this.compressionRatio)), TuplesKt.to("timeTaken", Long.valueOf(this.timeTaken)), TuplesKt.to("quality", this.quality.getValue()), TuplesKt.to("originalResolution", this.originalResolution), TuplesKt.to("compressedResolution", this.compressedResolution), TuplesKt.to("spaceSaved", Long.valueOf(this.spaceSaved)), TuplesKt.to("usedOriginalFile", Boolean.valueOf(this.usedOriginalFile)));
    }
}
