package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒨ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0638 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final List f2238;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final boolean f2239;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final boolean f2240;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final boolean f2241;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean f2242;

    public C0638(boolean z, boolean z2, boolean z3, boolean z4, ArrayList arrayList) {
        this.f2242 = z;
        this.f2241 = z2;
        this.f2240 = z3;
        this.f2239 = z4;
        this.f2238 = Collections.unmodifiableList(new ArrayList(arrayList));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || C0638.class != obj.getClass()) {
            return false;
        }
        C0638 c0638 = (C0638) obj;
        if (this.f2242 == c0638.f2242 && this.f2241 == c0638.f2241 && this.f2240 == c0638.f2240 && this.f2239 == c0638.f2239) {
            return this.f2238.equals(c0638.f2238);
        }
        return false;
    }

    public final int hashCode() {
        return this.f2238.hashCode() + ((((((((this.f2242 ? 1 : 0) * 31) + (this.f2241 ? 1 : 0)) * 31) + (this.f2240 ? 1 : 0)) * 31) + (this.f2239 ? 1 : 0)) * 31);
    }

    public final String toString() {
        return StringFog.decrypt("COsCYmTjh3Mv8RBif/mERCT2BHpi7YNlB/cYcnfSj2Ik5gVzcqs=\n", "QYVxFhaW6hY=\n") + this.f2242 + StringFog.decrypt("i/4Z4xnzLCrCujT1NeYgLcK6TQ==\n", "p95wkEGDQ1k=\n") + this.f2241 + StringFog.decrypt("F1NQkrFM1eJcFFyTtF3D9lgbXIXI\n", "O3M54fUpt5c=\n") + this.f2240 + StringFog.decrypt("4in9F7y9xOm9YtABhbnA9KttqQ==\n", "zgmUZPHco4A=\n") + this.f2239 + StringFog.decrypt("g7BQoWUDcx/crQ==\n", "r5AjyAJtEnM=\n") + this.f2238 + '}';
    }
}
