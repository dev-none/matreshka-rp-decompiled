package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ἵ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0904 {
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8776(Object[] objArr) {
        StringBuilder sb = new StringBuilder();
        int length = objArr.length;
        boolean z = true;
        int i = 0;
        while (i < length) {
            Object obj = objArr[i];
            if (!z) {
                sb.append(StringFog.decrypt("oQM=\n", "jSNeFm73I18=\n"));
            }
            if (obj instanceof String) {
                sb.append(StringFog.decrypt("Dw==\n", "LalVVaZkv+w=\n"));
                sb.append(obj);
                sb.append(StringFog.decrypt("xw==\n", "5V03Bjuehbg=\n"));
            } else {
                sb.append(obj);
            }
            i++;
            z = false;
        }
        return sb.toString();
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && getClass() == obj.getClass();
    }

    public int hashCode() {
        return getClass().hashCode();
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0847 m8777(C0704 c0704, C1013 c1013) {
        C0847 c0847Mo8347 = mo8347(c0704, c1013);
        if (c0847Mo8347 != null) {
            Object obj = c0847Mo8347.f3060;
            if (obj instanceof AbstractC0904) {
                return ((AbstractC0904) obj).m8777(c0704, c1013);
            }
        }
        return c0847Mo8347;
    }

    /* JADX INFO: renamed from: ﾒ */
    public abstract C0847 mo8347(C0704 c0704, C1013 c1013);
}
