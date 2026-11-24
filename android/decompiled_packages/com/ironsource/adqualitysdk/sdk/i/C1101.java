package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﻡ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1101 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1072 f3929;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0764 f3930;

    public C1101(C1072 c1072, C0764 c0764) {
        this.f3929 = c1072;
        this.f3930 = c0764;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        int iM8487;
        C1072 c1072 = this.f3929;
        C0783 c0783 = c1072.f3855;
        String str = c1072.f3856 + StringFog.decrypt("PQ==\n", "FxH6gDHV7wQ=\n");
        C0385 c0385 = c0783.f2640;
        c0385.getClass();
        try {
            iM8487 = c0385.f1449.m8487(str);
        } catch (Throwable unused) {
            iM8487 = 0;
        }
        AbstractC1766n.m8385(new C1127(this, iM8487));
    }
}
