package io.appmetrica.analytics.impl;

import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.gf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2147gf implements Cdo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6096a;

    public C2147gf(Cif cif) {
        boolean z;
        List<C2173hf> list = cif.b;
        if ((list instanceof Collection) && list.isEmpty()) {
            z = true;
        } else {
            Iterator<T> it = list.iterator();
            while (it.hasNext()) {
                if (((C2173hf) it.next()).c == Y7.c) {
                    z = false;
                }
            }
            z = true;
        }
        this.f6096a = z;
    }

    @Override // kotlin.jvm.functions.Function2
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final List<C2173hf> invoke(List<? extends C2173hf> list, C2525vf c2525vf) {
        C2173hf c2173hf = new C2173hf(c2525vf.f6371a, c2525vf.b, c2525vf.e);
        if (!(list instanceof Collection) || !list.isEmpty()) {
            Iterator<T> it = list.iterator();
            while (it.hasNext()) {
                if (((C2173hf) it.next()).c == c2525vf.e) {
                    if (c2173hf.c == Y7.c && this.f6096a) {
                        return CollectionsKt.plus((Collection<? extends C2173hf>) list, c2173hf);
                    }
                    return null;
                }
            }
        }
        return CollectionsKt.plus((Collection<? extends C2173hf>) list, c2173hf);
    }
}
