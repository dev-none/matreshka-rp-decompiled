package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.content.Intent;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᵇ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0816 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0808 f2894;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Context f2895;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ Intent f2896;

    public C0816(C0808 c0808, Intent intent, Context context) {
        this.f2894 = c0808;
        this.f2896 = intent;
        this.f2895 = context;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        try {
            if (this.f2896.getAction().equals(StringFog.decrypt("swMwNMmY69e8CCBoxZ7hl/wuGwjotMytmzsdEv+uzLGTIxMD\n", "0m1URqbxj/k=\n"))) {
                String str = C0808.f2880;
                AbstractC0323.m8477(str, StringFog.decrypt("q4Z3u6Tthc+GjG2irvyahpOKd7Xr/IaOi4Rm\n", "5eMDzMuf7u8=\n"));
                if (this.f2896.getBooleanExtra(StringFog.decrypt("bCjMnuiYiop2LvmY8o8=\n", "AkeP8Yb27+k=\n"), false)) {
                    AbstractC0323.m8477(str, StringFog.decrypt("YZJmcRvZBQRblSNtG4oBS0eRI2ARkBhBVo5qdReKDw==\n", "NfoDA37+diQ=\n"));
                    AbstractC1766n.m8384(new C0858(this));
                } else if (C0808.m8733(this.f2894, this.f2895)) {
                    AbstractC1766n.m8384(new C0839(this));
                } else {
                    AbstractC1766n.m8384(new C0831(this));
                }
            }
        } catch (Exception e) {
            AbstractC1104.m8887(C0808.f2880, StringFog.decrypt("KVifMRpfWLNMRYMMDRxUtBpP\n", "bCrtXmh/Md0=\n"), (Throwable) e, false);
        }
    }
}
