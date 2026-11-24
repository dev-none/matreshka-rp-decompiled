package io.appmetrica.analytics.impl;

import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.if, reason: invalid class name */
/* JADX INFO: loaded from: classes7.dex */
public final class Cif implements W7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2525vf f6135a;
    public final List<C2173hf> b;

    public Cif(C2525vf c2525vf, List<C2173hf> list) {
        this.f6135a = c2525vf;
        this.b = list;
    }

    @Override // io.appmetrica.analytics.impl.W7
    public final List<C2173hf> a() {
        return this.b;
    }

    @Override // io.appmetrica.analytics.impl.W7
    public final Object b() {
        return this.f6135a;
    }

    public final C2525vf c() {
        return this.f6135a;
    }

    public final String toString() {
        return "PreloadInfoData{chosenPreloadInfo=" + this.f6135a + ", candidates=" + this.b + '}';
    }
}
