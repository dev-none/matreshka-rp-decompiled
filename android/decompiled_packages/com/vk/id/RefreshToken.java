package com.vk.id;

import com.vk.id.common.InternalVKIDApi;
import io.sentry.protocol.Request;
import java.util.Set;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RefreshToken.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\"\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\b\u0007\u0018\u00002\u00020\u0001B!\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u000e\u0010\u0004\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u000f\u001a\u00020\u0010H\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0019\u0010\u0004\u001a\n\u0012\u0004\u0012\u00020\u0003\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0011"}, d2 = {"Lcom/vk/id/RefreshToken;", "", "token", "", "scopes", "", "<init>", "(Ljava/lang/String;Ljava/util/Set;)V", "getToken", "()Ljava/lang/String;", "getScopes", "()Ljava/util/Set;", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class RefreshToken {
    public static final int $stable = 8;
    private final Set<String> scopes;
    private final String token;

    @InternalVKIDApi
    public RefreshToken(String token, Set<String> set) {
        Intrinsics.checkNotNullParameter(token, "token");
        this.token = token;
        this.scopes = set;
    }

    public final String getToken() {
        return this.token;
    }

    public final Set<String> getScopes() {
        return this.scopes;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!Intrinsics.areEqual(getClass(), other != null ? other.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(other, "null cannot be cast to non-null type com.vk.id.RefreshToken");
        RefreshToken refreshToken = (RefreshToken) other;
        return Intrinsics.areEqual(this.token, refreshToken.token) && Intrinsics.areEqual(this.scopes, refreshToken.scopes);
    }

    public int hashCode() {
        int iHashCode = this.token.hashCode() * 31;
        Set<String> set = this.scopes;
        return iHashCode + (set != null ? set.hashCode() : 0);
    }
}
