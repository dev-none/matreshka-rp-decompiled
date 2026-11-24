package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.丨, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0972 extends AbstractC0530 {
    public C0972(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905) {
        super(abstractC0904, abstractC0905);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0530
    /* JADX INFO: renamed from: ﾒ */
    public final Number mo8568(Number number, Number number2) {
        if ((number instanceof Double) || (number2 instanceof Double)) {
            return Double.valueOf(number2.doubleValue() * number.doubleValue());
        }
        if ((number instanceof Long) || (number2 instanceof Long)) {
            return Long.valueOf(number2.longValue() * number.longValue());
        }
        return Integer.valueOf(number2.intValue() * number.intValue());
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1022
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8616() {
        return StringFog.decrypt("Lg==\n", "BAdDOKkDpSg=\n");
    }
}
