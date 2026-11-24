package io.appmetrica.analytics.impl;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes7.dex */
public final class A3 implements W7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2613z3 f5589a;
    public final List b;

    public A3(C2613z3 c2613z3, List<C2613z3> list) {
        this.f5589a = c2613z3;
        this.b = list;
    }

    public final A3 a(C2613z3 c2613z3, List<C2613z3> list) {
        return new A3(c2613z3, list);
    }

    @Override // io.appmetrica.analytics.impl.W7
    public final Object b() {
        return this.f5589a;
    }

    public final C2613z3 c() {
        return this.f5589a;
    }

    public final List<C2613z3> d() {
        return this.b;
    }

    public final C2613z3 e() {
        return this.f5589a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof A3)) {
            return false;
        }
        A3 a3 = (A3) obj;
        return Intrinsics.areEqual(this.f5589a, a3.f5589a) && Intrinsics.areEqual(this.b, a3.b);
    }

    public final int hashCode() {
        return this.b.hashCode() + (this.f5589a.hashCode() * 31);
    }

    public final String toString() {
        return "ClidsInfo(chosen=" + this.f5589a + ", candidates=" + this.b + ')';
    }

    public static A3 a(A3 a3, C2613z3 c2613z3, List list, int i, Object obj) {
        if ((i & 1) != 0) {
            c2613z3 = a3.f5589a;
        }
        if ((i & 2) != 0) {
            list = a3.b;
        }
        a3.getClass();
        return new A3(c2613z3, list);
    }

    @Override // io.appmetrica.analytics.impl.W7
    public final List<C2613z3> a() {
        return this.b;
    }
}
