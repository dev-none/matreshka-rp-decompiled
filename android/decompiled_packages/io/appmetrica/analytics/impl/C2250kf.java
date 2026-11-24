package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.kf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2250kf implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2550wf f6173a;
    public final C2121ff b;

    public C2250kf() {
        this(new C2550wf(), new C2121ff());
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2450sf fromModel(Cif cif) {
        C2450sf c2450sf = new C2450sf();
        c2450sf.f6313a = this.f6173a.fromModel(cif.f6135a);
        c2450sf.b = new C2425rf[cif.b.size()];
        Iterator<C2173hf> it = cif.b.iterator();
        int i = 0;
        while (it.hasNext()) {
            c2450sf.b[i] = this.b.fromModel(it.next());
            i++;
        }
        return c2450sf;
    }

    public C2250kf(C2550wf c2550wf, C2121ff c2121ff) {
        this.f6173a = c2550wf;
        this.b = c2121ff;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final Cif toModel(C2450sf c2450sf) {
        C2525vf model;
        ArrayList arrayList = new ArrayList(c2450sf.b.length);
        for (C2425rf c2425rf : c2450sf.b) {
            arrayList.add(this.b.toModel(c2425rf));
        }
        C2401qf c2401qf = c2450sf.f6313a;
        if (c2401qf == null) {
            model = this.f6173a.toModel(new C2401qf());
        } else {
            model = this.f6173a.toModel(c2401qf);
        }
        return new Cif(model, arrayList);
    }
}
