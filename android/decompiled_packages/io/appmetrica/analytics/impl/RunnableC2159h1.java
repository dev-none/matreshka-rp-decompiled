package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.StartupParamsCallback;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.h1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2159h1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Context f6103a;
    public final /* synthetic */ StartupParamsCallback b;
    public final /* synthetic */ List c;
    public final /* synthetic */ C2436s1 d;

    public RunnableC2159h1(C2436s1 c2436s1, Context context, StartupParamsCallback startupParamsCallback, List list) {
        this.d = c2436s1;
        this.f6103a = context;
        this.b = startupParamsCallback;
        this.c = list;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2560x0 c2560x0 = this.d.f6303a;
        Context applicationContext = this.f6103a.getApplicationContext();
        c2560x0.getClass();
        C2535w0 c2535w0A = C2535w0.a(applicationContext);
        c2535w0A.f().a(this.b, this.c);
    }
}
