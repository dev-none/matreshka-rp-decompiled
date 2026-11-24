package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ɛ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0244 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0225 f932;

    public C0244(C0225 c0225) {
        this.f932 = c0225;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0210 c0210 = this.f932.f892;
        if (c0210.f877) {
            C0418 c0418 = c0210.f876;
            String strDecrypt = StringFog.decrypt("8Hzk0qGnA97zN+PXpbIE8uhq9NStgQ/H\n", "nRmAu8DTarE=\n");
            c0418.getClass();
            c0418.m8532(strDecrypt, new ArrayList());
            this.f932.f892.f877 = false;
        }
    }
}
