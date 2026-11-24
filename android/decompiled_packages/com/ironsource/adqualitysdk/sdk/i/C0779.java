package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴗ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0779 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f2635;

    public C0779(AbstractC0904 abstractC0904) {
        this.f2635 = abstractC0904;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        AbstractC0904 abstractC0904 = this.f2635;
        AbstractC0904 abstractC0905 = ((C0779) obj).f2635;
        if (abstractC0904 != null) {
            return abstractC0904.equals(abstractC0905);
        }
        return abstractC0905 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        int iHashCode = C0779.class.hashCode() * 31;
        AbstractC0904 abstractC0904 = this.f2635;
        return iHashCode + (abstractC0904 != null ? abstractC0904.hashCode() : 0);
    }

    public final String toString() {
        return StringFog.decrypt("DA==\n", "LTe5hQRvV14=\n") + this.f2635;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        return new C0847(Boolean.valueOf(!this.f2635.m8777(c0704, c1013).m8737()));
    }
}
