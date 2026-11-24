package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﭡ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC1022 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904 f3692;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f3693;

    public AbstractC1022(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905) {
        this.f3693 = abstractC0904;
        this.f3692 = abstractC0905;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        AbstractC1022 abstractC1022 = (AbstractC1022) obj;
        AbstractC0904 abstractC0904 = this.f3693;
        if (abstractC0904 == null ? abstractC1022.f3693 != null : !abstractC0904.equals(abstractC1022.f3693)) {
            return false;
        }
        AbstractC0904 abstractC0905 = this.f3692;
        AbstractC0904 abstractC0906 = abstractC1022.f3692;
        if (abstractC0905 != null) {
            return abstractC0905.equals(abstractC0906);
        }
        return abstractC0906 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f3693;
        int iHashCode = (abstractC0904 != null ? abstractC0904.hashCode() : 0) * 31;
        AbstractC0904 abstractC0905 = this.f3692;
        return iHashCode + (abstractC0905 != null ? abstractC0905.hashCode() : 0);
    }

    public final String toString() {
        return this.f3693 + " " + mo8616() + " " + this.f3692;
    }

    /* JADX INFO: renamed from: ﾒ */
    public abstract String mo8616();
}
