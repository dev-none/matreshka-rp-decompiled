package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ExternalAttribution;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.j1, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC2210j1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ ExternalAttribution f6143a;
    public final /* synthetic */ C2436s1 b;

    public RunnableC2210j1(C2436s1 c2436s1, ExternalAttribution externalAttribution) {
        this.b = c2436s1;
        this.f6143a = externalAttribution;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2436s1.a(this.b).a(this.f6143a);
    }
}
