package io.appmetrica.analytics.impl;

import java.util.Iterator;
import java.util.List;
import kotlin.Pair;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.n5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2316n5 implements Do {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f6219a;

    public C2316n5(List<? extends Pair<String, ? extends Do>> list) {
        this.f6219a = list;
    }

    @Override // io.appmetrica.analytics.impl.Do
    public final String a() {
        Iterator it = this.f6219a.iterator();
        while (it.hasNext()) {
            String strA = ((Do) ((Pair) it.next()).getSecond()).a();
            if (strA != null && strA.length() > 0) {
                return strA;
            }
        }
        return null;
    }

    @Override // io.appmetrica.analytics.impl.Do
    public final void a(String str) {
        Iterator it = this.f6219a.iterator();
        while (it.hasNext()) {
            ((Do) ((Pair) it.next()).getSecond()).a(str);
        }
    }
}
