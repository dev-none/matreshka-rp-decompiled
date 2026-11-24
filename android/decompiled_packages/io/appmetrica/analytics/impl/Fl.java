package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ListConverter;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class Fl implements ListConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Gl f5678a = new Gl();

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2138g6[] fromModel(List<Hl> list) {
        C2138g6[] c2138g6Arr = new C2138g6[list.size()];
        Iterator<Hl> it = list.iterator();
        int i = 0;
        while (it.hasNext()) {
            c2138g6Arr[i] = this.f5678a.fromModel(it.next());
            i++;
        }
        return c2138g6Arr;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public final List<Hl> a(C2138g6[] c2138g6Arr) {
        throw new UnsupportedOperationException();
    }
}
