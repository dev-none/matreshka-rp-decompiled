package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: loaded from: classes7.dex */
public final class Lm implements ProtobufConverter {
    public final C2632zm a(Km km) {
        C2632zm c2632zm = new C2632zm();
        c2632zm.f6436a = km.f5764a;
        return c2632zm;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object fromModel(Object obj) {
        C2632zm c2632zm = new C2632zm();
        c2632zm.f6436a = ((Km) obj).f5764a;
        return c2632zm;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        return new Km(((C2632zm) obj).f6436a);
    }

    public final Km a(C2632zm c2632zm) {
        return new Km(c2632zm.f6436a);
    }
}
