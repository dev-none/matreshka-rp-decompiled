package com.ironsource.adqualitysdk.sdk.i;

import java.math.BigDecimal;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᚆ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0768 extends AbstractC1022 {
    public AbstractC0768(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905) {
        super(abstractC0904, abstractC0905);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        Object obj = this.f3693.m8777(c0704, c1013).f3060;
        Object obj2 = this.f3692.m8777(c0704, c1013).f3060;
        try {
            return new C0847(Boolean.valueOf(mo8617(new BigDecimal(obj.toString()).compareTo(new BigDecimal(obj2.toString())))));
        } catch (Exception unused) {
            return ((obj instanceof String) && (obj2 instanceof String)) ? new C0847(Boolean.valueOf(mo8571((String) obj, (String) obj2))) : new C0847(Boolean.valueOf(mo8570(obj, obj2)));
        }
    }

    /* JADX INFO: renamed from: ﾒ */
    public abstract boolean mo8617(int i);

    /* JADX INFO: renamed from: ﾒ */
    public abstract boolean mo8570(Object obj, Object obj2);

    /* JADX INFO: renamed from: ﾒ */
    public abstract boolean mo8571(String str, String str2);
}
