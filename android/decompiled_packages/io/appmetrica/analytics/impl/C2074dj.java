package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.List;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.dj, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2074dj implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2599ye f6049a;
    public final C2463t3 b;
    public final C2620za c;
    public final C2620za d;

    public C2074dj() {
        this(new C2599ye(), new C2463t3(), new C2620za(100), new C2620za(1000));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Ii fromModel(C2177hj c2177hj) {
        Ii iiFromModel;
        C2543w8 c2543w8 = new C2543w8();
        On onA = this.c.a(c2177hj.f6114a);
        c2543w8.f6382a = StringUtils.getUTF8Bytes((String) onA.f5825a);
        List<String> list = c2177hj.b;
        Ii iiA = null;
        if (list != null) {
            iiFromModel = this.b.fromModel(list);
            c2543w8.b = (C2269l8) iiFromModel.f5730a;
        } else {
            iiFromModel = null;
        }
        On onA2 = this.d.a(c2177hj.c);
        c2543w8.c = StringUtils.getUTF8Bytes((String) onA2.f5825a);
        Map<String, String> map = c2177hj.d;
        if (map != null) {
            iiA = this.f6049a.fromModel(map);
            c2543w8.d = (C2418r8) iiA.f5730a;
        }
        return new Ii(c2543w8, new C2187i3(C2187i3.b(onA, iiFromModel, onA2, iiA)));
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2074dj(C2599ye c2599ye, C2463t3 c2463t3, C2620za c2620za, C2620za c2620za2) {
        this.f6049a = c2599ye;
        this.b = c2463t3;
        this.c = c2620za;
        this.d = c2620za2;
    }

    public final C2177hj a(Ii ii) {
        throw new UnsupportedOperationException();
    }
}
