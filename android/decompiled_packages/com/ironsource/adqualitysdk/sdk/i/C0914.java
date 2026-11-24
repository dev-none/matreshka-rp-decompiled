package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ΐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0914 extends AbstractC0912 {
    static {
        StringFog.decrypt("oHcx\n", "zhJGxckVeGU=\n");
        StringFog.decrypt("UNbn8A==\n", "M76Ggg1mjy0=\n");
        StringFog.decrypt("zbwG1tTMjAfJ\n", "rM50t62Y9Xc=\n");
        StringFog.decrypt("NHr/nzFfdvooVfCOOkRa\n", "WxiV+lIrPps=\n");
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Object m8797(C1013 c1013, ArrayList arrayList) {
        Class cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
        List arrayList2 = new ArrayList();
        if (arrayList.size() > 1) {
            arrayList2 = (List) AbstractC0912.m8788(arrayList, 1, List.class);
        }
        Constructor<?> constructor = null;
        List list = arrayList.size() > 2 ? (List) AbstractC0912.m8788(arrayList, 2, List.class) : null;
        try {
            if (list != null) {
                Class<?>[] clsArr = new Class[list.size()];
                list.toArray(clsArr);
                String str = AbstractC0765.f2620;
                return cls.getConstructor(clsArr).newInstance(arrayList2.toArray());
            }
            String str2 = AbstractC0765.f2620;
            for (Constructor<?> constructor2 : cls.getConstructors()) {
                if (constructor2.getParameterTypes().length == arrayList2.size() && AbstractC0765.m8718(constructor2.getParameterTypes(), arrayList2)) {
                    constructor = constructor2;
                    break;
                }
            }
            return constructor.newInstance(arrayList2.toArray());
        } catch (Exception e) {
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("WuweC07wGWt6/xgNUrdad3rpTA==\n", "H55sZDzQehk=\n"));
            sb.append(cls.getName());
            sb.append(StringFog.decrypt("H88bJNLcWqlYy1I=\n", "P7hyULr8O9s=\n"));
            sb.append(arrayList2);
            sb.append(list != null ? StringFog.decrypt("7Gnq003EEJa/e+HETQ==\n", "zAiEt22nfPc=\n") + list : "");
            throw new C1106(c1013, c1013.f3677, sb.toString(), e);
        }
    }
}
