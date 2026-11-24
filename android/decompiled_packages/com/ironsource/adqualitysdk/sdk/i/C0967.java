package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ヶ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0967 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0966 f3391;

    public C0967(C0966 c0966) {
        this.f3391 = c0966;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        ArrayList arrayList = new ArrayList(this.f3391.f3388.values());
        this.f3391.f3388.clear();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((C1767n0) it.next()).m8392();
        }
    }
}
