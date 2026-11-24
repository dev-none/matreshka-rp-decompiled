package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.Looper;
import java.util.HashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｯ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1139 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static C1139 f3985;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public C0236 f3986;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public ChoreographerFrameCallbackC1154 f3987;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public boolean f3990;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final HashMap f3989 = new HashMap();

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final Handler f3988 = new Handler(Looper.getMainLooper());

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static synchronized C1139 m8925() {
        if (f3985 == null) {
            f3985 = new C1139();
        }
        return f3985;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8926(C1139 c1139) {
        if (c1139.f3990 || new HashMap(c1139.f3989).isEmpty()) {
            return;
        }
        c1139.f3990 = true;
        AbstractC1766n.m8385(new C1151(c1139));
    }
}
