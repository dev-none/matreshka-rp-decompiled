package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1066 extends AbstractC0530 {
    public C1066(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905) {
        super(abstractC0904, abstractC0905);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0530
    /* JADX INFO: renamed from: ﾒ */
    public final Number mo8568(Number number, Number number2) {
        if ((number instanceof Double) || (number2 instanceof Double)) {
            return Double.valueOf(number.doubleValue() % number2.doubleValue());
        }
        return ((number instanceof Long) || (number2 instanceof Long)) ? Long.valueOf(number.longValue() % number2.longValue()) : Integer.valueOf(number.intValue() % number2.intValue());
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC1022
    /* JADX INFO: renamed from: ﾒ */
    public final String mo8616() {
        return StringFog.decrypt("iQ==\n", "rPqdOTcm+O4=\n");
    }
}
