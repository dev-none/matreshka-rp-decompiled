package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2526vg implements InterfaceC2377pg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashSet f6372a;
    public boolean b;
    public C2451sg c;

    public C2526vg() {
        this(C2495ua.k().u());
    }

    /* JADX WARN: Code duplicated, block: B:8:0x0027 A[Catch: all -> 0x003a, LOOP:0: B:6:0x0021->B:8:0x0027, LOOP_END, TryCatch #0 {, blocks: (B:4:0x0003, B:5:0x0016, B:6:0x0021, B:8:0x0027, B:9:0x0033), top: B:15:0x0003 }] */
    @Override // io.appmetrica.analytics.impl.InterfaceC2377pg
    public final synchronized void a(C2451sg c2451sg) {
        Iterator it;
        if (c2451sg != null) {
            LoggerStorage.getMainPublicOrAnonymousLogger().info("Received referrer from source %s: %s", c2451sg.d.f6296a, c2451sg.f6314a);
            this.c = c2451sg;
            this.b = true;
            it = this.f6372a.iterator();
            while (it.hasNext()) {
                ((InterfaceC2251kg) it.next()).a(this.c);
            }
            this.f6372a.clear();
        } else {
            this.c = c2451sg;
            this.b = true;
            it = this.f6372a.iterator();
            while (it.hasNext()) {
                ((InterfaceC2251kg) it.next()).a(this.c);
            }
            this.f6372a.clear();
        }
        throw th;
    }

    public C2526vg(C2402qg c2402qg) {
        this.f6372a = new HashSet();
        c2402qg.a(new Bl(this));
        c2402qg.a();
    }

    public final synchronized void a(InterfaceC2251kg interfaceC2251kg) {
        this.f6372a.add(interfaceC2251kg);
        if (this.b) {
            interfaceC2251kg.a(this.c);
            this.f6372a.remove(interfaceC2251kg);
        }
    }
}
