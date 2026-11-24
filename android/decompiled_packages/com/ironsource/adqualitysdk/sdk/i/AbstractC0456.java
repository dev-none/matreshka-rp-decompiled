package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ـ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0456 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final AbstractC0904 f1723;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f1724;

    public AbstractC0456(AbstractC0904 abstractC0904, AbstractC0904 abstractC0905) {
        this.f1724 = abstractC0904;
        this.f1723 = abstractC0905;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        AbstractC0456 abstractC0456 = (AbstractC0456) obj;
        AbstractC0904 abstractC0904 = this.f1724;
        if (abstractC0904 == null ? abstractC0456.f1724 != null : !abstractC0904.equals(abstractC0456.f1724)) {
            return false;
        }
        AbstractC0904 abstractC0905 = this.f1723;
        AbstractC0904 abstractC0906 = abstractC0456.f1723;
        if (abstractC0905 != null) {
            return abstractC0905.equals(abstractC0906);
        }
        return abstractC0906 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public int hashCode() {
        AbstractC0904 abstractC0904 = this.f1724;
        int iHashCode = (abstractC0904 != null ? abstractC0904.hashCode() : 0) * 31;
        AbstractC0904 abstractC0905 = this.f1723;
        return iHashCode + (abstractC0905 != null ? abstractC0905.hashCode() : 0);
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.f1724.toString());
        sb.append(StringFog.decrypt("nA==\n", "x+JclG1MIsg=\n"));
        sb.append(this.f1723.toString());
        return AbstractC0970.m8850("HQ==\n", "QJKkN/LdWJM=\n", sb);
    }
}
