package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0772 implements InterfaceC1079 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0763 f2626;

    public C0772(C0763 c0763) {
        this.f2626 = c0763;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1079
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8401() {
        C0763 c0763 = this.f2626;
        synchronized (c0763) {
            c0763.f2616 = true;
            c0763.m8713(true);
        }
    }
}
