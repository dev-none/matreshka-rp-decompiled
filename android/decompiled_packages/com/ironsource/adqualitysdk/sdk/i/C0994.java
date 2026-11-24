package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.גּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0994 implements InterfaceC0969 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0968 f3535;

    public C0994(C0968 c0968) {
        this.f3535 = c0968;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0969
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8849(List list) {
        AbstractC0904 abstractC0904M8839 = this.f3535.m8839(list);
        if ((abstractC0904M8839 instanceof C0789) || (abstractC0904M8839 instanceof C1748e0)) {
            return abstractC0904M8839;
        }
        this.f3535.m8847(StringFog.decrypt("WyWPYOA2uxM+PpNk8DHxAX8v32f2Nv4Fez6abPUnulc=\n", "Hl3/BYNC3nc=\n") + abstractC0904M8839);
        throw null;
    }
}
