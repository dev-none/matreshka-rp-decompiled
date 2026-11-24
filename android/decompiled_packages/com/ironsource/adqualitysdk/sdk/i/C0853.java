package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.WeakHashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ḭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0853 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0785 f3068;

    public C0853(C0785 c0785) {
        this.f3068 = c0785;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0785 c0785 = this.f3068;
        WeakHashMap weakHashMap = (WeakHashMap) arrayList.get(0);
        c0785.getClass();
        return new C0811(c0785, weakHashMap, c0566);
    }
}
