package com.vk.id.test;

import com.google.gson.annotations.SerializedName;
import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDOverrideApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0010\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B7\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0007\u0010\bJ\u000b\u0010\u000e\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u000f\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0010\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u0011\u001a\u0004\u0018\u00010\u0003HÆ\u0003J9\u0010\u0012\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003HÇ\u0001J\u0013\u0010\u0013\u001a\u00020\u00142\b\u0010\u0015\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0016\u001a\u00020\u0017H×\u0001J\t\u0010\u0018\u001a\u00020\u0003H×\u0001R\u0018\u0010\u0002\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0018\u0010\u0004\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0018\u0010\u0005\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\nR\u0018\u0010\u0006\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\n¨\u0006\u0019"}, d2 = {"Lcom/vk/id/test/InternalVKIDCodePayloadResponse;", "", "code", "", "state", "deviceId", "error", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getCode", "()Ljava/lang/String;", "getState", "getDeviceId", "getError", "component1", "component2", "component3", "component4", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDCodePayloadResponse {
    public static final int $stable = 0;

    @SerializedName("code")
    private final String code;

    @SerializedName("device_id")
    private final String deviceId;

    @SerializedName("error")
    private final String error;

    @SerializedName("state")
    private final String state;

    public InternalVKIDCodePayloadResponse() {
        this(null, null, null, null, 15, null);
    }

    public static /* synthetic */ InternalVKIDCodePayloadResponse copy$default(InternalVKIDCodePayloadResponse internalVKIDCodePayloadResponse, String str, String str2, String str3, String str4, int i, Object obj) {
        if ((i & 1) != 0) {
            str = internalVKIDCodePayloadResponse.code;
        }
        if ((i & 2) != 0) {
            str2 = internalVKIDCodePayloadResponse.state;
        }
        if ((i & 4) != 0) {
            str3 = internalVKIDCodePayloadResponse.deviceId;
        }
        if ((i & 8) != 0) {
            str4 = internalVKIDCodePayloadResponse.error;
        }
        return internalVKIDCodePayloadResponse.copy(str, str2, str3, str4);
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

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getError() {
        return this.error;
    }

    public final InternalVKIDCodePayloadResponse copy(String code, String state, String deviceId, String error) {
        return new InternalVKIDCodePayloadResponse(code, state, deviceId, error);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIDCodePayloadResponse)) {
            return false;
        }
        InternalVKIDCodePayloadResponse internalVKIDCodePayloadResponse = (InternalVKIDCodePayloadResponse) other;
        return Intrinsics.areEqual(this.code, internalVKIDCodePayloadResponse.code) && Intrinsics.areEqual(this.state, internalVKIDCodePayloadResponse.state) && Intrinsics.areEqual(this.deviceId, internalVKIDCodePayloadResponse.deviceId) && Intrinsics.areEqual(this.error, internalVKIDCodePayloadResponse.error);
    }

    public int hashCode() {
        String str = this.code;
        int iHashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.state;
        int iHashCode2 = (iHashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.deviceId;
        int iHashCode3 = (iHashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.error;
        return iHashCode3 + (str4 != null ? str4.hashCode() : 0);
    }

    public String toString() {
        return "InternalVKIDCodePayloadResponse(code=" + this.code + ", state=" + this.state + ", deviceId=" + this.deviceId + ", error=" + this.error + ")";
    }

    public InternalVKIDCodePayloadResponse(String str, String str2, String str3, String str4) {
        this.code = str;
        this.state = str2;
        this.deviceId = str3;
        this.error = str4;
    }

    public /* synthetic */ InternalVKIDCodePayloadResponse(String str, String str2, String str3, String str4, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : str, (i & 2) != 0 ? null : str2, (i & 4) != 0 ? null : str3, (i & 8) != 0 ? null : str4);
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

    public final String getError() {
        return this.error;
    }
}
