package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;

/* JADX INFO: loaded from: classes7.dex */
public final class Gl implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2138g6 fromModel(Hl hl) {
        C2138g6 c2138g6 = new C2138g6();
        c2138g6.f6088a = (String) WrapUtils.getOrDefault(hl.f5712a, c2138g6.f6088a);
        c2138g6.b = (String) WrapUtils.getOrDefault(hl.b, c2138g6.b);
        c2138g6.c = ((Integer) WrapUtils.getOrDefault(hl.c, Integer.valueOf(c2138g6.c))).intValue();
        c2138g6.f = ((Integer) WrapUtils.getOrDefault(hl.d, Integer.valueOf(c2138g6.f))).intValue();
        c2138g6.d = (String) WrapUtils.getOrDefault(hl.e, c2138g6.d);
        c2138g6.e = ((Boolean) WrapUtils.getOrDefault(hl.f, Boolean.valueOf(c2138g6.e))).booleanValue();
        return c2138g6;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public final Hl a(C2138g6 c2138g6) {
        throw new UnsupportedOperationException();
    }
}
