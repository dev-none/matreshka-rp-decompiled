package io.appmetrica.analytics.impl;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.xa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public class C2570xa extends K2 {
    public final Aa b;

    public C2570xa(int i) {
        this(i, null);
    }

    public int b(Object obj) {
        return 0;
    }

    public C2570xa(int i, Aa aa) {
        super(i);
        this.b = aa;
    }

    @Override // io.appmetrica.analytics.impl.K2, io.appmetrica.analytics.impl.Aa
    public final On a(List<Object> list) {
        int iB;
        int i = 0;
        if (list == null || (list.size() <= this.f5754a && this.b == null)) {
            iB = 0;
        } else {
            ArrayList arrayList = new ArrayList();
            iB = 0;
            int i2 = 0;
            for (Object obj : list) {
                if (i2 < this.f5754a) {
                    Aa aa = this.b;
                    if (aa != null) {
                        On onA = aa.a(obj);
                        Object obj2 = onA.f5825a;
                        iB += onA.b.getBytesTruncated();
                        no.a(obj, onA.f5825a);
                        obj = obj2;
                    }
                    arrayList.add(obj);
                } else {
                    i++;
                    iB += b(obj);
                }
                i2++;
            }
            list = arrayList;
        }
        return new On(list, new C2489u4(i, iB));
    }

    public final Aa b() {
        return this.b;
    }
}
