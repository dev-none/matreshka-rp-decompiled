package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: loaded from: classes7.dex */
public final class J9 implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2507um fromModel(I9 i9) {
        C2507um c2507um = new C2507um();
        if (i9 != null) {
            c2507um.f6357a = i9.f5724a;
        }
        return c2507um;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        return new I9(((C2507um) obj).f6357a);
    }

    public final I9 a(C2507um c2507um) {
        return new I9(c2507um.f6357a);
    }
}
