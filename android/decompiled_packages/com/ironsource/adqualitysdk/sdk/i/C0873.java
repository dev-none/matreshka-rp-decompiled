package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ṯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0873 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0871 f3127;

    public C0873(C0871 c0871) {
        this.f3127 = c0871;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0763 c0763 = this.f3127.f3124;
        String str = C0763.f2600;
        c0763.m8713(false);
        C0980 c0980 = this.f3127.f3125;
        if (c0980 != null) {
            try {
                c0980.mo8327();
            } catch (Exception e) {
                AbstractC1104.m8888(StringFog.decrypt("kqVIHkzk1/2g\n", "08spcjWQvp4=\n"), StringFog.decrypt("CgT49H7tUeJvBe/1aIhO6SECsLtjo3vjIgbm/nikV+I=\n", "T3aKmwzNOIw=\n"), e, false, false, true);
            }
        }
    }
}
