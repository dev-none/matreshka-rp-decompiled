package com.ironsource.adqualitysdk.sdk.i;

import com.smaato.sdk.video.vast.model.StaticResource;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒡ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0632 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0798 f2222;

    public C0632(C0798 c0798) {
        this.f2222 = c0798;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0798 c0798 = this.f2222;
        StaticResource staticResource = (StaticResource) arrayList.get(0);
        c0798.getClass();
        return staticResource.uri;
    }
}
