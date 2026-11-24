package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴊ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0773 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final ArrayList f2627;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f2628;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Class f2629;

    public C0773(Object obj, String str, ArrayList arrayList) {
        if (obj instanceof Class) {
            this.f2629 = (Class) obj;
        } else {
            this.f2629 = obj.getClass();
        }
        this.f2628 = str;
        this.f2627 = arrayList;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || C0773.class != obj.getClass()) {
            return false;
        }
        C0773 c0773 = (C0773) obj;
        if (this.f2629.equals(c0773.f2629) && this.f2628.equals(c0773.f2628)) {
            return this.f2627.equals(c0773.f2627);
        }
        return false;
    }

    public final int hashCode() {
        return this.f2627.hashCode() + ((this.f2628.hashCode() + (this.f2629.hashCode() * 31)) * 31);
    }

    public final String toString() {
        return StringFog.decrypt("/MweBo5IRhzXwAQHlUVtF8o=\n", "salqbuEsAnk=\n") + StringFog.decrypt("l27lhmW+8XiWQPSfPQ==\n", "+iGH7ADdhTs=\n") + this.f2629 + StringFog.decrypt("mFu2kK30nK3QNbqwrb3T\n", "tHvb3ciA9MI=\n") + this.f2628 + '\'' + StringFog.decrypt("e0UxQts3nkc2Fi9m2m0=\n", "V2VcA6lQ3Ss=\n") + this.f2627 + '}';
    }
}
