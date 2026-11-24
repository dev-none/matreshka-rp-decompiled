package com.ironsource.adqualitysdk.sdk.i;

import com.hyprmx.android.sdk.core.DependencyHolder;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ꮠ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0590 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0559 f2100;

    public C0590(C0559 c0559) {
        this.f2100 = c0559;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0559 c0559 = this.f2100;
        DependencyHolder dependencyHolder = (DependencyHolder) arrayList.get(0);
        c0559.getClass();
        return dependencyHolder.getDistributorId();
    }
}
