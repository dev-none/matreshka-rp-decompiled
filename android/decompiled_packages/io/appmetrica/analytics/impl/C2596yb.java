package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.executors.InterruptionSafeThread;
import java.util.HashMap;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.yb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2596yb extends InterruptionSafeThread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2621zb f6413a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2596yb(C2621zb c2621zb, String str) {
        super(str);
        this.f6413a = c2621zb;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        HashMap map;
        synchronized (this.f6413a.f6428a) {
            C2621zb.a(this.f6413a);
            this.f6413a.e = true;
            this.f6413a.f6428a.notifyAll();
        }
        while (isRunning()) {
            synchronized (this) {
                if (this.f6413a.b.size() == 0) {
                    try {
                        wait();
                    } catch (InterruptedException unused) {
                    }
                }
                map = new HashMap(this.f6413a.b);
                this.f6413a.b.clear();
            }
            if (map.size() > 0) {
                C2621zb.a(this.f6413a, map);
                map.clear();
            }
        }
    }
}
