package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒷ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0653 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f2266;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f2267;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f2268;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f2269 = StringFog.decrypt("0OXLKLLP4u/hzsw1ts765dDlyyC+yw==\n", "k4qlRtesloA=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f2270;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final List f2271;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final EnumC0656 f2272;

    static {
        StringFog.decrypt("4Q5t+g==\n", "lXcdnxSbKZg=\n");
        StringFog.decrypt("sEU=\n", "xitJpcLEOPQ=\n");
        StringFog.decrypt("LkrVaKPk\n", "XC+0G8yKmK8=\n");
        f2268 = StringFog.decrypt("OayYAC8=\n", "WM73dkoojoc=\n");
        f2267 = StringFog.decrypt("MBpcZxo=\n", "Un8wCG2jE00=\n");
        f2266 = StringFog.decrypt("9AYO7aA=\n", "kX5vjtTwD7U=\n");
    }

    /* JADX WARN: Code duplicated, block: B:18:0x0043  */
    public C0653(JSONObject jSONObject) {
        byte b;
        EnumC0656 enumC0656;
        String strOptString = jSONObject.optString(StringFog.decrypt("AEzE4A==\n", "dDW0hWHfsP0=\n"));
        int iHashCode = strOptString.hashCode();
        if (iHashCode != 92611485) {
            if (iHashCode != 93621297) {
                if (iHashCode == 96946943 && strOptString.equals(f2266)) {
                    b = 0;
                } else {
                    b = -1;
                }
            } else if (strOptString.equals(f2267)) {
                b = 2;
            } else {
                b = -1;
            }
        } else if (strOptString.equals(f2268)) {
            b = 1;
        } else {
            b = -1;
        }
        if (b == 0) {
            enumC0656 = EnumC0656.f2279;
        } else if (b != 1) {
            enumC0656 = b != 2 ? EnumC0656.f2282 : EnumC0656.f2280;
        } else {
            enumC0656 = EnumC0656.f2281;
        }
        this.f2272 = enumC0656;
        String strOptString2 = jSONObject.optString(StringFog.decrypt("T44=\n", "OeB4TynMPqg=\n"));
        this.f2271 = TextUtils.isEmpty(strOptString2) ? new ArrayList() : Arrays.asList(strOptString2.split(StringFog.decrypt("3w==\n", "8wlm/xca7OU=\n")));
        String strOptString3 = jSONObject.optString(StringFog.decrypt("33HDCXno\n", "rRSiehaGVYs=\n"));
        this.f2270 = (TextUtils.isEmpty(strOptString3) || strOptString3.equals(StringFog.decrypt("vhdjEQ==\n", "0GIPfYISeH4=\n"))) ? null : strOptString3;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean m8608(String str) {
        try {
            int iOrdinal = this.f2272.ordinal();
            if (iOrdinal == 0) {
                return true;
            }
            if (iOrdinal == 1) {
                return this.f2271.size() <= 0 && AbstractC0607.m8591(str, (String) this.f2271.get(0)) >= 0;
            }
            if (iOrdinal == 2) {
                if (this.f2271.size() > 0) {
                    return AbstractC0607.m8591(str, (String) this.f2271.get(0)) < 0;
                }
                if (this.f2271.size() <= 0) {
                }
            } else if (iOrdinal == 3) {
                return this.f2271.contains(str);
            }
            return false;
        } catch (Exception e) {
            AbstractC1104.m8887(f2269, StringFog.decrypt("Xb2AVY+lTaU4vJpViOlAj3G8k1iR4A==\n", "GM/yOv2FJMs=\n"), (Throwable) e, false);
        }
    }
}
