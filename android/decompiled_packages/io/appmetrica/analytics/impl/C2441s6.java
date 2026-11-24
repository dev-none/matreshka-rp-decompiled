package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.s6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2441s6 implements InterfaceC2014bb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2466t6 f6307a;
    public final Kh b;

    public C2441s6(C2466t6 c2466t6) {
        this.f6307a = c2466t6;
        this.b = c2466t6.a();
        C2213j4.l().getClass();
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2014bb
    public final void a(Sn sn) {
        Bi bi = this.f6307a.f6327a;
        Ah ahA = bi.a(sn, this.b);
        Kh kh = ahA.e;
        Tl tl = bi.e;
        if (tl != null) {
            kh.b.setUuid(((Sl) tl).g());
        } else {
            kh.getClass();
        }
        bi.c.b(ahA);
        LoggerStorage.getMainPublicOrAnonymousLogger().info("Unhandled exception received: " + sn, new Object[0]);
    }

    public final void a(AppMetricaConfig appMetricaConfig) {
        Map<String, String> map = appMetricaConfig.errorEnvironment;
        if (map != null) {
            for (Map.Entry<String, String> entry : map.entrySet()) {
                Kh kh = this.b;
                String key = entry.getKey();
                String value = entry.getValue();
                synchronized (kh) {
                    I8 i8 = kh.c;
                    i8.b.b(i8.f5723a, key, value);
                }
            }
        }
    }
}
