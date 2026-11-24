package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʺ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0290 extends AbstractC1060 {
    public C0290(String str, String str2, String str3, int i) {
        super(str, str2);
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        String strM8497 = AbstractC0343.m8497("Bg==\n", "KLZiKKaARrI=\n", sb, str2);
        StringBuilder sb2 = new StringBuilder();
        sb2.append(StringFog.decrypt("yFneoxNP00w=\n", "qTe60Xwmt2E=\n"));
        sb2.append(this.f3815);
        sb2.append(StringFog.decrypt("vQ==\n", "kJN7j7JbmQk=\n"));
        sb2.append(this.f3814);
        this.f3816.add(new C1056(strM8497, str3, AbstractC0970.m8850("dZd2LQ==\n", "W+QEQYNv9jE=\n", sb2), i, null));
    }
}
