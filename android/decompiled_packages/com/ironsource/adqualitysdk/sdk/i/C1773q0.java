package com.ironsource.adqualitysdk.sdk.i;

import com.vungle.warren.model.Placement;
import com.vungle.warren.persistence.Repository;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.q0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1773q0 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1782v0 f489;

    public C1773q0(C1782v0 c1782v0) {
        this.f489 = c1782v0;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C1782v0 c1782v0 = this.f489;
        Repository repository = (Repository) arrayList.get(0);
        String str = (String) arrayList.get(1);
        c1782v0.getClass();
        return (Placement) repository.load(str, Placement.class).get();
    }
}
