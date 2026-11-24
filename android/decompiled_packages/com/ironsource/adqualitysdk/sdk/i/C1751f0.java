package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.f0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1751f0 extends AbstractC0413 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ArrayList f372;

    public C1751f0(ArrayList arrayList) {
        this.f372 = arrayList;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (super.equals(obj)) {
            return this.f372.equals(((C1751f0) obj).f372);
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final int hashCode() {
        return this.f372.hashCode() + (C1751f0.class.hashCode() * 31);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("VePzdw==\n", "I4KBV8oboBw=\n"));
        sb.append(TextUtils.join(StringFog.decrypt("+ts=\n", "1vu2eQgJo9Q=\n"), this.f372));
        return AbstractC0970.m8850("5Q==\n", "3q7RMToOPxM=\n", sb);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0847 mo8348(C0704 c0704, C1013 c1013) {
        List listAsList;
        for (AbstractC0904 abstractC0904 : this.f372) {
            C1748e0 c1748e0 = abstractC0904 instanceof C1748e0 ? (C1748e0) abstractC0904 : abstractC0904 instanceof C0527 ? ((C0527) abstractC0904).f1844 : null;
            if (c1748e0 != null && (listAsList = Arrays.asList(c1748e0.f369)) != null) {
                Iterator it = listAsList.iterator();
                while (it.hasNext()) {
                    c0704.f2436.put((String) it.next(), null);
                }
            }
            abstractC0904.mo8347(c0704, c1013);
        }
        return new C0847(null);
    }
}
