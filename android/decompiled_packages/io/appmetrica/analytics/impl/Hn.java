package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Hn implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Fl f5713a;

    public Hn() {
        this(new Fl());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2190i6 fromModel(In in) {
        C2190i6 c2190i6 = new C2190i6();
        c2190i6.f6126a = (String) WrapUtils.getOrDefault(in.f5734a, "");
        c2190i6.b = StringUtils.correctIllFormedString((String) WrapUtils.getOrDefault(in.b, ""));
        List<Hl> list = in.c;
        if (list != null) {
            c2190i6.c = this.f5713a.fromModel(list);
        }
        In in2 = in.d;
        if (in2 != null) {
            c2190i6.d = fromModel(in2);
        }
        List list2 = in.e;
        int i = 0;
        if (list2 == null) {
            c2190i6.e = new C2190i6[0];
            return c2190i6;
        }
        c2190i6.e = new C2190i6[list2.size()];
        Iterator it = list2.iterator();
        while (it.hasNext()) {
            c2190i6.e[i] = fromModel((In) it.next());
            i++;
        }
        return c2190i6;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public Hn(Fl fl) {
        this.f5713a = fl;
    }

    public final In a(C2190i6 c2190i6) {
        throw new UnsupportedOperationException();
    }
}
