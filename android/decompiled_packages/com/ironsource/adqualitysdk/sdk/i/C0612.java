package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᐳ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0612 extends AbstractC1164 implements InterfaceC0462 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0575 f2145 = new C0575();

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String f2144 = StringFog.decrypt("cUSLDRGeZzJ/aYg3B5xn\n", "ECDvWWjuAmY=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f2143 = StringFog.decrypt("0KExUUblMNHRgShCRvkix9Oh\n", "o8RQIyWNdr4=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f2142 = StringFog.decrypt("K6Xtjd72LOE8vQ==\n", "WM6E/ZifSY0=\n");

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f2141 = StringFog.decrypt("OJoZJMMOHiUkuQQe3g==\n", "S/9tcLp+e3E=\n");

    /* JADX WARN: Code duplicated, block: B:33:0x0089  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0462
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8326(C1013 c1013, String str, ArrayList arrayList, C0566 c0566, C0704 c0704) {
        byte b;
        try {
            switch (str.hashCode()) {
                case -1347544616:
                    if (!str.equals(f2143)) {
                        b = -1;
                    } else {
                        b = 2;
                    }
                    break;
                case -923635536:
                    if (!str.equals(f2141)) {
                        b = -1;
                    } else {
                        b = 0;
                    }
                    break;
                case -216533736:
                    if (!str.equals(f2142)) {
                        b = -1;
                    } else {
                        b = 1;
                    }
                    break;
                case 94094958:
                    if (!str.equals(StringFog.decrypt("x6txsuE=\n", "pd4Y3oWvsRk=\n"))) {
                        b = -1;
                    } else {
                        b = 8;
                    }
                    break;
                case 108404047:
                    if (!str.equals(StringFog.decrypt("OPMsBIw=\n", "SpZfYfiqH+E=\n"))) {
                        b = -1;
                    } else {
                        b = 7;
                    }
                    break;
                case 387034026:
                    if (!str.equals(StringFog.decrypt("Si2TESxz5nNqPYIGPXjDfEo7\n", "OUjyY08brx0=\n"))) {
                        b = -1;
                    } else {
                        b = 5;
                    }
                    break;
                case 391966482:
                    if (!str.equals(StringFog.decrypt("LHFU0mGqRyAkcELsWqFnKC55Rftr\n", "TRUwnw7OLkY=\n"))) {
                        b = -1;
                    } else {
                        b = 3;
                    }
                    break;
                case 1067445448:
                    if (!str.equals(f2144)) {
                        b = -1;
                    } else {
                        b = 6;
                    }
                    break;
                case 1423210564:
                    if (!str.equals(StringFog.decrypt("91dpSssdFeb/Vn908BY5+PVfeGPB\n", "ljMNB6R5fIA=\n"))) {
                        b = -1;
                    } else {
                        b = 4;
                    }
                    break;
                default:
                    b = -1;
                    break;
            }
            switch (b) {
                case 0:
                    this.f2145.f2059 = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
                    return this;
                case 1:
                    this.f2145.f2058 = ((Integer) AbstractC0912.m8788(arrayList, 0, Integer.class)).intValue();
                    return this;
                case 2:
                    this.f2145.f2057 = ((Boolean) AbstractC0912.m8788(arrayList, 0, Boolean.class)).booleanValue();
                    return this;
                case 3:
                    int iIntValue = ((Integer) AbstractC0912.m8788(arrayList, 0, Integer.class)).intValue();
                    C0575 c0575 = this.f2145;
                    c0575.f4062 = iIntValue | c0575.f4062;
                    return this;
                case 4:
                    int iIntValue2 = ((Integer) AbstractC0912.m8788(arrayList, 0, Integer.class)).intValue();
                    C0575 c0576 = this.f2145;
                    c0576.f4061 = iIntValue2 | c0576.f4061;
                    return this;
                case 5:
                    boolean zBooleanValue = ((Boolean) AbstractC0912.m8788(arrayList, 0, Boolean.class)).booleanValue();
                    int iIntValue3 = arrayList.size() > 1 ? ((Integer) AbstractC0912.m8788(arrayList, 1, Integer.class)).intValue() : -1;
                    C0575 c0577 = this.f2145;
                    c0577.f4064 = zBooleanValue;
                    c0577.f4063 = iIntValue3;
                    return this;
                case 6:
                    this.f2145.f2056.add((Class) AbstractC0912.m8788(arrayList, 0, Class.class));
                    return this;
                case 7:
                    this.f2145.m8581();
                    return this;
                case 8:
                    return this.f2145;
                default:
                    new C1742c0(c1013, c0704, StringFog.decrypt("Mq+6qCJdRacdqLawL3ZO\n", "dMbfxEYZIME=\n"), str).m8596(c1013.m8859());
                    return null;
            }
        } catch (Exception e) {
            AbstractC0728.m8662(c1013.m8859(), AbstractC0970.m8850("yA==\n", "78KzBXwpuzc=\n", AbstractC0502.m8559("gYwYr6ahlBmtkg/gsfmGErGKA66zoaUYoZIOhLHnih+tigOvuqGNELCXHKX07IYFrJEO4PM=\n", "xP5qwNSB43E=\n", new StringBuilder(), str)), e, null);
        }
    }
}
