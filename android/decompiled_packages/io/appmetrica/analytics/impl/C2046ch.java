package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ch, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2046ch extends Wg {
    public final R8 b;

    public C2046ch(C2085e5 c2085e5) {
        this(c2085e5, c2085e5.j());
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        EnumC2245ka enumC2245ka;
        if (!TextUtils.isEmpty(w5.getName())) {
            R8 r8 = this.b;
            String name = w5.getName();
            if (r8.c == null) {
                r8.a();
            }
            int iHashCode = name.hashCode();
            if (r8.c.b.contains(Integer.valueOf(iHashCode))) {
                enumC2245ka = EnumC2245ka.NON_FIRST_OCCURENCE;
            } else {
                T8 t8 = r8.c;
                EnumC2245ka enumC2245ka2 = t8.f5901a ? EnumC2245ka.FIRST_OCCURRENCE : EnumC2245ka.UNKNOWN;
                if (t8.d < 1000) {
                    t8.b.add(Integer.valueOf(iHashCode));
                    t8.d++;
                } else {
                    t8.f5901a = false;
                }
                W8 w8 = r8.b;
                T8 t9 = r8.c;
                IBinaryDataHelper iBinaryDataHelper = w8.c;
                V8 v8 = w8.b;
                w8.f5942a.getClass();
                iBinaryDataHelper.insert("event_hashes", v8.toByteArray(U8.a(t9)));
                enumC2245ka = enumC2245ka2;
            }
            w5.k = enumC2245ka;
        }
        return false;
    }

    public C2046ch(C2085e5 c2085e5, R8 r8) {
        super(c2085e5);
        this.b = r8;
    }
}
