package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.Executor;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.jd, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2222jd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Executor f6153a;
    public final InterfaceC2606yl b;
    public final String c;
    public final SystemTimeProvider d;

    public C2222jd(IHandlerExecutor iHandlerExecutor, Fd fd, String str, SystemTimeProvider systemTimeProvider) {
        this.f6153a = iHandlerExecutor;
        this.b = fd;
        this.c = str;
        this.d = systemTimeProvider;
    }

    public static final void a(C2222jd c2222jd, List list) {
        Vj vj = AbstractC2479tj.f6336a;
        C2274ld c2274ld = new C2274ld(c2222jd.b, c2222jd.c, c2222jd.d, list);
        vj.getClass();
        vj.a(new Jj(c2274ld));
    }

    public final void a(final ArrayList arrayList) {
        this.f6153a.execute(new Runnable() { // from class: io.appmetrica.analytics.impl.jd$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                C2222jd.a(this.f$0, arrayList);
            }
        });
    }
}
