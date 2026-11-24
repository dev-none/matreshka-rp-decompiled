package io.appmetrica.analytics.impl;

import androidx.fragment.app.FragmentTransaction;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2522vc implements InterfaceC2377pg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2547wc f6369a;

    public C2522vc(C2547wc c2547wc) {
        this.f6369a = c2547wc;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2377pg
    public final void a(C2451sg c2451sg) {
        if (c2451sg == null) {
            return;
        }
        W5 w5 = new W5("", "", 0);
        w5.setValueBytes(c2451sg.a());
        EnumC2195ib enumC2195ib = EnumC2195ib.EVENT_TYPE_UNDEFINED;
        w5.d = FragmentTransaction.TRANSIT_FRAGMENT_OPEN;
        this.f6369a.a(w5);
    }
}
