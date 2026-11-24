package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Nf implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2595ya f5807a;

    public Nf() {
        this(new C2595ya(20, 100));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(List<String> list) {
        On onA = this.f5807a.a((List<Object>) list);
        List list2 = (List) onA.f5825a;
        C2493u8[] c2493u8Arr = new C2493u8[0];
        if (list2 != null) {
            c2493u8Arr = new C2493u8[list2.size()];
            for (int i = 0; i < list2.size(); i++) {
                C2493u8 c2493u8 = new C2493u8();
                c2493u8Arr[i] = c2493u8;
                c2493u8.f6347a = StringUtils.getUTF8Bytes((String) list2.get(i));
            }
        }
        onA.b.getBytesTruncated();
        return new Ii(c2493u8Arr, onA.b);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public Nf(C2595ya c2595ya) {
        this.f5807a = c2595ya;
    }

    public final List<String> a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
