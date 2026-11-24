package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.u, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public enum EnumC1779u {
    f517,
    f516,
    f515;

    /* JADX WARN: Code duplicated, block: B:20:0x004e  */
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static EnumC1779u m8424(String str) {
        byte b;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        int iHashCode = str.hashCode();
        if (iHashCode != 3642) {
            if (iHashCode != 96921) {
                if (iHashCode == 109261 && str.equals(StringFog.decrypt("2nol\n", "tBVL3XG6UlY=\n"))) {
                    b = 0;
                } else {
                    b = -1;
                }
            } else if (str.equals(StringFog.decrypt("SnMF\n", "Kwdp6NRCWZ8=\n"))) {
                b = 1;
            } else {
                b = -1;
            }
        } else if (str.equals(StringFog.decrypt("tU0=\n", "xyHjbErsqy4=\n"))) {
            b = 2;
        } else {
            b = -1;
        }
        if (b == 0) {
            return f517;
        }
        if (b == 1) {
            return f516;
        }
        if (b != 2) {
            return null;
        }
        return f515;
    }
}
