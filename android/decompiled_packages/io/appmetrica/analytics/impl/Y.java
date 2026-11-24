package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class Y implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final D7 f5961a;
    public final C2620za b;

    public Y() {
        this(new D7(), new C2620za(20));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(Z z) {
        C2192i8 c2192i8 = new C2192i8();
        c2192i8.b = this.f5961a.fromModel(z.f5977a);
        On onA = this.b.a(z.b);
        c2192i8.f6128a = StringUtils.getUTF8Bytes((String) onA.f5825a);
        return new Ii(c2192i8, new C2187i3(C2187i3.b(onA)));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public Y(D7 d7, C2620za c2620za) {
        this.f5961a = d7;
        this.b = c2620za;
    }

    public final Z a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
