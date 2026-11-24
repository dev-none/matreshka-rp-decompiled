package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᔄ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0697 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static C0697 f2416;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ArrayList f2419 = new ArrayList();

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final ArrayList f2418 = new ArrayList();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0734 f2417 = new C0734(this);

    static {
        StringFog.decrypt("diO9yiE6RltSPrbAKz9ZV1M8us0r\n", "IUrTrk5NCjI=\n");
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static synchronized C0697 m8619() {
        if (f2416 == null) {
            f2416 = new C0697();
        }
        return f2416;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final void m8620(k1 k1Var) {
        synchronized (this) {
            this.f2418.remove(k1Var);
            if (this.f2418.size() == 0) {
                C1139 c1139M8925 = C1139.m8925();
                C0734 c0734 = this.f2417;
                c1139M8925.getClass();
                AbstractC1766n.m8385(new C1167(c1139M8925, c0734));
            }
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8621(k1 k1Var) {
        synchronized (this) {
            this.f2418.add(k1Var);
        }
        C1139 c1139M8925 = C1139.m8925();
        C0734 c0734 = this.f2417;
        c1139M8925.getClass();
        AbstractC1766n.m8385(new C0177(c1139M8925, c0734));
        AbstractC1766n.m8385(new C0707(this, k1Var));
    }
}
