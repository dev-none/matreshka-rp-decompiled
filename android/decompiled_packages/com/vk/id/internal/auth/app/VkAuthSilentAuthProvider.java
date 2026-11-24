package com.vk.id.internal.auth.app;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: VkAuthSilentAuthProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\f\n\u0002\u0010\u000b\n\u0002\b\u0005\b\u0081\b\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B#\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\u000e\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\u000f\u001a\u0004\u0018\u00010\u0003HÆ\u0003J\t\u0010\u0010\u001a\u00020\u0006HÆ\u0003J)\u0010\u0011\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0006HÇ\u0001J\u0013\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0015\u001a\u00020\u0006H×\u0001J\t\u0010\u0016\u001a\u00020\u0003H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u0018"}, d2 = {"Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider;", "", "appPackage", "", "appSha", "weight", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", "getAppPackage", "()Ljava/lang/String;", "getAppSha", "getWeight", "()I", "component1", "component2", "component3", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class VkAuthSilentAuthProvider {
    public static final int $stable = 0;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final String appPackage;
    private final String appSha;
    private final int weight;

    public static /* synthetic */ VkAuthSilentAuthProvider copy$default(VkAuthSilentAuthProvider vkAuthSilentAuthProvider, String str, String str2, int i, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            str = vkAuthSilentAuthProvider.appPackage;
        }
        if ((i2 & 2) != 0) {
            str2 = vkAuthSilentAuthProvider.appSha;
        }
        if ((i2 & 4) != 0) {
            i = vkAuthSilentAuthProvider.weight;
        }
        return vkAuthSilentAuthProvider.copy(str, str2, i);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getAppPackage() {
        return this.appPackage;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getAppSha() {
        return this.appSha;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final int getWeight() {
        return this.weight;
    }

    public final VkAuthSilentAuthProvider copy(String appPackage, String appSha, int weight) {
        Intrinsics.checkNotNullParameter(appPackage, "appPackage");
        return new VkAuthSilentAuthProvider(appPackage, appSha, weight);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VkAuthSilentAuthProvider)) {
            return false;
        }
        VkAuthSilentAuthProvider vkAuthSilentAuthProvider = (VkAuthSilentAuthProvider) other;
        return Intrinsics.areEqual(this.appPackage, vkAuthSilentAuthProvider.appPackage) && Intrinsics.areEqual(this.appSha, vkAuthSilentAuthProvider.appSha) && this.weight == vkAuthSilentAuthProvider.weight;
    }

    public int hashCode() {
        int iHashCode = this.appPackage.hashCode() * 31;
        String str = this.appSha;
        return ((iHashCode + (str == null ? 0 : str.hashCode())) * 31) + Integer.hashCode(this.weight);
    }

    public String toString() {
        return "VkAuthSilentAuthProvider(appPackage=" + this.appPackage + ", appSha=" + this.appSha + ", weight=" + this.weight + ")";
    }

    public VkAuthSilentAuthProvider(String appPackage, String str, int i) {
        Intrinsics.checkNotNullParameter(appPackage, "appPackage");
        this.appPackage = appPackage;
        this.appSha = str;
        this.weight = i;
    }

    public /* synthetic */ VkAuthSilentAuthProvider(String str, String str2, int i, int i2, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, str2, (i2 & 4) != 0 ? 0 : i);
    }

    public final String getAppPackage() {
        return this.appPackage;
    }

    public final String getAppSha() {
        return this.appSha;
    }

    public final int getWeight() {
        return this.weight;
    }

    /* JADX INFO: compiled from: VkAuthSilentAuthProvider.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider$Companion;", "", "<init>", "()V", "parse", "Lcom/vk/id/internal/auth/app/VkAuthSilentAuthProvider;", "json", "Lorg/json/JSONObject;", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final VkAuthSilentAuthProvider parse(JSONObject json) throws JSONException {
            Intrinsics.checkNotNullParameter(json, "json");
            String string = json.getString("pkg");
            Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
            return new VkAuthSilentAuthProvider(string, json.getString("sha256"), VkAuthSilentAuthProviderKt.getInt(json, "weight", 0));
        }
    }
}
