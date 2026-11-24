package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.t3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2463t3 implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2595ya f6324a;

    public C2463t3() {
        this(new C2595ya(20, 100));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(List<String> list) {
        On onA = this.f6324a.a((List<Object>) list);
        C2269l8 c2269l8 = new C2269l8();
        c2269l8.f6187a = StringUtils.getUTF8Bytes((List<String>) onA.f5825a);
        InterfaceC2212j3 interfaceC2212j3 = onA.b;
        int i = ((C2489u4) interfaceC2212j3).f6123a;
        return new Ii(c2269l8, interfaceC2212j3);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2463t3(C2595ya c2595ya) {
        this.f6324a = c2595ya;
    }

    public final List<String> a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
