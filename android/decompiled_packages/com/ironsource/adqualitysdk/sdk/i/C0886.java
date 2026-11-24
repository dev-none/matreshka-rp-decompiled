package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ị, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0886 extends AbstractC1022 {
    public C0886(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905) {
        super(abstractC0904, abstractC0905);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0847 c0847M8777 = this.f3693.m8777(c0704, c1013);
        C0847 c0847M8778 = this.f3692.m8777(c0704, c1013);
        if ((c0847M8777.f3060 instanceof String) || (c0847M8778.f3060 instanceof String)) {
            return new C0847("" + c0847M8777.f3060 + c0847M8778.f3060);
        }
        Number numberM8736 = c0847M8777.m8736();
        Number numberM8737 = c0847M8778.m8736();
        if ((numberM8736 instanceof Double) || (numberM8737 instanceof Double)) {
            return new C0847(Double.valueOf(numberM8737.doubleValue() + numberM8736.doubleValue()));
        }
        if ((numberM8736 instanceof Long) || (numberM8737 instanceof Long)) {
            return new C0847(Long.valueOf(numberM8737.longValue() + numberM8736.longValue()));
        }
        return new C0847(Integer.valueOf(numberM8737.intValue() + numberM8736.intValue()));
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1022
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8616() {
        return StringFog.decrypt("tg==\n", "nW5EjTW/nxE=\n");
    }
}
