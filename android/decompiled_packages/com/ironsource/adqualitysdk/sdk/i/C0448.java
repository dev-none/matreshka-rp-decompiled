package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ب, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0448 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0427 f1711;

    public C0448(C0427 c0427) {
        this.f1711 = c0427;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean zMo8748;
        C1003 c1003;
        EnumC0398 enumC0398;
        C0331 c0331 = this.f1711.f1547.f1526;
        if (c0331 != null && (c1003 = c0331.f1211) != null) {
            c1003.f3627 = true;
            HashMap map = c1003.f3633.f1362.f1212;
            Iterator it = ((map == null || map.isEmpty()) ? new ArrayList() : new ArrayList(map.values())).iterator();
            do {
                if (!it.hasNext()) {
                    c1003.m8853(false);
                    break;
                }
                enumC0398 = ((C0396) it.next()).f1478;
                if (enumC0398 == EnumC0398.f1492 || enumC0398 == EnumC0398.f1491) {
                    break;
                }
            } while (enumC0398 != EnumC0398.f1493);
        }
        synchronized (this.f1711.f1547) {
            zMo8748 = AbstractC0895.m8747().mo8748();
        }
        if (zMo8748) {
            C0418.m8518(this.f1711.f1547);
        }
    }
}
