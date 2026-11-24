package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڌ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0474 implements InterfaceC0678 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ List f1748;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f1749;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f1750;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1064 f1751;

    public C0474(C1064 c1064, C0704 c0704, C1013 c1013, List list) {
        this.f1751 = c1064;
        this.f1750 = c0704;
        this.f1749 = c1013;
        this.f1748 = list;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0678
    /* JADX INFO: renamed from: ﾒ */
    public final boolean mo8349(InterfaceC0681 interfaceC0681) {
        C0321 c0321 = this.f1751.f3823;
        C0704 c0704 = this.f1750;
        C1013 c1013 = this.f1749;
        List list = this.f1748;
        AbstractC0382 abstractC0382 = c0321.f1185;
        if (abstractC0382 != null && !abstractC0382.mo8502(interfaceC0681)) {
            return false;
        }
        if (c0321.f1184 == null) {
            return true;
        }
        ArrayList arrayList = new ArrayList(list);
        arrayList.add(0, interfaceC0681);
        C0944 c0944 = c0321.f1184;
        c0944.getClass();
        return c0944.m8820(c0704, c0704.f2434, c1013, arrayList).m8737();
    }
}
