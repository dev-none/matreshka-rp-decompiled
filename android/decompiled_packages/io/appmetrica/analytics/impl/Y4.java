package io.appmetrica.analytics.impl;

import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes7.dex */
public final class Y4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final CopyOnWriteArrayList f5965a = new CopyOnWriteArrayList();

    public final void a(InterfaceC2290m4 interfaceC2290m4) {
        this.f5965a.add(interfaceC2290m4);
    }

    public final void b(InterfaceC2290m4 interfaceC2290m4) {
        this.f5965a.remove(interfaceC2290m4);
    }

    public final List<InterfaceC2290m4> a() {
        return this.f5965a;
    }
}
