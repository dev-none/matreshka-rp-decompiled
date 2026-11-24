package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class C6 implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Jg f5622a;

    public C6() {
        this(new Jg());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2086e6 fromModel(B6 b6) {
        C2086e6 c2086e6FromModel = this.f5622a.fromModel(b6.f5608a);
        c2086e6FromModel.g = 1;
        C2061d6 c2061d6 = new C2061d6();
        c2086e6FromModel.h = c2061d6;
        c2061d6.f6042a = StringUtils.correctIllFormedString(b6.b);
        return c2086e6FromModel;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C6(Jg jg) {
        this.f5622a = jg;
    }

    public final B6 a(C2086e6 c2086e6) {
        throw new UnsupportedOperationException();
    }
}
