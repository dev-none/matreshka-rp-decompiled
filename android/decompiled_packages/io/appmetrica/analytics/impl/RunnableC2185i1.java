package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.AnrListener;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.i1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2185i1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ AnrListener f6121a;
    public final /* synthetic */ C2436s1 b;

    public RunnableC2185i1(C2436s1 c2436s1, AnrListener anrListener) {
        this.b = c2436s1;
        this.f6121a = anrListener;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).a(this.f6121a);
    }
}
