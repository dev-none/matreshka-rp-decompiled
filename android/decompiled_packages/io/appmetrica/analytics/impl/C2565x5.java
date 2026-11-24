package io.appmetrica.analytics.impl;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.x5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2565x5 implements Yc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6398a;

    public C2565x5(String str) {
        this.f6398a = str;
    }

    public final C2565x5 a(String str) {
        return new C2565x5(str);
    }

    public final String b() {
        return this.f6398a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof C2565x5) && Intrinsics.areEqual(this.f6398a, ((C2565x5) obj).f6398a);
    }

    public final int hashCode() {
        return this.f6398a.hashCode();
    }

    public final String toString() {
        return "ConstantModuleEntryPointProvider(className=" + this.f6398a + ')';
    }

    public static C2565x5 a(C2565x5 c2565x5, String str, int i, Object obj) {
        if ((i & 1) != 0) {
            str = c2565x5.f6398a;
        }
        c2565x5.getClass();
        return new C2565x5(str);
    }

    @Override // io.appmetrica.analytics.impl.Yc
    public final String a() {
        return this.f6398a;
    }
}
