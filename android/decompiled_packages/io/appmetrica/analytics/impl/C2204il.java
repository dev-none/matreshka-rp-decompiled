package io.appmetrica.analytics.impl;

import java.util.Collections;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.il, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2204il implements InterfaceC2166h8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Lf f6138a;
    public final C2277lg b;

    public C2204il() {
        this(new Lf(), new C2277lg());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<Ii> fromModel(C2179hl c2179hl) {
        Ii iiFromModel;
        A8 a8 = new A8();
        a8.f5593a = 3;
        a8.d = new C2593y8();
        Ii iiFromModel2 = this.f6138a.fromModel(c2179hl.f6116a);
        a8.d.f6412a = (C2468t8) iiFromModel2.f5730a;
        Cg cg = c2179hl.b;
        if (cg != null) {
            iiFromModel = this.b.fromModel(cg);
            a8.d.b = (C2518v8) iiFromModel.f5730a;
        } else {
            iiFromModel = null;
        }
        return Collections.singletonList(new Ii(a8, new C2187i3(C2187i3.b(iiFromModel2, iiFromModel))));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2204il(Lf lf, C2277lg c2277lg) {
        this.f6138a = lf;
        this.b = c2277lg;
    }

    public final C2179hl a(List<Ii> list) {
        throw new UnsupportedOperationException();
    }
}
