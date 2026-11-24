package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import kotlin.collections.ArraysKt;

/* JADX INFO: loaded from: classes7.dex */
public final class r implements Converter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final O fromModel(C2649p c2649p) {
        O o = new O();
        o.f6544a = c2649p.f6574a;
        Object[] array = c2649p.b.toArray(new String[0]);
        if (array == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
        }
        o.c = (String[]) array;
        o.b = c2649p.c;
        return o;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2649p toModel(O o) {
        return new C2649p(o.f6544a, ArraysKt.toList(o.c), o.b);
    }
}
