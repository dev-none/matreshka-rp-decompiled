package com.vk.silentauth;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SilentAuthInfoWithProviderWeight.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\b\u0081\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\t\u0010\r\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÇ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001H×\u0003J\t\u0010\u0012\u001a\u00020\u0005H×\u0001J\t\u0010\u0013\u001a\u00020\u0014H×\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0015"}, d2 = {"Lcom/vk/silentauth/SilentAuthInfoWithProviderWeight;", "", "info", "Lcom/vk/silentauth/SilentAuthInfo;", "providerWeight", "", "<init>", "(Lcom/vk/silentauth/SilentAuthInfo;I)V", "getInfo", "()Lcom/vk/silentauth/SilentAuthInfo;", "getProviderWeight", "()I", "component1", "component2", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final /* data */ class SilentAuthInfoWithProviderWeight {
    public static final int $stable = 8;
    private final SilentAuthInfo info;
    private final int providerWeight;

    public static /* synthetic */ SilentAuthInfoWithProviderWeight copy$default(SilentAuthInfoWithProviderWeight silentAuthInfoWithProviderWeight, SilentAuthInfo silentAuthInfo, int i, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            silentAuthInfo = silentAuthInfoWithProviderWeight.info;
        }
        if ((i2 & 2) != 0) {
            i = silentAuthInfoWithProviderWeight.providerWeight;
        }
        return silentAuthInfoWithProviderWeight.copy(silentAuthInfo, i);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final SilentAuthInfo getInfo() {
        return this.info;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final int getProviderWeight() {
        return this.providerWeight;
    }

    public final SilentAuthInfoWithProviderWeight copy(SilentAuthInfo info, int providerWeight) {
        Intrinsics.checkNotNullParameter(info, "info");
        return new SilentAuthInfoWithProviderWeight(info, providerWeight);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof SilentAuthInfoWithProviderWeight)) {
            return false;
        }
        SilentAuthInfoWithProviderWeight silentAuthInfoWithProviderWeight = (SilentAuthInfoWithProviderWeight) other;
        return Intrinsics.areEqual(this.info, silentAuthInfoWithProviderWeight.info) && this.providerWeight == silentAuthInfoWithProviderWeight.providerWeight;
    }

    public int hashCode() {
        return (this.info.hashCode() * 31) + Integer.hashCode(this.providerWeight);
    }

    public String toString() {
        return "SilentAuthInfoWithProviderWeight(info=" + this.info + ", providerWeight=" + this.providerWeight + ")";
    }

    public SilentAuthInfoWithProviderWeight(SilentAuthInfo info, int i) {
        Intrinsics.checkNotNullParameter(info, "info");
        this.info = info;
        this.providerWeight = i;
    }

    public final SilentAuthInfo getInfo() {
        return this.info;
    }

    public final int getProviderWeight() {
        return this.providerWeight;
    }
}
