package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ῖ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0915 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0896 f3239;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0484 f3240;

    public C0915(C0896 c0896, C0484 c0484) {
        this.f3239 = c0896;
        this.f3240 = c0484;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean z;
        C0896 c0896 = this.f3239;
        c0896.f3174 = this.f3240;
        synchronized (c0896) {
            z = c0896.f3170;
        }
        if (z) {
            this.f3240.mo8401();
        }
    }
}
