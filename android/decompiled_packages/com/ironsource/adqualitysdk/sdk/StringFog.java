package com.ironsource.adqualitysdk.sdk;

import com.ironsource.adqualitysdk.sdk.i.AbstractC0514;
import com.ironsource.adqualitysdk.sdk.i.AbstractC1057;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes6.dex */
public final class StringFog {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final ConcurrentHashMap f119 = new ConcurrentHashMap();

    public static String decrypt(String str, String str2) {
        ConcurrentHashMap concurrentHashMap = f119;
        ConcurrentHashMap concurrentHashMap2 = (ConcurrentHashMap) concurrentHashMap.get(str);
        if (concurrentHashMap2 == null) {
            concurrentHashMap2 = new ConcurrentHashMap();
            ConcurrentHashMap concurrentHashMap3 = (ConcurrentHashMap) concurrentHashMap.putIfAbsent(str, concurrentHashMap2);
            if (concurrentHashMap3 != null) {
                concurrentHashMap2 = concurrentHashMap3;
            }
        }
        String str3 = (String) concurrentHashMap2.get(str2);
        if (str3 != null) {
            return str3;
        }
        String strM8874 = AbstractC1057.m8874(AbstractC0514.m8560(str), AbstractC0514.m8560(str2));
        concurrentHashMap2.put(str2, strM8874);
        return strM8874;
    }
}
