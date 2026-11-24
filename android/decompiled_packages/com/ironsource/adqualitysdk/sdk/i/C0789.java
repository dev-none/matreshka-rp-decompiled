package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴫ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0789 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f2678;

    public C0789(String str) {
        this.f2678 = AbstractC0289.m8467(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        String str = this.f2678;
        String str2 = ((C0789) obj).f2678;
        if (str != null) {
            return str.equals(str2);
        }
        return str2 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        String str = this.f2678;
        if (str != null) {
            return str.hashCode();
        }
        return 0;
    }

    public final String toString() {
        return this.f2678;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        AbstractC0349 abstractC0349 = c1013.f3675;
        String str = this.f2678;
        return new C0847(abstractC0349.m8500(str.substring(0, str.length() - StringFog.decrypt("5p3X6Pw+\n", "yP67iY9NEG4=\n").length()), true));
    }
}
