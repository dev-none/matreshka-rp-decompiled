package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ۂ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0492 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1786;

    public C0492(C0418 c0418) {
        this.f1786 = c0418;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        ArrayList arrayList;
        C0418 c0418 = this.f1786;
        Iterator it = (c0418.f1533 != null ? new ArrayList(c0418.f1533) : new ArrayList()).iterator();
        while (it.hasNext()) {
            ((C0929) it.next()).m8803();
        }
        C0418 c0419 = this.f1786;
        synchronized (c0419) {
            arrayList = c0419.f1533;
        }
        if (arrayList != null) {
            arrayList.clear();
        }
        this.f1786.f1533 = null;
        this.f1786.f1528 = null;
    }
}
