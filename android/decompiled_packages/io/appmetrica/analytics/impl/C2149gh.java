package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufStateStorage;
import io.appmetrica.analytics.coreutils.internal.AndroidUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import io.appmetrica.analytics.coreutils.internal.system.SystemServiceUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2149gh extends Wg {
    public final Ce b;
    public final ProtobufStateStorage c;
    public final G2 d;
    public final C2263l2 e;
    public final C2612z2 f;

    public C2149gh(C2085e5 c2085e5, Ce ce) {
        this(c2085e5, ce, ((Vm) Tm.a(C2031c2.class)).create(c2085e5.getContext()), new G2(c2085e5.getContext()), new C2263l2(), new C2612z2(c2085e5.getContext()));
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        C2085e5 c2085e5 = this.f5944a;
        c2085e5.b.toString();
        if (!c2085e5.t.c() || !c2085e5.x()) {
            return false;
        }
        C2031c2 c2031c2 = (C2031c2) this.c.read();
        List list = c2031c2.f6023a;
        F2 f2 = c2031c2.b;
        G2 g2 = this.d;
        g2.getClass();
        C2031c2 c2031c3 = null;
        F2 f2A = AndroidUtils.isApiAchieved(28) ? C2.a(g2.f5684a, g2.b) : null;
        List list2 = c2031c2.c;
        List list3 = (List) SystemServiceUtils.accessSystemServiceSafelyOrDefault(this.f.f6423a, "getting available providers", "location manager", Collections.EMPTY_LIST, new C2587y2());
        Ce ce = this.b;
        Context context = this.f5944a.f6057a;
        ce.getClass();
        ArrayList arrayListA = new Ui(context, new SafePackageManager()).a();
        if (CollectionUtils.areCollectionsEqual(arrayListA, list)) {
            arrayListA = null;
        }
        if (arrayListA != null || !no.a(f2, f2A) || !CollectionUtils.areCollectionsEqual(list2, list3)) {
            if (arrayListA != null) {
                list = arrayListA;
            }
            c2031c3 = new C2031c2(list, f2A, list3);
        }
        if (c2031c3 != null) {
            C2419r9 c2419r9 = c2085e5.n;
            W5 w5A = W5.a(w5, c2031c3.f6023a, c2031c3.b, this.e, c2031c3.c);
            c2419r9.a(w5A, Wk.a(c2419r9.c.b(w5A), w5A.i));
            long jCurrentTimeSeconds = c2419r9.j.currentTimeSeconds();
            c2419r9.l = jCurrentTimeSeconds;
            c2419r9.f6291a.a(jCurrentTimeSeconds).b();
            this.c.save(c2031c3);
            return false;
        }
        if (!c2085e5.A()) {
            return false;
        }
        C2419r9 c2419r10 = c2085e5.n;
        W5 w5A2 = W5.a(w5, c2031c2.f6023a, c2031c2.b, this.e, c2031c2.c);
        c2419r10.a(w5A2, Wk.a(c2419r10.c.b(w5A2), w5A2.i));
        long jCurrentTimeSeconds2 = c2419r10.j.currentTimeSeconds();
        c2419r10.l = jCurrentTimeSeconds2;
        c2419r10.f6291a.a(jCurrentTimeSeconds2).b();
        return false;
    }

    public C2149gh(C2085e5 c2085e5, Ce ce, ProtobufStateStorage protobufStateStorage, G2 g2, C2263l2 c2263l2, C2612z2 c2612z2) {
        super(c2085e5);
        this.b = ce;
        this.c = protobufStateStorage;
        this.d = g2;
        this.e = c2263l2;
        this.f = c2612z2;
    }
}
