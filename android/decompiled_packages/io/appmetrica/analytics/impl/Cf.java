package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import java.util.Collection;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Cf implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Y f5625a;
    public final Df b;

    public Cf() {
        this(new Y(), new Df(30));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(Ef ef) {
        int bytesTruncated;
        C2443s8 c2443s8 = new C2443s8();
        Ii iiFromModel = this.f5625a.fromModel(ef.f5659a);
        c2443s8.f6309a = (C2192i8) iiFromModel.f5730a;
        On onA = this.b.a(ef.b);
        if (no.a((Collection) onA.f5825a)) {
            bytesTruncated = 0;
        } else {
            c2443s8.b = new C2192i8[((List) onA.f5825a).size()];
            bytesTruncated = 0;
            for (int i = 0; i < ((List) onA.f5825a).size(); i++) {
                Ii iiFromModel2 = this.f5625a.fromModel((Z) ((List) onA.f5825a).get(i));
                c2443s8.b[i] = (C2192i8) iiFromModel2.f5730a;
                bytesTruncated += iiFromModel2.b.getBytesTruncated();
            }
        }
        return new Ii(c2443s8, new C2187i3(C2187i3.b(iiFromModel, onA, new C2187i3(bytesTruncated))));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public Cf(Y y, Df df) {
        this.f5625a = y;
        this.b = df;
    }

    public final Ef a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
