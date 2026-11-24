package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import java.util.concurrent.ThreadPoolExecutor;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｳ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1143 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0982 f4016;

    public C1143(C0982 c0982) {
        this.f4016 = c0982;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0982 c0982 = this.f4016;
        ThreadPoolExecutor threadPoolExecutor = (ThreadPoolExecutor) arrayList.get(0);
        c0982.getClass();
        return new C1007(c0982, threadPoolExecutor, c0566);
    }
}
