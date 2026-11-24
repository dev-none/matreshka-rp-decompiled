package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2413r3 implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Lf f6285a;
    public final D7 b;
    public final Cf c;
    public final C2277lg d;

    public C2413r3() {
        this(new Lf(), new D7(), new Cf(), new C2277lg());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(C2438s3 c2438s3) {
        Ii iiA;
        C2243k8 c2243k8 = new C2243k8();
        Ii iiA2 = this.f6285a.fromModel(c2438s3.f6304a);
        c2243k8.f6169a = (C2468t8) iiA2.f5730a;
        c2243k8.c = this.b.fromModel(c2438s3.b);
        Ii iiA3 = this.c.fromModel(c2438s3.c);
        c2243k8.d = (C2443s8) iiA3.f5730a;
        Cg cg = c2438s3.d;
        if (cg != null) {
            iiA = this.d.fromModel(cg);
            c2243k8.b = (C2518v8) iiA.f5730a;
        } else {
            iiA = null;
        }
        return new Ii(c2243k8, new C2187i3(C2187i3.b(iiA2, iiA3, iiA)));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2413r3(Lf lf, D7 d7, Cf cf, C2277lg c2277lg) {
        this.f6285a = lf;
        this.b = d7;
        this.c = cf;
        this.d = c2277lg;
    }

    public final C2438s3 a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
