package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ℐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0930 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0896 f3285;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0471 f3286;

    public C0930(C0896 c0896, C0471 c0471) {
        this.f3285 = c0896;
        this.f3286 = c0471;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean z;
        C0896 c0896 = this.f3285;
        synchronized (c0896) {
            z = c0896.f3170;
        }
        if (z) {
            this.f3286.mo8401();
        } else {
            this.f3285.f3173.add(this.f3286);
        }
    }
}
