package com.vk.id.auth;

import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: AuthCodeData.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0007\u0018\u00002\u00020\u0001B\u001b\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\u0013\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\r\u001a\u00020\u000eH\u0016J\b\u0010\u000f\u001a\u00020\u0003H\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0010"}, d2 = {"Lcom/vk/id/auth/AuthCodeData;", "", "code", "", "deviceId", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getCode", "()Ljava/lang/String;", "getDeviceId", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class AuthCodeData {
    public static final int $stable = 0;
    private final String code;
    private final String deviceId;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public AuthCodeData(String code) {
        this(code, null, 2, 0 == true ? 1 : 0);
        Intrinsics.checkNotNullParameter(code, "code");
    }

    public AuthCodeData(String code, String deviceId) {
        Intrinsics.checkNotNullParameter(code, "code");
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        this.code = code;
        this.deviceId = deviceId;
    }

    public final String getCode() {
        return this.code;
    }

    public /* synthetic */ AuthCodeData(String str, String str2, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i & 2) != 0 ? "" : str2);
    }

    public final String getDeviceId() {
        return this.deviceId;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!Intrinsics.areEqual(getClass(), other != null ? other.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(other, "null cannot be cast to non-null type com.vk.id.auth.AuthCodeData");
        AuthCodeData authCodeData = (AuthCodeData) other;
        return Intrinsics.areEqual(this.code, authCodeData.code) && Intrinsics.areEqual(this.deviceId, authCodeData.deviceId);
    }

    public int hashCode() {
        return (this.code.hashCode() * 31) + this.deviceId.hashCode();
    }

    public String toString() {
        return "AuthCodeData(code='" + this.code + "', deviceId='" + this.deviceId + "')";
    }
}
