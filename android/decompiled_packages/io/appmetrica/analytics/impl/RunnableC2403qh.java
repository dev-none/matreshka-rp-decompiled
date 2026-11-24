package io.appmetrica.analytics.impl;

import android.content.Context;
import android.os.Bundle;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2403qh implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6276a;
    public final W5 b;
    public final Bundle c;
    public final C2188i4 d;

    public RunnableC2403qh(Context context, W5 w5, Bundle bundle, C2188i4 c2188i4) {
        this.f6276a = context;
        this.b = w5;
        this.c = bundle;
        this.d = c2188i4;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            P3 p3A = P3.a(this.f6276a, this.c);
            if (p3A == null) {
                return;
            }
            X3 x3A = X3.a(p3A);
            C2228jj c2228jjV = C2495ua.H.v();
            c2228jjV.a(p3A.b.getAppVersion(), p3A.b.getAppBuildNumber());
            c2228jjV.a(p3A.b.getDeviceType());
            C2539w4 c2539w4 = new C2539w4(new C2077dm(p3A), new C2514v4(p3A.b, AbstractC2322nb.c(p3A.f5829a.f5692a.getAsString("PROCESS_CFG_CLIDS"))), p3A.f5829a.b);
            this.d.a(x3A, c2539w4).a(this.b, c2539w4);
        } catch (Throwable th) {
            Vj vj = AbstractC2479tj.f6336a;
            String str = "Exception during processing event with type: " + this.b.d + " (" + this.b.e + "): " + th.getMessage();
            vj.getClass();
            vj.a(new C2504uj(str, th));
        }
    }
}
