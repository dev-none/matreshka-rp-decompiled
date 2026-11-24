package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoCompressionEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u001f\b\u0086\b\u0018\u00002\u00020\u0001BC\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0006\u0012\u0006\u0010\u000b\u001a\u00020\f¢\u0006\u0004\b\r\u0010\u000eJ\t\u0010\u001e\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001f\u001a\u00020\u0003HÆ\u0003J\t\u0010 \u001a\u00020\u0006HÆ\u0003J\t\u0010!\u001a\u00020\bHÆ\u0003J\u0010\u0010\"\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0017J\u0010\u0010#\u001a\u0004\u0018\u00010\u0006HÆ\u0003¢\u0006\u0002\u0010\u001aJ\t\u0010$\u001a\u00020\fHÆ\u0003JX\u0010%\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\b2\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00062\b\b\u0002\u0010\u000b\u001a\u00020\fHÆ\u0001¢\u0006\u0002\u0010&J\u0013\u0010'\u001a\u00020\f2\b\u0010(\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010)\u001a\u00020\u0006HÖ\u0001J\t\u0010*\u001a\u00020\bHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0015\u0010\t\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u0018\u001a\u0004\b\u0016\u0010\u0017R\u0015\u0010\n\u001a\u0004\u0018\u00010\u0006¢\u0006\n\n\u0002\u0010\u001b\u001a\u0004\b\u0019\u0010\u001aR\u0011\u0010\u000b\u001a\u00020\f¢\u0006\b\n\u0000\u001a\u0004\b\u001c\u0010\u001d¨\u0006+"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/CapabilityDetails;", "", "totalMemoryMB", "", "availableMemoryMB", "cpuCores", "", "cpuArchitecture", "", "cpuFrequencyMHz", "performanceScore", "hasCodecSupport", "", "<init>", "(JJILjava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Z)V", "getTotalMemoryMB", "()J", "getAvailableMemoryMB", "getCpuCores", "()I", "getCpuArchitecture", "()Ljava/lang/String;", "getCpuFrequencyMHz", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getPerformanceScore", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getHasCodecSupport", "()Z", "component1", "component2", "component3", "component4", "component5", "component6", "component7", MenuActionType.COPY, "(JJILjava/lang/String;Ljava/lang/Long;Ljava/lang/Integer;Z)Lcom/v_chat_sdk/v_video_compressor/CapabilityDetails;", "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class CapabilityDetails {
    private final long availableMemoryMB;
    private final String cpuArchitecture;
    private final int cpuCores;
    private final Long cpuFrequencyMHz;
    private final boolean hasCodecSupport;
    private final Integer performanceScore;
    private final long totalMemoryMB;

    public static /* synthetic */ CapabilityDetails copy$default(CapabilityDetails capabilityDetails, long j, long j2, int i, String str, Long l, Integer num, boolean z, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            j = capabilityDetails.totalMemoryMB;
        }
        long j3 = j;
        if ((i2 & 2) != 0) {
            j2 = capabilityDetails.availableMemoryMB;
        }
        long j4 = j2;
        if ((i2 & 4) != 0) {
            i = capabilityDetails.cpuCores;
        }
        return capabilityDetails.copy(j3, j4, i, (i2 & 8) != 0 ? capabilityDetails.cpuArchitecture : str, (i2 & 16) != 0 ? capabilityDetails.cpuFrequencyMHz : l, (i2 & 32) != 0 ? capabilityDetails.performanceScore : num, (i2 & 64) != 0 ? capabilityDetails.hasCodecSupport : z);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final long getTotalMemoryMB() {
        return this.totalMemoryMB;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final long getAvailableMemoryMB() {
        return this.availableMemoryMB;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final int getCpuCores() {
        return this.cpuCores;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getCpuArchitecture() {
        return this.cpuArchitecture;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final Long getCpuFrequencyMHz() {
        return this.cpuFrequencyMHz;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final Integer getPerformanceScore() {
        return this.performanceScore;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final boolean getHasCodecSupport() {
        return this.hasCodecSupport;
    }

    public final CapabilityDetails copy(long totalMemoryMB, long availableMemoryMB, int cpuCores, String cpuArchitecture, Long cpuFrequencyMHz, Integer performanceScore, boolean hasCodecSupport) {
        Intrinsics.checkNotNullParameter(cpuArchitecture, "cpuArchitecture");
        return new CapabilityDetails(totalMemoryMB, availableMemoryMB, cpuCores, cpuArchitecture, cpuFrequencyMHz, performanceScore, hasCodecSupport);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CapabilityDetails)) {
            return false;
        }
        CapabilityDetails capabilityDetails = (CapabilityDetails) other;
        return this.totalMemoryMB == capabilityDetails.totalMemoryMB && this.availableMemoryMB == capabilityDetails.availableMemoryMB && this.cpuCores == capabilityDetails.cpuCores && Intrinsics.areEqual(this.cpuArchitecture, capabilityDetails.cpuArchitecture) && Intrinsics.areEqual(this.cpuFrequencyMHz, capabilityDetails.cpuFrequencyMHz) && Intrinsics.areEqual(this.performanceScore, capabilityDetails.performanceScore) && this.hasCodecSupport == capabilityDetails.hasCodecSupport;
    }

    public int hashCode() {
        int iHashCode = ((((((Long.hashCode(this.totalMemoryMB) * 31) + Long.hashCode(this.availableMemoryMB)) * 31) + Integer.hashCode(this.cpuCores)) * 31) + this.cpuArchitecture.hashCode()) * 31;
        Long l = this.cpuFrequencyMHz;
        int iHashCode2 = (iHashCode + (l == null ? 0 : l.hashCode())) * 31;
        Integer num = this.performanceScore;
        return ((iHashCode2 + (num != null ? num.hashCode() : 0)) * 31) + Boolean.hashCode(this.hasCodecSupport);
    }

    public String toString() {
        return "CapabilityDetails(totalMemoryMB=" + this.totalMemoryMB + ", availableMemoryMB=" + this.availableMemoryMB + ", cpuCores=" + this.cpuCores + ", cpuArchitecture=" + this.cpuArchitecture + ", cpuFrequencyMHz=" + this.cpuFrequencyMHz + ", performanceScore=" + this.performanceScore + ", hasCodecSupport=" + this.hasCodecSupport + ")";
    }

    public CapabilityDetails(long j, long j2, int i, String cpuArchitecture, Long l, Integer num, boolean z) {
        Intrinsics.checkNotNullParameter(cpuArchitecture, "cpuArchitecture");
        this.totalMemoryMB = j;
        this.availableMemoryMB = j2;
        this.cpuCores = i;
        this.cpuArchitecture = cpuArchitecture;
        this.cpuFrequencyMHz = l;
        this.performanceScore = num;
        this.hasCodecSupport = z;
    }

    public final long getTotalMemoryMB() {
        return this.totalMemoryMB;
    }

    public final long getAvailableMemoryMB() {
        return this.availableMemoryMB;
    }

    public final int getCpuCores() {
        return this.cpuCores;
    }

    public final String getCpuArchitecture() {
        return this.cpuArchitecture;
    }

    public final Long getCpuFrequencyMHz() {
        return this.cpuFrequencyMHz;
    }

    public final Integer getPerformanceScore() {
        return this.performanceScore;
    }

    public final boolean getHasCodecSupport() {
        return this.hasCodecSupport;
    }
}
