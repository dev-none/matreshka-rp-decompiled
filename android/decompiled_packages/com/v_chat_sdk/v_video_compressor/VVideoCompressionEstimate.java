package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.Map;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoModels.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u000b\n\u0002\u0010$\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0007¢\u0006\u0004\b\t\u0010\nJ\u0012\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00010\u0013J\t\u0010\u0014\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0007HÆ\u0003J1\u0010\u0018\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u0007HÆ\u0001J\u0013\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001c\u001a\u00020\u001dHÖ\u0001J\t\u0010\u001e\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010¨\u0006\u001f"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/VVideoCompressionEstimate;", "", "estimatedSizeBytes", "", "estimatedSizeFormatted", "", "compressionRatio", "", "bitrateMbps", "<init>", "(JLjava/lang/String;FF)V", "getEstimatedSizeBytes", "()J", "getEstimatedSizeFormatted", "()Ljava/lang/String;", "getCompressionRatio", "()F", "getBitrateMbps", "toMap", "", "component1", "component2", "component3", "component4", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class VVideoCompressionEstimate {
    private final float bitrateMbps;
    private final float compressionRatio;
    private final long estimatedSizeBytes;
    private final String estimatedSizeFormatted;

    public static /* synthetic */ VVideoCompressionEstimate copy$default(VVideoCompressionEstimate vVideoCompressionEstimate, long j, String str, float f, float f2, int i, Object obj) {
        if ((i & 1) != 0) {
            j = vVideoCompressionEstimate.estimatedSizeBytes;
        }
        long j2 = j;
        if ((i & 2) != 0) {
            str = vVideoCompressionEstimate.estimatedSizeFormatted;
        }
        String str2 = str;
        if ((i & 4) != 0) {
            f = vVideoCompressionEstimate.compressionRatio;
        }
        float f3 = f;
        if ((i & 8) != 0) {
            f2 = vVideoCompressionEstimate.bitrateMbps;
        }
        return vVideoCompressionEstimate.copy(j2, str2, f3, f2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final long getEstimatedSizeBytes() {
        return this.estimatedSizeBytes;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getEstimatedSizeFormatted() {
        return this.estimatedSizeFormatted;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final float getCompressionRatio() {
        return this.compressionRatio;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final float getBitrateMbps() {
        return this.bitrateMbps;
    }

    public final VVideoCompressionEstimate copy(long estimatedSizeBytes, String estimatedSizeFormatted, float compressionRatio, float bitrateMbps) {
        Intrinsics.checkNotNullParameter(estimatedSizeFormatted, "estimatedSizeFormatted");
        return new VVideoCompressionEstimate(estimatedSizeBytes, estimatedSizeFormatted, compressionRatio, bitrateMbps);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VVideoCompressionEstimate)) {
            return false;
        }
        VVideoCompressionEstimate vVideoCompressionEstimate = (VVideoCompressionEstimate) other;
        return this.estimatedSizeBytes == vVideoCompressionEstimate.estimatedSizeBytes && Intrinsics.areEqual(this.estimatedSizeFormatted, vVideoCompressionEstimate.estimatedSizeFormatted) && Float.compare(this.compressionRatio, vVideoCompressionEstimate.compressionRatio) == 0 && Float.compare(this.bitrateMbps, vVideoCompressionEstimate.bitrateMbps) == 0;
    }

    public int hashCode() {
        return (((((Long.hashCode(this.estimatedSizeBytes) * 31) + this.estimatedSizeFormatted.hashCode()) * 31) + Float.hashCode(this.compressionRatio)) * 31) + Float.hashCode(this.bitrateMbps);
    }

    public String toString() {
        return "VVideoCompressionEstimate(estimatedSizeBytes=" + this.estimatedSizeBytes + ", estimatedSizeFormatted=" + this.estimatedSizeFormatted + ", compressionRatio=" + this.compressionRatio + ", bitrateMbps=" + this.bitrateMbps + ")";
    }

    public VVideoCompressionEstimate(long j, String estimatedSizeFormatted, float f, float f2) {
        Intrinsics.checkNotNullParameter(estimatedSizeFormatted, "estimatedSizeFormatted");
        this.estimatedSizeBytes = j;
        this.estimatedSizeFormatted = estimatedSizeFormatted;
        this.compressionRatio = f;
        this.bitrateMbps = f2;
    }

    public final long getEstimatedSizeBytes() {
        return this.estimatedSizeBytes;
    }

    public final String getEstimatedSizeFormatted() {
        return this.estimatedSizeFormatted;
    }

    public final float getCompressionRatio() {
        return this.compressionRatio;
    }

    public final float getBitrateMbps() {
        return this.bitrateMbps;
    }

    public final Map<String, Object> toMap() {
        return MapsKt.mapOf(TuplesKt.to("estimatedSizeBytes", Long.valueOf(this.estimatedSizeBytes)), TuplesKt.to("estimatedSizeFormatted", this.estimatedSizeFormatted), TuplesKt.to("compressionRatio", Float.valueOf(this.compressionRatio)), TuplesKt.to("bitrateMbps", Float.valueOf(this.bitrateMbps)));
    }
}
