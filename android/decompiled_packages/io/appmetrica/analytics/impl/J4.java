package io.appmetrica.analytics.impl;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes7.dex */
public final class J4 extends Kf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final I4 f5741a;

    public J4(E4 e4) {
        this.f5741a = new I4(e4);
    }

    @Override // io.appmetrica.analytics.impl.Kf
    public final AbstractC2064d9 a(int i) {
        ArrayList arrayList = new ArrayList();
        int iOrdinal = EnumC2195ib.a(i).ordinal();
        if (iOrdinal == 12) {
            arrayList.add(this.f5741a.f5719a);
        } else if (iOrdinal == 14) {
            arrayList.add(this.f5741a.b);
        } else if (iOrdinal == 34) {
            arrayList.add(this.f5741a.c);
        }
        return new C2038c9(arrayList);
    }
}
