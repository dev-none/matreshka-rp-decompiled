package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ŧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0211 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0198 f878;

    public C0211(C0198 c0198) {
        this.f878 = c0198;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        AbstractC1041 abstractC1041M8867 = AbstractC1041.m8867();
        C0236 c0236 = this.f878.f799.f3986;
        synchronized (abstractC1041M8867) {
            abstractC1041M8867.f3778.add(c0236);
        }
        AbstractC1766n.m8385(new C0224(this));
    }
}
