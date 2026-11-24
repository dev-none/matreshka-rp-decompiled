package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: loaded from: classes7.dex */
public final class Hm implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2607ym fromModel(Gm gm) {
        C2607ym c2607ym = new C2607ym();
        c2607ym.f6418a = gm.f5696a;
        return c2607ym;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        return new Gm(((C2607ym) obj).f6418a);
    }

    public final Gm a(C2607ym c2607ym) {
        return new Gm(c2607ym.f6418a);
    }
}
