package com.vk.id.internal.auth;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDCodePayload.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J'\u0010\u000f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0013\u001a\u00020\u0014H×\u0001J\t\u0010\u0015\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\t¨\u0006\u0016"}, d2 = {"Lcom/vk/id/internal/auth/VKIDCodePayload;", "", "code", "", "state", "deviceId", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getCode", "()Ljava/lang/String;", "getState", "getDeviceId", "component1", "component2", "component3", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class VKIDCodePayload {
    public static final int $stable = 0;
    private final String code;
    private final String deviceId;
    private final String state;

    public static /* synthetic */ VKIDCodePayload copy$default(VKIDCodePayload vKIDCodePayload, String str, String str2, String str3, int i, Object obj) {
        if ((i & 1) != 0) {
            str = vKIDCodePayload.code;
        }
        if ((i & 2) != 0) {
            str2 = vKIDCodePayload.state;
        }
        if ((i & 4) != 0) {
            str3 = vKIDCodePayload.deviceId;
        }
        return vKIDCodePayload.copy(str, str2, str3);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getCode() {
        return this.code;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getDeviceId() {
        return this.deviceId;
    }

    public final VKIDCodePayload copy(String code, String state, String deviceId) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        return new VKIDCodePayload(code, state, deviceId);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VKIDCodePayload)) {
            return false;
        }
        VKIDCodePayload vKIDCodePayload = (VKIDCodePayload) other;
        return Intrinsics.areEqual(this.code, vKIDCodePayload.code) && Intrinsics.areEqual(this.state, vKIDCodePayload.state) && Intrinsics.areEqual(this.deviceId, vKIDCodePayload.deviceId);
    }

    public int hashCode() {
        return (((this.code.hashCode() * 31) + this.state.hashCode()) * 31) + this.deviceId.hashCode();
    }

    public String toString() {
        return "VKIDCodePayload(code=" + this.code + ", state=" + this.state + ", deviceId=" + this.deviceId + ")";
    }

    public VKIDCodePayload(String code, String state, String deviceId) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        this.code = code;
        this.state = state;
        this.deviceId = deviceId;
    }

    public final String getCode() {
        return this.code;
    }

    public final String getState() {
        return this.state;
    }

    public final String getDeviceId() {
        return this.deviceId;
    }
}
