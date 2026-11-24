package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import io.appmetrica.analytics.coreutils.internal.time.TimeProvider;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.rh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2427rh extends Wg {
    public final C2600yf b;
    public final zo c;
    public final SafePackageManager d;
    public final TimeProvider e;

    public C2427rh(C2085e5 c2085e5) {
        this(c2085e5, c2085e5.u(), C2495ua.k().t(), new SafePackageManager(), new SystemTimeProvider());
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        C2085e5 c2085e5 = this.f5944a;
        if (this.c.d()) {
            return false;
        }
        W5 w5A = ((C2378ph) c2085e5.k.a()).e ? W5.a(w5, EnumC2195ib.EVENT_TYPE_APP_UPDATE) : W5.a(w5, EnumC2195ib.EVENT_TYPE_INIT);
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("appInstaller", (String) WrapUtils.getOrDefault(this.d.getInstallerPackageName(c2085e5.f6057a, c2085e5.b.f5952a), ""));
            C2600yf c2600yf = this.b;
            c2600yf.h.a(c2600yf.f5930a);
            jSONObject.put("preloadInfo", ((C2525vf) c2600yf.c()).b());
        } catch (Throwable unused) {
        }
        w5A.setValue(jSONObject.toString());
        C2419r9 c2419r9 = c2085e5.n;
        c2419r9.a(w5A, Wk.a(c2419r9.c.b(w5A), w5A.i));
        zo zoVar = this.c;
        synchronized (zoVar) {
            Ao ao = zoVar.f6438a;
            ao.a(ao.a().put("init_event_done", true));
        }
        this.c.a(this.e.currentTimeMillis());
        return false;
    }

    public C2427rh(C2085e5 c2085e5, zo zoVar, C2600yf c2600yf, SafePackageManager safePackageManager, SystemTimeProvider systemTimeProvider) {
        super(c2085e5);
        this.c = zoVar;
        this.b = c2600yf;
        this.d = safePackageManager;
        this.e = systemTimeProvider;
    }
}
