package io.appmetrica.analytics.impl;

import android.os.Handler;
import android.os.SystemClock;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.vb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2521vb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Handler f6368a;
    public final Q2 b;
    public final RunnableC2546wb c;

    public C2521vb(Handler handler, Q2 q2) {
        this.f6368a = handler;
        this.b = q2;
        this.c = new RunnableC2546wb(handler, q2);
    }

    public static void a(Handler handler, Q2 q2, Runnable runnable) {
        handler.removeCallbacks(runnable, q2.b.b.getApiKey());
        handler.postAtTime(runnable, q2.b.b.getApiKey(), SystemClock.uptimeMillis() + ((long) (((Integer) WrapUtils.getOrDefault(q2.b.b.getSessionTimeout(), 10)).intValue() * 500)));
    }
}
