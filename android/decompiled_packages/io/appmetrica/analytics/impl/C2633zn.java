package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.zn, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2633zn implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Fl f6437a;

    public C2633zn() {
        this(new Fl());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2164h6 fromModel(C2608yn c2608yn) {
        C2164h6 c2164h6 = new C2164h6();
        Integer num = c2608yn.e;
        c2164h6.e = num == null ? -1 : num.intValue();
        c2164h6.d = c2608yn.d;
        c2164h6.b = c2608yn.b;
        c2164h6.f6106a = c2608yn.f6419a;
        c2164h6.c = c2608yn.c;
        Fl fl = this.f6437a;
        List list = c2608yn.f;
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(new Hl((StackTraceElement) it.next()));
        }
        c2164h6.f = fl.fromModel(arrayList);
        return c2164h6;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    public final Object toModel(Object obj) {
        throw new UnsupportedOperationException();
    }

    public C2633zn(Fl fl) {
        this.f6437a = fl;
    }

    public final C2608yn a(C2164h6 c2164h6) {
        throw new UnsupportedOperationException();
    }
}
