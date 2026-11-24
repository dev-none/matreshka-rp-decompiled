package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Arrays;
import java.util.LinkedHashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔊ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract /* synthetic */ class AbstractC0703 {
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8623(AbstractC0265[] abstractC0265Arr, LinkedHashMap linkedHashMap, String str, String str2, String str3) {
        linkedHashMap.put(str, Arrays.asList(abstractC0265Arr));
        return StringFog.decrypt(str2, str3);
    }
}
