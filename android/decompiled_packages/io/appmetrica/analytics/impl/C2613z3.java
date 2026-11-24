package io.appmetrica.analytics.impl;

import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.z3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2613z3 implements Z7 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map f6424a;
    public final Y7 b;

    public C2613z3(Map<String, String> map, Y7 y7) {
        this.f6424a = map;
        this.b = y7;
    }

    public final C2613z3 a(Map<String, String> map, Y7 y7) {
        return new C2613z3(map, y7);
    }

    public final Map<String, String> b() {
        return this.f6424a;
    }

    public final Y7 c() {
        return this.b;
    }

    public final Map<String, String> d() {
        return this.f6424a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C2613z3)) {
            return false;
        }
        C2613z3 c2613z3 = (C2613z3) obj;
        return Intrinsics.areEqual(this.f6424a, c2613z3.f6424a) && this.b == c2613z3.b;
    }

    public final int hashCode() {
        Map map = this.f6424a;
        return this.b.hashCode() + ((map == null ? 0 : map.hashCode()) * 31);
    }

    public final String toString() {
        return "Candidate(clids=" + this.f6424a + ", source=" + this.b + ')';
    }

    public static C2613z3 a(C2613z3 c2613z3, Map map, Y7 y7, int i, Object obj) {
        if ((i & 1) != 0) {
            map = c2613z3.f6424a;
        }
        if ((i & 2) != 0) {
            y7 = c2613z3.b;
        }
        c2613z3.getClass();
        return new C2613z3(map, y7);
    }

    @Override // io.appmetrica.analytics.impl.Z7
    public final Y7 a() {
        return this.b;
    }
}
