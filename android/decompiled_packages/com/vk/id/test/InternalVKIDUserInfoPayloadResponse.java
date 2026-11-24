package com.vk.id.test;

import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDOverrideApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B+\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0007\u0010\bJ\u000b\u0010\u000e\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u000f\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u000b\u0010\u0010\u001a\u0004\u0018\u00010\u0003HÆ\u0003J-\u0010\u0011\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0003HÇ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0015\u001a\u00020\u0016H×\u0001J\t\u0010\u0017\u001a\u00020\u0003H×\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\n¨\u0006\u0018"}, d2 = {"Lcom/vk/id/test/InternalVKIDUserInfoPayloadResponse;", "", "error", "", "user", "Lcom/vk/id/test/InternalVKIDUserPayloadResponse;", "state", "<init>", "(Ljava/lang/String;Lcom/vk/id/test/InternalVKIDUserPayloadResponse;Ljava/lang/String;)V", "getError", "()Ljava/lang/String;", "getUser", "()Lcom/vk/id/test/InternalVKIDUserPayloadResponse;", "getState", "component1", "component2", "component3", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDUserInfoPayloadResponse {
    public static final int $stable = 0;
    private final String error;
    private final String state;
    private final InternalVKIDUserPayloadResponse user;

    public InternalVKIDUserInfoPayloadResponse() {
        this(null, null, null, 7, null);
    }

    public static /* synthetic */ InternalVKIDUserInfoPayloadResponse copy$default(InternalVKIDUserInfoPayloadResponse internalVKIDUserInfoPayloadResponse, String str, InternalVKIDUserPayloadResponse internalVKIDUserPayloadResponse, String str2, int i, Object obj) {
        if ((i & 1) != 0) {
            str = internalVKIDUserInfoPayloadResponse.error;
        }
        if ((i & 2) != 0) {
            internalVKIDUserPayloadResponse = internalVKIDUserInfoPayloadResponse.user;
        }
        if ((i & 4) != 0) {
            str2 = internalVKIDUserInfoPayloadResponse.state;
        }
        return internalVKIDUserInfoPayloadResponse.copy(str, internalVKIDUserPayloadResponse, str2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getError() {
        return this.error;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final InternalVKIDUserPayloadResponse getUser() {
        return this.user;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getState() {
        return this.state;
    }

    public final InternalVKIDUserInfoPayloadResponse copy(String error, InternalVKIDUserPayloadResponse user, String state) {
        return new InternalVKIDUserInfoPayloadResponse(error, user, state);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIDUserInfoPayloadResponse)) {
            return false;
        }
        InternalVKIDUserInfoPayloadResponse internalVKIDUserInfoPayloadResponse = (InternalVKIDUserInfoPayloadResponse) other;
        return Intrinsics.areEqual(this.error, internalVKIDUserInfoPayloadResponse.error) && Intrinsics.areEqual(this.user, internalVKIDUserInfoPayloadResponse.user) && Intrinsics.areEqual(this.state, internalVKIDUserInfoPayloadResponse.state);
    }

    public int hashCode() {
        String str = this.error;
        int iHashCode = (str == null ? 0 : str.hashCode()) * 31;
        InternalVKIDUserPayloadResponse internalVKIDUserPayloadResponse = this.user;
        int iHashCode2 = (iHashCode + (internalVKIDUserPayloadResponse == null ? 0 : internalVKIDUserPayloadResponse.hashCode())) * 31;
        String str2 = this.state;
        return iHashCode2 + (str2 != null ? str2.hashCode() : 0);
    }

    public String toString() {
        return "InternalVKIDUserInfoPayloadResponse(error=" + this.error + ", user=" + this.user + ", state=" + this.state + ")";
    }

    public InternalVKIDUserInfoPayloadResponse(String str, InternalVKIDUserPayloadResponse internalVKIDUserPayloadResponse, String str2) {
        this.error = str;
        this.user = internalVKIDUserPayloadResponse;
        this.state = str2;
    }

    public /* synthetic */ InternalVKIDUserInfoPayloadResponse(String str, InternalVKIDUserPayloadResponse internalVKIDUserPayloadResponse, String str2, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : str, (i & 2) != 0 ? null : internalVKIDUserPayloadResponse, (i & 4) != 0 ? null : str2);
    }

    public final String getError() {
        return this.error;
    }

    public final InternalVKIDUserPayloadResponse getUser() {
        return this.user;
    }

    public final String getState() {
        return this.state;
    }
}
