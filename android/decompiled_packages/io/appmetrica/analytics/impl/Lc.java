package io.appmetrica.analytics.impl;

import kotlin.jvm.functions.Function0;

/* JADX INFO: loaded from: classes7.dex */
public final class Lc implements K8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ae f5773a;
    public final Function0 b;

    public Lc(Ae ae, Function0<Integer> function0) {
        this.f5773a = ae;
        this.b = function0;
    }

    @Override // io.appmetrica.analytics.impl.K8
    public final boolean b() {
        return ((C2624ze) this.f5773a).b.get() >= ((long) ((Number) this.b.invoke()).intValue());
    }
}
