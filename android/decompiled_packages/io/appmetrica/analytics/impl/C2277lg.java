package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.lg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2277lg implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2074dj f6191a;
    public final C2620za b;
    public final C2620za c;

    public C2277lg() {
        this(new C2074dj(), new C2620za(100), new C2620za(2048));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(Cg cg) {
        Ii iiFromModel;
        C2518v8 c2518v8 = new C2518v8();
        On onA = this.b.a(cg.f5626a);
        c2518v8.f6365a = StringUtils.getUTF8Bytes((String) onA.f5825a);
        On onA2 = this.c.a(cg.b);
        c2518v8.b = StringUtils.getUTF8Bytes((String) onA2.f5825a);
        C2177hj c2177hj = cg.c;
        if (c2177hj != null) {
            iiFromModel = this.f6191a.fromModel(c2177hj);
            c2518v8.c = (C2543w8) iiFromModel.f5730a;
        } else {
            iiFromModel = null;
        }
        return new Ii(c2518v8, new C2187i3(C2187i3.b(onA, onA2, iiFromModel)));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2277lg(C2074dj c2074dj, C2620za c2620za, C2620za c2620za2) {
        this.f6191a = c2074dj;
        this.b = c2620za;
        this.c = c2620za2;
    }

    public final Cg a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
