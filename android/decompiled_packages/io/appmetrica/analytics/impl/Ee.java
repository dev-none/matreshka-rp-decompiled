package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: loaded from: classes7.dex */
public final class Ee implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2582xm fromModel(De de) {
        C2582xm c2582xm = new C2582xm();
        c2582xm.f6404a = de.f5641a;
        c2582xm.b = de.b;
        return c2582xm;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        C2582xm c2582xm = (C2582xm) obj;
        return new De(c2582xm.f6404a, c2582xm.b);
    }

    public final De a(C2582xm c2582xm) {
        return new De(c2582xm.f6404a, c2582xm.b);
    }
}
