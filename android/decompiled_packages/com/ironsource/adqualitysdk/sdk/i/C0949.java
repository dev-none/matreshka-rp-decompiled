package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.〱, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0949 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0896 f3365;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC1079 f3366;

    public C0949(C0896 c0896, InterfaceC1079 interfaceC1079) {
        this.f3365 = c0896;
        this.f3366 = interfaceC1079;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean z;
        this.f3365.f3172.add(this.f3366);
        C0896 c0896 = this.f3365;
        synchronized (c0896) {
            z = c0896.f3170;
        }
        if (z) {
            this.f3366.mo8401();
        }
    }
}
