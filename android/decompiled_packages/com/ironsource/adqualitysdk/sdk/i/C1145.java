package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｷ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1145 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0982 f4017;

    public C1145(C0982 c0982) {
        this.f4017 = c0982;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0982 c0982 = this.f4017;
        HashMap map = (HashMap) arrayList.get(0);
        c0982.getClass();
        return new C0990(c0982, map, c0566);
    }
}
