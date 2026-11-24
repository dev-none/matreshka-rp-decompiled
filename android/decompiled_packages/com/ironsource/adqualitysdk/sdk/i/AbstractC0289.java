package com.ironsource.adqualitysdk.sdk.i;

import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0289 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final HashMap f1082 = new HashMap();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8467(String str) {
        HashMap map = f1082;
        String str2 = (String) map.get(str);
        if (str2 != null) {
            return str2;
        }
        map.put(str, str);
        return str;
    }
}
