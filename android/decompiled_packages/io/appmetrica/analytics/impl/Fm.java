package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;

/* JADX INFO: loaded from: classes7.dex */
public final class Fm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5679a;
    public final String b;
    public final C2077dm c;
    public final Jl d;
    public final C2283lm e;
    public final C4 f;
    public final C2205im g;
    public final S7 h;
    public final SystemTimeProvider i;
    public final H3 j;
    public final K3 k;
    public final Ml l;
    public final Cd m;
    public final ro n;

    public Fm(Context context, String str, C2077dm c2077dm, Jl jl) {
        this.f5679a = context;
        this.b = str;
        this.c = c2077dm;
        this.d = jl;
        C2283lm c2283lmB = C2495ua.k().B();
        this.e = c2283lmB;
        C2231jm c2231jmB = c2283lmB.b();
        this.f = new C4(str);
        this.g = new C2205im(context);
        this.h = new S7();
        this.i = new SystemTimeProvider();
        this.j = C2495ua.k().f();
        this.k = new K3();
        this.l = new Ml(new C2102em(context, str), c2231jmB, c2077dm);
        this.m = C2495ua.k().q();
        this.n = new ro();
    }
}
