package io.appmetrica.analytics.impl;

import android.app.Activity;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.f1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2107f1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Activity f6069a;
    public final /* synthetic */ C2436s1 b;

    public RunnableC2107f1(C2436s1 c2436s1, Activity activity) {
        this.b = c2436s1;
        this.f6069a = activity;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1 c2436s1 = this.b;
        C2024bl c2024bl = c2436s1.h;
        Activity activity = this.f6069a;
        Pa pa = c2436s1.d().f6272a;
        if (activity != null) {
            c2024bl.f.a(activity);
        }
        if (c2024bl.e.a(activity, EnumC2360p.RESUMED)) {
            pa.a(activity);
        }
    }
}
