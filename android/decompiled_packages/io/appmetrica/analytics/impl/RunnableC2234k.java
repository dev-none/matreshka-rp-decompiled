package io.appmetrica.analytics.impl;

import android.app.Activity;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2234k implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Activity f6162a;
    public final /* synthetic */ C2285m b;

    public RunnableC2234k(C2285m c2285m, Activity activity) {
        this.b = c2285m;
        this.f6162a = activity;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.a(this.f6162a);
    }
}
