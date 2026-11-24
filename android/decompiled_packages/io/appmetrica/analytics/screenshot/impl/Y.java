package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: loaded from: classes7.dex */
public final class Y implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2640g f6551a;
    public final c0 b;
    public final r c;

    public Y() {
        this(null, null, null, 7, null);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Q fromModel(W w) {
        Q q = new Q();
        C2638e c2638e = w.f6549a;
        q.f6546a = c2638e != null ? this.f6551a.fromModel(c2638e) : null;
        a0 a0Var = w.b;
        q.b = a0Var != null ? this.b.fromModel(a0Var) : null;
        C2649p c2649p = w.c;
        q.c = c2649p != null ? this.c.fromModel(c2649p) : null;
        return q;
    }

    public Y(C2640g c2640g, c0 c0Var, r rVar) {
        this.f6551a = c2640g;
        this.b = c0Var;
        this.c = rVar;
    }

    public /* synthetic */ Y(C2640g c2640g, c0 c0Var, r rVar, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new C2640g() : c2640g, (i & 2) != 0 ? new c0() : c0Var, (i & 4) != 0 ? new r() : rVar);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final W toModel(Q q) {
        C2638e c2638e;
        a0 a0Var;
        N n = q.f6546a;
        if (n != null) {
            this.f6551a.getClass();
            c2638e = new C2638e(n.f6543a);
        } else {
            c2638e = null;
        }
        P p = q.b;
        if (p != null) {
            this.b.getClass();
            a0Var = new a0(p.f6545a, p.b);
        } else {
            a0Var = null;
        }
        O o = q.c;
        return new W(c2638e, a0Var, o != null ? this.c.toModel(o) : null);
    }
}
