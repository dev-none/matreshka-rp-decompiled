package io.appmetrica.analytics.impl;

import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.kl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2256kl implements InterfaceC2166h8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2074dj f6177a;

    public C2256kl() {
        this(new C2074dj());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<Ii> fromModel(C2230jl c2230jl) {
        A8 a8 = new A8();
        a8.f5593a = 1;
        a8.b = new C2618z8();
        Ii iiFromModel = this.f6177a.fromModel(c2230jl.f6158a);
        a8.b.f6427a = (C2543w8) iiFromModel.f5730a;
        C2187i3 c2187i3 = new C2187i3(C2187i3.b(iiFromModel));
        iiFromModel.b.getBytesTruncated();
        return Collections.singletonList(new Ii(a8, c2187i3));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2256kl(C2074dj c2074dj) {
        this.f6177a = c2074dj;
    }

    public final C2230jl a(List<Ii> list) {
        throw new UnsupportedOperationException();
    }
}
