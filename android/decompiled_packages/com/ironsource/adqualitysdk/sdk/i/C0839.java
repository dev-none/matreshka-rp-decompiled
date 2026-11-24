package com.ironsource.adqualitysdk.sdk.i;

import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵟ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0839 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0816 f3047;

    public C0839(C0816 c0816) {
        this.f3047 = c0816;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        HashSet hashSet;
        C0808.m8732(this.f3047.f2894, true);
        C0808 c0808 = this.f3047.f2894;
        synchronized (c0808) {
            hashSet = new HashSet(c0808.f2881);
        }
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            ((InterfaceC0424) it.next()).mo8538();
        }
    }
}
