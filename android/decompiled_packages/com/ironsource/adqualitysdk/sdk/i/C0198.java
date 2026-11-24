package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ľ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0198 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1139 f799;

    public C0198(C1139 c1139) {
        this.f799 = c1139;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C1139 c1139 = this.f799;
        if (c1139.f3986 == null) {
            c1139.f3986 = new C0236(this);
            c1139.f3988.post(new C0211(this));
        }
    }
}
