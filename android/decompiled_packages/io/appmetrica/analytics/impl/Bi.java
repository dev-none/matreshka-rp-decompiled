package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.internal.CounterConfiguration;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes7.dex */
public final class Bi {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final M4 f5614a;
    public final Un b;
    public final Di c;
    public final C2361p0 d;
    public Tl e;
    public final C2075dk f;

    public Bi(C2361p0 c2361p0, Un un, M4 m4, C2075dk c2075dk) {
        this(c2361p0, un, m4, c2075dk, new Di(c2361p0, c2075dk));
    }

    public final void a(Ah ah) {
        Kh kh = ah.e;
        Tl tl = this.e;
        if (tl != null) {
            kh.b.setUuid(((Sl) tl).g());
        } else {
            kh.getClass();
        }
        this.c.a(ah);
    }

    public final void b(String str) {
        Gf gf = this.f5614a.f5829a;
        synchronized (gf) {
            gf.f5692a.put("PROCESS_CFG_INSTALL_REFERRER_SOURCE", str);
        }
    }

    public Bi(C2361p0 c2361p0, Un un, M4 m4, C2075dk c2075dk, Di di) {
        this.d = c2361p0;
        this.f5614a = m4;
        this.b = un;
        this.f = c2075dk;
        this.c = di;
    }

    public final void a(Sl sl) {
        this.e = sl;
        this.f5614a.b.setUuid(sl.g());
    }

    public final void a(Boolean bool, Boolean bool2, Boolean bool3, Boolean bool4) {
        if (no.a(bool)) {
            this.f5614a.b.setLocationTracking(bool.booleanValue());
        }
        if (no.a(bool2)) {
            this.f5614a.b.setDataSendingEnabled(bool2.booleanValue());
        }
        if (no.a(bool3)) {
            this.f5614a.b.setAdvIdentifiersTracking(bool3.booleanValue(), bool4.booleanValue());
        }
        W5 w5A = W5.a();
        M4 m4 = this.f5614a;
        a(a(w5A, m4), m4, 1, (Map) null);
    }

    public final void a(W5 w5, Kh kh, int i, Map map) {
        String str;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        this.d.b();
        if (!no.a(map)) {
            w5.setValue(AbstractC2322nb.b(map));
            a(w5, kh);
        }
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str = kh.f;
        }
        a(new Ah(w5, false, i, null, new Kh(gf, counterConfiguration, i8, str)));
    }

    public static W5 a(W5 w5, Kh kh) {
        if (D9.f5638a.contains(Integer.valueOf(w5.d))) {
            w5.c = kh.d();
        }
        return w5;
    }

    public final void a(List list) {
        Gf gf = this.f5614a.f5829a;
        synchronized (gf) {
            gf.f5692a.put("PROCESS_CFG_CUSTOM_HOSTS", no.a((Collection) list) ? null : new JSONArray((Collection) list).toString());
        }
    }

    public final void a(HashMap map) {
        Gf gf = this.f5614a.f5829a;
        synchronized (gf) {
            gf.f5692a.put("PROCESS_CFG_CLIDS", AbstractC2322nb.b(map));
        }
    }

    public final void a(String str) {
        Gf gf = this.f5614a.f5829a;
        synchronized (gf) {
            gf.f5692a.put("PROCESS_CFG_DISTRIBUTION_REFERRER", str);
        }
    }

    public final Ah a(Sn sn, Kh kh) {
        String str;
        String str2;
        this.d.b();
        Un un = this.b;
        un.getClass();
        In in = sn.f5891a;
        if (in == null) {
            str = "";
        } else {
            str = (String) WrapUtils.getOrDefault(in.f5734a, "");
        }
        byte[] bArrFromModel = un.f5924a.fromModel(sn);
        PublicLogger orCreatePublicLogger = LoggerStorage.getOrCreatePublicLogger(kh.b.getApiKey());
        Set set = D9.f5638a;
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        U3 u3 = new U3(bArrFromModel, str, 5891, orCreatePublicLogger);
        u3.c = kh.d();
        HashMap map = u3.q;
        Gf gf = new Gf(kh.f5829a);
        CounterConfiguration counterConfiguration = new CounterConfiguration(kh.b);
        I8 i8 = kh.c;
        synchronized (kh) {
            str2 = kh.f;
        }
        return new Ah(u3, true, 1, map, new Kh(gf, counterConfiguration, i8, str2));
    }
}
