package io.appmetrica.analytics.impl;

import android.os.Bundle;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.coreutils.internal.time.TimeProvider;
import java.util.concurrent.Callable;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes7.dex */
public final class Di implements InterfaceC2203ik {
    public static final Ci e = new Ci();
    public static final long f = TimeUnit.SECONDS.toMillis(4);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2361p0 f5642a;
    public final C2075dk b;
    public final TimeProvider c;
    public final ICommonExecutor d;

    public Di(C2361p0 c2361p0, C2075dk c2075dk, TimeProvider timeProvider) {
        this.f5642a = c2361p0;
        this.b = c2075dk;
        this.c = timeProvider;
        this.d = C2213j4.l().g().b();
    }

    public final void a(Ah ah) {
        Callable ug;
        ICommonExecutor iCommonExecutor = this.d;
        if (ah.b) {
            C2075dk c2075dk = this.b;
            ug = new C2215j6(c2075dk.f6050a, c2075dk.b, c2075dk.c, ah);
        } else {
            C2075dk c2075dk2 = this.b;
            ug = new Ug(c2075dk2.b, c2075dk2.c, ah);
        }
        iCommonExecutor.submit(ug);
    }

    public final void b(Ah ah) {
        long jUptimeMillis = this.c.uptimeMillis();
        C2075dk c2075dk = this.b;
        C2215j6 c2215j6 = new C2215j6(c2075dk.f6050a, c2075dk.b, c2075dk.c, ah);
        if (this.f5642a.a()) {
            try {
                this.d.submit(c2215j6).get(f, TimeUnit.MILLISECONDS);
            } catch (Throwable unused) {
            }
        }
        if (!c2215j6.c) {
            try {
                c2215j6.a();
            } catch (Throwable unused2) {
            }
        }
        try {
            Thread.sleep(Math.max(0L, f - (this.c.uptimeMillis() - jUptimeMillis)));
        } catch (Throwable unused3) {
        }
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2203ik
    public final void reportData(int i, Bundle bundle) {
        ICommonExecutor iCommonExecutor = this.d;
        C2075dk c2075dk = this.b;
        iCommonExecutor.submit(new Pn(c2075dk.b, c2075dk.c, i, bundle));
    }

    public Di(C2361p0 c2361p0, C2075dk c2075dk) {
        this(c2361p0, c2075dk, new SystemTimeProvider());
    }

    public final void a(Gf gf) {
        ICommonExecutor iCommonExecutor = this.d;
        C2075dk c2075dk = this.b;
        iCommonExecutor.submit(new C2574xe(c2075dk.b, c2075dk.c, gf));
    }

    public final void b(Gf gf) {
        ICommonExecutor iCommonExecutor = this.d;
        C2075dk c2075dk = this.b;
        iCommonExecutor.submit(new Ji(c2075dk.b, c2075dk.c, gf));
    }
}
