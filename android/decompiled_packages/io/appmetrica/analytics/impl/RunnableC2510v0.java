package io.appmetrica.analytics.impl;

import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2510v0 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2535w0 f6360a;

    public RunnableC2510v0(C2535w0 c2535w0) {
        this.f6360a = c2535w0;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2213j4.l().c.a().executeDelayed(new RunnableC2486u1(this.f6360a.f6377a), TimeUnit.SECONDS.toMillis(5L));
    }
}
