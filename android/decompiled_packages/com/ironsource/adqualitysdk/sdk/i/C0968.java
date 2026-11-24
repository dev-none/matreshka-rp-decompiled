package com.ironsource.adqualitysdk.sdk.i;

import android.util.Pair;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ー, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0968 {

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3392;

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3393;

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f3394;

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f3395;

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f3396;

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f3397;

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f3398;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f3399;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f3400;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f3401;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f3402;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f3403;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f3404;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final HashMap f3405;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final HashMap f3406;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public int f3409 = 0;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public int f3408 = 0;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public byte f3407 = 0;

    static {
        StringFog.decrypt("zbF6A0k7\n", "ndAIcCxJuEk=\n");
        f3404 = StringFog.decrypt("ryA=\n", "xkaosQs8B/4=\n");
        f3403 = StringFog.decrypt("GxoD5w==\n", "fnZwgh9QVCk=\n");
        f3402 = StringFog.decrypt("tPd4\n", "0pgK4RL4mPM=\n");
        f3401 = StringFog.decrypt("sg6ZBJc=\n", "xWbwaPJr3M4=\n");
        f3400 = StringFog.decrypt("tQRn+Vwc\n", "x2ETjC5y9Uw=\n");
        f3399 = StringFog.decrypt("erz0ViY=\n", "GM6RN03EK4M=\n");
        f3398 = StringFog.decrypt("n4fjA2n5xXQ=\n", "/OiNdwCXsBE=\n");
        f3397 = StringFog.decrypt("Xg==\n", "JQ223lwVR/o=\n");
        f3396 = StringFog.decrypt("GYe9\n", "bfXEK2LwheA=\n");
        f3395 = StringFog.decrypt("1Y5LpjU=\n", "tu8/xV1jj+M=\n");
        f3394 = StringFog.decrypt("7LlTMQ==\n", "gsw/XU4ZdrM=\n");
        f3393 = StringFog.decrypt("5EiRwhw=\n", "lz3hp25mVEw=\n");
        f3392 = StringFog.decrypt("6N2L\n", "nrz5iBkDJm0=\n");
        f3406 = new HashMap();
        f3405 = new HashMap();
    }

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public final r m8833(List list) {
        try {
            if (this.f3409 < list.size()) {
                return (r) list.get(this.f3409);
            }
            return null;
        } catch (Exception e) {
            throw new C0732(this.f3408, StringFog.decrypt("lv1Rc6Lbrne9pUV+u8OiOKPgV327waA4svESeLfXszin6llzvA==\n", "04UyFtKvxxg=\n"), e);
        }
    }

    /* JADX WARN: Code duplicated, block: B:25:0x006c  */
    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final AbstractC0904 m8834(List list) {
        byte b;
        AbstractC0904 abstractC0904M8837 = m8837(list);
        if (this.f3409 >= list.size()) {
            return abstractC0904M8837;
        }
        String str = m8842(list).f491;
        int iHashCode = str.hashCode();
        if (iHashCode != 43) {
            if (iHashCode != 45) {
                if (iHashCode != 1376) {
                    if (iHashCode == 1440 && str.equals(StringFog.decrypt("T1U=\n", "YngIvDyH1Yc=\n"))) {
                        b = 3;
                    } else {
                        b = -1;
                    }
                } else if (str.equals(StringFog.decrypt("wvo=\n", "6dE0OXBlwac=\n"))) {
                    b = 2;
                } else {
                    b = -1;
                }
            } else if (str.equals(StringFog.decrypt("pQ==\n", "iGqYm+KodMI=\n"))) {
                b = 1;
            } else {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("Yw==\n", "SK8/ZXfXYFU=\n"))) {
            b = 0;
        } else {
            b = -1;
        }
        if (b == 0) {
            return m8831(new C0886(abstractC0904M8837, m8834(list)));
        }
        if (b == 1) {
            return m8831(new C1070(abstractC0904M8837, m8834(list)));
        }
        if (b == 2) {
            return m8831(new C1053((C1748e0) abstractC0904M8837));
        }
        if (b == 3) {
            return m8831(new C1169((C1748e0) abstractC0904M8837));
        }
        this.f3409--;
        return abstractC0904M8837;
    }

    /* JADX WARN: Code duplicated, block: B:15:0x0040  */
    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final AbstractC0904 m8835(List list) {
        byte b;
        AbstractC0904 abstractC0904M8841 = m8841(list);
        if (this.f3409 >= list.size()) {
            return abstractC0904M8841;
        }
        String str = m8842(list).f491;
        int iHashCode = str.hashCode();
        if (iHashCode != 1216) {
            if (iHashCode == 3968 && str.equals(StringFog.decrypt("AJo=\n", "fObLQ1bCmdI=\n"))) {
                b = 1;
            } else {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("UO4=\n", "dsjuCKljuQs=\n"))) {
            b = 0;
        } else {
            b = -1;
        }
        if (b == 0) {
            return m8831(new C0740(abstractC0904M8841, m8835(list)));
        }
        if (b == 1) {
            return m8831(new C1018(abstractC0904M8841, m8835(list)));
        }
        this.f3409--;
        return abstractC0904M8841;
    }

    /* JADX WARN: Code duplicated, block: B:16:0x0041  */
    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final AbstractC0904 m8836(List list) {
        byte b;
        AbstractC0904 abstractC0904M8839 = m8839(list);
        while (this.f3409 < list.size()) {
            String str = m8842(list).f491;
            int iHashCode = str.hashCode();
            if (iHashCode != 46) {
                if (iHashCode == 91 && str.equals(StringFog.decrypt("OA==\n", "Y1AKbCdhivM=\n"))) {
                    b = 1;
                } else {
                    b = -1;
                }
            } else if (str.equals(StringFog.decrypt("zg==\n", "4Cs6fyKCgRg=\n"))) {
                b = 0;
            } else {
                b = -1;
            }
            if (b == 0) {
                abstractC0904M8839 = m8844(abstractC0904M8839, list);
            } else {
                if (b != 1) {
                    this.f3409--;
                    return abstractC0904M8839;
                }
                AbstractC0904 abstractC0904M8838 = m8838(list);
                m8846(m8842(list), StringFog.decrypt("vA==\n", "4W/kpQnfyX8=\n"), abstractC0904M8838, StringFog.decrypt("AXZq0V47rzMGI3vKUjyqJ1JhbYJeJakwF2co1VQ9rmNVXi8=\n", "cgMIoj1JxkM=\n"));
                if (m8842(list).f491.equals(StringFog.decrypt("dA==\n", "SRrz69LI/24=\n"))) {
                    abstractC0904M8839 = m8831(new C0305(abstractC0904M8839, abstractC0904M8838, m8838(list)));
                } else {
                    this.f3409--;
                    abstractC0904M8839 = m8831(new C0309(abstractC0904M8839, abstractC0904M8838));
                }
            }
        }
        return abstractC0904M8839;
    }

    /* JADX WARN: Code duplicated, block: B:20:0x0056  */
    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final AbstractC0904 m8837(List list) {
        byte b;
        AbstractC0904 abstractC0904M8836 = m8836(list);
        if (this.f3409 >= list.size()) {
            return abstractC0904M8836;
        }
        String str = m8842(list).f491;
        int iHashCode = str.hashCode();
        if (iHashCode != 37) {
            if (iHashCode != 42) {
                if (iHashCode == 47 && str.equals(StringFog.decrypt("ag==\n", "RUlrW5mo5Wc=\n"))) {
                    b = 1;
                } else {
                    b = -1;
                }
            } else if (str.equals(StringFog.decrypt("zw==\n", "5bnm57qostU=\n"))) {
                b = 0;
            } else {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("AQ==\n", "JH8jxi5xMho=\n"))) {
            b = 2;
        } else {
            b = -1;
        }
        if (b == 0) {
            return m8831(new C0972(abstractC0904M8836, m8837(list)));
        }
        if (b == 1) {
            return m8831(new C1144(abstractC0904M8836, m8837(list)));
        }
        if (b == 2) {
            return m8831(new C1066(abstractC0904M8836, m8837(list)));
        }
        this.f3409--;
        return abstractC0904M8836;
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final AbstractC0904 m8838(List list) {
        AbstractC0904 abstractC0904M8835 = m8835(list);
        if (this.f3409 < list.size()) {
            if (m8833(list).f491.equals(StringFog.decrypt("ew==\n", "RNabJvIiFaM=\n"))) {
                this.f3409++;
                AbstractC0904 abstractC0904M8838 = m8838(list);
                m8846(m8842(list), StringFog.decrypt("Qg==\n", "eMDAvauXPpk=\n"), abstractC0904M8838, StringFog.decrypt("MeUsYPTPhfdiv3ku+MiPo2XiOy7z0pC7Kvc7arXfhfdiunk=\n", "RYBeDpW9/Nc=\n"));
                return m8831(new C1760k(abstractC0904M8835, abstractC0904M8838, m8838(list)));
            }
        }
        return abstractC0904M8835;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final AbstractC0904 m8839(List list) {
        r rVarM8842 = m8842(list);
        EnumC1772q enumC1772q = rVarM8842.f492;
        byte b = -1;
        if (enumC1772q == EnumC1772q.f487) {
            String str = rVarM8842.f491;
            String str2 = m8842(list).f491;
            int iHashCode = str2.hashCode();
            if (iHashCode != 40) {
                if (iHashCode == 61 && str2.equals(StringFog.decrypt("xw==\n", "+o4DUUJeel0=\n"))) {
                    b = 0;
                }
            } else if (str2.equals(StringFog.decrypt("Vw==\n", "f82wwdGNVKI=\n"))) {
                b = 1;
            }
            if (b == 0) {
                return m8831(new C0527((C1748e0) m8831(new C1748e0(str)), m8838(list)));
            }
            if (b == 1) {
                return m8831(new C0918(str, m8845(list, StringFog.decrypt("cQ==\n", "WCDUwLW2ZeY=\n"), new C0971(this))));
            }
            this.f3409--;
            return m8831(new C1748e0(str));
        }
        if (enumC1772q == EnumC1772q.f485 || enumC1772q == EnumC1772q.f484 || enumC1772q == EnumC1772q.f483 || enumC1772q == EnumC1772q.f482) {
            if (enumC1772q == EnumC1772q.f484) {
                try {
                    try {
                        return m8831(new C0591(Integer.valueOf(Integer.parseInt(rVarM8842.f491))));
                    } catch (Exception unused) {
                    }
                } catch (Exception unused2) {
                    return m8831(new C1019(Long.valueOf(Long.parseLong(rVarM8842.f491))));
                }
            } else {
                if (enumC1772q == EnumC1772q.f483) {
                    return m8831(new C1136(Double.valueOf(Double.parseDouble(rVarM8842.f491))));
                }
                if (enumC1772q == EnumC1772q.f482) {
                    return m8831(new C0275(Boolean.valueOf(Boolean.parseBoolean(rVarM8842.f491))));
                }
            }
            return m8831(new C1173(rVarM8842.f491));
        }
        if (enumC1772q == EnumC1772q.f481) {
            return m8831(new C0789(rVarM8842.f491));
        }
        if (enumC1772q == EnumC1772q.f488) {
            String str3 = rVarM8842.f491;
            int iHashCode2 = str3.hashCode();
            if (iHashCode2 != 3392903) {
                if (iHashCode2 == 109801339 && str3.equals(f3393)) {
                    b = 1;
                }
            } else if (str3.equals(f3394)) {
                b = 0;
            }
            if (b == 0) {
                synchronized (C0736.class) {
                }
                return C0736.f2528;
            }
            if (b != 1) {
                return null;
            }
            m8846(m8842(list), StringFog.decrypt("Dg==\n", "ILnSEOlSYuU=\n"), rVarM8842, StringFog.decrypt("9wiDBExtZWbrCJ8FHi9zLuISnw1ROnNqpB+KQV9te2vwFZwFHiR4eOsekhVXIng=\n", "hH3zYT5NFg4=\n"));
            return m8844(m8831(new C1748e0(f3393)), list);
        }
        if (enumC1772q != EnumC1772q.f486) {
            m8847(StringFog.decrypt("YiZ6rm+9NIBSLD+icLMymhc=\n", "N0gf1h/YV/Q=\n") + rVarM8842);
            throw null;
        }
        String str4 = rVarM8842.f491;
        int iHashCode3 = str4.hashCode();
        if (iHashCode3 != 33) {
            if (iHashCode3 != 40) {
                if (iHashCode3 != 45) {
                    if (iHashCode3 != 91) {
                        if (iHashCode3 == 123 && str4.equals(f3397)) {
                            b = 2;
                        }
                    } else if (str4.equals(StringFog.decrypt("kQ==\n", "yvO5BzVVENM=\n"))) {
                        b = 1;
                    }
                } else if (str4.equals(StringFog.decrypt("jQ==\n", "oKGBoUvfPJs=\n"))) {
                    b = 4;
                }
            } else if (str4.equals(StringFog.decrypt("jw==\n", "p6dfBrTdlts=\n"))) {
                b = 0;
            }
        } else if (str4.equals(StringFog.decrypt("BA==\n", "JSlNSLh4BOA=\n"))) {
            b = 3;
        }
        if (b == 0) {
            AbstractC0904 abstractC0904M8831 = m8831(new C1008(m8838(list)));
            m8846(m8842(list), StringFog.decrypt("YA==\n", "SV+Msm//S+w=\n"), abstractC0904M8831, StringFog.decrypt("G97uln/XA+MV2/KWf9cD41Geug==\n", "dred5Ra5ZMM=\n"));
            return abstractC0904M8831;
        }
        if (b == 1) {
            return m8831(new C0529(m8845(list, StringFog.decrypt("VA==\n", "CUE8F6Nu1BM=\n"), new C0971(this))));
        }
        if (b == 2) {
            HashMap map = new HashMap();
            for (Pair pair : m8845(list, StringFog.decrypt("Dw==\n", "chOEDvSDfb8=\n"), new C0998(this))) {
                map.put((String) pair.first, (AbstractC0904) pair.second);
            }
            return m8831(new C0883(map));
        }
        if (b == 3) {
            return m8831(new C0779(m8836(list)));
        }
        if (b == 4) {
            return m8831(new C1070(m8831(new C0591(0)), m8839(list)));
        }
        m8847(StringFog.decrypt("sMeBDtQPhFCAzcQZ1A+VRZHGllY=\n", "5ankdqRq5yQ=\n") + rVarM8842.f491);
        throw null;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:35:0x007d  */
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0413 m8840(ArrayList arrayList) {
        byte b;
        AbstractC0904 abstractC0904M8838;
        String str = m8842((List) arrayList).f491;
        switch (str.hashCode()) {
            case -934396624:
                if (!str.equals(f3400)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case -567202649:
                if (!str.equals(f3398)) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case 59:
                if (!str.equals(StringFog.decrypt("Ag==\n", "OemfIOQu8w0=\n"))) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case 123:
                if (!str.equals(f3397)) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 3357:
                if (!str.equals(f3404)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 101577:
                if (!str.equals(f3402)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 115131:
                if (!str.equals(f3396)) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case 116519:
                if (!str.equals(f3392)) {
                    b = -1;
                } else {
                    b = 9;
                }
                break;
            case 94001407:
                if (!str.equals(f3399)) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 113101617:
                if (!str.equals(f3401)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            default:
                b = -1;
                break;
        }
        AbstractC0413 abstractC0413M8840 = null;
        AbstractC0904 abstractC0904M8839 = null;
        abstractC0413M8840 = null;
        switch (b) {
            case 0:
                return m8830(new C0332(null));
            case 1:
                m8848(arrayList, StringFog.decrypt("yw==\n", "42E2qk+aXss=\n"), StringFog.decrypt("REF3JCjGq+BAQjkjfNS36lhLM3c+wv/jQks7OCvCu6VPXnc2fID3og==\n", "LSdXV1yn34U=\n"));
                AbstractC0904 abstractC0904M88310 = m8838(arrayList);
                m8846(m8842((List) arrayList), StringFog.decrypt("qA==\n", "gT/Sm6ysoWM=\n"), abstractC0904M88310, StringFog.decrypt("TN1mh8Bj3aVI3iiAlGHGrkHSMp3bbImzTdQzmNAiy6UF0iiH3WbM4AKTb9M=\n", "JbtG9LQCqcA=\n"));
                AbstractC0413 abstractC0413M8841 = m8840(arrayList);
                if (this.f3409 < arrayList.size()) {
                    if (m8833(arrayList).f491.equals(f3403)) {
                        this.f3409++;
                        abstractC0413M8840 = m8840(arrayList);
                    }
                }
                return m8830(new C0231(abstractC0904M88310, abstractC0413M8841, abstractC0413M8840, this.f3407));
            case 2:
                m8848(arrayList, StringFog.decrypt("WA==\n", "cCrDkBYYZcw=\n"), StringFog.decrypt("HnDKkWcUBZEdct3fYEAXjRdq1NU0AgHFHnDU3XsXAYFYfcGRdUBDzV8=\n", "eB+4sRRgZOU=\n"));
                String strDecrypt = StringFog.decrypt("tQ==\n", "jrqtFA1/E7g=\n");
                if (m8833(arrayList).f491.equals(strDecrypt)) {
                    abstractC0904M8838 = null;
                } else {
                    abstractC0904M8838 = m8838(arrayList);
                    m8846(m8842((List) arrayList), strDecrypt, abstractC0904M8838, AbstractC0343.m8497("gjmiTSZTDsLNLK5UO1gc3YQmuAQ6VQDbgS32QSdZT9mEPb4E\n", "7UnWJEk9b64=\n", new StringBuilder(), strDecrypt));
                }
                AbstractC0904 abstractC0904M88311 = m8838(arrayList);
                m8846(m8842((List) arrayList), StringFog.decrypt("LA==\n", "F4Du7aPJkCg=\n"), abstractC0904M88311, StringFog.decrypt("BpCE7q4haI4Ji5+ho251gg+KmqrtK2iOQIifuqVuIdFH\n", "YP/2zs1OBuo=\n"));
                String strDecrypt2 = StringFog.decrypt("FQ==\n", "PErOLpqdfRE=\n");
                if (!m8833(arrayList).f491.equals(strDecrypt2)) {
                    abstractC0904M8839 = m8838(arrayList);
                    m8846(m8842((List) arrayList), strDecrypt2, abstractC0904M8839, AbstractC0343.m8497("gjmiTSZTDsLNLK5UO1gc3YQmuAQ6VQDbgS32QSdZT9mEPb4E\n", "7UnWJEk9b64=\n", new StringBuilder(), strDecrypt2));
                }
                return m8830(new C0373(abstractC0904M8838, abstractC0904M88311, abstractC0904M8839, m8840(arrayList)));
            case 3:
                m8848(arrayList, StringFog.decrypt("9Q==\n", "3fLitw2T7zU=\n"), StringFog.decrypt("gRzSPxRfm0eXAN4+FBGcE4Uc1CYdG8hRk1TdPB0Th0STEJsxCF+JE9FcnA==\n", "9nS7U3F/6DM=\n"));
                AbstractC0904 abstractC0904M88312 = m8838(arrayList);
                m8848(arrayList, StringFog.decrypt("/Q==\n", "1MY/QitVV2Y=\n"), StringFog.decrypt("o2rFgIk0nvu1dsmBiXqZr7dtwoiFYITguiLfhINhgev0YMnMhXqe5rBnjMvEPco=\n", "1AKs7OwU7Y8=\n"));
                return m8830(new j1(abstractC0904M88312, m8840(arrayList)));
            case 4:
                AbstractC0413 abstractC0413M8830 = m8833(arrayList).f491.equals(StringFog.decrypt("Kw==\n", "EGT1lnqdM+M=\n")) ? m8830(new C0838(null)) : m8830(new C0838(m8838(arrayList)));
                m8846(m8842((List) arrayList), StringFog.decrypt("Vg==\n", "bUj/llQtgVU=\n"), abstractC0413M8830, StringFog.decrypt("/lvBLD9+EQr4X8E8IHVfDaxN3TY4fFVZ6VDReTp5RRGsGY5+\n", "jD61WU0QMXk=\n"));
                return abstractC0413M8830;
            case 5:
                m8848(arrayList, StringFog.decrypt("MA==\n", "Cw4P+0gAFLg=\n"), StringFog.decrypt("8tBeeoJYk47x1l52jBaU2uPKVG6FHMCf/sYbbIAMiNq3mRw=\n", "kKI7G+l44Po=\n"));
                return m8830(new C0269());
            case 6:
                m8848(arrayList, StringFog.decrypt("hQ==\n", "vl41LlyFUfE=\n"), StringFog.decrypt("JAP48hBmWLNnH+LnDW1AsykYtvURZ1i6I0zz6B0oWr8zBLahQi8=\n", "R2yWhnkILdY=\n"));
                return m8830(new C0328());
            case 7:
                return m8843(arrayList);
            case 8:
                String str2 = f3397;
                m8848(arrayList, str2, StringFog.decrypt("cwJfE3CqNpZiHUNdd/46l3QEBlFm/jSNagBJRm26d8puHlVaZ7t3xXwNARo=\n", "B3AmMwPeV+I=\n"));
                C0767 c0767M8843 = m8843(arrayList);
                m8848(arrayList, f3395, StringFog.decrypt("5u88Gbj6dTD38CBXv65nLP3oKV3r7HFk9PIpVaT5cSCy/zwZqq53Jeb+LRm4+nUw9/AgV78=\n", "kp1FOcuOFEQ=\n"));
                m8848(arrayList, StringFog.decrypt("5g==\n", "zkrLarS3+Mk=\n"), StringFog.decrypt("/2xARvLd0K3leltX/t3IoPN4WEG6n97o+mJYSfWK3qy8b00F+92c4Ls=\n", "nA00JZr9u8g=\n"));
                r rVarM8842 = m8842((List) arrayList);
                EnumC1772q enumC1772q = EnumC1772q.f487;
                String strDecrypt3 = StringFog.decrypt("nV6TJG3EfY2TVpQ0bIpszIJegTVozzrDkVqF\n", "8DfgVwSqGq0=\n");
                if (!rVarM8842.f492.equals(enumC1772q)) {
                    m8847(m8832(enumC1772q.toString(), rVarM8842.f492.toString(), c0767M8843, strDecrypt3));
                    throw null;
                }
                C1748e0 c1748e0 = (C1748e0) m8831(new C1748e0(rVarM8842.f491));
                m8848(arrayList, StringFog.decrypt("yw==\n", "4rxfGkg4g6A=\n"), StringFog.decrypt("aOy1tMJTESZ57Kz32RsOMmfp4bXPUwcoZ+GuoM8XQSVyraD3jVpG\n", "C43B16pzYUc=\n"));
                m8848(arrayList, str2, StringFog.decrypt("SL9DUmuXjMtKqlJcZtmLn0arREUj1ZqfSLFaQWzCkdsL9l5fcN6b2gv5TEwkng==\n", "K943MQO3/78=\n"));
                return m8830(new C1785x(c0767M8843, m8843(arrayList), c1748e0));
            case 9:
                return m8830(new C1751f0(m8845(arrayList, StringFog.decrypt("Zg==\n", "XX/cAIa7xmU=\n"), new C1004(this))));
            default:
                this.f3409--;
                AbstractC0904 abstractC0904M88313 = m8838(arrayList);
                m8846(m8842((List) arrayList), StringFog.decrypt("Ig==\n", "GZyGMoN1Ya8=\n"), abstractC0904M88313, StringFog.decrypt("J93qHqVarsBtj75NrUDphSTQuQKqFLqUK8D8AKlavQ==\n", "SrSZbcw0yeA=\n"));
                return m8830(new C0332(abstractC0904M88313));
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8846(r rVar, String str, Object obj, String str2) {
        if (rVar.f491.equals(str)) {
            return;
        }
        String strM8850 = AbstractC0970.m8850("Sg==\n", "bWguQ/Kgii8=\n", AbstractC0502.m8559("pg==\n", "gadHtYV5mGw=\n", new StringBuilder(), str));
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("ng==\n", "udnG1PVx0Yo=\n"));
        sb.append(rVar.f491);
        m8847(m8832(strM8850, AbstractC0970.m8850("2A==\n", "/+a50bQvWDw=\n", sb), obj, str2));
        throw null;
    }

    /* JADX WARN: Code duplicated, block: B:35:0x0097  */
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904 m8841(List list) {
        byte b;
        AbstractC0904 abstractC0904M8834 = m8834(list);
        if (this.f3409 >= list.size()) {
            return abstractC0904M8834;
        }
        String str = m8842(list).f491;
        int iHashCode = str.hashCode();
        if (iHashCode != 60) {
            if (iHashCode != 62) {
                if (iHashCode != 1084) {
                    if (iHashCode != 1921) {
                        if (iHashCode != 1952) {
                            if (iHashCode == 1983 && str.equals(StringFog.decrypt("3EE=\n", "4nxMmUx/kd8=\n"))) {
                                b = 5;
                            } else {
                                b = -1;
                            }
                        } else if (str.equals(StringFog.decrypt("kcU=\n", "rPipa+8bzpE=\n"))) {
                            b = 0;
                        } else {
                            b = -1;
                        }
                    } else if (str.equals(StringFog.decrypt("WbQ=\n", "ZYku2DRlKPc=\n"))) {
                        b = 4;
                    } else {
                        b = -1;
                    }
                } else if (str.equals(StringFog.decrypt("kbs=\n", "sIYDBUEIGGU=\n"))) {
                    b = 1;
                } else {
                    b = -1;
                }
            } else if (str.equals(StringFog.decrypt("gA==\n", "vnT7Hb3nvv0=\n"))) {
                b = 3;
            } else {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("4A==\n", "3DE7onScWAc=\n"))) {
            b = 2;
        } else {
            b = -1;
        }
        if (b == 0) {
            return m8831(new C1105(abstractC0904M8834, m8841(list)));
        }
        if (b == 1) {
            return m8831(new C0797(abstractC0904M8834, m8841(list)));
        }
        if (b == 2) {
            return m8831(new C0755(abstractC0904M8834, m8841(list)));
        }
        if (b == 3) {
            return m8831(new C0694(abstractC0904M8834, m8841(list)));
        }
        if (b == 4) {
            return m8831(new C0680(abstractC0904M8834, m8841(list)));
        }
        if (b != 5) {
            this.f3409--;
            return abstractC0904M8834;
        }
        return m8831(new C0693(abstractC0904M8834, m8841(list)));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static AbstractC0904 m8831(AbstractC0904 abstractC0904) {
        HashMap map = f3406;
        AbstractC0904 abstractC0905 = (AbstractC0904) map.get(abstractC0904);
        if (abstractC0905 != null) {
            return abstractC0905;
        }
        map.put(abstractC0904, abstractC0904);
        return abstractC0904;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static AbstractC0413 m8830(AbstractC0413 abstractC0413) {
        HashMap map = f3405;
        AbstractC0413 abstractC0414 = (AbstractC0413) map.get(abstractC0413);
        if (abstractC0414 != null) {
            return abstractC0414;
        }
        map.put(abstractC0413, abstractC0413);
        return abstractC0413;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0767 m8843(ArrayList arrayList) {
        ArrayList arrayList2 = new ArrayList();
        byte b = (byte) (this.f3407 + 1);
        this.f3407 = b;
        r rVarM8833 = m8833(arrayList);
        while (!rVarM8833.f491.equals(StringFog.decrypt("jw==\n", "8vBdqttvn84=\n"))) {
            this.f3408++;
            arrayList2.add(m8840(arrayList));
            rVarM8833 = m8833(arrayList);
        }
        this.f3409++;
        this.f3408++;
        this.f3407 = (byte) (this.f3407 - 1);
        return (C0767) m8830(new C0767(arrayList2, b));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 m8844(AbstractC0904 abstractC0904, List list) {
        r rVarM8842 = m8842(list);
        ArrayList arrayListM8845 = null;
        if (rVarM8842.f492 == EnumC1772q.f487) {
            String str = rVarM8842.f491;
            r rVarM8843 = m8842(list);
            if (rVarM8843.f491.equals(StringFog.decrypt("yA==\n", "9D0M0HIdGeI=\n"))) {
                arrayListM8845 = m8845(list, StringFog.decrypt("kw==\n", "rUS/00n/o3k=\n"), new C0994(this));
                m8846(m8842(list), StringFog.decrypt("vQ==\n", "lb//WddLtfU=\n"), arrayListM8845, StringFog.decrypt("CGHh/DeoXYoVaqfzPqpakFpq5v03uAmQEmvy/DbrS4ZaYuj8PqRehh4k5elyokeVFWfm5DukR8Nd\nLKm+fOIO\n", "egSHkFLLKeM=\n"));
            } else {
                if (!rVarM8843.f491.equals(StringFog.decrypt("pw==\n", "j69Ffk2Dt60=\n"))) {
                    this.f3409--;
                    return m8831(new C0676(abstractC0904, str));
                }
            }
            return m8831(new C0423(abstractC0904, str, arrayListM8845, m8845(list, StringFog.decrypt("cg==\n", "W2eJPyOzaLU=\n"), new C0971(this))));
        }
        throw new C0732(this.f3408, StringFog.decrypt("Y46HgAsGoEoGn5OABgasSE+ThcUKB7EOQZmDxQ==\n", "Jvb35WhyxS4=\n") + rVarM8842, null);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Pair m8829(C0968 c0968, List list) {
        r rVarM8842 = c0968.m8842(list);
        if (rVarM8842.f492 == EnumC1772q.f485) {
            String str = rVarM8842.f491;
            c0968.m8846(c0968.m8842(list), StringFog.decrypt("iw==\n", "sYpkfaCfLRk=\n"), str, StringFog.decrypt("5WnHjRwqczOvacCMSS1yau1/iIVTLXol+H/Mw144NiuvbMmPSSQ2K+luzZEcZixt\n", "jxqo4zxBFko=\n"));
            return new Pair(str, c0968.m8838(list));
        }
        throw new C0732(c0968.f3408, StringFog.decrypt("pk4B9H9Vgg3DZQXjdU+ASYFDBbF7TpNJ\n", "4zZxkRwh52k=\n") + rVarM8842, null);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ArrayList m8845(List list, String str, InterfaceC0969 interfaceC0969) {
        ArrayList arrayList = new ArrayList();
        if (!m8842(list).f491.equals(str)) {
            this.f3409--;
            arrayList.add(interfaceC0969.mo8849(list));
            r rVarM8842 = m8842(list);
            while (rVarM8842.f491.equals(StringFog.decrypt("fA==\n", "UCdge1x0tXI=\n"))) {
                arrayList.add(interfaceC0969.mo8849(list));
                rVarM8842 = m8842(list);
            }
            m8846(rVarM8842, str, arrayList, AbstractC0970.m8850("Eg==\n", "NVSxOiygHZc=\n", AbstractC0502.m8559("iUP+I4mANkWQRul3zJ06CpJD+T+J1A==\n", "5SqNV6nzXio=\n", new StringBuilder(), str)));
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final r m8842(List list) {
        try {
            if (this.f3409 < list.size()) {
                int i = this.f3409;
                this.f3409 = i + 1;
                return (r) list.get(i);
            }
            throw new C0732(this.f3408, StringFog.decrypt("5s+U0U3xjj/WxdHMU/DNJNWBhcZW8YM4\n", "s6HxqT2U7Us=\n"), null);
        } catch (Exception e) {
            throw new C0732(this.f3408, StringFog.decrypt("bKPiNbVLTXBH+/Y4rFNBP06+9SSsUUM/R775JOVLS3RMtQ==\n", "KduBUMU/JB8=\n"), e);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8848(ArrayList arrayList, String str, String str2) {
        m8846(m8842((List) arrayList), str, (Object) null, str2);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8832(String str, String str2, Object obj, String str3) {
        String str4;
        if (obj != null) {
            str4 = StringFog.decrypt("5sxqyhm/EQ==\n", "xq0MvnzNMWA=\n") + obj;
        } else {
            str4 = "";
        }
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("4IGQziwmqACF\n", "pfngq09SzWQ=\n"));
        sb.append(str);
        sb.append(str4);
        StringBuilder sbM8559 = AbstractC0502.m8559("5WR6adrKueugb3l4npg=\n", "xQYPHfq43Ig=\n", sb, str2);
        sbM8559.append(str3 != null ? AbstractC0343.m8497("EtGz\n", "MvyTVEVm7HA=\n", new StringBuilder(), str3) : "");
        return sbM8559.toString();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8847(String str) {
        throw new C0732(this.f3408, str, null);
    }
}
