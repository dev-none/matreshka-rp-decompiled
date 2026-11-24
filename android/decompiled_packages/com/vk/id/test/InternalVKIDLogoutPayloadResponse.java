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
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u0013\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000b\u0010\b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0015\u0010\t\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003HÇ\u0001J\u0013\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\r\u001a\u00020\u000eH×\u0001J\t\u0010\u000f\u001a\u00020\u0003H×\u0001R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0010"}, d2 = {"Lcom/vk/id/test/InternalVKIDLogoutPayloadResponse;", "", "error", "", "<init>", "(Ljava/lang/String;)V", "getError", "()Ljava/lang/String;", "component1", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDLogoutPayloadResponse {
    public static final int $stable = 0;
    private final String error;

    /* JADX WARN: Multi-variable type inference failed */
    public InternalVKIDLogoutPayloadResponse() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    public static /* synthetic */ InternalVKIDLogoutPayloadResponse copy$default(InternalVKIDLogoutPayloadResponse internalVKIDLogoutPayloadResponse, String str, int i, Object obj) {
        if ((i & 1) != 0) {
            str = internalVKIDLogoutPayloadResponse.error;
        }
        return internalVKIDLogoutPayloadResponse.copy(str);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getError() {
        return this.error;
    }

    public final InternalVKIDLogoutPayloadResponse copy(String error) {
        return new InternalVKIDLogoutPayloadResponse(error);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof InternalVKIDLogoutPayloadResponse) && Intrinsics.areEqual(this.error, ((InternalVKIDLogoutPayloadResponse) other).error);
    }

    public int hashCode() {
        String str = this.error;
        if (str == null) {
            return 0;
        }
        return str.hashCode();
    }

    public String toString() {
        return "InternalVKIDLogoutPayloadResponse(error=" + this.error + ")";
    }

    public InternalVKIDLogoutPayloadResponse(String str) {
        this.error = str;
    }

    public /* synthetic */ InternalVKIDLogoutPayloadResponse(String str, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : str);
    }

    public final String getError() {
        return this.error;
    }
}
