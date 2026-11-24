package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒣ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0634 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0634 f2224;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0588 f2225;

    public C0634(C0588 c0588, C0634 c0634) {
        this.f2225 = c0588;
        this.f2224 = c0634;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final ArrayList m8602() {
        ArrayList arrayList = new ArrayList(this.f2225.f2093);
        C0634 c0634 = this.f2224;
        if (c0634 != null) {
            arrayList.addAll(c0634.m8602());
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ArrayList m8604() {
        ArrayList arrayList = new ArrayList(this.f2225.f2092);
        C0634 c0634 = this.f2224;
        if (c0634 != null) {
            arrayList.addAll(c0634.m8604());
        }
        return arrayList;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0944 m8601(String str) {
        C0634 c0634;
        C0944 c0944 = (C0944) this.f2225.f2090.get(str);
        return (c0944 != null || (c0634 = this.f2224) == null) ? c0944 : c0634.m8601(str);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C1035 m8603(String str) {
        C0634 c0634;
        C1035 c1035 = (C1035) this.f2225.f2091.get(str);
        return (c1035 != null || (c0634 = this.f2224) == null) ? c1035 : c0634.m8603(str);
    }
}
