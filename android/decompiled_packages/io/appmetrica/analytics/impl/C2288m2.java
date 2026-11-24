package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.m2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2288m2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2323nc f6201a;
    public final ICommonExecutor b;
    public final long c;
    public boolean d = true;
    public final Runnable e = new Runnable() { // from class: io.appmetrica.analytics.impl.m2$$ExternalSyntheticLambda0
        @Override // java.lang.Runnable
        public final void run() {
            C2288m2.a(this.f$0);
        }
    };

    public C2288m2(C2323nc c2323nc, IHandlerExecutor iHandlerExecutor, long j) {
        this.f6201a = c2323nc;
        this.b = iHandlerExecutor;
        this.c = j;
    }

    public static final void a(C2288m2 c2288m2) {
        C2348oc c2348oc = c2288m2.f6201a.f6224a;
        Bi bi = c2348oc.h;
        bi.c.a(c2348oc.b.f5829a);
    }
}
