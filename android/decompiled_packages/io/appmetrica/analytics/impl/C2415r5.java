package io.appmetrica.analytics.impl;

import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2415r5 implements InterfaceC2569x9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C9 f6287a;
    public final List b;
    public final List c;
    public final AtomicBoolean d;

    public C2415r5(C9 c9, List<? extends K8> list, List<? extends K8> list2, X4 x4) {
        this.f6287a = c9;
        this.b = list;
        this.c = list2;
        Objects.toString(x4);
        this.d = new AtomicBoolean(true);
    }

    public final boolean a() {
        List list = this.c;
        if (!list.isEmpty() && !list.isEmpty()) {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                if (!((K8) it.next()).b()) {
                    return false;
                }
            }
        }
        List list2 = this.b;
        if (list2.isEmpty() || list2.isEmpty()) {
            return false;
        }
        Iterator it2 = list2.iterator();
        while (it2.hasNext()) {
            if (((K8) it2.next()).b()) {
                return true;
            }
        }
        return false;
    }

    public final void b() {
        this.d.set(false);
    }

    public final void c() {
        this.d.set(true);
    }

    public final void d() {
        if (this.d.get()) {
            List list = this.c;
            if (!list.isEmpty() && !list.isEmpty()) {
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    if (!((K8) it.next()).b()) {
                        return;
                    }
                }
            }
            ((C2359on) this.f6287a).c();
        }
    }

    public final void e() {
        if (this.d.get() && a()) {
            ((C2359on) this.f6287a).c();
        }
    }

    public final void f() {
        if (this.d.get() && a()) {
            ((C2359on) this.f6287a).b();
        }
    }
}
