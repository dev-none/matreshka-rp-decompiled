package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ন, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0529 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904[] f1845;

    public C0529(ArrayList arrayList) {
        AbstractC0904[] abstractC0904Arr = new AbstractC0904[arrayList.size()];
        this.f1845 = abstractC0904Arr;
        arrayList.toArray(abstractC0904Arr);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (super.equals(obj)) {
            return Arrays.equals(this.f1845, ((C0529) obj).f1845);
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        return Arrays.hashCode(this.f1845);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("YA==\n", "O7yIPLeqZ2s=\n"));
        sb.append(AbstractC0904.m8776(this.f1845));
        return AbstractC0970.m8850("jg==\n", "01awl4gjawI=\n", sb);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        ArrayList arrayList = new ArrayList();
        for (AbstractC0904 abstractC0904 : this.f1845) {
            arrayList.add(abstractC0904.m8777(c0704, c1013).f3060);
        }
        return new C0847(arrayList);
    }
}
