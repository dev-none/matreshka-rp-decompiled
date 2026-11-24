package io.appmetrica.analytics.impl;

import android.util.Pair;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import java.util.ArrayList;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2512v2 implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2432rm fromModel(C2487u2 c2487u2) {
        C2383pm c2383pm;
        C2432rm c2432rm = new C2432rm();
        c2432rm.f6301a = new C2408qm[c2487u2.f6342a.size()];
        for (int i = 0; i < c2487u2.f6342a.size(); i++) {
            C2408qm c2408qm = new C2408qm();
            Pair pair = (Pair) c2487u2.f6342a.get(i);
            c2408qm.f6280a = (String) pair.first;
            if (pair.second != null) {
                c2408qm.b = new C2383pm();
                C2462t2 c2462t2 = (C2462t2) pair.second;
                if (c2462t2 == null) {
                    c2383pm = null;
                } else {
                    C2383pm c2383pm2 = new C2383pm();
                    c2383pm2.f6259a = c2462t2.f6323a;
                    c2383pm = c2383pm2;
                }
                c2408qm.b = c2383pm;
            }
            c2432rm.f6301a[i] = c2408qm;
        }
        return c2432rm;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2487u2 toModel(C2432rm c2432rm) {
        ArrayList arrayList = new ArrayList();
        for (C2408qm c2408qm : c2432rm.f6301a) {
            String str = c2408qm.f6280a;
            C2383pm c2383pm = c2408qm.b;
            arrayList.add(new Pair(str, c2383pm == null ? null : new C2462t2(c2383pm.f6259a)));
        }
        return new C2487u2(arrayList);
    }
}
