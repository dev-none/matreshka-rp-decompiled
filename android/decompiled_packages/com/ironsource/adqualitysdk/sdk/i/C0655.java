package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.Looper;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᒹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0655 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final InterfaceC0489 f2276;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public boolean f2277 = false;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final Handler f2275 = new Handler(Looper.getMainLooper());

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public C0711 f2274 = new C0711(this);

    public C0655(InterfaceC0489 interfaceC0489) {
        this.f2276 = interfaceC0489;
        AbstractC1041 abstractC1041M8867 = AbstractC1041.m8867();
        C0711 c0711 = this.f2274;
        synchronized (abstractC1041M8867) {
            abstractC1041M8867.f3778.add(c0711);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8609() {
        this.f2275.removeCallbacksAndMessages(null);
        if (this.f2274 != null) {
            AbstractC1041 abstractC1041M8867 = AbstractC1041.m8867();
            C0711 c0711 = this.f2274;
            synchronized (abstractC1041M8867) {
                abstractC1041M8867.f3778.remove(c0711);
            }
            this.f2274 = null;
        }
    }
}
