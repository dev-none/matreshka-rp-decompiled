package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import java.nio.charset.Charset;
import java.util.Map;
import kotlin.text.Charsets;

/* JADX INFO: loaded from: classes7.dex */
public final class Ne implements Converter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C1983a6[] fromModel(Map<String, String> map) {
        int size = map.size();
        C1983a6[] c1983a6Arr = new C1983a6[size];
        int i = 0;
        for (int i2 = 0; i2 < size; i2++) {
            c1983a6Arr[i2] = new C1983a6();
        }
        for (Map.Entry<String, String> entry : map.entrySet()) {
            C1983a6 c1983a6 = c1983a6Arr[i];
            String key = entry.getKey();
            Charset charset = Charsets.UTF_8;
            c1983a6.f5998a = key.getBytes(charset);
            c1983a6Arr[i].b = entry.getValue().getBytes(charset);
            i++;
        }
        return c1983a6Arr;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public final Map<String, String> a(C1983a6[] c1983a6Arr) {
        throw new UnsupportedOperationException();
    }
}
