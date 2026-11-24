package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
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
@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u000f\n\u0002\u0010\u0006\n\u0002\b\u000b\n\u0002\u0010$\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0005\b\u0086\b\u0018\u0000 32\u00020\u0001:\u00013BG\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\u0006\u0012\b\b\u0002\u0010\b\u001a\u00020\t\u0012\b\b\u0002\u0010\n\u001a\u00020\t\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\f\u0010\rJ\u0010\u0010 \u001a\u00020\u00032\u0006\u0010!\u001a\u00020\u0006H\u0002J\u0010\u0010\"\u001a\u00020\u00032\u0006\u0010#\u001a\u00020\u0006H\u0002J\u0014\u0010$\u001a\u0010\u0012\u0004\u0012\u00020\u0003\u0012\u0006\u0012\u0004\u0018\u00010\u00010%J\t\u0010&\u001a\u00020\u0003HÆ\u0003J\t\u0010'\u001a\u00020\u0003HÆ\u0003J\t\u0010(\u001a\u00020\u0006HÆ\u0003J\t\u0010)\u001a\u00020\u0006HÆ\u0003J\t\u0010*\u001a\u00020\tHÆ\u0003J\t\u0010+\u001a\u00020\tHÆ\u0003J\u000b\u0010,\u001a\u0004\u0018\u00010\u0003HÆ\u0003JQ\u0010-\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\u00062\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\t2\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0003HÆ\u0001J\u0013\u0010.\u001a\u00020/2\b\u00100\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00101\u001a\u00020\tHÖ\u0001J\t\u00102\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\u0007\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\n\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0015R\u0013\u0010\u000b\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u000fR\u0011\u0010\u0018\u001a\u00020\u00198F¢\u0006\u0006\u001a\u0004\b\u001a\u0010\u001bR\u0011\u0010\u001c\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b\u001d\u0010\u000fR\u0011\u0010\u001e\u001a\u00020\u00038F¢\u0006\u0006\u001a\u0004\b\u001f\u0010\u000f¨\u00064"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;", "", "path", "", "name", "fileSizeBytes", "", "durationMillis", "width", "", "height", "thumbnailPath", "<init>", "(Ljava/lang/String;Ljava/lang/String;JJIILjava/lang/String;)V", "getPath", "()Ljava/lang/String;", "getName", "getFileSizeBytes", "()J", "getDurationMillis", "getWidth", "()I", "getHeight", "getThumbnailPath", "fileSizeMB", "", "getFileSizeMB", "()D", "durationFormatted", "getDurationFormatted", "fileSizeFormatted", "getFileSizeFormatted", "formatDuration", "durationMs", "formatFileSize", "bytes", "toMap", "", "component1", "component2", "component3", "component4", "component5", "component6", "component7", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "Companion", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoInfo {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final long durationMillis;
    private final long fileSizeBytes;
    private final int height;
    private final String name;
    private final String path;
    private final String thumbnailPath;
    private final int width;

    public static /* synthetic */ VVideoInfo copy$default(VVideoInfo vVideoInfo, String str, String str2, long j, long j2, int i, int i2, String str3, int i3, Object obj) {
        if ((i3 & 1) != 0) {
            str = vVideoInfo.path;
        }
        if ((i3 & 2) != 0) {
            str2 = vVideoInfo.name;
        }
        if ((i3 & 4) != 0) {
            j = vVideoInfo.fileSizeBytes;
        }
        if ((i3 & 8) != 0) {
            j2 = vVideoInfo.durationMillis;
        }
        if ((i3 & 16) != 0) {
            i = vVideoInfo.width;
        }
        if ((i3 & 32) != 0) {
            i2 = vVideoInfo.height;
        }
        if ((i3 & 64) != 0) {
            str3 = vVideoInfo.thumbnailPath;
        }
        String str4 = str3;
        int i4 = i;
        long j3 = j2;
        long j4 = j;
        return vVideoInfo.copy(str, str2, j4, j3, i4, i2, str4);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getPath() {
        return this.path;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final long getFileSizeBytes() {
        return this.fileSizeBytes;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final long getDurationMillis() {
        return this.durationMillis;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final int getWidth() {
        return this.width;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final int getHeight() {
        return this.height;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getThumbnailPath() {
        return this.thumbnailPath;
    }

    public final VVideoInfo copy(String path, String name, long fileSizeBytes, long durationMillis, int width, int height, String thumbnailPath) {
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(name, "name");
        return new VVideoInfo(path, name, fileSizeBytes, durationMillis, width, height, thumbnailPath);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoInfo)) {
            return false;
        }
        VVideoInfo vVideoInfo = (VVideoInfo) other;
        return Intrinsics.areEqual(this.path, vVideoInfo.path) && Intrinsics.areEqual(this.name, vVideoInfo.name) && this.fileSizeBytes == vVideoInfo.fileSizeBytes && this.durationMillis == vVideoInfo.durationMillis && this.width == vVideoInfo.width && this.height == vVideoInfo.height && Intrinsics.areEqual(this.thumbnailPath, vVideoInfo.thumbnailPath);
    }

    public int hashCode() {
        int iHashCode = ((((((((((this.path.hashCode() * 31) + this.name.hashCode()) * 31) + Long.hashCode(this.fileSizeBytes)) * 31) + Long.hashCode(this.durationMillis)) * 31) + Integer.hashCode(this.width)) * 31) + Integer.hashCode(this.height)) * 31;
        String str = this.thumbnailPath;
        return iHashCode + (str == null ? 0 : str.hashCode());
    }

    public String toString() {
        return "VVideoInfo(path=" + this.path + ", name=" + this.name + ", fileSizeBytes=" + this.fileSizeBytes + ", durationMillis=" + this.durationMillis + ", width=" + this.width + ", height=" + this.height + ", thumbnailPath=" + this.thumbnailPath + ")";
    }

    public VVideoInfo(String path, String name, long j, long j2, int i, int i2, String str) {
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(name, "name");
        this.path = path;
        this.name = name;
        this.fileSizeBytes = j;
        this.durationMillis = j2;
        this.width = i;
        this.height = i2;
        this.thumbnailPath = str;
    }

    public /* synthetic */ VVideoInfo(String str, String str2, long j, long j2, int i, int i2, String str3, int i3, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, j, j2, (i3 & 16) != 0 ? 0 : i, (i3 & 32) != 0 ? 0 : i2, (i3 & 64) != 0 ? null : str3);
    }

    public final String getPath() {
        return this.path;
    }

    public final String getName() {
        return this.name;
    }

    public final long getFileSizeBytes() {
        return this.fileSizeBytes;
    }

    public final long getDurationMillis() {
        return this.durationMillis;
    }

    public final int getWidth() {
        return this.width;
    }

    public final int getHeight() {
        return this.height;
    }

    public final String getThumbnailPath() {
        return this.thumbnailPath;
    }

    public final double getFileSizeMB() {
        return this.fileSizeBytes / 1048576.0d;
    }

    public final String getDurationFormatted() {
        return formatDuration(this.durationMillis);
    }

    public final String getFileSizeFormatted() {
        return formatFileSize(this.fileSizeBytes);
    }

    private final String formatDuration(long durationMs) {
        long j = durationMs / ((long) 1000);
        long j2 = 3600;
        long j3 = j / j2;
        long j4 = 60;
        long j5 = (j % j2) / j4;
        long j6 = j % j4;
        if (j3 > 0) {
            StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
            String str = String.format("%02d:%02d:%02d", Arrays.copyOf(new Object[]{Long.valueOf(j3), Long.valueOf(j5), Long.valueOf(j6)}, 3));
            Intrinsics.checkNotNullExpressionValue(str, "format(...)");
            return str;
        }
        StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
        String str2 = String.format("%02d:%02d", Arrays.copyOf(new Object[]{Long.valueOf(j5), Long.valueOf(j6)}, 2));
        Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
        return str2;
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

    public final Map<String, Object> toMap() {
        return MapsKt.mapOf(TuplesKt.to("path", this.path), TuplesKt.to("name", this.name), TuplesKt.to("fileSizeBytes", Long.valueOf(this.fileSizeBytes)), TuplesKt.to("durationMillis", Long.valueOf(this.durationMillis)), TuplesKt.to("width", Integer.valueOf(this.width)), TuplesKt.to("height", Integer.valueOf(this.height)), TuplesKt.to("thumbnailPath", this.thumbnailPath));
    }

    /* JADX INFO: compiled from: VVideoModels.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0004\u001a\u00020\u00052\u0014\u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\b\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\t"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoInfo$Companion;", "", "<init>", "()V", "fromMap", "Lcom/v_chat_sdk/v_video_compressor/VVideoInfo;", "map", "", "", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final VVideoInfo fromMap(Map<String, ? extends Object> map) {
            Intrinsics.checkNotNullParameter(map, "map");
            Object obj = map.get("path");
            String str = obj instanceof String ? (String) obj : null;
            if (str == null) {
                str = "";
            }
            Object obj2 = map.get("name");
            String str2 = obj2 instanceof String ? (String) obj2 : null;
            String str3 = str2 != null ? str2 : "";
            Object obj3 = map.get("fileSizeBytes");
            Number number = obj3 instanceof Number ? (Number) obj3 : null;
            long jLongValue = number != null ? number.longValue() : 0L;
            Object obj4 = map.get("durationMillis");
            Number number2 = obj4 instanceof Number ? (Number) obj4 : null;
            long jLongValue2 = number2 != null ? number2.longValue() : 0L;
            Object obj5 = map.get("width");
            Number number3 = obj5 instanceof Number ? (Number) obj5 : null;
            int iIntValue = number3 != null ? number3.intValue() : 0;
            Object obj6 = map.get("height");
            Number number4 = obj6 instanceof Number ? (Number) obj6 : null;
            int iIntValue2 = number4 != null ? number4.intValue() : 0;
            Object obj7 = map.get("thumbnailPath");
            return new VVideoInfo(str, str3, jLongValue, jLongValue2, iIntValue, iIntValue2, obj7 instanceof String ? (String) obj7 : null);
        }
    }
}
