package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ud, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2498ud {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2560x0 f6350a;
    public final C2299md b;
    public final Bd c;
    public final IHandlerExecutor d;

    public C2498ud() {
        C2560x0 c2560x0D = C2213j4.l().d();
        this.f6350a = c2560x0D;
        this.b = new C2299md(c2560x0D);
        this.c = new Bd();
        this.d = C2213j4.l().g().a();
    }

    public static final Pa a(C2498ud c2498ud) {
        c2498ud.f6350a.getClass();
        C2535w0 c2535w0 = C2535w0.e;
        Intrinsics.checkNotNull(c2535w0);
        C2398qc c2398qcI = c2535w0.f().i();
        Intrinsics.checkNotNull(c2398qcI);
        return c2398qcI.f6272a;
    }
}
