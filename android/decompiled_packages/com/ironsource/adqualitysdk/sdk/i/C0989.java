package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﬤ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0989 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0966 f3520;

    public C0989(C0966 c0966) {
        this.f3520 = c0966;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        ArrayList<C1006> arrayList = new ArrayList(this.f3520.f3390.values());
        this.f3520.f3390.clear();
        for (C1006 c1006 : arrayList) {
            c1006.f3380 = null;
            c1006.f3643 = null;
            AbstractC1041 abstractC1041M8867 = AbstractC1041.m8867();
            synchronized (abstractC1041M8867) {
                abstractC1041M8867.f3778.remove(c1006);
            }
        }
    }
}
