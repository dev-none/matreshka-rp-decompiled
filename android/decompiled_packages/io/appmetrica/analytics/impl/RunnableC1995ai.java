package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.ModuleEvent;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ai, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class RunnableC1995ai implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ ModuleEvent f6004a;
    public final /* synthetic */ C2279li b;

    public RunnableC1995ai(C2279li c2279li, ModuleEvent moduleEvent) {
        this.b = c2279li;
        this.f6004a = moduleEvent;
    }

    @Override // java.lang.Runnable
    public final void run() {
        C2279li c2279li = this.b;
        C2279li.a(c2279li.f6193a, c2279li.d, c2279li.e).reportEvent(this.f6004a);
    }
}
