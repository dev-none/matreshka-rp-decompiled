package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2020bh extends Wg {
    public final zo b;

    public C2020bh(C2085e5 c2085e5) {
        this(c2085e5, c2085e5.u());
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        C2085e5 c2085e5 = this.f5944a;
        if (this.b.c()) {
            return false;
        }
        if (!this.b.d()) {
            C2419r9 c2419r9 = c2085e5.n;
            c2419r9.c.b(W5.a(w5, EnumC2195ib.EVENT_TYPE_FIRST_ACTIVATION));
        }
        zo zoVar = this.b;
        synchronized (zoVar) {
            Ao ao = zoVar.f6438a;
            ao.a(ao.a().put("first_event_done", true));
        }
        return false;
    }

    public C2020bh(C2085e5 c2085e5, zo zoVar) {
        super(c2085e5);
        this.b = zoVar;
    }
}
