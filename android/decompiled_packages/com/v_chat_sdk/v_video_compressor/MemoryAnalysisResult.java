package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoCompressionEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0011\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0007¢\u0006\u0004\b\t\u0010\nJ\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0007HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0007HÆ\u0003J1\u0010\u0015\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u0007HÆ\u0001J\u0013\u0010\u0016\u001a\u00020\u00032\b\u0010\u0017\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0018\u001a\u00020\u0019HÖ\u0001J\t\u0010\u001a\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000f¨\u0006\u001b"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/MemoryAnalysisResult;", "", "isMemorySufficient", "", "reason", "", "totalMemoryMB", "", "availableMemoryMB", "<init>", "(ZLjava/lang/String;JJ)V", "()Z", "getReason", "()Ljava/lang/String;", "getTotalMemoryMB", "()J", "getAvailableMemoryMB", "component1", "component2", "component3", "component4", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class MemoryAnalysisResult {
    private final long availableMemoryMB;
    private final boolean isMemorySufficient;
    private final String reason;
    private final long totalMemoryMB;

    public static /* synthetic */ MemoryAnalysisResult copy$default(MemoryAnalysisResult memoryAnalysisResult, boolean z, String str, long j, long j2, int i, Object obj) {
        if ((i & 1) != 0) {
            z = memoryAnalysisResult.isMemorySufficient;
        }
        if ((i & 2) != 0) {
            str = memoryAnalysisResult.reason;
        }
        if ((i & 4) != 0) {
            j = memoryAnalysisResult.totalMemoryMB;
        }
        if ((i & 8) != 0) {
            j2 = memoryAnalysisResult.availableMemoryMB;
        }
        long j3 = j2;
        return memoryAnalysisResult.copy(z, str, j, j3);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final boolean getIsMemorySufficient() {
        return this.isMemorySufficient;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getReason() {
        return this.reason;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final long getTotalMemoryMB() {
        return this.totalMemoryMB;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final long getAvailableMemoryMB() {
        return this.availableMemoryMB;
    }

    public final MemoryAnalysisResult copy(boolean isMemorySufficient, String reason, long totalMemoryMB, long availableMemoryMB) {
        Intrinsics.checkNotNullParameter(reason, "reason");
        return new MemoryAnalysisResult(isMemorySufficient, reason, totalMemoryMB, availableMemoryMB);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof MemoryAnalysisResult)) {
            return false;
        }
        MemoryAnalysisResult memoryAnalysisResult = (MemoryAnalysisResult) other;
        return this.isMemorySufficient == memoryAnalysisResult.isMemorySufficient && Intrinsics.areEqual(this.reason, memoryAnalysisResult.reason) && this.totalMemoryMB == memoryAnalysisResult.totalMemoryMB && this.availableMemoryMB == memoryAnalysisResult.availableMemoryMB;
    }

    public int hashCode() {
        return (((((Boolean.hashCode(this.isMemorySufficient) * 31) + this.reason.hashCode()) * 31) + Long.hashCode(this.totalMemoryMB)) * 31) + Long.hashCode(this.availableMemoryMB);
    }

    public String toString() {
        return "MemoryAnalysisResult(isMemorySufficient=" + this.isMemorySufficient + ", reason=" + this.reason + ", totalMemoryMB=" + this.totalMemoryMB + ", availableMemoryMB=" + this.availableMemoryMB + ")";
    }

    public MemoryAnalysisResult(boolean z, String reason, long j, long j2) {
        Intrinsics.checkNotNullParameter(reason, "reason");
        this.isMemorySufficient = z;
        this.reason = reason;
        this.totalMemoryMB = j;
        this.availableMemoryMB = j2;
    }

    public final boolean isMemorySufficient() {
        return this.isMemorySufficient;
    }

    public final String getReason() {
        return this.reason;
    }

    public final long getTotalMemoryMB() {
        return this.totalMemoryMB;
    }

    public final long getAvailableMemoryMB() {
        return this.availableMemoryMB;
    }
}
