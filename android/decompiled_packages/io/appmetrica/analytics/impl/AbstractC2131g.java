package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.g, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public abstract class AbstractC2131g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2085e5 f6083a;
    public final Vk b;
    public final Zk c;
    public final Uk d;
    public final Ya e;
    public final SystemTimeProvider f;

    public AbstractC2131g(C2085e5 c2085e5, Vk vk, Zk zk, Uk uk, Ya ya, SystemTimeProvider systemTimeProvider) {
        this.f6083a = c2085e5;
        this.b = vk;
        this.c = zk;
        this.d = uk;
        this.e = ya;
        this.f = systemTimeProvider;
    }

    public final /* bridge */ Ik a(Object obj) {
        return a((Jk) obj);
    }

    public final Ik b() {
        if (this.c.h()) {
            return new Ik(this.f6083a, this.c, a(), this.f);
        }
        return null;
    }

    public final Ik a(Jk jk) {
        if (this.c.h()) {
            this.e.reportEvent("create session with non-empty storage");
        }
        C2085e5 c2085e5 = this.f6083a;
        Zk zk = this.c;
        long jA = this.b.a();
        Zk zk2 = this.c;
        zk2.a(Zk.f, Long.valueOf(jA));
        zk2.a(Zk.d, Long.valueOf(jk.f5749a));
        zk2.a(Zk.h, Long.valueOf(jk.f5749a));
        zk2.a(Zk.g, 0L);
        zk2.a(Zk.i, Boolean.TRUE);
        zk2.b();
        this.f6083a.e.a(jA, this.d.f5923a, TimeUnit.MILLISECONDS.toSeconds(jk.b));
        return new Ik(c2085e5, zk, a(), new SystemTimeProvider());
    }

    public final Lk a() {
        Kk kk = new Kk(this.d);
        kk.g = this.c.i();
        kk.f = this.c.c.a(Zk.g);
        kk.d = this.c.c.a(Zk.h);
        kk.c = this.c.c.a(Zk.f);
        kk.h = this.c.c.a(Zk.d);
        kk.f5762a = this.c.c.a(Zk.e);
        return new Lk(kk);
    }
}
