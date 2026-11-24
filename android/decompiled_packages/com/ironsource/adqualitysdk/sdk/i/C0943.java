package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ⅴ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0943 extends AbstractC0912 {
    static {
        StringFog.decrypt("rMt0\n", "waoEmUor2s0=\n");
        StringFog.decrypt("YV6M3u0FXg==\n", "BzH+m4xmNsc=\n");
        StringFog.decrypt("c0gVwGZg\n", "FSF5tAMSZwI=\n");
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8818(C1013 c1013, ArrayList arrayList) {
        List list = (List) AbstractC0912.m8788(arrayList, 0, List.class);
        C0944 c0944 = (C0944) AbstractC0912.m8788(arrayList, 1, C0944.class);
        List arrayList2 = new ArrayList();
        if (arrayList.size() > 2) {
            if (AbstractC0912.m8787(arrayList, 2, C1013.class)) {
                c1013 = (C1013) AbstractC0912.m8788(arrayList, 2, C1013.class);
                if (arrayList.size() > 3) {
                    arrayList2 = AbstractC0912.m8789(arrayList, 3);
                }
            } else {
                arrayList2 = AbstractC0912.m8789(arrayList, 2);
            }
        }
        ArrayList arrayList3 = new ArrayList();
        for (int i = 0; i < list.size(); i++) {
            arrayList2.add(0, list.get(i));
            C0704 c0704 = c1013.f3677;
            c0944.getClass();
            arrayList3.add(c0944.m8820(c0704, c0704.f2434, c1013, arrayList2).f3060);
            arrayList2.remove(0);
        }
        return arrayList3;
    }
}
