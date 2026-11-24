package io.appmetrica.analytics.impl;

import java.util.LinkedList;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.s9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2444s9 extends Kf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2427rh f6310a;
    public final C2477th b;
    public final C2123fh c;

    public C2444s9(C2085e5 c2085e5) {
        this.f6310a = new C2427rh(c2085e5);
        this.b = new C2477th(c2085e5);
        this.c = new C2123fh(c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.Kf
    public final AbstractC2064d9 a(int i) {
        LinkedList linkedList = new LinkedList();
        int iOrdinal = EnumC2195ib.a(i).ordinal();
        if (iOrdinal == 1) {
            linkedList.add(this.f6310a);
        } else if (iOrdinal == 3) {
            linkedList.add(this.c);
        } else if (iOrdinal == 27) {
            linkedList.add(this.b);
            linkedList.add(this.f6310a);
        }
        return new C2038c9(linkedList);
    }
}
