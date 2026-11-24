package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ږ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0484 implements InterfaceC1079 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0324 f1777;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ String f1778;

    public C0484(C0324 c0324, String str) {
        this.f1777 = c0324;
        this.f1778 = str;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1079
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8401() {
        C0653 c0653;
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        String strDecrypt = StringFog.decrypt("pd+smEnx\n", "1rDD9SWQdrs=\n");
        String str = this.f1778;
        C0896 c0896 = (C0896) abstractC0895M8747;
        if (strDecrypt != null) {
            c0653 = (C0653) c0896.mo8763().get(strDecrypt);
        } else {
            c0896.getClass();
            c0653 = null;
        }
        if (c0653 == null || !c0653.m8608(str)) {
            return;
        }
        C1142 c1142 = this.f1777.f1190;
        String str2 = C1142.f3996;
        c1142.m8946(true);
    }
}
