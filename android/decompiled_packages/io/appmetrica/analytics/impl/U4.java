package io.appmetrica.analytics.impl;

import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class U4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final E5 f5916a;
    public final Lc b;
    public final Lc c;

    public U4(S6 s6, Vg vg) {
        C2624ze c2624ze = new C2624ze(s6);
        this.f5916a = new E5(s6);
        this.b = new Lc(c2624ze, new T4(vg));
        this.c = new Lc(c2624ze, S4.f5876a);
    }

    public final List<K8> a() {
        return CollectionsKt.listOf((Object[]) new K8[]{this.f5916a, this.b});
    }

    public final List<K8> b() {
        return CollectionsKt.listOf(this.c);
    }
}
