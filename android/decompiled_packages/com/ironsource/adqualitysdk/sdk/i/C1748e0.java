package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.e0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1748e0 extends AbstractC0904 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f369;

    public C1748e0(String str) {
        this.f369 = AbstractC0289.m8467(str);
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (super.equals(obj)) {
            return this.f369.equals(((C1748e0) obj).f369);
        }
        return false;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    public final int hashCode() {
        String str = this.f369;
        if (str != null) {
            return str.hashCode();
        }
        return 0;
    }

    public final String toString() {
        return this.f369;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractC0904
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0847 mo8347(C0704 c0704, C1013 c1013) {
        C0944 c0944M8601;
        try {
            return new C0847(c0704.m8626(this.f369));
        } catch (Exception e) {
            String str = this.f369;
            if (str != null) {
                c0944M8601 = c1013.f3678.m8601(str);
            } else {
                c1013.getClass();
                c0944M8601 = null;
            }
            if (c0944M8601 != null) {
                return new C0847(c0944M8601);
            }
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("DrUVd7bSE0IqqxJ5sJsYU2uiH2i2lwVHIqgJOOM=\n", "S8dnGMTydjQ=\n"));
            sb.append(this);
            throw new C1106(c1013, c0704, AbstractC0970.m8850("GA==\n", "PzSlpqB06Fs=\n", sb), e);
        }
    }
}
