package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴩ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0788 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0782 f2676;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Activity f2677;

    public C0788(C0782 c0782, Activity activity) {
        this.f2676 = c0782;
        this.f2677 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0444 c0444 = this.f2676.f2638.f2601;
        String strDecrypt = StringFog.decrypt("bn7C0KBqgD57ZQ==\n", "CBGhpdM17FE=\n");
        c0444.getClass();
        AbstractC1766n.m8385(new C0459(c0444, strDecrypt));
        this.f2676.f2638.m8710(StringFog.decrypt("KpChJ3P8f58/iw==\n", "TP/CUgCjE/A=\n"), C0782.m8720(this.f2676, this.f2677));
    }
}
