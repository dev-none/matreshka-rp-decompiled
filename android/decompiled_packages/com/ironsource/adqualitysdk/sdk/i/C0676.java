package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0676 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f2335;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final AbstractC0904 f2336;

    public C0676(AbstractC0904 abstractC0904, String str) {
        this.f2336 = abstractC0904;
        this.f2335 = str;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!super.equals(obj)) {
            return false;
        }
        C0676 c0676 = (C0676) obj;
        AbstractC0904 abstractC0904 = this.f2336;
        if (abstractC0904 == null ? c0676.f2336 != null : !abstractC0904.equals(c0676.f2336)) {
            return false;
        }
        String str = this.f2335;
        String str2 = c0676.f2335;
        if (str != null) {
            return str.equals(str2);
        }
        return str2 == null;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        AbstractC0904 abstractC0904 = this.f2336;
        int iHashCode = (abstractC0904 != null ? abstractC0904.hashCode() : 0) * 31;
        String str = this.f2335;
        return iHashCode + (str != null ? str.hashCode() : 0);
    }

    public final String toString() {
        return this.f2336.toString() + StringFog.decrypt("Aw==\n", "Ldd695lkOYQ=\n") + this.f2335;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0944 c0944M8601;
        Object obj = this.f2336.m8777(c0704, c1013).f3060;
        if (!(obj instanceof C1013)) {
            try {
                return new C0847(obj.getClass().getDeclaredField(this.f2335).get(obj));
            } catch (IllegalAccessException | NoSuchFieldException e) {
                StringBuilder sb = new StringBuilder();
                sb.append(StringFog.decrypt("PbwsGz38K8oZoisVO7Ug21ioNxEjuG7dG607Bzz8aQ==\n", "eM5edE/cTrw=\n"));
                sb.append(this);
                throw new C1106(c1013, c0704, AbstractC0970.m8850("Mw==\n", "FDjMEdWcgnw=\n", sb), e);
            }
        }
        C1013 c1014 = (C1013) obj;
        String str = this.f2335;
        if (str != null) {
            c0944M8601 = c1014.f3678.m8601(str);
        } else {
            c1014.getClass();
            c0944M8601 = null;
        }
        return new C0847(c0944M8601);
    }
}
