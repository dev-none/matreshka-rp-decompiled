package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import java.util.Iterator;

/* JADX INFO: loaded from: classes7.dex */
public final class W implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2633zn f5938a;

    public W(C2633zn c2633zn) {
        this.f5938a = c2633zn;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Y5 fromModel(V v) {
        Y5 y5 = new Y5();
        C2608yn c2608yn = v.f5925a;
        if (c2608yn != null) {
            y5.f5966a = this.f5938a.fromModel(c2608yn);
        }
        y5.b = new C2164h6[v.b.size()];
        Iterator it = v.b.iterator();
        int i = 0;
        while (it.hasNext()) {
            y5.b[i] = this.f5938a.fromModel((C2608yn) it.next());
            i++;
        }
        String str = v.c;
        if (str != null) {
            y5.c = str;
        }
        return y5;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public final V a(Y5 y5) {
        throw new UnsupportedOperationException();
    }
}
