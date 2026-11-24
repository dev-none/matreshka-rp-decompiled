package io.appmetrica.analytics.impl;

import android.app.Activity;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2024bl {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2335o f6019a;
    public final C2465t5 b;
    public final ActivityLifecycleListener c;
    public final ActivityLifecycleListener d;
    public final C2385q e;
    public final C2285m f;
    public boolean g;

    public C2024bl(C2335o c2335o, C2285m c2285m) {
        this(c2335o, c2285m, new C2465t5(), new C2385q());
    }

    public final void a(final Activity activity, ActivityEvent activityEvent) {
        synchronized (this) {
            if (this.g) {
                C2465t5 c2465t5 = this.b;
                InterfaceC2172he interfaceC2172he = new InterfaceC2172he() { // from class: io.appmetrica.analytics.impl.bl$$ExternalSyntheticLambda0
                    @Override // io.appmetrica.analytics.impl.InterfaceC2172he
                    public final void consume(Object obj) {
                        this.f$0.a(activity, (C2348oc) obj);
                    }
                };
                c2465t5.getClass();
                C2213j4.l().c.a().execute(new RunnableC2440s5(c2465t5, interfaceC2172he));
            }
        }
    }

    public final void b(final Activity activity, ActivityEvent activityEvent) {
        synchronized (this) {
            if (this.g) {
                C2465t5 c2465t5 = this.b;
                InterfaceC2172he interfaceC2172he = new InterfaceC2172he() { // from class: io.appmetrica.analytics.impl.bl$$ExternalSyntheticLambda1
                    @Override // io.appmetrica.analytics.impl.InterfaceC2172he
                    public final void consume(Object obj) {
                        this.f$0.b(activity, (C2348oc) obj);
                    }
                };
                c2465t5.getClass();
                C2213j4.l().c.a().execute(new RunnableC2440s5(c2465t5, interfaceC2172he));
            }
        }
    }

    public C2024bl(C2335o c2335o, C2285m c2285m, C2465t5 c2465t5, C2385q c2385q) {
        this.g = false;
        this.f6019a = c2335o;
        this.f = c2285m;
        this.b = c2465t5;
        this.e = c2385q;
        this.c = new ActivityLifecycleListener() { // from class: io.appmetrica.analytics.impl.bl$$ExternalSyntheticLambda2
            @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener
            public final void onEvent(Activity activity, ActivityEvent activityEvent) {
                this.f$0.a(activity, activityEvent);
            }
        };
        this.d = new ActivityLifecycleListener() { // from class: io.appmetrica.analytics.impl.bl$$ExternalSyntheticLambda3
            @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener
            public final void onEvent(Activity activity, ActivityEvent activityEvent) {
                this.f$0.b(activity, activityEvent);
            }
        };
    }

    public final void b(Activity activity, C2348oc c2348oc) {
        if (this.e.a(activity, EnumC2360p.PAUSED)) {
            c2348oc.b(activity);
        }
    }

    public final synchronized EnumC2310n a() {
        if (!this.g) {
            this.f6019a.registerListener(this.c, ActivityEvent.RESUMED);
            this.f6019a.registerListener(this.d, ActivityEvent.PAUSED);
            this.g = true;
        }
        return this.f6019a.b;
    }

    public final void a(Activity activity, C2348oc c2348oc) {
        if (this.e.a(activity, EnumC2360p.RESUMED)) {
            c2348oc.a(activity);
        }
    }
}
