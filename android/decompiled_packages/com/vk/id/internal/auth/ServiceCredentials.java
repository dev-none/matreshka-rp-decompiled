package com.vk.id.internal.auth;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ServiceCredentials.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J'\u0010\u000f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0003HÇ\u0001J\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0013\u001a\u00020\u0014H×\u0001J\t\u0010\u0015\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\tR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\t¨\u0006\u0016"}, d2 = {"Lcom/vk/id/internal/auth/ServiceCredentials;", "", "clientID", "", "clientSecret", "redirectUri", "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "getClientID", "()Ljava/lang/String;", "getClientSecret", "getRedirectUri", "component1", "component2", "component3", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class ServiceCredentials {
    public static final int $stable = 0;
    private final String clientID;
    private final String clientSecret;
    private final String redirectUri;

    public static /* synthetic */ ServiceCredentials copy$default(ServiceCredentials serviceCredentials, String str, String str2, String str3, int i, Object obj) {
        if ((i & 1) != 0) {
            str = serviceCredentials.clientID;
        }
        if ((i & 2) != 0) {
            str2 = serviceCredentials.clientSecret;
        }
        if ((i & 4) != 0) {
            str3 = serviceCredentials.redirectUri;
        }
        return serviceCredentials.copy(str, str2, str3);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getClientID() {
        return this.clientID;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getClientSecret() {
        return this.clientSecret;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getRedirectUri() {
        return this.redirectUri;
    }

    public final ServiceCredentials copy(String clientID, String clientSecret, String redirectUri) {
        Intrinsics.checkNotNullParameter(clientID, "clientID");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(redirectUri, "redirectUri");
        return new ServiceCredentials(clientID, clientSecret, redirectUri);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ServiceCredentials)) {
            return false;
        }
        ServiceCredentials serviceCredentials = (ServiceCredentials) other;
        return Intrinsics.areEqual(this.clientID, serviceCredentials.clientID) && Intrinsics.areEqual(this.clientSecret, serviceCredentials.clientSecret) && Intrinsics.areEqual(this.redirectUri, serviceCredentials.redirectUri);
    }

    public int hashCode() {
        return (((this.clientID.hashCode() * 31) + this.clientSecret.hashCode()) * 31) + this.redirectUri.hashCode();
    }

    public String toString() {
        return "ServiceCredentials(clientID=" + this.clientID + ", clientSecret=" + this.clientSecret + ", redirectUri=" + this.redirectUri + ")";
    }

    public ServiceCredentials(String clientID, String clientSecret, String redirectUri) {
        Intrinsics.checkNotNullParameter(clientID, "clientID");
        Intrinsics.checkNotNullParameter(clientSecret, "clientSecret");
        Intrinsics.checkNotNullParameter(redirectUri, "redirectUri");
        this.clientID = clientID;
        this.clientSecret = clientSecret;
        this.redirectUri = redirectUri;
    }

    public final String getClientID() {
        return this.clientID;
    }

    public final String getClientSecret() {
        return this.clientSecret;
    }

    public final String getRedirectUri() {
        return this.redirectUri;
    }
}
