package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;
import java.util.HashSet;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.q2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2388q2 extends Wg {
    public final zo b;
    public final C2049ck c;

    public C2388q2(C2085e5 c2085e5) {
        this(c2085e5, c2085e5.u(), C2049ck.c());
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        C2085e5 c2085e5 = this.f5944a;
        if (!this.b.c() && !this.b.d()) {
            if (((C2378ph) c2085e5.k.a()).e) {
                this.c.b();
            }
            R8 r8 = this.f5944a.l;
            if (r8.c == null) {
                r8.a();
            }
            T8 t8 = r8.c;
            t8.getClass();
            t8.b = new HashSet();
            t8.d = 0;
            T8 t9 = r8.c;
            t9.f5901a = true;
            W8 w8 = r8.b;
            IBinaryDataHelper iBinaryDataHelper = w8.c;
            V8 v8 = w8.b;
            w8.f5942a.getClass();
            iBinaryDataHelper.insert("event_hashes", v8.toByteArray(U8.a(t9)));
        }
        return false;
    }

    public C2388q2(C2085e5 c2085e5, zo zoVar, C2049ck c2049ck) {
        super(c2085e5);
        this.b = zoVar;
        this.c = c2049ck;
    }
}
