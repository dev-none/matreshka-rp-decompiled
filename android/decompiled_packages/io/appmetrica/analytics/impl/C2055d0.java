package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.d0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2055d0 implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final W f6036a;
    public final C2342o6 b;

    public C2055d0() {
        this(new W(new C2633zn()), new C2342o6());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Z5 fromModel(C2029c0 c2029c0) {
        Z5 z5 = new Z5();
        z5.f5981a = this.f6036a.fromModel(c2029c0.f6021a);
        String str = c2029c0.b;
        if (str != null) {
            z5.b = str;
        }
        z5.c = this.b.a(c2029c0.c);
        return z5;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2055d0(W w, C2342o6 c2342o6) {
        this.f6036a = w;
        this.b = c2342o6;
    }

    public final C2029c0 a(Z5 z5) {
        throw new UnsupportedOperationException();
    }
}
