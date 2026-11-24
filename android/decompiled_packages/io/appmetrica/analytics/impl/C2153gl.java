package io.appmetrica.analytics.impl;

import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2153gl implements InterfaceC2166h8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2074dj f6100a;
    public final Lf b;

    public C2153gl() {
        this(new C2074dj(), new Lf());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<Ii> fromModel(C2127fl c2127fl) {
        A8 a8 = new A8();
        a8.f5593a = 2;
        a8.c = new C2568x8();
        Ii iiFromModel = this.f6100a.fromModel(c2127fl.b);
        a8.c.b = (C2543w8) iiFromModel.f5730a;
        Ii iiFromModel2 = this.b.fromModel(c2127fl.f6081a);
        a8.c.f6400a = (C2468t8) iiFromModel2.f5730a;
        return Collections.singletonList(new Ii(a8, new C2187i3(C2187i3.b(iiFromModel, iiFromModel2))));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2153gl(C2074dj c2074dj, Lf lf) {
        this.f6100a = c2074dj;
        this.b = lf;
    }

    public final C2127fl a(List<Ii> list) {
        throw new UnsupportedOperationException();
    }
}
