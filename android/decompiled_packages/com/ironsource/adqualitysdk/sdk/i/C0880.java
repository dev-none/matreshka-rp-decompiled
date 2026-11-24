package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ẓ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0880 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0763 f3135;

    public C0880(C0763 c0763) {
        this.f3135 = c0763;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0444 c0444 = this.f3135.f2601;
        String strDecrypt = StringFog.decrypt("RwGBMYKMI7BWH7o=\n", "M3HeQuf/UO8=\n");
        c0444.getClass();
        AbstractC1766n.m8385(new C0459(c0444, strDecrypt));
        this.f3135.m8710(StringFog.decrypt("gVnJgv1Nno6QR/I=\n", "9SmW8Zg+7dE=\n"), new JSONObject());
    }
}
