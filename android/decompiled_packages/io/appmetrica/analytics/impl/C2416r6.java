package io.appmetrica.analytics.impl;

import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2416r6 implements Ma {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final CopyOnWriteArrayList f6288a = new CopyOnWriteArrayList();

    @Override // io.appmetrica.analytics.impl.Ma
    public final void a(Throwable th, V v) {
        Iterator it = this.f6288a.iterator();
        while (it.hasNext()) {
            ((Ma) it.next()).a(th, v);
        }
    }

    public final void a(Ma... maArr) {
        CollectionsKt.addAll(this.f6288a, maArr);
    }

    public final void a(List<? extends Ma> list) {
        this.f6288a.addAll(list);
    }

    public final void a() {
        this.f6288a.clear();
    }
}
