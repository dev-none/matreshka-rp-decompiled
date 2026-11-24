package io.appmetrica.analytics.impl;

import androidx.media3.datasource.cache.CacheDataSink;
import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ye, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2599ye implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ca f6415a;

    public C2599ye() {
        this(new Ca(CacheDataSink.DEFAULT_BUFFER_SIZE, 100, 1000));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(Map<String, String> map) {
        On onA = this.f6415a.a(map);
        C2418r8 c2418r8 = new C2418r8();
        c2418r8.b = ((C2489u4) onA.b).b;
        Map map2 = (Map) onA.f5825a;
        if (map2 != null) {
            c2418r8.f6290a = new C2394q8[map2.size()];
            int i = 0;
            for (Map.Entry entry : map2.entrySet()) {
                c2418r8.f6290a[i] = new C2394q8();
                c2418r8.f6290a[i].f6269a = StringUtils.getUTF8Bytes((String) entry.getKey());
                c2418r8.f6290a[i].b = StringUtils.getUTF8Bytes((String) entry.getValue());
                i++;
            }
        }
        InterfaceC2212j3 interfaceC2212j3 = onA.b;
        int i2 = ((C2489u4) interfaceC2212j3).f6123a;
        return new Ii(c2418r8, interfaceC2212j3);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2599ye(Ca ca) {
        this.f6415a = ca;
    }

    public final Map<String, String> a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
