package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ऽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0517 extends AbstractC0912 {
    static {
        StringFog.decrypt("8CB48O6rokU=\n", "l0UMtofOziE=\n");
        StringFog.decrypt("97rgfQ6iOozj\n", "kN+UO2fHVug=\n");
        StringFog.decrypt("1PiX4N+WXC719IbK0qtJDsrthg==\n", "s53jprbkL1o=\n");
        StringFog.decrypt("IYIn9MG/wPYAjjbezJra9i63IdfOpMs=\n", "RudTsqjNs4I=\n");
        StringFog.decrypt("hVnhPRFLJtSDR+AYAEgiyI9H4DkX\n", "5iuEXGUuYL0=\n");
    }

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static Field m8561(ArrayList arrayList) {
        Field[] fields;
        Class cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
        String str = (String) AbstractC0912.m8788(arrayList, 1, String.class);
        C0558 c0558 = C0705.m8630().f2439;
        synchronized (C0558.class) {
            if (c0558.f1985 == null) {
                c0558.f1985 = new ArrayList();
            }
            c0558.f1985.clear();
            ArrayList arrayList2 = c0558.f1985;
            try {
                fields = cls.getDeclaredFields();
            } catch (Error unused) {
                fields = cls.getFields();
            }
            for (Field field : fields) {
                if (field.getType().getName().toLowerCase().startsWith(str.toLowerCase())) {
                    field.setAccessible(true);
                    arrayList2.add(field);
                }
            }
            if (c0558.f1985.isEmpty()) {
                return null;
            }
            return (Field) c0558.f1985.get(0);
        }
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static Field m8562(ArrayList arrayList) {
        if (!(arrayList.get(0) instanceof Class)) {
            Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
            return C0705.m8630().f2439.m8578(objM8788.getClass(), (Class) AbstractC0912.m8788(arrayList, 1, Class.class));
        }
        Class cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
        if (arrayList.get(1) instanceof Class) {
            return C0705.m8630().f2439.m8578(cls, (Class) AbstractC0912.m8788(arrayList, 1, Class.class));
        }
        return C0705.m8630().f2439.m8577(cls, (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class));
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static List m8563(ArrayList arrayList) {
        if (!(arrayList.get(0) instanceof Class)) {
            Object objM8788 = AbstractC0912.m8788(arrayList, 0, Object.class);
            boolean zBooleanValue = arrayList.size() > 1 ? ((Boolean) AbstractC0912.m8788(arrayList, 1, Boolean.class)).booleanValue() : false;
            C0558 c0558 = C0705.m8630().f2439;
            return Arrays.asList(C0558.m8576(objM8788.getClass(), zBooleanValue, -1, null));
        }
        if (arrayList.size() <= 1) {
            return new ArrayList();
        }
        Class cls = (Class) AbstractC0912.m8788(arrayList, 0, Class.class);
        C0575 c0575 = (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class);
        C0558 c0559 = C0705.m8630().f2439;
        ArrayList arrayList2 = new ArrayList();
        c0559.m8579(cls, c0575, arrayList2);
        return arrayList2;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static Field m8565(ArrayList arrayList) {
        return C0705.m8630().f2439.m8577((Class) AbstractC0912.m8788(arrayList, 0, Class.class), (C0575) AbstractC0912.m8788(arrayList, 1, C0575.class));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C0612 m8564() {
        C0558 c0558 = C0705.m8630().f2439;
        return new C0612();
    }
}
