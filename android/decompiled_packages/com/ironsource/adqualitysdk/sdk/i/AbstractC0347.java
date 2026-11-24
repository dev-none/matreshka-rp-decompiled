package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.AbstractMap;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ϝ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0347 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final Set f1330;

    static {
        StringFog.decrypt("wyRu/xgShp/9InPPEw==\n", "okAfoHF87+s=\n");
        StringFog.decrypt("uFLGh4VhKoO+Ws2ahWYgm6hd\n", "zTOi9NoST/A=\n");
        StringFog.decrypt("rJCS2U+YeKW3kqPfU5RTiqaYktBUmg==\n", "xff8tj39J9U=\n");
        f1330 = Collections.unmodifiableSet(new HashSet(Arrays.asList(StringFog.decrypt("lMu2RxeDGmmqzat3HA==\n", "9a/HGH7tcx0=\n"), StringFog.decrypt("Ic1eKiePbJYnxVU3J4hmjjHC\n", "VKw6WXj8CeU=\n"))));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static boolean m8498(AbstractMap abstractMap, String str) {
        if (abstractMap.containsKey(str)) {
            return false;
        }
        int size = abstractMap.size();
        Iterator it = f1330.iterator();
        int i = 0;
        while (it.hasNext()) {
            if (abstractMap.containsKey((String) it.next())) {
                i++;
            }
        }
        return size >= i + 5;
    }
}
