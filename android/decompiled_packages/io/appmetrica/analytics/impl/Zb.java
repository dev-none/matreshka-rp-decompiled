package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.control.Toggle;
import io.appmetrica.analytics.coreapi.internal.control.ToggleObserver;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.locationapi.internal.LocationControllerObserver;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class Zb implements Wb, ToggleObserver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5983a = new ArrayList();
    public final IHandlerExecutor b = C2495ua.k().x().c();
    public Mn c;
    public boolean d;

    public final void a(Toggle toggle) {
        Mn mn = new Mn(toggle);
        this.c = mn;
        mn.c.registerObserver(this, true);
    }

    public final void b(Object obj) {
        Mn mn = this.c;
        if (mn == null) {
            Intrinsics.throwUninitializedPropertyAccessException("togglesHolder");
            mn = null;
        }
        mn.b.b(obj);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.control.ToggleObserver
    public final void onStateChanged(final boolean z) {
        this.b.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.Zb$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                Zb.a(this.f$0, z);
            }
        });
    }

    public final void a(final LocationControllerObserver locationControllerObserver, final boolean z) {
        this.b.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.Zb$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                Zb.a(this.f$0, locationControllerObserver, z);
            }
        });
    }

    public static final void a(Zb zb, LocationControllerObserver locationControllerObserver, boolean z) {
        zb.f5983a.add(locationControllerObserver);
        if (z) {
            if (zb.d) {
                locationControllerObserver.startLocationTracking();
            } else {
                locationControllerObserver.stopLocationTracking();
            }
        }
    }

    public static final void a(Zb zb, boolean z) {
        if (zb.d != z) {
            zb.d = z;
            Function1 function1 = z ? Xb.f5954a : Yb.f5970a;
            Iterator it = zb.f5983a.iterator();
            while (it.hasNext()) {
                function1.invoke((LocationControllerObserver) it.next());
            }
        }
    }

    public final void a(Object obj) {
        Mn mn = this.c;
        if (mn == null) {
            Intrinsics.throwUninitializedPropertyAccessException("togglesHolder");
            mn = null;
        }
        mn.b.a(obj);
    }

    public final void a(boolean z) {
        Mn mn = this.c;
        if (mn == null) {
            Intrinsics.throwUninitializedPropertyAccessException("togglesHolder");
            mn = null;
        }
        mn.f5797a.a(z);
    }
}
