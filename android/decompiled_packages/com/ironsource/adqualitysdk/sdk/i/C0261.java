package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;
import net.pubnative.lite.sdk.vpaid.models.vast.StaticResource;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ɿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0261 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0824 f951;

    public C0261(C0824 c0824) {
        this.f951 = c0824;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0824 c0824 = this.f951;
        StaticResource staticResource = (StaticResource) arrayList.get(0);
        c0824.getClass();
        return staticResource.getCreativeType();
    }
}
