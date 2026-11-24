package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.רּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1008 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f3646;

    public C1008(AbstractC0904 abstractC0904) {
        this.f3646 = abstractC0904;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        AbstractC0904 abstractC0904 = this.f3646;
        AbstractC0904 abstractC0905 = ((C1008) obj).f3646;
        if (abstractC0904 != null) {
            return abstractC0904.equals(abstractC0905);
        }
        return abstractC0905 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f3646;
        if (abstractC0904 != null) {
            return abstractC0904.hashCode();
        }
        return 0;
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("eQ==\n", "UQUjmucP2nM=\n"));
        sb.append(this.f3646);
        return AbstractC0970.m8850("Cg==\n", "I8wkybtQOiA=\n", sb);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        return this.f3646.m8777(c0704, c1013);
    }
}
