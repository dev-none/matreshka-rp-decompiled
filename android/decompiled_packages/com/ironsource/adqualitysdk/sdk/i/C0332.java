package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ι, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public class C0332 extends AbstractC0413 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f1213;

    public C0332(AbstractC0904 abstractC0904) {
        this.f1213 = abstractC0904;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        AbstractC0904 abstractC0904 = this.f1213;
        AbstractC0904 abstractC0905 = ((C0332) obj).f1213;
        if (abstractC0904 != null) {
            return abstractC0904.equals(abstractC0905);
        }
        return abstractC0905 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f1213;
        if (abstractC0904 != null) {
            return abstractC0904.hashCode();
        }
        return 0;
    }

    public String toString() {
        if (this.f1213 == null) {
            return StringFog.decrypt("8w==\n", "yOFNrh4/xtw=\n");
        }
        StringBuilder sb = new StringBuilder();
        sb.append(this.f1213);
        return AbstractC0970.m8850("zg==\n", "9ded99+7X5E=\n", sb);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0413
    /* JADX INFO: renamed from: ﾒ */
    public C0847 mo8348(C0704 c0704, C1013 c1013) {
        AbstractC0904 abstractC0904 = this.f1213;
        return abstractC0904 != null ? abstractC0904.m8777(c0704, c1013) : new C0847(null);
    }
}
