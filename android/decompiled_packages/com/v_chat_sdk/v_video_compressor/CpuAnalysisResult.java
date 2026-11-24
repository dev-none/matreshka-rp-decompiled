package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.ProfilingTraceData;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoCompressionEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0017\b\u0086\b\u0018\u00002\u00020\u0001B1\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0005\u0012\b\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\u0004\b\u000b\u0010\fJ\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003J\u0010\u0010\u001a\u001a\u0004\u0018\u00010\nHÆ\u0003¢\u0006\u0002\u0010\u0014JB\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00052\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\nHÆ\u0001¢\u0006\u0002\u0010\u001cJ\u0013\u0010\u001d\u001a\u00020\u00032\b\u0010\u001e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001f\u001a\u00020\u0007HÖ\u0001J\t\u0010 \u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\rR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\b\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000fR\u0015\u0010\t\u001a\u0004\u0018\u00010\n¢\u0006\n\n\u0002\u0010\u0015\u001a\u0004\b\u0013\u0010\u0014¨\u0006!"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/CpuAnalysisResult;", "", "isCpuSufficient", "", "reason", "", "cores", "", ProfilingTraceData.JsonKeys.ARCHITECTURE, "frequencyMHz", "", "<init>", "(ZLjava/lang/String;ILjava/lang/String;Ljava/lang/Long;)V", "()Z", "getReason", "()Ljava/lang/String;", "getCores", "()I", "getArchitecture", "getFrequencyMHz", "()Ljava/lang/Long;", "Ljava/lang/Long;", "component1", "component2", "component3", "component4", "component5", MenuActionType.COPY, "(ZLjava/lang/String;ILjava/lang/String;Ljava/lang/Long;)Lcom/v_chat_sdk/v_video_compressor/CpuAnalysisResult;", "equals", Request.JsonKeys.OTHER, "hashCode", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class CpuAnalysisResult {
    private final String architecture;
    private final int cores;
    private final Long frequencyMHz;
    private final boolean isCpuSufficient;
    private final String reason;

    public static /* synthetic */ CpuAnalysisResult copy$default(CpuAnalysisResult cpuAnalysisResult, boolean z, String str, int i, String str2, Long l, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            z = cpuAnalysisResult.isCpuSufficient;
        }
        if ((i2 & 2) != 0) {
            str = cpuAnalysisResult.reason;
        }
        if ((i2 & 4) != 0) {
            i = cpuAnalysisResult.cores;
        }
        if ((i2 & 8) != 0) {
            str2 = cpuAnalysisResult.architecture;
        }
        if ((i2 & 16) != 0) {
            l = cpuAnalysisResult.frequencyMHz;
        }
        Long l2 = l;
        int i3 = i;
        return cpuAnalysisResult.copy(z, str, i3, str2, l2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final boolean getIsCpuSufficient() {
        return this.isCpuSufficient;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getReason() {
        return this.reason;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final int getCores() {
        return this.cores;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getArchitecture() {
        return this.architecture;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final Long getFrequencyMHz() {
        return this.frequencyMHz;
    }

    public final CpuAnalysisResult copy(boolean isCpuSufficient, String reason, int cores, String architecture, Long frequencyMHz) {
        Intrinsics.checkNotNullParameter(reason, "reason");
        Intrinsics.checkNotNullParameter(architecture, "architecture");
        return new CpuAnalysisResult(isCpuSufficient, reason, cores, architecture, frequencyMHz);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CpuAnalysisResult)) {
            return false;
        }
        CpuAnalysisResult cpuAnalysisResult = (CpuAnalysisResult) other;
        return this.isCpuSufficient == cpuAnalysisResult.isCpuSufficient && Intrinsics.areEqual(this.reason, cpuAnalysisResult.reason) && this.cores == cpuAnalysisResult.cores && Intrinsics.areEqual(this.architecture, cpuAnalysisResult.architecture) && Intrinsics.areEqual(this.frequencyMHz, cpuAnalysisResult.frequencyMHz);
    }

    public int hashCode() {
        int iHashCode = ((((((Boolean.hashCode(this.isCpuSufficient) * 31) + this.reason.hashCode()) * 31) + Integer.hashCode(this.cores)) * 31) + this.architecture.hashCode()) * 31;
        Long l = this.frequencyMHz;
        return iHashCode + (l == null ? 0 : l.hashCode());
    }

    public String toString() {
        return "CpuAnalysisResult(isCpuSufficient=" + this.isCpuSufficient + ", reason=" + this.reason + ", cores=" + this.cores + ", architecture=" + this.architecture + ", frequencyMHz=" + this.frequencyMHz + ")";
    }

    public CpuAnalysisResult(boolean z, String reason, int i, String architecture, Long l) {
        Intrinsics.checkNotNullParameter(reason, "reason");
        Intrinsics.checkNotNullParameter(architecture, "architecture");
        this.isCpuSufficient = z;
        this.reason = reason;
        this.cores = i;
        this.architecture = architecture;
        this.frequencyMHz = l;
    }

    public final boolean isCpuSufficient() {
        return this.isCpuSufficient;
    }

    public final String getReason() {
        return this.reason;
    }

    public final int getCores() {
        return this.cores;
    }

    public final String getArchitecture() {
        return this.architecture;
    }

    public final Long getFrequencyMHz() {
        return this.frequencyMHz;
    }
}
