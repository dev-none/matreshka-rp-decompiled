package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class Lf implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2599ye f5776a;
    public final Cf b;
    public final C2463t3 c;
    public final Nf d;
    public final C2620za e;
    public final C2620za f;

    public Lf() {
        this(new C2599ye(), new Cf(), new C2463t3(), new Nf(), new C2620za(100), new C2620za(1000));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(Mf mf) {
        Ii iiFromModel;
        Ii iiFromModel2;
        Ii iiA;
        Ii iiA2;
        C2468t8 c2468t8 = new C2468t8();
        On onA = this.e.a(mf.f5792a);
        c2468t8.f6329a = StringUtils.getUTF8Bytes((String) onA.f5825a);
        On onA2 = this.f.a(mf.b);
        c2468t8.b = StringUtils.getUTF8Bytes((String) onA2.f5825a);
        List<String> list = mf.c;
        Ii iiFromModel3 = null;
        if (list != null) {
            iiFromModel = this.c.fromModel(list);
            c2468t8.c = (C2269l8) iiFromModel.f5730a;
        } else {
            iiFromModel = null;
        }
        Map<String, String> map = mf.d;
        if (map != null) {
            iiFromModel2 = this.f5776a.fromModel(map);
            c2468t8.d = (C2418r8) iiFromModel2.f5730a;
        } else {
            iiFromModel2 = null;
        }
        Ef ef = mf.e;
        if (ef != null) {
            iiA = this.b.fromModel(ef);
            c2468t8.e = (C2443s8) iiA.f5730a;
        } else {
            iiA = null;
        }
        Ef ef2 = mf.f;
        if (ef2 != null) {
            iiA2 = this.b.fromModel(ef2);
            c2468t8.f = (C2443s8) iiA2.f5730a;
        } else {
            iiA2 = null;
        }
        List<String> list2 = mf.g;
        if (list2 != null) {
            iiFromModel3 = this.d.fromModel(list2);
            c2468t8.g = (C2493u8[]) iiFromModel3.f5730a;
        }
        return new Ii(c2468t8, new C2187i3(C2187i3.b(onA, onA2, iiFromModel, iiFromModel2, iiA, iiA2, iiFromModel3)));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public Lf(C2599ye c2599ye, Cf cf, C2463t3 c2463t3, Nf nf, C2620za c2620za, C2620za c2620za2) {
        this.f5776a = c2599ye;
        this.b = cf;
        this.c = c2463t3;
        this.d = nf;
        this.e = c2620za;
        this.f = c2620za2;
    }

    public final Mf a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
