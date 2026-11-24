package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class U0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2436s1 f5914a;

    public U0(C2436s1 c2436s1) {
        this.f5914a = c2436s1;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.f5914a).sendEventsBuffer();
    }
}
