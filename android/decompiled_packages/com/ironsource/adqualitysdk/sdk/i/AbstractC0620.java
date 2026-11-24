package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᑋ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0620 {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f2158;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f2159 = StringFog.decrypt("eDUoaw==\n", "HVteRHBZFPo=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public String f2162;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f2163;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f2164;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f2165;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public boolean f2161 = true;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public boolean f2160 = true;

    static {
        StringFog.decrypt("a4jLRkWj9oA=\n", "AfukKGvGmOM=\n");
        StringFog.decrypt("9enNEqcMPW769ME=\n", "n5qifIlrR0A=\n");
        f2158 = StringFog.decrypt("xJCw\n", "pf7Uc968koQ=\n");
    }

    public AbstractC0620(String str, String str2, String str3, String str4) {
        this.f2165 = str;
        this.f2164 = str2;
        this.f2163 = str3;
        this.f2162 = str4;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String m8597() {
        JSONObject jSONObject;
        String strDecrypt = StringFog.decrypt("mUF0JdCOzRLE\n", "6yQZSqTrqXA=\n");
        if (this.f2161) {
            C0896 c0896 = (C0896) AbstractC0895.m8747();
            synchronized (c0896) {
                jSONObject = c0896.f2592;
            }
            String strOptString = jSONObject.optString(c0896.f3207);
            if (!TextUtils.isEmpty(strOptString)) {
                StringBuilder sb = new StringBuilder();
                sb.append(strDecrypt);
                sb.append(f2159);
                sb.append(strOptString);
                return AbstractC0970.m8850("lQ==\n", "ukS3YcD5adg=\n", sb);
            }
        }
        return strDecrypt;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public String mo8598() {
        return m8597() + this.f2165 + StringFog.decrypt("hg==\n", "qa6pqYPWqvQ=\n") + this.f2164 + StringFog.decrypt("Ow==\n", "FeasRQ3Fb3c=\n") + f2158 + StringFog.decrypt("6g==\n", "xHVlouUBgCg=\n") + this.f2163 + StringFog.decrypt("Ew==\n", "PU9TWKlrQiI=\n") + this.f2162;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8599(String str) {
        String strM8597 = m8597();
        StringBuilder sb = new StringBuilder();
        sb.append(strM8597);
        sb.append(this.f2165);
        sb.append(StringFog.decrypt("yg==\n", "5RSRTdvvu0s=\n"));
        String str2 = f2158;
        sb.append(str2);
        StringBuilder sbM8559 = AbstractC0502.m8559("Qw==\n", "bCI3GBk6a/I=\n", sb, str);
        sbM8559.append(StringFog.decrypt("2g==\n", "9ecWsiYHkdo=\n"));
        sbM8559.append(this.f2164);
        StringBuilder sbM85510 = AbstractC0502.m8559("Rw==\n", "ac9eTg8vKpA=\n", sbM8559, str2);
        sbM85510.append(StringFog.decrypt("vQ==\n", "kwcGcjV1zbI=\n"));
        sbM85510.append(this.f2163);
        sbM85510.append(StringFog.decrypt("zg==\n", "4L7V9jfpSAY=\n"));
        sbM85510.append(this.f2162);
        return sbM85510.toString();
    }
}
