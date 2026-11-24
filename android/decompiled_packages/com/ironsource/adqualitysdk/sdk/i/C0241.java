package com.ironsource.adqualitysdk.sdk.i;

import com.bytedance.sdk.openadsdk.TTAdConfig;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ȯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0241 implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0178 f930;

    public C0241(C0178 c0178) {
        this.f930 = c0178;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        C0178 c0178 = this.f930;
        TTAdConfig tTAdConfig = (TTAdConfig) arrayList.get(0);
        c0178.getClass();
        return tTAdConfig.getData();
    }
}
