package com.vk.id.test;

import com.google.gson.annotations.SerializedName;
import com.my.target.common.menu.MenuActionType;
import com.vk.id.common.InternalVKIDApi;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.TraceContext;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import net.openid.appauth.GrantTypeValues;
import net.openid.appauth.ResponseTypeValues;

/* JADX INFO: compiled from: InternalVKIDOverrideApi.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u001c\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001Bg\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u0007\u0012\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\f\u0010\rJ\u000b\u0010\u0019\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001a\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001b\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010\u0013J\u0010\u0010\u001d\u001a\u0004\u0018\u00010\u0007HÆ\u0003¢\u0006\u0002\u0010\u0013J\u000b\u0010\u001e\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010\u001f\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\u000b\u0010 \u001a\u0004\u0018\u00010\u0003HÆ\u0003Jn\u0010!\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\u00072\n\b\u0002\u0010\t\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0003HÇ\u0001¢\u0006\u0002\u0010\"J\u0013\u0010#\u001a\u00020$2\b\u0010%\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010&\u001a\u00020'H×\u0001J\t\u0010(\u001a\u00020\u0003H×\u0001R\u0018\u0010\u0002\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0018\u0010\u0004\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0018\u0010\u0005\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u001a\u0010\u0006\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0012\u0010\u0013R\u001a\u0010\b\u001a\u0004\u0018\u00010\u00078\u0006X\u0087\u0004¢\u0006\n\n\u0002\u0010\u0014\u001a\u0004\b\u0015\u0010\u0013R\u0018\u0010\t\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u000fR\u0018\u0010\n\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u000fR\u0018\u0010\u000b\u001a\u0004\u0018\u00010\u00038\u0006X\u0087\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0018\u0010\u000f¨\u0006)"}, d2 = {"Lcom/vk/id/test/InternalVKIDTokenPayloadResponse;", "", Constants.ACCESS_TOKEN, "", "refreshToken", Constants.ID_TOKEN, "expiresIn", "", io.flutter.plugins.firebase.analytics.Constants.USER_ID, "state", "error", "scope", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getAccessToken", "()Ljava/lang/String;", "getRefreshToken", "getIdToken", "getExpiresIn", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getUserId", "getState", "getError", "getScope", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", MenuActionType.COPY, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/vk/id/test/InternalVKIDTokenPayloadResponse;", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class InternalVKIDTokenPayloadResponse {
    public static final int $stable = 0;

    @SerializedName("access_token")
    private final String accessToken;

    @SerializedName("error")
    private final String error;

    @SerializedName("expires_in")
    private final Long expiresIn;

    @SerializedName(ResponseTypeValues.ID_TOKEN)
    private final String idToken;

    @SerializedName(GrantTypeValues.REFRESH_TOKEN)
    private final String refreshToken;

    @SerializedName("scope")
    private final String scope;

    @SerializedName("state")
    private final String state;

    @SerializedName(TraceContext.JsonKeys.USER_ID)
    private final Long userId;

    public InternalVKIDTokenPayloadResponse() {
        this(null, null, null, null, null, null, null, null, 255, null);
    }

    public static /* synthetic */ InternalVKIDTokenPayloadResponse copy$default(InternalVKIDTokenPayloadResponse internalVKIDTokenPayloadResponse, String str, String str2, String str3, Long l, Long l2, String str4, String str5, String str6, int i, Object obj) {
        if ((i & 1) != 0) {
            str = internalVKIDTokenPayloadResponse.accessToken;
        }
        if ((i & 2) != 0) {
            str2 = internalVKIDTokenPayloadResponse.refreshToken;
        }
        if ((i & 4) != 0) {
            str3 = internalVKIDTokenPayloadResponse.idToken;
        }
        if ((i & 8) != 0) {
            l = internalVKIDTokenPayloadResponse.expiresIn;
        }
        if ((i & 16) != 0) {
            l2 = internalVKIDTokenPayloadResponse.userId;
        }
        if ((i & 32) != 0) {
            str4 = internalVKIDTokenPayloadResponse.state;
        }
        if ((i & 64) != 0) {
            str5 = internalVKIDTokenPayloadResponse.error;
        }
        if ((i & 128) != 0) {
            str6 = internalVKIDTokenPayloadResponse.scope;
        }
        String str7 = str5;
        String str8 = str6;
        Long l3 = l2;
        String str9 = str4;
        return internalVKIDTokenPayloadResponse.copy(str, str2, str3, l, l3, str9, str7, str8);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getAccessToken() {
        return this.accessToken;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getRefreshToken() {
        return this.refreshToken;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getIdToken() {
        return this.idToken;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final Long getExpiresIn() {
        return this.expiresIn;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final Long getUserId() {
        return this.userId;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getError() {
        return this.error;
    }

    /* JADX INFO: renamed from: component8, reason: from getter */
    public final String getScope() {
        return this.scope;
    }

    public final InternalVKIDTokenPayloadResponse copy(String accessToken, String refreshToken, String idToken, Long expiresIn, Long userId, String state, String error, String scope) {
        return new InternalVKIDTokenPayloadResponse(accessToken, refreshToken, idToken, expiresIn, userId, state, error, scope);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof InternalVKIDTokenPayloadResponse)) {
            return false;
        }
        InternalVKIDTokenPayloadResponse internalVKIDTokenPayloadResponse = (InternalVKIDTokenPayloadResponse) other;
        return Intrinsics.areEqual(this.accessToken, internalVKIDTokenPayloadResponse.accessToken) && Intrinsics.areEqual(this.refreshToken, internalVKIDTokenPayloadResponse.refreshToken) && Intrinsics.areEqual(this.idToken, internalVKIDTokenPayloadResponse.idToken) && Intrinsics.areEqual(this.expiresIn, internalVKIDTokenPayloadResponse.expiresIn) && Intrinsics.areEqual(this.userId, internalVKIDTokenPayloadResponse.userId) && Intrinsics.areEqual(this.state, internalVKIDTokenPayloadResponse.state) && Intrinsics.areEqual(this.error, internalVKIDTokenPayloadResponse.error) && Intrinsics.areEqual(this.scope, internalVKIDTokenPayloadResponse.scope);
    }

    public int hashCode() {
        String str = this.accessToken;
        int iHashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.refreshToken;
        int iHashCode2 = (iHashCode + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.idToken;
        int iHashCode3 = (iHashCode2 + (str3 == null ? 0 : str3.hashCode())) * 31;
        Long l = this.expiresIn;
        int iHashCode4 = (iHashCode3 + (l == null ? 0 : l.hashCode())) * 31;
        Long l2 = this.userId;
        int iHashCode5 = (iHashCode4 + (l2 == null ? 0 : l2.hashCode())) * 31;
        String str4 = this.state;
        int iHashCode6 = (iHashCode5 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.error;
        int iHashCode7 = (iHashCode6 + (str5 == null ? 0 : str5.hashCode())) * 31;
        String str6 = this.scope;
        return iHashCode7 + (str6 != null ? str6.hashCode() : 0);
    }

    public String toString() {
        return "InternalVKIDTokenPayloadResponse(accessToken=" + this.accessToken + ", refreshToken=" + this.refreshToken + ", idToken=" + this.idToken + ", expiresIn=" + this.expiresIn + ", userId=" + this.userId + ", state=" + this.state + ", error=" + this.error + ", scope=" + this.scope + ")";
    }

    public InternalVKIDTokenPayloadResponse(String str, String str2, String str3, Long l, Long l2, String str4, String str5, String str6) {
        this.accessToken = str;
        this.refreshToken = str2;
        this.idToken = str3;
        this.expiresIn = l;
        this.userId = l2;
        this.state = str4;
        this.error = str5;
        this.scope = str6;
    }

    public /* synthetic */ InternalVKIDTokenPayloadResponse(String str, String str2, String str3, Long l, Long l2, String str4, String str5, String str6, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : str, (i & 2) != 0 ? null : str2, (i & 4) != 0 ? null : str3, (i & 8) != 0 ? null : l, (i & 16) != 0 ? null : l2, (i & 32) != 0 ? null : str4, (i & 64) != 0 ? null : str5, (i & 128) != 0 ? null : str6);
    }

    public final String getAccessToken() {
        return this.accessToken;
    }

    public final String getRefreshToken() {
        return this.refreshToken;
    }

    public final String getIdToken() {
        return this.idToken;
    }

    public final Long getExpiresIn() {
        return this.expiresIn;
    }

    public final Long getUserId() {
        return this.userId;
    }

    public final String getState() {
        return this.state;
    }

    public final String getError() {
        return this.error;
    }

    public final String getScope() {
        return this.scope;
    }
}
