package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Tn implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Hn f5912a;
    public final W b;
    public final C2342o6 c;
    public final Fl d;
    public final Me e;
    public final Ne f;

    public Tn() {
        this(new Hn(), new W(new C2633zn()), new C2342o6(), new Fl(), new Me(), new Ne());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2035c6 fromModel(Sn sn) {
        C2035c6 c2035c6 = new C2035c6();
        In in = sn.f5891a;
        if (in != null) {
            c2035c6.f6025a = this.f5912a.fromModel(in);
        }
        V v = sn.b;
        if (v != null) {
            c2035c6.b = this.b.fromModel(v);
        }
        List<Hl> list = sn.c;
        if (list != null) {
            c2035c6.e = this.d.fromModel(list);
        }
        String str = sn.g;
        if (str != null) {
            c2035c6.c = str;
        }
        c2035c6.d = this.c.a(sn.h);
        if (!TextUtils.isEmpty(sn.d)) {
            c2035c6.h = this.e.fromModel(sn.d);
        }
        if (!TextUtils.isEmpty(sn.e)) {
            c2035c6.i = sn.e.getBytes();
        }
        if (!no.a(sn.f)) {
            c2035c6.j = this.f.fromModel(sn.f);
        }
        return c2035c6;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public Tn(Hn hn, W w, C2342o6 c2342o6, Fl fl, Me me, Ne ne) {
        this.b = w;
        this.f5912a = hn;
        this.c = c2342o6;
        this.d = fl;
        this.e = me;
        this.f = ne;
    }

    public final Sn a(C2035c6 c2035c6) {
        throw new UnsupportedOperationException();
    }
}
