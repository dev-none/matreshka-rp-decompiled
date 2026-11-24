package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.ISAdQualityAdType;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﭔ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1013 {

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f3655;

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f3656;

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f3657;

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f3658;

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f3659;

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f3660;

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f3661;

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f3662;

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f3663;

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public final C0966 f3669;

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public JSONObject f3670;

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public final C0929 f3671;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public C0655 f3672;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public C0422 f3673 = null;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public C0566 f3674;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final AbstractC0349 f3675;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0429 f3676;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0704 f3677;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0634 f3678;

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f3668 = StringFog.decrypt("2FCn6D3N1H/GXLnzLMbwaQ==\n", "ijXKh0molRs=\n");

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f3667 = StringFog.decrypt("F8KlGNWflWc=\n", "dqHRcaP24R4=\n");

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f3666 = StringFog.decrypt("hA6UPQ==\n", "8mfxSoV3cOQ=\n");

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f3665 = StringFog.decrypt("xX9AoAno\n", "shYuxGafnTI=\n");

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f3664 = StringFog.decrypt("hu+liAANDFSr5beEFR0bQYI=\n", "54zR4XZkeC0=\n");

    static {
        StringFog.decrypt("S6FLFaU4BA5VrVUOtDMgGDc=\n", "GcQmetFdRWo=\n");
        f3663 = StringFog.decrypt("o41noxQHyqufg2ytGRX89w==\n", "8OIIznhmiNk=\n");
        StringFog.decrypt("MZjB/kWQyH4xn/n+QI3ZaRWJmw==\n", "cPu1lzP5vAc=\n");
        StringFog.decrypt("retvbm5a/I2I9m93Skye\n", "+4IKGS8+sOQ=\n");
        StringFog.decrypt("3Z+0G1Frn0XGn6kLW3K7U6Q=\n", "ivbafz4c3iE=\n");
        StringFog.decrypt("9yQmWnPM+O/6LjRWZtzv+tNp\n", "tkdSMwWljJY=\n");
        StringFog.decrypt("TZCSFfDXbthemw==\n", "JP77YZm2ArE=\n");
        StringFog.decrypt("vmAZZjNOr9ymYTk=\n", "3wRdD0A+w70=\n");
        StringFog.decrypt("/GzTgCmlSePkbfOsIqFX4w==\n", "nQiX6VrVJYI=\n");
        StringFog.decrypt("4ru/sq//7FXn\n", "g9/83sachzA=\n");
        StringFog.decrypt("mPqcKQViKICd2K0qAUsw\n", "+Z7fRWwBQ+U=\n");
        StringFog.decrypt("65G+iUGGZcM=\n", "ivX95S71AKc=\n");
        StringFog.decrypt("0KFyjcwSCtTFoHKe\n", "psgX+o1mfrU=\n");
        StringFog.decrypt("70TEzRnYrfD9YsrnFMS22O5EyPo=\n", "mCGmjnGqwp0=\n");
        StringFog.decrypt("rusEZntJTQCo8AM=\n", "zZ53EhQkCHY=\n");
        StringFog.decrypt("+Ao+XvYld+fjMBBs5xV57uULCkDi\n", "l2R/LoZ2Eok=\n");
        StringFog.decrypt("SrvE54p0sqRQp+vynnK4lkqn4PCISaK+QQ==\n", "JdWFl/om19A=\n");
        StringFog.decrypt("x+xvcLIXL0fc+21hox8tS8w=\n", "qIIuE8Z+WS4=\n");
        StringFog.decrypt("48lXnf4EDXr43kWK6x8Pdug=\n", "jKcW/optexM=\n");
        StringFog.decrypt("FebsNS0deIEO8f8zKgFjjR4=\n", "eoitVll0Dug=\n");
        StringFog.decrypt("4crg0ukB9zf63fHQ6BvkOg==\n", "jqShsZ1ogV4=\n");
        StringFog.decrypt("DGwpJU15OVoXezsyVmA/Vgc=\n", "YwJoRjkQTzM=\n");
        StringFog.decrypt("OeZUheGJ7fIi8UaH44XS9SX8dIj2hcjvN/xw\n", "VogV5pXgm5s=\n");
        StringFog.decrypt("WdZnzbEyoS5CwWLLti+lKE/dQg==\n", "NrgmrsVb10c=\n");
        f3662 = StringFog.decrypt("9P0MxSu25A4=\n", "nZNmoEjCrn0=\n");
        f3661 = StringFog.decrypt("xTo7kGkipaTMPQ==\n", "r0lv/yBMz8E=\n");
        f3660 = StringFog.decrypt("i8fAMFmW/w4=\n", "4bSQQjzwlnY=\n");
        f3659 = StringFog.decrypt("bIKqoRj8Rg5Tgg==\n", "GfHP5GCING8=\n");
        f3658 = StringFog.decrypt("XEh9dkQAsyE=\n", "PTgNMCtjxlI=\n");
        StringFog.decrypt("UwZty1a93BFeH275XLDMEDw=\n", "EnYdjTneqWI=\n");
        StringFog.decrypt("ldrCyAzY1lKVx/A=\n", "+rSEp2+tpR4=\n");
        StringFog.decrypt("H7HXc1l6iJoVrOVzSGqf\n", "cN+RHDoP+8g=\n");
        f3657 = StringFog.decrypt("V7mAuHxkzwhCpI+6ZWg=\n", "Nt3B2wgNuWE=\n");
        f3656 = StringFog.decrypt("DZg+rnMLI4MNjxuJdxEF\n", "bPxoxxZ8YO8=\n");
        f3655 = StringFog.decrypt("gXeTaQjkDHSEUJdzLg==\n", "9x72HkuIbQc=\n");
    }

    public C1013(C0929 c0929, C0429 c0429, AbstractC0349 abstractC0349, C0634 c0634, C0704 c0704) {
        this.f3678 = c0634;
        C0704 c0705 = new C0704(new HashMap(), c0704, null, null, true);
        c0705.f2431 = this;
        this.f3677 = c0705;
        Iterator it = c0634.m8602().iterator();
        while (it.hasNext()) {
            c0705.f2436.put((String) it.next(), null);
        }
        c0704.m8628(c0634.f2225.f2097, this);
        this.f3676 = c0429;
        this.f3675 = abstractC0349;
        this.f3674 = new C0566(this);
        this.f3671 = c0929;
        this.f3669 = new C0966();
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final void m8858() {
        JSONObject jSONObject;
        ArrayList arrayList;
        for (C0580 c0580 : this.f3678.m8604()) {
            C0896 c0896 = (C0896) AbstractC0895.m8747();
            if (c0896.f3166 == null) {
                synchronized (c0896) {
                    jSONObject = c0896.f2592;
                }
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(c0896.f3203);
                if (jSONArrayOptJSONArray != null) {
                    arrayList = new ArrayList();
                    for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                        ISAdQualityAdType iSAdQualityAdTypeFromInt = ISAdQualityAdType.fromInt(jSONArrayOptJSONArray.optInt(i));
                        if (iSAdQualityAdTypeFromInt != null) {
                            arrayList.add(iSAdQualityAdTypeFromInt);
                        }
                    }
                } else {
                    arrayList = null;
                }
                c0896.f3166 = arrayList;
            }
            ArrayList arrayList2 = c0896.f3166;
            ISAdQualityAdType iSAdQualityAdType = c0580.f2069;
            boolean zContains = true;
            if (arrayList2 != null && iSAdQualityAdType != ISAdQualityAdType.UNKNOWN) {
                zContains = true ^ arrayList2.contains(iSAdQualityAdType);
            }
            if (zContains) {
                m8864(c0580);
            }
        }
        String strDecrypt = StringFog.decrypt("0MXOFYJhS0fOydAOk2pvUazJzROCbWtP69rG\n", "gqCjevYECiM=\n");
        ArrayList arrayList3 = new ArrayList();
        AbstractC1766n.m8385(new C0507(this, strDecrypt, arrayList3));
        AbstractC1766n.m8384(new C0491(this, strDecrypt, arrayList3));
        try {
            AbstractC1766n.m8386(new C0442(new C0452(this, strDecrypt, arrayList3)));
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String m8859() {
        return this.f3671.f3284.f2308 + StringFog.decrypt("nw==\n", "sAKgutjUPe8=\n") + this.f3678.f2225.f2097;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:20:0x0041  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8864(C0580 c0580) {
        byte b;
        String str = c0580.f2070;
        switch (str.hashCode()) {
            case -1825565413:
                if (!str.equals(f3664)) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case -1655966961:
                if (!str.equals(f3667)) {
                    b = -1;
                } else {
                    b = 0;
                }
                break;
            case -787751952:
                if (!str.equals(f3665)) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 3619493:
                if (!str.equals(f3666)) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case 1144592183:
                if (!str.equals(f3658)) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            default:
                b = -1;
                break;
        }
        C0434 c0434 = null;
        if (b == 0) {
            JSONObject jSONObjectM8863 = m8863(c0580.f2068);
            if (jSONObjectM8863 != null) {
                String str2 = c0580.f2065;
                if (!TextUtils.isEmpty(str2)) {
                    C0944 c0944M8601 = str2 != null ? this.f3678.m8601(str2) : null;
                    if (c0944M8601 != null) {
                        c0434 = new C0434(this, c0944M8601, str2);
                    } else {
                        AbstractC0728.m8662(m8859(), AbstractC0970.m8850("fHav2jnSB3kyfA==\n", "XBjArhm0aAw=\n", AbstractC0502.m8559("SfVNvtXaIP9h9lC408pp9GqwX7nIng==\n", "BJA51rq+AJs=\n", new StringBuilder(), str2)), null, null);
                    }
                }
                C0434 c0435 = c0434;
                C0340 c0340 = new C0340(this, false);
                C0340 c0341 = new C0340(this, true);
                C0966 c0966 = this.f3669;
                C0219 c0219 = new C0219(this, c0341, c0340);
                C0730 c0730 = new C0730(this);
                c0966.getClass();
                AbstractC1766n.m8384(new C0999(c0966, jSONObjectM8863, c0435, c0219, c0730));
            }
            m8865(f3667, c0580);
            return;
        }
        if (b == 1) {
            JSONObject jSONObjectM8864 = m8863(c0580.f2068);
            if (jSONObjectM8864 != null) {
                String str3 = c0580.f2066;
                C0286 c0286 = new C0286(this, true);
                C0286 c0287 = new C0286(this, false);
                if (TextUtils.isEmpty(str3)) {
                    C0966 c0967 = this.f3669;
                    C1156 c1156 = new C1156(this, c0286, c0287);
                    c0967.getClass();
                    AbstractC1766n.m8384(new C0973(c0967, jSONObjectM8864, null, c1156));
                } else {
                    C0944 c0944M8602 = str3 != null ? this.f3678.m8601(str3) : null;
                    if (c0944M8602 != null) {
                        C0433 c0433 = new C0433(this, c0944M8602);
                        C0966 c0968 = this.f3669;
                        C1156 c1157 = new C1156(this, c0286, c0287);
                        c0968.getClass();
                        AbstractC1766n.m8384(new C0973(c0968, jSONObjectM8864, c0433, c1157));
                    } else {
                        AbstractC0728.m8662(m8859(), AbstractC0970.m8850("zhabND6jY/qAHA==\n", "7nj0QB7FDI8=\n", AbstractC0502.m8559("jXXkKoosWRGldvksjDwQGq4w9i2XaA==\n", "wBCQQuVIeXU=\n", new StringBuilder(), str3)), null, null);
                    }
                }
            }
            m8865(f3666, c0580);
            return;
        }
        if (b == 2) {
            JSONObject jSONObjectM8865 = m8863(c0580.f2068);
            if (jSONObjectM8865 != null) {
                C0255 c0255 = new C0255(this, false);
                C0255 c0256 = new C0255(this, true);
                C0966 c0969 = this.f3669;
                C0189 c0189 = new C0189(this, c0256, c0255);
                c0969.getClass();
                AbstractC1766n.m8384(new C0986(c0969, jSONObjectM8865, c0189));
            }
            m8865(f3665, c0580);
            return;
        }
        if (b != 3) {
            if (b != 4) {
                return;
            }
            this.f3672 = new C0655(new C0622(this, m8861(c0580.f2067)));
        } else if (this.f3673 == null) {
            this.f3673 = new C0422(this, m8861(c0580.f2067));
            AbstractC1041 abstractC1041M8867 = AbstractC1041.m8867();
            C0422 c0422 = this.f3673;
            synchronized (abstractC1041M8867) {
                abstractC1041M8867.f3778.add(c0422);
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:22:0x005b  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8865(String str, C0580 c0580) {
        byte b;
        JSONObject jSONObjectM8863 = m8863(c0580.f2068);
        if (jSONObjectM8863 == null || !jSONObjectM8863.has(StringFog.decrypt("KAcrEv6UZ2k5CyoY+b5WZCwN\n", "XGhecZbQAh0=\n"))) {
            return;
        }
        String strOptString = null;
        EnumC1779u enumC1779uM8424 = EnumC1779u.m8424(jSONObjectM8863.optString(StringFog.decrypt("8fih7ndhxvng9KDkcEv39PXy\n", "hZfUjR8lo40=\n"), null));
        int iHashCode = str.hashCode();
        if (iHashCode != -1655966961) {
            if (iHashCode != -787751952) {
                if (iHashCode == 3619493 && str.equals(f3666)) {
                    b = 1;
                } else {
                    b = -1;
                }
            } else if (str.equals(f3665)) {
                b = 2;
            } else {
                b = -1;
            }
        } else if (str.equals(f3667)) {
            b = 0;
        } else {
            b = -1;
        }
        if (b == 0) {
            strOptString = jSONObjectM8863.optString(f3657, null);
        } else if (b == 1) {
            strOptString = jSONObjectM8863.optString(f3656, null);
        } else if (b == 2) {
            strOptString = jSONObjectM8863.optString(f3655, null);
        }
        if (enumC1779uM8424 != null) {
            C1781v c1781vM8425 = C1781v.m8425();
            synchronized (c1781vM8425) {
                c1781vM8425.f521.post(new C1777t(c1781vM8425, strOptString, enumC1779uM8424));
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static boolean m8857(C1013 c1013, Activity activity, ArrayList arrayList) {
        c1013.getClass();
        return arrayList.isEmpty() || arrayList.contains(activity.getClass().getName());
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static JSONObject m8855(C1013 c1013, Activity activity) {
        c1013.getClass();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(AbstractC1033.f3763, c1013.f3671.f3284.f2309);
            jSONObject.put(AbstractC1033.f3717, c1013.f3671.f3284.f2307);
            jSONObject.put(AbstractC1033.f3716, c1013.f3671.f3281.mo8325());
            jSONObject.put(StringFog.decrypt("vU1Slh+IKA==\n", "3C4m2H7lTak=\n"), activity.getClass().getName());
            return jSONObject;
        } catch (JSONException unused) {
            AbstractC0323.m8470(f3668, StringFog.decrypt("VfCO9NL+vLR144jyzrn/p3P23PHTsbHmf+CW/sOq\n", "EIL8m6De38Y=\n"));
            return jSONObject;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8856(C1013 c1013, String str, boolean z, boolean z2, List list) {
        boolean z3;
        c1013.getClass();
        try {
            C1035 c1035M8603 = c1013.f3678.m8603(str);
            if (c1035M8603 != null) {
                String str2 = c1035M8603.f3765;
                C0944 c0944M8601 = c1013.f3678.m8601(str2);
                if (c0944M8601 != null) {
                    if (z == c1035M8603.f3767 && z2 == c1035M8603.f3766) {
                        C1142 c1142M8930 = C1142.m8930();
                        synchronized (c1142M8930) {
                            z3 = c1142M8930.f4009;
                        }
                        if (z3) {
                            String strM8859 = c1013.m8859();
                            int i = AbstractC0728.f2467;
                            String str3 = StringFog.decrypt("lAk+RA==\n", "x1tyZFkOAlM=\n") + strM8859;
                            AbstractC0323.m8480(str3, str3, str, false);
                        }
                        C0704 c0704 = c1013.f3677;
                        c0944M8601.m8820(c0704, c0704.f2434, c1013, list);
                        return;
                    }
                    return;
                }
                new C1789z(c1013, null, str2, StringFog.decrypt("FqaRr+HZNgg9sI+p/Z5+DCWxjbSz\n", "U9TjwJP5Xmk=\n") + str).m8596(c1013.m8859());
            }
        } catch (Throwable th) {
            AbstractC0728.m8662(c1013.m8859(), AbstractC0343.m8497("e6N+oeTbxqlQtWCn+JyOrUi0Yrq2\n", "PtEMzpb7rsg=\n", new StringBuilder(), str), th, null);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8860(String str) {
        Class clsMo8319;
        AbstractC0349 abstractC0349 = this.f3675;
        String strSubstring = str.substring(0, str.length() - StringFog.decrypt("uTdWmKAh\n", "l1Q6+dNS3ww=\n").length());
        abstractC0349.getClass();
        try {
            if (Prode.class.getName().equals("com.ironsource.adqualitysdk.sdk.i.Prode")) {
                clsMo8319 = abstractC0349.m8500(strSubstring, false);
            } else {
                clsMo8319 = abstractC0349.mo8319(strSubstring);
            }
        } catch (Throwable unused) {
            clsMo8319 = null;
        }
        if (clsMo8319 != null) {
            return clsMo8319.getName();
        }
        return null;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject m8862() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(AbstractC1033.f3763, this.f3671.f3284.f2309);
            jSONObject.put(AbstractC1033.f3716, this.f3671.f3281.mo8325());
            jSONObject.put(AbstractC1033.f3717, this.f3671.f3284.f2307);
            return jSONObject;
        } catch (JSONException e) {
            AbstractC0323.m8470(f3668, StringFog.decrypt("KIZkHoNAahAIlWIYnwcpBxuReAXRCnoNA842\n", "bfQWcfFgCWI=\n") + e.getLocalizedMessage());
            return jSONObject;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final JSONObject m8863(JSONObject jSONObject) {
        S0 s0;
        String str = f3660;
        String strOptString = jSONObject.optString(str);
        jSONObject.remove(str);
        String str2 = f3662;
        if (jSONObject.optBoolean(str2)) {
            C0929 c0929 = this.f3671;
            synchronized (c0929) {
                s0 = c0929.f3278;
            }
            if (s0 != null) {
                if (!TextUtils.isEmpty(s0.f252)) {
                    jSONObject.remove(str2);
                    try {
                        jSONObject.put(f3661, strOptString + s0.f252);
                    } catch (JSONException unused) {
                    }
                }
                if (s0.f251) {
                    try {
                        jSONObject.put(f3659, true);
                    } catch (JSONException unused2) {
                    }
                }
            }
        }
        Iterator<String> itKeys = jSONObject.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            Object objOpt = jSONObject.opt(next);
            if (objOpt instanceof String) {
                String str3 = (String) objOpt;
                if (str3.endsWith(StringFog.decrypt("PGljumvh\n", "EgoP2xiS3bs=\n"))) {
                    String strM8860 = m8860(str3);
                    if (strM8860 != null) {
                        try {
                            jSONObject.put(next, strM8860);
                        } catch (JSONException unused3) {
                        }
                    } else {
                        String strM8859 = m8859();
                        String strM8850 = AbstractC0970.m8850("b0ePtBlbgNUhTcDtGVyNzz1dia5eHYPJPF2FrlxPz9MqXZWw\n", "TyngwDk976A=\n", AbstractC0502.m8559("gGO7vqaN\n", "ww/azdWtAjc=\n", new StringBuilder(), str3));
                        int i = AbstractC0728.f2467;
                        String strM8497 = AbstractC0343.m8497("lAk+RA==\n", "x1tyZFkOAlM=\n", new StringBuilder(), strM8859);
                        AbstractC0323.m8480(strM8497, strM8497, strM8850, false);
                        return null;
                    }
                } else {
                    continue;
                }
            } else if (objOpt instanceof JSONArray) {
                jSONObject.put(next, new JSONArray((Collection) m8861(AbstractC0939.m8813((JSONArray) objOpt))));
            }
        }
        return jSONObject;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ArrayList m8861(List list) {
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            if (str.endsWith(StringFog.decrypt("PGljumvh\n", "EgoP2xiS3bs=\n"))) {
                String strM8860 = m8860(str);
                if (strM8860 != null) {
                    arrayList.add(strM8860);
                }
            } else {
                arrayList.add(str);
            }
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8866(String str, JSONObject jSONObject) {
        C0337 c0337;
        if (str.equals(StringFog.decrypt("b5UyqhHETx1viAiq\n", "DvFtzni3P3E=\n"))) {
            C0935 c0935 = this.f3671.f3283;
            c0935.getClass();
            int iOptInt = jSONObject.optInt(AbstractC1033.f3760);
            C0337 c0338 = c0935.f3309;
            if (c0338 != null) {
                c0338.adDisplayed(jSONObject.optString(AbstractC1033.f3763), ISAdQualityAdType.fromInt(iOptInt));
            }
        } else if (str.equals(StringFog.decrypt("3hLrRm8Q4dvb\n", "v3a0JQN/kr4=\n")) && (c0337 = this.f3671.f3283.f3309) != null) {
            c0337.adClosed(jSONObject.optString(AbstractC1033.f3763), ISAdQualityAdType.fromInt(jSONObject.optInt(AbstractC1033.f3760)));
        }
        JSONObject jSONObjectM8862 = m8862();
        AbstractC0939.m8817(jSONObjectM8862, jSONObject, false);
        JSONObject jSONObjectM8815 = AbstractC0939.m8815(jSONObjectM8862, false);
        if (str.equals(AbstractC1033.f3723)) {
            C0935 c0936 = this.f3671.f3283;
            c0936.f3308.post(new C1011(c0936, C0935.f3301, jSONObjectM8815));
            return;
        }
        if (str.equals(AbstractC1033.f3722)) {
            C0935 c0937 = this.f3671.f3283;
            c0937.f3308.post(new C1011(c0937, C0935.f3300, jSONObjectM8815));
            return;
        }
        if (str.equals(AbstractC1033.f3724)) {
            C0935 c0938 = this.f3671.f3283;
            c0938.f3308.post(new C1011(c0938, C0935.f3302, jSONObjectM8815));
            return;
        }
        if (str.equals(AbstractC1033.f3725)) {
            C0935 c0939 = this.f3671.f3283;
            c0939.f3308.post(new C1011(c0939, C0935.f3303, jSONObjectM8815));
            return;
        }
        if (str.equals(AbstractC1033.f3721)) {
            C0935 c09310 = this.f3671.f3283;
            c09310.f3308.post(new C1011(c09310, C0935.f3299, jSONObjectM8815));
        } else if (str.equals(AbstractC1033.f3719)) {
            C0935 c09311 = this.f3671.f3283;
            c09311.f3308.post(new C1011(c09311, C0935.f3297, jSONObjectM8815));
        } else if (str.equals(AbstractC1033.f3720)) {
            C0935 c09312 = this.f3671.f3283;
            c09312.f3308.post(new C1011(c09312, C0935.f3298, jSONObjectM8815));
        } else {
            C0935 c09313 = this.f3671.f3283;
            c09313.f3308.post(new C1011(c09313, str, jSONObject));
        }
    }
}
