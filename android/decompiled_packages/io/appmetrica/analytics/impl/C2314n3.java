package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2314n3 implements ProtobufConverter {
    public final C2457sm a(C2264l3 c2264l3) {
        C2457sm c2457sm = new C2457sm();
        c2457sm.f6319a = c2264l3.f6182a;
        return c2457sm;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object fromModel(Object obj) {
        C2457sm c2457sm = new C2457sm();
        c2457sm.f6319a = ((C2264l3) obj).f6182a;
        return c2457sm;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        return new C2264l3(((C2457sm) obj).f6319a);
    }

    public final C2264l3 a(C2457sm c2457sm) {
        return new C2264l3(c2457sm.f6319a);
    }
}
