package io.appmetrica.analytics.impl;

import android.location.Location;

/* JADX INFO: loaded from: classes7.dex */
public final class O0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Location f5814a;
    public final /* synthetic */ C2436s1 b;

    public O0(C2436s1 c2436s1, Location location) {
        this.b = c2436s1;
        this.f5814a = location;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2560x0 c2560x0 = this.b.f6303a;
        Location location = this.f5814a;
        c2560x0.getClass();
        C2535w0.c().a(location);
    }
}
