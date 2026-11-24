package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ד, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0423 extends C0918 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final AbstractC0904[] f1541;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final AbstractC0904 f1542;

    public C0423(AbstractC0904 abstractC0904, String str, ArrayList arrayList, ArrayList arrayList2) {
        super(str, arrayList2);
        this.f1542 = abstractC0904;
        if (arrayList != null) {
            AbstractC0904[] abstractC0904Arr = new AbstractC0904[arrayList.size()];
            this.f1541 = abstractC0904Arr;
            arrayList.toArray(abstractC0904Arr);
        }
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0918, com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C0423 c0423 = (C0423) obj;
        AbstractC0904 abstractC0904 = this.f1542;
        if (abstractC0904 == null ? c0423.f1542 == null : abstractC0904.equals(c0423.f1542)) {
            return Arrays.equals(this.f1541, c0423.f1541);
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0918, com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        int iHashCode = super.hashCode() * 31;
        AbstractC0904 abstractC0904 = this.f1542;
        return Arrays.hashCode(this.f1541) + ((iHashCode + (abstractC0904 != null ? abstractC0904.hashCode() : 0)) * 31);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0918
    public final String toString() {
        return mo8537(this.f3243);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0918
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String mo8537(Object[] objArr) {
        String strM8850;
        StringBuilder sb = new StringBuilder();
        sb.append(this.f1542);
        sb.append(StringFog.decrypt("WQ==\n", "d/sM3HXV2+o=\n"));
        sb.append(this.f3244);
        if (this.f1541 != null) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(StringFog.decrypt("pQ==\n", "mZp6QPJPJzA=\n"));
            sb2.append(AbstractC0904.m8776(this.f1541));
            strM8850 = AbstractC0970.m8850("fw==\n", "QY3JiVwfSM4=\n", sb2);
        } else {
            strM8850 = "";
        }
        sb.append(strM8850);
        sb.append(StringFog.decrypt("cA==\n", "WFz9O3lwyWs=\n"));
        sb.append(AbstractC0904.m8776(objArr));
        return AbstractC0970.m8850("rQ==\n", "hCNNa9xmni0=\n", sb);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.C0918, com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0944 c0944M8601;
        C0847 c0847M8820;
        ArrayList arrayList = new ArrayList();
        for (AbstractC0904 abstractC0904 : this.f3243) {
            arrayList.add(abstractC0904.m8777(c0704, c1013).f3060);
        }
        AbstractC0904 abstractC0905 = this.f1542;
        if ((abstractC0905 instanceof C1748e0) && ((C1748e0) abstractC0905).f369.equals(StringFog.decrypt("u9eqHjU=\n", "yKLae0faOwQ=\n"))) {
            C0944 c0944M8602 = c1013.f3678.f2224.m8601(this.f3244);
            c0944M8602.getClass();
            C0847 c0847M8821 = c0944M8602.m8820(c0704, c0704.f2434, c1013, arrayList);
            c0847M8821.f3059 = false;
            return c0847M8821;
        }
        Object obj = this.f1542.m8777(c0704, c1013).f3060;
        if (obj instanceof InterfaceC0462) {
            return new C0847(((InterfaceC0462) obj).mo8326(c1013, this.f3244, arrayList, c1013.f3674, c0704));
        }
        if (obj instanceof C1013) {
            synchronized (obj) {
                C1013 c1014 = (C1013) obj;
                String str = this.f3244;
                if (str != null) {
                    c0944M8601 = c1014.f3678.m8601(str);
                } else {
                    c1014.getClass();
                    c0944M8601 = null;
                }
                if (c0944M8601 == null) {
                    throw new C1789z(c1013, c0704, this.f3244, StringFog.decrypt("pv+EtGW9pv+G7oOvfvOkp47ogrN4+eM=\n", "44322xedw4c=\n") + this.f3244);
                }
                c0847M8820 = c0944M8601.m8820(c0704, c1014.f3677.f2434, c1014, arrayList);
                c0847M8820.f3059 = false;
            }
            return c0847M8820;
        }
        try {
            AbstractC0904[] abstractC0904Arr = this.f1541;
            Method methodM8715 = abstractC0904Arr != null ? AbstractC0765.m8715(obj, this.f3244, m8536(abstractC0904Arr, c0704, c1013)) : AbstractC0765.m8716(obj, this.f3244, (List) arrayList);
            if (methodM8715 == null) {
                arrayList.add(0, obj);
                return new C0847(c1013.f3676.mo8326(c1013, this.f3244, arrayList, c1013.f3674, c0704));
            }
            if (!Modifier.isPublic(methodM8715.getDeclaringClass().getModifiers())) {
                try {
                    methodM8715.setAccessible(true);
                } catch (RuntimeException unused) {
                }
            }
            return new C0847(methodM8715.invoke(obj, arrayList.toArray()));
        } catch (IllegalAccessException | InvocationTargetException e) {
            throw new C1106(c1013, c0704, StringFog.decrypt("oICCrt4FueKAkYW1xUu7uoiXhKnDQfw=\n", "5fLwwawl3Jo=\n") + this, e);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ArrayList m8536(AbstractC0904[] abstractC0904Arr, C0704 c0704, C1013 c1013) {
        ArrayList arrayList = new ArrayList();
        for (AbstractC0904 abstractC0904 : abstractC0904Arr) {
            arrayList.add((Class) abstractC0904.m8777(c0704, c1013).f3060);
        }
        return arrayList;
    }
}
