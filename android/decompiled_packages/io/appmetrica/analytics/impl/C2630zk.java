package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.identifiers.SdkIdentifiers;
import io.appmetrica.analytics.modulesapi.internal.service.ModuleRemoteConfig;
import io.appmetrica.analytics.modulesapi.internal.service.RemoteConfigMetaInfo;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.zk, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2630zk implements ModuleRemoteConfig {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SdkIdentifiers f6435a;
    public final RemoteConfigMetaInfo b;
    public final Object c;

    public C2630zk(SdkIdentifiers sdkIdentifiers, RemoteConfigMetaInfo remoteConfigMetaInfo, Object obj) {
        this.f6435a = sdkIdentifiers;
        this.b = remoteConfigMetaInfo;
        this.c = obj;
    }

    public final C2630zk a(SdkIdentifiers sdkIdentifiers, RemoteConfigMetaInfo remoteConfigMetaInfo, Object obj) {
        return new C2630zk(sdkIdentifiers, remoteConfigMetaInfo, obj);
    }

    public final RemoteConfigMetaInfo b() {
        return this.b;
    }

    public final Object c() {
        return this.c;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C2630zk)) {
            return false;
        }
        C2630zk c2630zk = (C2630zk) obj;
        return Intrinsics.areEqual(this.f6435a, c2630zk.f6435a) && Intrinsics.areEqual(this.b, c2630zk.b) && Intrinsics.areEqual(this.c, c2630zk.c);
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ModuleRemoteConfig
    public final Object getFeaturesConfig() {
        return this.c;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ModuleRemoteConfig
    public final SdkIdentifiers getIdentifiers() {
        return this.f6435a;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ModuleRemoteConfig
    public final RemoteConfigMetaInfo getRemoteConfigMetaInfo() {
        return this.b;
    }

    public final int hashCode() {
        int iHashCode = (this.b.hashCode() + (this.f6435a.hashCode() * 31)) * 31;
        Object obj = this.c;
        return iHashCode + (obj == null ? 0 : obj.hashCode());
    }

    public final String toString() {
        return "ServiceModuleRemoteConfigModel(identifiers=" + this.f6435a + ", remoteConfigMetaInfo=" + this.b + ", featuresConfig=" + this.c + ')';
    }

    public final SdkIdentifiers a() {
        return this.f6435a;
    }

    public static C2630zk a(C2630zk c2630zk, SdkIdentifiers sdkIdentifiers, RemoteConfigMetaInfo remoteConfigMetaInfo, Object obj, int i, Object obj2) {
        if ((i & 1) != 0) {
            sdkIdentifiers = c2630zk.f6435a;
        }
        if ((i & 2) != 0) {
            remoteConfigMetaInfo = c2630zk.b;
        }
        if ((i & 4) != 0) {
            obj = c2630zk.c;
        }
        c2630zk.getClass();
        return new C2630zk(sdkIdentifiers, remoteConfigMetaInfo, obj);
    }
}
