package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒮ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0644 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0642 f2252;

    public C0644(C0642 c0642) {
        this.f2252 = c0642;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        boolean zMo8748;
        C0418 c0418 = this.f2252.f2244;
        String str = C0418.f1521;
        synchronized (c0418) {
            zMo8748 = AbstractC0895.m8747().mo8748();
        }
        if (zMo8748) {
            AbstractC1766n.m8387(new C0645(this), AbstractC0895.m8747().mo8764());
        }
    }
}
