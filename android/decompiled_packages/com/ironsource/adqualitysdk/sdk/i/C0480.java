package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڒ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0480 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0473 f1762;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f1763;

    public C0480(C0473 c0473, String str) {
        this.f1762 = c0473;
        this.f1763 = str;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (this.f1762.f1743.f1535.get()) {
            return;
        }
        AbstractC0323.m8477(StringFog.decrypt("vlmJPwFenJWPe4Y/BVqNiA==\n", "/TbnUWQ96Po=\n"), StringFog.decrypt("9rHPY7BNUF/Ftshw+U9TWNG6xWO2Xhw=\n", "v9+mF9ksPDY=\n") + this.f1763);
        try {
            C0473 c0473 = this.f1762;
            c0473.f1743.m8530(c0473.f1746, c0473.f1747, this.f1763, c0473.f1745, c0473.f1744);
        } catch (Throwable th) {
            C0331 c0331 = this.f1762.f1743.f1526;
            if (c0331 != null) {
                AbstractC1766n.m8384(new C0394(c0331, this.f1763, EnumC0405.f1504));
            }
            HashMap mapM8519 = C0418.m8519(this.f1762.f1743);
            String str = this.f1762.f1747;
            Throwable cause = th;
            while (cause.getCause() != null) {
                cause = cause.getCause();
            }
            mapM8519.put(str, cause.toString());
            AbstractC1104.m8888(StringFog.decrypt("9BKS2cORpdXFMJ3Zx5W0yA==\n", "t338t6by0bo=\n"), StringFog.decrypt("qppkfnLjbreKiWJ4bqQtpoCGeHRjt2K3zw==\n", "7+gWEQDDDcU=\n") + this.f1763, th, true, true, true);
        }
    }
}
