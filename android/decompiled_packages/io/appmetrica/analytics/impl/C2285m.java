package io.appmetrica.analytics.impl;

import android.app.Activity;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener;
import java.util.HashSet;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.m, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2285m implements ActivityLifecycleListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashSet f6198a = new HashSet();

    public C2285m(C2335o c2335o) {
        c2335o.registerListener(this, new ActivityEvent[0]);
    }

    public final synchronized void a(InterfaceC2260l interfaceC2260l) {
        this.f6198a.add(interfaceC2260l);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener
    public final void onEvent(Activity activity, ActivityEvent activityEvent) {
        C2213j4.l().c.a().execute(new RunnableC2234k(this, activity));
    }

    public final void a(Activity activity) {
        HashSet hashSet;
        synchronized (this) {
            hashSet = new HashSet(this.f6198a);
        }
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            ((C2151gj) ((InterfaceC2260l) it.next())).a(activity);
        }
    }
}
