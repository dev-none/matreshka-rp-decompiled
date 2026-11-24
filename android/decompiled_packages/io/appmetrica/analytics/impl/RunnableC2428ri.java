package io.appmetrica.analytics.impl;

import android.content.Context;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ri, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2428ri implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Context f6297a;
    public final /* synthetic */ C2478ti b;

    public RunnableC2428ri(C2478ti c2478ti, Context context) {
        this.b = c2478ti;
        this.f6297a = context;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2560x0 c2560x0 = this.b.b;
        Context context = this.f6297a;
        c2560x0.getClass();
        C2535w0.a(context);
    }
}
