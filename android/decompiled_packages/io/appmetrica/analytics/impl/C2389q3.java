package io.appmetrica.analytics.impl;

import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.q3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2389q3 implements InterfaceC2166h8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2413r3 f6264a;

    public C2389q3() {
        this(new C2413r3());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<Ii> fromModel(C2364p3 c2364p3) {
        A8 a8 = new A8();
        a8.e = new C2217j8();
        Ii iiFromModel = this.f6264a.fromModel(c2364p3.b);
        a8.e.f6148a = (C2243k8) iiFromModel.f5730a;
        a8.f5593a = c2364p3.f6250a;
        return Collections.singletonList(new Ii(a8, new C2187i3(C2187i3.b(iiFromModel))));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2389q3(C2413r3 c2413r3) {
        this.f6264a = c2413r3;
    }

    public final C2364p3 a(List<Ii> list) {
        throw new UnsupportedOperationException();
    }
}
