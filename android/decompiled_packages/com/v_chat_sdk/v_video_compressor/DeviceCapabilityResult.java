package com.v_chat_sdk.v_video_compressor;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VVideoCompressionEngine.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B#\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0004\b\b\u0010\tJ\t\u0010\u0010\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0011\u001a\u00020\u0005HÆ\u0003J\u000b\u0010\u0012\u001a\u0004\u0018\u00010\u0007HÆ\u0003J)\u0010\u0013\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÆ\u0001J\u0013\u0010\u0014\u001a\u00020\u00032\b\u0010\u0015\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0016\u001a\u00020\u0017HÖ\u0001J\t\u0010\u0018\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000f¨\u0006\u0019"}, d2 = {"Lcom/v_chat_sdk/v_video_compressor/DeviceCapabilityResult;", "", "canHandle4K", "", "reason", "", "details", "Lcom/v_chat_sdk/v_video_compressor/CapabilityDetails;", "<init>", "(ZLjava/lang/String;Lcom/v_chat_sdk/v_video_compressor/CapabilityDetails;)V", "getCanHandle4K", "()Z", "getReason", "()Ljava/lang/String;", "getDetails", "()Lcom/v_chat_sdk/v_video_compressor/CapabilityDetails;", "component1", "component2", "component3", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "v_video_compressor_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class DeviceCapabilityResult {
    private final boolean canHandle4K;
    private final CapabilityDetails details;
    private final String reason;

    public static /* synthetic */ DeviceCapabilityResult copy$default(DeviceCapabilityResult deviceCapabilityResult, boolean z, String str, CapabilityDetails capabilityDetails, int i, Object obj) {
        if ((i & 1) != 0) {
            z = deviceCapabilityResult.canHandle4K;
        }
        if ((i & 2) != 0) {
            str = deviceCapabilityResult.reason;
        }
        if ((i & 4) != 0) {
            capabilityDetails = deviceCapabilityResult.details;
        }
        return deviceCapabilityResult.copy(z, str, capabilityDetails);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final boolean getCanHandle4K() {
        return this.canHandle4K;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getReason() {
        return this.reason;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final CapabilityDetails getDetails() {
        return this.details;
    }

    public final DeviceCapabilityResult copy(boolean canHandle4K, String reason, CapabilityDetails details) {
        Intrinsics.checkNotNullParameter(reason, "reason");
        return new DeviceCapabilityResult(canHandle4K, reason, details);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof DeviceCapabilityResult)) {
            return false;
        }
        DeviceCapabilityResult deviceCapabilityResult = (DeviceCapabilityResult) other;
        return this.canHandle4K == deviceCapabilityResult.canHandle4K && Intrinsics.areEqual(this.reason, deviceCapabilityResult.reason) && Intrinsics.areEqual(this.details, deviceCapabilityResult.details);
    }

    public int hashCode() {
        int iHashCode = ((Boolean.hashCode(this.canHandle4K) * 31) + this.reason.hashCode()) * 31;
        CapabilityDetails capabilityDetails = this.details;
        return iHashCode + (capabilityDetails == null ? 0 : capabilityDetails.hashCode());
    }

    public String toString() {
        return "DeviceCapabilityResult(canHandle4K=" + this.canHandle4K + ", reason=" + this.reason + ", details=" + this.details + ")";
    }

    public DeviceCapabilityResult(boolean z, String reason, CapabilityDetails capabilityDetails) {
        Intrinsics.checkNotNullParameter(reason, "reason");
        this.canHandle4K = z;
        this.reason = reason;
        this.details = capabilityDetails;
    }

    public /* synthetic */ DeviceCapabilityResult(boolean z, String str, CapabilityDetails capabilityDetails, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(z, str, (i & 4) != 0 ? null : capabilityDetails);
    }

    public final boolean getCanHandle4K() {
        return this.canHandle4K;
    }

    public final String getReason() {
        return this.reason;
    }

    public final CapabilityDetails getDetails() {
        return this.details;
    }
}
