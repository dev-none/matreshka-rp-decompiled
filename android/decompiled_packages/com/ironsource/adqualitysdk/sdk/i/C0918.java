package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ῑ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public class C0918 extends AbstractC0904 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f3242 = StringFog.decrypt("5Uu/\n", "iSTY/XqaxRs=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904[] f3243;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f3244;

    public C0918(String str, ArrayList arrayList) {
        this.f3244 = AbstractC0289.m8467(str);
        AbstractC0904[] abstractC0904Arr = new AbstractC0904[arrayList.size()];
        this.f3243 = abstractC0904Arr;
        arrayList.toArray(abstractC0904Arr);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C0918 c0918 = (C0918) obj;
        if (this.f3244.equals(c0918.f3244)) {
            return Arrays.equals(this.f3243, c0918.f3243);
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public int hashCode() {
        String str = this.f3244;
        return Arrays.hashCode(this.f3243) + ((str != null ? str.hashCode() : 0) * 31);
    }

    public String toString() {
        return mo8537(this.f3243);
    }

    /* JADX INFO: renamed from: ﾇ */
    public String mo8537(Object[] objArr) {
        StringBuilder sb = new StringBuilder();
        sb.append(this.f3244);
        sb.append(StringFog.decrypt("hA==\n", "rDqB6vlK8Gk=\n"));
        sb.append(AbstractC0904.m8776(objArr));
        return AbstractC0970.m8850("GQ==\n", "MPvHCVLW4Eg=\n", sb);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0944 c0944;
        ArrayList arrayList = new ArrayList();
        for (AbstractC0904 abstractC0904 : this.f3243) {
            arrayList.add(abstractC0904.m8777(c0704, c1013).f3060);
        }
        if (this.f3244.equals(f3242)) {
            AbstractC0728.m8662(StringFog.decrypt("wSs/mPK0PQ==\n", "knlzx777epU=\n"), c1013.m8859() + StringFog.decrypt("cKA=\n", "SoB6Mus+2Oo=\n") + arrayList.get(0), null, null);
            return new C0847(null);
        }
        try {
            c0944 = (C0944) c0704.m8626(this.f3244);
        } catch (Exception unused) {
            c0944 = null;
        }
        if (c0944 != null) {
            C0847 c0847M8820 = c0944.m8820(c0704, c0704.f2434, c1013, arrayList);
            return c0847M8820 != null ? new C0847(c0847M8820.f3060) : new C0847(null);
        }
        C0944 c0944M8601 = c1013.f3678.m8601(this.f3244);
        if (c0944M8601 == null) {
            return new C0847(c1013.f3676.mo8326(c1013, this.f3244, arrayList, c1013.f3674, c0704));
        }
        C0847 c0847M8821 = c0944M8601.m8820(c0704, c0704.f2434, c1013, arrayList);
        c0847M8821.f3059 = false;
        return c0847M8821;
    }
}
