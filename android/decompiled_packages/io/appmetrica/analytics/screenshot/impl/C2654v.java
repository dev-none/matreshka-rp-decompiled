package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.v, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2654v implements T {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ClientContext f6578a;
    public final U b;
    public volatile C2644k c;
    public final Z d;

    public C2654v(ClientContext clientContext, U u) {
        this.f6578a = clientContext;
        this.b = u;
        this.d = new Z(clientContext, new C2651s(this));
    }

    @Override // io.appmetrica.analytics.screenshot.impl.T
    public final void a(C2646m c2646m) {
        this.c = c2646m != null ? c2646m.c : null;
        this.d.c = this.c;
    }

    public final String b() {
        return "ContentObserverScreenshotCaptor";
    }

    @Override // io.appmetrica.analytics.screenshot.impl.T
    public final void a() {
        this.f6578a.getActivityLifecycleRegistry().registerListener(new C2653u(this), ActivityEvent.RESUMED, ActivityEvent.PAUSED);
    }
}
