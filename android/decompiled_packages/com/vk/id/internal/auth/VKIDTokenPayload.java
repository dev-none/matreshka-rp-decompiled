package com.vk.id.internal.auth;

import com.my.target.common.menu.MenuActionType;
import io.flutter.plugins.firebase.auth.Constants;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDTokenPayload.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0017\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001B?\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\u0007\u0012\u0006\u0010\t\u001a\u00020\u0003\u0012\u0006\u0010\n\u001a\u00020\u0003¢\u0006\u0004\b\u000b\u0010\fJ\t\u0010\u0016\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0003HÆ\u0003JO\u0010\u001d\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\u00072\b\b\u0002\u0010\t\u001a\u00020\u00032\b\b\u0002\u0010\n\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\u001e\u001a\u00020\u001f2\b\u0010 \u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010!\u001a\u00020\"H×\u0001J\t\u0010#\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u000eR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000eR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\b\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0012R\u0011\u0010\t\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u000eR\u0011\u0010\n\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u000e¨\u0006$"}, d2 = {"Lcom/vk/id/internal/auth/VKIDTokenPayload;", "", Constants.ACCESS_TOKEN, "", "refreshToken", Constants.ID_TOKEN, "expiresIn", "", io.flutter.plugins.firebase.analytics.Constants.USER_ID, "state", "scope", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJLjava/lang/String;Ljava/lang/String;)V", "getAccessToken", "()Ljava/lang/String;", "getRefreshToken", "getIdToken", "getExpiresIn", "()J", "getUserId", "getState", "getScope", "component1", "component2", "component3", "component4", "component5", "component6", "component7", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class VKIDTokenPayload {
    public static final int $stable = 0;
    private final String accessToken;
    private final long expiresIn;
    private final String idToken;
    private final String refreshToken;
    private final String scope;
    private final String state;
    private final long userId;

    public static /* synthetic */ VKIDTokenPayload copy$default(VKIDTokenPayload vKIDTokenPayload, String str, String str2, String str3, long j, long j2, String str4, String str5, int i, Object obj) {
        if ((i & 1) != 0) {
            str = vKIDTokenPayload.accessToken;
        }
        if ((i & 2) != 0) {
            str2 = vKIDTokenPayload.refreshToken;
        }
        if ((i & 4) != 0) {
            str3 = vKIDTokenPayload.idToken;
        }
        if ((i & 8) != 0) {
            j = vKIDTokenPayload.expiresIn;
        }
        if ((i & 16) != 0) {
            j2 = vKIDTokenPayload.userId;
        }
        if ((i & 32) != 0) {
            str4 = vKIDTokenPayload.state;
        }
        if ((i & 64) != 0) {
            str5 = vKIDTokenPayload.scope;
        }
        long j3 = j2;
        long j4 = j;
        String str6 = str3;
        return vKIDTokenPayload.copy(str, str2, str6, j4, j3, str4, str5);
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
    public final long getExpiresIn() {
        return this.expiresIn;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final long getUserId() {
        return this.userId;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getState() {
        return this.state;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final String getScope() {
        return this.scope;
    }

    public final VKIDTokenPayload copy(String accessToken, String refreshToken, String idToken, long expiresIn, long userId, String state, String scope) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(refreshToken, "refreshToken");
        Intrinsics.checkNotNullParameter(idToken, "idToken");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(scope, "scope");
        return new VKIDTokenPayload(accessToken, refreshToken, idToken, expiresIn, userId, state, scope);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VKIDTokenPayload)) {
            return false;
        }
        VKIDTokenPayload vKIDTokenPayload = (VKIDTokenPayload) other;
        return Intrinsics.areEqual(this.accessToken, vKIDTokenPayload.accessToken) && Intrinsics.areEqual(this.refreshToken, vKIDTokenPayload.refreshToken) && Intrinsics.areEqual(this.idToken, vKIDTokenPayload.idToken) && this.expiresIn == vKIDTokenPayload.expiresIn && this.userId == vKIDTokenPayload.userId && Intrinsics.areEqual(this.state, vKIDTokenPayload.state) && Intrinsics.areEqual(this.scope, vKIDTokenPayload.scope);
    }

    public int hashCode() {
        return (((((((((((this.accessToken.hashCode() * 31) + this.refreshToken.hashCode()) * 31) + this.idToken.hashCode()) * 31) + Long.hashCode(this.expiresIn)) * 31) + Long.hashCode(this.userId)) * 31) + this.state.hashCode()) * 31) + this.scope.hashCode();
    }

    public String toString() {
        return "VKIDTokenPayload(accessToken=" + this.accessToken + ", refreshToken=" + this.refreshToken + ", idToken=" + this.idToken + ", expiresIn=" + this.expiresIn + ", userId=" + this.userId + ", state=" + this.state + ", scope=" + this.scope + ")";
    }

    public VKIDTokenPayload(String accessToken, String refreshToken, String idToken, long j, long j2, String state, String scope) {
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        Intrinsics.checkNotNullParameter(refreshToken, "refreshToken");
        Intrinsics.checkNotNullParameter(idToken, "idToken");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(scope, "scope");
        this.accessToken = accessToken;
        this.refreshToken = refreshToken;
        this.idToken = idToken;
        this.expiresIn = j;
        this.userId = j2;
        this.state = state;
        this.scope = scope;
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

    public final long getExpiresIn() {
        return this.expiresIn;
    }

    public final long getUserId() {
        return this.userId;
    }

    public final String getState() {
        return this.state;
    }

    public final String getScope() {
        return this.scope;
    }
}
