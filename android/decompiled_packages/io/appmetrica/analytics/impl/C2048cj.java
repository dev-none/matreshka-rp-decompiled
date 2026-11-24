package io.appmetrica.analytics.impl;

import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.cj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2048cj extends Wg {
    public C2048cj(C2085e5 c2085e5) {
        super(c2085e5);
        c2085e5.b().a();
    }

    /* JADX WARN: Code duplicated, block: B:11:0x0038  */
    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        Object objRemove;
        for (Map.Entry entry : w5.p.entrySet()) {
            Ok ok = this.f5944a.u;
            String str = (String) entry.getKey();
            byte[] bArr = (byte[]) entry.getValue();
            if (bArr != null) {
                ok.getClass();
                if (bArr.length == 0) {
                    objRemove = ok.b.remove(str);
                } else {
                    objRemove = ok.b.put(str, bArr);
                }
            } else {
                objRemove = ok.b.remove(str);
            }
            Sk sk = ok.f5824a;
            sk.d.insert(sk.f5888a, sk.c.toByteArray(sk.b.fromModel(ok.b)));
        }
        return true;
    }
}
