package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﻛ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1098 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1006 f3890;

    public C1098(C1006 c1006) {
        this.f3890 = c1006;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        try {
            C1006 c1006 = this.f3890;
            c1006.f3642 = Class.forName(c1006.f3637.f3683);
            AbstractC1766n.m8384(new C1165(this));
        } catch (ClassNotFoundException e) {
            AbstractC0323.m8470(StringFog.decrypt("oBOvg8RQQaygFJOL3F1ZsJM=\n", "4XDb6rI5NdU=\n"), StringFog.decrypt("Pwx3r4Wo70AJCmCunubkCQ4RJaWB7e1dCV5qptc=\n", "en4FwPeIgyk=\n") + this.f3890.f3637.f3683 + StringFog.decrypt("QyA=\n", "eQAXsqyJN4g=\n") + e.getLocalizedMessage());
        }
    }
}
