package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.uf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2500uf implements Converter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Integer fromModel(Y7 y7) {
        int iOrdinal = y7.ordinal();
        if (iOrdinal == 1) {
            return 1;
        }
        if (iOrdinal != 2) {
            return iOrdinal != 3 ? 0 : 2;
        }
        return 3;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Y7 toModel(Integer num) {
        int iIntValue = num.intValue();
        if (iIntValue == 1) {
            return Y7.c;
        }
        if (iIntValue == 2) {
            return Y7.e;
        }
        if (iIntValue != 3) {
            return Y7.b;
        }
        return Y7.d;
    }
}
