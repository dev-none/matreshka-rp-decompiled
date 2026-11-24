package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoCompressionEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000b\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\t\u0010\f\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000e\u001a\u00020\u00032\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u0013"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/CapabilityCheckResult;", "", "isSupported", "", "message", "", "<init>", "(ZLjava/lang/String;)V", "()Z", "getMessage", "()Ljava/lang/String;", "component1", "component2", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class CapabilityCheckResult {
    private final boolean isSupported;
    private final String message;

    public static /* synthetic */ CapabilityCheckResult copy$default(CapabilityCheckResult capabilityCheckResult, boolean z, String str, int i, Object obj) {
        if ((i & 1) != 0) {
            z = capabilityCheckResult.isSupported;
        }
        if ((i & 2) != 0) {
            str = capabilityCheckResult.message;
        }
        return capabilityCheckResult.copy(z, str);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final boolean getIsSupported() {
        return this.isSupported;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getMessage() {
        return this.message;
    }

    public final CapabilityCheckResult copy(boolean isSupported, String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        return new CapabilityCheckResult(isSupported, message);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof CapabilityCheckResult)) {
            return false;
        }
        CapabilityCheckResult capabilityCheckResult = (CapabilityCheckResult) other;
        return this.isSupported == capabilityCheckResult.isSupported && Intrinsics.areEqual(this.message, capabilityCheckResult.message);
    }

    public int hashCode() {
        return (Boolean.hashCode(this.isSupported) * 31) + this.message.hashCode();
    }

    public String toString() {
        return "CapabilityCheckResult(isSupported=" + this.isSupported + ", message=" + this.message + ")";
    }

    public CapabilityCheckResult(boolean z, String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        this.isSupported = z;
        this.message = message;
    }

    public final boolean isSupported() {
        return this.isSupported;
    }

    public final String getMessage() {
        return this.message;
    }
}
