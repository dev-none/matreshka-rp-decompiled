package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.Converter;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.r7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2417r7 implements Converter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2449se f6289a;

    /* JADX WARN: Multi-variable type inference failed */
    public C2417r7() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2517v7 fromModel(C2393q7 c2393q7) {
        C2517v7 c2517v7 = new C2517v7();
        Boolean bool = c2393q7.f6268a;
        if (bool != null) {
            bool.booleanValue();
            c2517v7.f6364a = this.f6289a.fromModel(bool).intValue();
        }
        Double d = c2393q7.c;
        if (d != null) {
            c2517v7.c = d.doubleValue();
        }
        Double d2 = c2393q7.b;
        if (d2 != null) {
            c2517v7.b = d2.doubleValue();
        }
        Long l = c2393q7.h;
        if (l != null) {
            c2517v7.h = l.longValue();
        }
        Integer num = c2393q7.f;
        if (num != null) {
            c2517v7.f = num.intValue();
        }
        Integer num2 = c2393q7.e;
        if (num2 != null) {
            c2517v7.e = num2.intValue();
        }
        Integer num3 = c2393q7.g;
        if (num3 != null) {
            c2517v7.g = num3.intValue();
        }
        Integer num4 = c2393q7.d;
        if (num4 != null) {
            c2517v7.d = num4.intValue();
        }
        String str = c2393q7.i;
        if (str != null) {
            c2517v7.i = str;
        }
        String str2 = c2393q7.j;
        if (str2 != null) {
            c2517v7.j = str2;
        }
        return c2517v7;
    }

    public C2417r7(C2449se c2449se) {
        this.f6289a = c2449se;
    }

    public /* synthetic */ C2417r7(C2449se c2449se, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new C2449se() : c2449se);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2393q7 toModel(C2517v7 c2517v7) {
        if (c2517v7 == null) {
            return new C2393q7(null, null, null, null, null, null, null, null, null, null);
        }
        C2517v7 c2517v8 = new C2517v7();
        Boolean boolA = this.f6289a.a(c2517v7.f6364a);
        Double dValueOf = Double.valueOf(c2517v7.c);
        if (dValueOf.doubleValue() == c2517v8.c) {
            dValueOf = null;
        }
        Double dValueOf2 = Double.valueOf(c2517v7.b);
        Double d = !(dValueOf2.doubleValue() == c2517v8.b) ? dValueOf2 : null;
        Long lValueOf = Long.valueOf(c2517v7.h);
        Long l = lValueOf.longValue() != c2517v8.h ? lValueOf : null;
        Integer numValueOf = Integer.valueOf(c2517v7.f);
        Integer num = numValueOf.intValue() != c2517v8.f ? numValueOf : null;
        Integer numValueOf2 = Integer.valueOf(c2517v7.e);
        Integer num2 = numValueOf2.intValue() != c2517v8.e ? numValueOf2 : null;
        Integer numValueOf3 = Integer.valueOf(c2517v7.g);
        Integer num3 = numValueOf3.intValue() != c2517v8.g ? numValueOf3 : null;
        Integer numValueOf4 = Integer.valueOf(c2517v7.d);
        Integer num4 = numValueOf4.intValue() != c2517v8.d ? numValueOf4 : null;
        String str = c2517v7.i;
        String str2 = !Intrinsics.areEqual(str, c2517v8.i) ? str : null;
        String str3 = c2517v7.j;
        return new C2393q7(boolA, d, dValueOf, num4, num2, num, num3, l, str2, !Intrinsics.areEqual(str3, c2517v8.j) ? str3 : null);
    }
}
