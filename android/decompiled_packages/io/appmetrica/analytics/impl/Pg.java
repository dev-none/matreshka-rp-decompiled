package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.modulesapi.internal.service.RemoteConfigMetaInfo;

/* JADX INFO: loaded from: classes7.dex */
public final class Pg implements RemoteConfigMetaInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long f5837a;
    public final long b;

    public Pg(long j, long j2) {
        this.f5837a = j;
        this.b = j2;
    }

    public final Pg a(long j, long j2) {
        return new Pg(j, j2);
    }

    public final long b() {
        return this.b;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof Pg)) {
            return false;
        }
        Pg pg = (Pg) obj;
        return this.f5837a == pg.f5837a && this.b == pg.b;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.RemoteConfigMetaInfo
    public final long getFirstSendTime() {
        return this.f5837a;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.RemoteConfigMetaInfo
    public final long getLastUpdateTime() {
        return this.b;
    }

    public final int hashCode() {
        return Long.hashCode(this.b) + (Long.hashCode(this.f5837a) * 31);
    }

    public final String toString() {
        return "RemoteConfigMetaInfoModel(firstSendTime=" + this.f5837a + ", lastUpdateTime=" + this.b + ')';
    }

    public final long a() {
        return this.f5837a;
    }

    public static Pg a(Pg pg, long j, long j2, int i, Object obj) {
        if ((i & 1) != 0) {
            j = pg.f5837a;
        }
        if ((i & 2) != 0) {
            j2 = pg.b;
        }
        pg.getClass();
        return new Pg(j, j2);
    }
}
