package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Jg implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Hn f5747a;
    public final W b;
    public final C2342o6 c;
    public final Fl d;
    public final Me e;
    public final Ne f;

    public Jg() {
        this(new Hn(), new W(new C2633zn()), new C2342o6(), new Fl(), new Me(), new Ne());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2086e6 fromModel(Ig ig) {
        C2086e6 c2086e6 = new C2086e6();
        c2086e6.f = StringUtils.correctIllFormedString((String) WrapUtils.getOrDefault(ig.f5729a, c2086e6.f));
        Sn sn = ig.b;
        if (sn != null) {
            In in = sn.f5891a;
            if (in != null) {
                c2086e6.f6058a = this.f5747a.fromModel(in);
            }
            V v = sn.b;
            if (v != null) {
                c2086e6.b = this.b.fromModel(v);
            }
            List<Hl> list = sn.c;
            if (list != null) {
                c2086e6.e = this.d.fromModel(list);
            }
            c2086e6.c = (String) WrapUtils.getOrDefault(sn.g, c2086e6.c);
            c2086e6.d = this.c.a(sn.h);
            if (!TextUtils.isEmpty(sn.d)) {
                c2086e6.i = this.e.fromModel(sn.d);
            }
            if (!TextUtils.isEmpty(sn.e)) {
                c2086e6.j = sn.e.getBytes();
            }
            if (!no.a(sn.f)) {
                c2086e6.k = this.f.fromModel(sn.f);
            }
        }
        return c2086e6;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public Jg(Hn hn, W w, C2342o6 c2342o6, Fl fl, Me me, Ne ne) {
        this.f5747a = hn;
        this.b = w;
        this.c = c2342o6;
        this.d = fl;
        this.e = me;
        this.f = ne;
    }

    public final Ig a(C2086e6 c2086e6) {
        throw new UnsupportedOperationException();
    }
}
