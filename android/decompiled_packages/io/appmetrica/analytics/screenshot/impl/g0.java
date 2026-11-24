package io.appmetrica.analytics.screenshot.impl;

import android.os.Handler;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.modulesapi.internal.client.ClientContext;

/* JADX INFO: loaded from: classes7.dex */
public final class g0 implements T {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ClientContext f6562a;
    public final U b;
    public final Handler c;
    public volatile boolean d;
    public volatile C2647n e;
    public final d0 f = new d0(this);

    public g0(ClientContext clientContext, U u) {
        this.f6562a = clientContext;
        this.b = u;
        this.c = clientContext.getClientExecutorProvider().getDefaultExecutor().getHandler();
    }

    @Override // io.appmetrica.analytics.screenshot.impl.T
    public final void a(C2646m c2646m) {
        this.e = c2646m != null ? c2646m.b : null;
    }

    public final String b() {
        return "ServiceScreenshotCaptor";
    }

    @Override // io.appmetrica.analytics.screenshot.impl.T
    public final void a() {
        this.f6562a.getActivityLifecycleRegistry().registerListener(new f0(this), ActivityEvent.RESUMED, ActivityEvent.PAUSED);
    }
}
