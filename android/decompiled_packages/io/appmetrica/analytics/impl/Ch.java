package io.appmetrica.analytics.impl;

import android.content.Intent;
import android.os.RemoteException;
import io.appmetrica.analytics.internal.IAppMetricaService;
import java.util.concurrent.Callable;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Unit;

/* JADX INFO: loaded from: classes7.dex */
public abstract class Ch implements Callable {
    public static final Bh d = new Bh();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2361p0 f5627a;
    public final InterfaceC2076dl b;
    public boolean c;

    public Ch(C2361p0 c2361p0, InterfaceC2076dl interfaceC2076dl) {
        this.f5627a = c2361p0;
        this.b = interfaceC2076dl;
    }

    public abstract void a(IAppMetricaService iAppMetricaService);

    public void a(Throwable th) {
    }

    public final C2361p0 b() {
        return this.f5627a;
    }

    public boolean c() {
        C2361p0 c2361p0 = this.f5627a;
        synchronized (c2361p0) {
            if (c2361p0.d == null) {
                c2361p0.e = new CountDownLatch(1);
                Intent intentA = Ek.a(c2361p0.f6247a);
                try {
                    c2361p0.g.b(c2361p0.f6247a);
                    c2361p0.f6247a.bindService(intentA, c2361p0.i, 1);
                } catch (Throwable unused) {
                }
            }
        }
        this.f5627a.a(5000L);
        return true;
    }

    @Override // java.util.concurrent.Callable
    public /* bridge */ /* synthetic */ Object call() {
        a();
        return Unit.INSTANCE;
    }

    public final boolean d() {
        return this.c;
    }

    public final void a(boolean z) {
        this.c = z;
    }

    public void a() {
        IAppMetricaService iAppMetricaService;
        try {
            if (this.c) {
                return;
            }
            this.c = true;
            int i = 0;
            do {
                C2361p0 c2361p0 = this.f5627a;
                synchronized (c2361p0) {
                    iAppMetricaService = c2361p0.d;
                }
                if (iAppMetricaService != null) {
                    try {
                        a(iAppMetricaService);
                        InterfaceC2076dl interfaceC2076dl = this.b;
                        if (interfaceC2076dl == null || ((C2329ni) interfaceC2076dl).a()) {
                            this.f5627a.c();
                            return;
                        }
                        return;
                    } catch (RemoteException unused) {
                    }
                }
                i++;
                if (!c()) {
                    return;
                }
                AtomicBoolean atomicBoolean = X1.e;
                if (X1.e.get()) {
                    return;
                }
            } while (i < 3);
        } catch (Throwable th) {
            a(th);
        }
    }
}
