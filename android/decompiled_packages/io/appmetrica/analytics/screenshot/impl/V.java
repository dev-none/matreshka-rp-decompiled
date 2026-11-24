package io.appmetrica.analytics.screenshot.impl;

import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public final class V {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f6548a;

    public V(InterfaceC2642i interfaceC2642i) {
        this.f6548a = interfaceC2642i.a();
    }

    public final void a(C2645l c2645l) {
        for (T t : this.f6548a) {
            C2646m c2646m = null;
            if (c2645l != null) {
                boolean z = c2645l.f6569a;
                Boolean.valueOf(z).getClass();
                C2645l c2645l2 = z ? c2645l : null;
                if (c2645l2 != null) {
                    c2646m = c2645l2.b;
                }
            }
            t.a(c2646m);
        }
    }
}
