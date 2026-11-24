package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.w9, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2544w9 implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2494u9 fromModel(C2519v9 c2519v9) {
        C2494u9 c2494u9 = new C2494u9();
        String str = c2519v9.f6366a;
        if (str != null) {
            c2494u9.f6348a = str.getBytes();
        }
        return c2494u9;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2519v9 toModel(C2494u9 c2494u9) {
        return new C2519v9(new String(c2494u9.f6348a));
    }
}
