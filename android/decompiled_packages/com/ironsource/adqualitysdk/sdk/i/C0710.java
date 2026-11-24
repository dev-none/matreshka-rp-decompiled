package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.content.Context;
import com.ironsource.adqualitysdk.sdk.ISAdQualityAdType;
import com.ironsource.adqualitysdk.sdk.IronSourceAdQuality;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔫ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0710 extends AbstractC0912 {
    static {
        StringFog.decrypt("/G/3U1XskorKfPxZaw==\n", "jwqZNx+f/eQ=\n");
        StringFog.decrypt("Z7V7RRvA7MBDqW9hA8Hnxg==\n", "BtEfAG2lgrQ=\n");
        StringFog.decrypt("D4bxyM1jElYLl+r5\n", "aOOFi6INfDM=\n");
        StringFog.decrypt("JAXn73M/41k7FA==\n", "Q2CTrBxRlzw=\n");
        StringFog.decrypt("dYWEhu8mMg==\n", "EuDw0oZLV+M=\n");
        StringFog.decrypt("LPpXh8bsGwgk6kCj\n", "S58jy6efb1w=\n");
        StringFog.decrypt("NjqF8DofksM+KpLUDwWL8g==\n", "UV/xvFts5pc=\n");
        StringFog.decrypt("fAT/QFjMjtl1FcpgWdeK1W8Y\n", "G2GLAy2+/Lw=\n");
        StringFog.decrypt("QJ6Oy31OCpFGjZ/Df04AjUWD\n", "I+zrqgkrSeM=\n");
        StringFog.decrypt("ff0kEPud0llo6jMF5ov2T1fhJx4=\n", "Ho9BcY/4kz0=\n");
        StringFog.decrypt("z608IOdrJaLJvi0o5WsvtN8=\n", "rN9ZQZMOZtA=\n");
        StringFog.decrypt("zqZpW2qje3/JvW1Od6lYXsygbQ==\n", "rdQMOh7GNho=\n");
        StringFog.decrypt("NgL6sF+MdXkjFOeMVQ==\n", "UWeO4zvnIxw=\n");
        StringFog.decrypt("Tc+dx50F7nFOwb/kmhrrTUQ=\n", "KqrpgehpgiI=\n");
        StringFog.decrypt("lT59LaNFmBKTCG0Vmk+HDZs0Zw==\n", "8lsJfswq9X4=\n");
        StringFog.decrypt("8MYXtF4YZyjm8Q6wVA8=\n", "krR41Tp7Bls=\n");
        StringFog.decrypt("e9pzJj/Qh+hO2moILNCq83LZbgA=\n", "HL8HZ1i16Zw=\n");
        StringFog.decrypt("S9YsqgMiJ01OxTynAwIVTUbQA7gYKQ==\n", "KKRJy3dHYyg=\n");
        StringFog.decrypt("BPW8Z3wwtv4A5KdWRTuq6Ar/pg==\n", "Y5DIJBNe2Js=\n");
        StringFog.decrypt("fEi5ldntG+U=\n", "ECfe0K+IdZE=\n");
        StringFog.decrypt("8xkiSFEEh4T/GQVhVSmM\n", "mmpxLDpN6dA=\n");
        StringFog.decrypt("6oz/Z1190/nore5VWlvD+fmA5Eg=\n", "jemLJjkpqok=\n");
        StringFog.decrypt("h6RXoLTYoDmOtWCMr8S3P5SuUa2gx7c=\n", "4MEj48Gq0lw=\n");
        StringFog.decrypt("QBh2lFAHDFlJCU6+VgEbUkIPTLZIEA==\n", "J30C1yV1fjw=\n");
        StringFog.decrypt("KT90EmAPs0MGI0Ueazq/SiQJWRxsBb9A\n", "QEw3fQ5p2iQ=\n");
        StringFog.decrypt("5lNMaNg2tpzmeFdi2iiVjfVEWW7BPb6B0VNKSNI2pA==\n", "gTY4K7dY0PU=\n");
        StringFog.decrypt("PHwoM7iCjD8ydDkYtLGGIz1wOw==\n", "WxlcdsDy6U0=\n");
        StringFog.decrypt("d4O2OQZUSDV5i6cSCnFeImKyrRcbSg==\n", "EObCfH4kLUc=\n");
        StringFog.decrypt("5HSnueTpNxXqfLaS6M0gBuploA==\n", "gxHT/JyZUmc=\n");
        StringFog.decrypt("eDjx+KAWUc92MODTrDJG3HYp\n", "H12FvdhmNL0=\n");
        StringFog.decrypt("e+fokJ19Qn5z7Misk2tf\n", "HIKcw/gOMRc=\n");
        StringFog.decrypt("hCpH8zdXWHuCO1I=\n", "408zvlIjOT8=\n");
        StringFog.decrypt("xQbT1uJKcNDIJuXA8lZt2w==\n", "rHWAs4E/ArU=\n");
    }

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static boolean m8631() {
        if (!AbstractC0895.m8747().mo8755()) {
            return true;
        }
        C0526 c0526 = C0526.f1839;
        if (c0526.f1841 || c0526.f1842 == null) {
            return false;
        }
        try {
            C0547 c0547 = c0526.f1842;
            C1787y c1787y = C0657.f2283.f2286;
            C0547 c0547M8431 = c1787y == null ? null : c1787y.m8431();
            boolean zEquals = (c0547 == null || c0547M8431 == null) ? false : c0547M8431.m8574().equals(c0547.m8574());
            if (!zEquals) {
                c0526.f1841 = true;
            }
            return zEquals;
        } catch (Exception e) {
            String str = C0526.f1840;
            AbstractC0323.m8479(str, str, StringFog.decrypt("PlgK0yOZDrEaXgDeOZIJpxRDB4op3B6qFlIF3jadFK4WVQ==\n", "czFu/lD8fcI=\n"), e, null, false);
            c0526.f1841 = true;
            return false;
        }
    }

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static boolean m8632() {
        return ((C0896) AbstractC0895.m8747()).f3168;
    }

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static long m8633() {
        String str = AbstractC0202.f862;
        return Calendar.getInstance().getTimeInMillis();
    }

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static String m8634() {
        return IronSourceAdQuality.getSDKVersion();
    }

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static String m8635() {
        JSONObject jSONObject;
        C1745d0 c1745d0;
        C0896 c0896 = (C0896) AbstractC0895.m8747();
        synchronized (c0896) {
            jSONObject = c0896.f2592;
        }
        if (!jSONObject.optBoolean(c0896.f3191) || (c1745d0 = c0896.f3163) == null) {
            return null;
        }
        return c1745d0.f358;
    }

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static long m8636() {
        C1783w c1783w;
        C0806 c0806M8725 = C0806.m8725();
        synchronized (c0806M8725) {
            c1783w = c0806M8725.f2876;
        }
        return c1783w.f565;
    }

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static JSONObject m8637() {
        C1783w c1783w;
        C0806 c0806M8725 = C0806.m8725();
        synchronized (c0806M8725) {
            c1783w = c0806M8725.f2876;
        }
        return AbstractC0939.m8814(c1783w.f567, c1783w.f566, c1783w.f565, c1783w.f564);
    }

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static JSONObject m8638() {
        JSONObject jSONObject;
        C1128 c1128 = ((C0896) AbstractC0895.m8747()).f3175;
        synchronized (c1128) {
            jSONObject = c1128.f2592;
        }
        return jSONObject;
    }

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static Activity m8639() {
        return AbstractC1041.m8867().mo8870();
    }

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static String m8641(C1013 c1013) {
        return c1013.f3671.f3281.m8499();
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static String m8642(C1013 c1013) {
        return c1013.f3671.f3281.mo8325();
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static C0946 m8644() {
        return new C0946();
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static C0277 m8647() {
        return new C0277();
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static C0278 m8649() {
        return new C0278();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8655(C1013 c1013, ArrayList arrayList) {
        c1013.m8866((String) AbstractC0912.m8788(arrayList, 0, String.class), (JSONObject) AbstractC0912.m8788(arrayList, 1, JSONObject.class));
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static String m8645(C1013 c1013) {
        return c1013.f3671.f3284.f2309;
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static Context m8646(C1013 c1013) {
        return c1013.f3671.f3280;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static String m8650(C1013 c1013) {
        return c1013.f3671.f3284.f2307;
    }

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static double m8640() {
        JSONObject jSONObject;
        C0896 c0896 = (C0896) AbstractC0895.m8747();
        synchronized (c0896) {
            jSONObject = c0896.f2592;
        }
        return jSONObject.optDouble(c0896.f3204, 1.0d);
    }

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static JSONObject m8643() {
        JSONObject jSONObject;
        AbstractC0895 abstractC0895M8747 = AbstractC0895.m8747();
        synchronized (abstractC0895M8747) {
            jSONObject = abstractC0895M8747.f2592;
        }
        return AbstractC0939.m8815(jSONObject, false);
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static void m8648(ArrayList arrayList) {
        String strDecrypt = StringFog.decrypt("AbFFSJhHkxY5hlB2\n", "QNUUPfkr+mI=\n");
        AbstractC0323.m8480(strDecrypt, strDecrypt, (String) AbstractC0912.m8788(arrayList, 0, String.class), true);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8654(C1013 c1013, C0704 c0704, ArrayList arrayList) {
        C0944 c0944 = (C0944) AbstractC0912.m8788(arrayList, 0, C0944.class);
        if (c0944 != null) {
            c1013.f3671.f3283.f3306.add(new C0754(c0944, c0704, c1013));
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static String m8651(ArrayList arrayList) {
        return ISAdQualityAdType.fromInt(((Integer) AbstractC0912.m8788(arrayList, 0, Integer.class)).intValue()).name().toLowerCase();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C1166 m8653() {
        return new C1166();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C0929 m8652(C1013 c1013) {
        return c1013.f3671;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8656(ArrayList arrayList) {
        C0418 c0418;
        String str = (String) AbstractC0912.m8788(arrayList, 0, String.class);
        List listM8789 = AbstractC0912.m8789(arrayList, 1);
        C1142 c1142M8930 = C1142.m8930();
        synchronized (c1142M8930) {
            c0418 = c1142M8930.f4005;
        }
        if (c0418 != null) {
            c0418.m8532(str, listM8789);
        }
    }
}
