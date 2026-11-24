package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵤ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0844 implements InterfaceC1079 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0719 f3054;

    public C0844(C0719 c0719) {
        this.f3054 = c0719;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1079
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8401() {
        ArrayList arrayList;
        synchronized (this) {
            arrayList = new ArrayList(this.f3054.f2455);
            this.f3054.f2455.clear();
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((Runnable) it.next()).run();
        }
    }
}
