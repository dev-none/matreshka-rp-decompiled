package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.g, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2640g implements Converter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final N fromModel(C2638e c2638e) {
        N n = new N();
        n.f6543a = c2638e.f6559a;
        return n;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        return new C2638e(((N) obj).f6543a);
    }

    public final C2638e a(N n) {
        return new C2638e(n.f6543a);
    }
}
