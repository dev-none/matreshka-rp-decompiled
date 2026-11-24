package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.丿, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0975 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0896 f3416;

    public C0975(C0896 c0896) {
        this.f3416 = c0896;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0896 c0896 = this.f3416;
        synchronized (c0896) {
            c0896.f3170 = true;
        }
        C0484 c0484 = this.f3416.f3174;
        if (c0484 != null) {
            c0484.mo8401();
        }
        Iterator it = new ArrayList(this.f3416.f3173).iterator();
        while (it.hasNext()) {
            ((InterfaceC1079) it.next()).mo8401();
        }
        this.f3416.f3173.clear();
        Iterator it2 = new ArrayList(this.f3416.f3172).iterator();
        while (it2.hasNext()) {
            ((InterfaceC1079) it2.next()).mo8401();
        }
    }
}
