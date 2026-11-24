package com.ironsource.adqualitysdk.sdk.i;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.γ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0330 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Object f1207;

    public AbstractC0330(Object obj) {
        this.f1207 = obj;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        Object obj2 = this.f1207;
        Object obj3 = ((AbstractC0330) obj).f1207;
        if (obj2 != null) {
            return obj2.equals(obj3);
        }
        return obj3 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        Object obj = this.f1207;
        if (obj != null) {
            return obj.hashCode();
        }
        return 0;
    }

    public String toString() {
        return "" + this.f1207;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        return new C0847(this.f1207);
    }
}
