package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.Arrays;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.j7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2216j7 implements ProtobufConverter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2449se f6147a;
    public final C2417r7 b;

    /* JADX WARN: Multi-variable type inference failed */
    public C2216j7() {
        this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2492u7 fromModel(C2268l7 c2268l7) {
        C2492u7 c2492u7 = new C2492u7();
        Integer num = c2268l7.f6186a;
        if (num != null) {
            c2492u7.f6346a = num.intValue();
        }
        String str = c2268l7.b;
        if (str != null) {
            c2492u7.b = StringUtils.correctIllFormedString(str);
        }
        String str2 = c2268l7.c;
        if (str2 != null) {
            c2492u7.c = StringUtils.correctIllFormedString(str2);
        }
        Long l = c2268l7.d;
        if (l != null) {
            c2492u7.d = l.longValue();
        }
        C2393q7 c2393q7 = c2268l7.e;
        if (c2393q7 != null) {
            c2492u7.e = this.b.fromModel(c2393q7);
        }
        String str3 = c2268l7.f;
        if (str3 != null) {
            c2492u7.f = str3;
        }
        String str4 = c2268l7.g;
        if (str4 != null) {
            c2492u7.g = str4;
        }
        Long l2 = c2268l7.h;
        if (l2 != null) {
            c2492u7.h = l2.longValue();
        }
        Integer num2 = c2268l7.i;
        if (num2 != null) {
            c2492u7.i = num2.intValue();
        }
        Integer num3 = c2268l7.j;
        if (num3 != null) {
            c2492u7.j = num3.intValue();
        }
        String str5 = c2268l7.k;
        if (str5 != null) {
            c2492u7.k = str5;
        }
        N8 n8 = c2268l7.l;
        if (n8 != null) {
            c2492u7.l = n8.f5803a;
        }
        String str6 = c2268l7.m;
        if (str6 != null) {
            c2492u7.m = str6;
        }
        EnumC2245ka enumC2245ka = c2268l7.n;
        if (enumC2245ka != null) {
            c2492u7.n = enumC2245ka.f6171a;
        }
        EnumC2469t9 enumC2469t9 = c2268l7.o;
        if (enumC2469t9 != null) {
            c2492u7.o = enumC2469t9.f6330a;
        }
        Boolean bool = c2268l7.p;
        if (bool != null) {
            bool.booleanValue();
            c2492u7.p = this.f6147a.fromModel(bool).intValue();
        }
        Integer num4 = c2268l7.q;
        if (num4 != null) {
            c2492u7.q = num4.intValue();
        }
        byte[] bArr = c2268l7.r;
        if (bArr != null) {
            c2492u7.r = bArr;
        }
        return c2492u7;
    }

    public C2216j7(C2449se c2449se, C2417r7 c2417r7) {
        this.f6147a = c2449se;
        this.b = c2417r7;
    }

    public /* synthetic */ C2216j7(C2449se c2449se, C2417r7 c2417r7, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new C2449se() : c2449se, (i & 2) != 0 ? new C2417r7(null, 1, null) : c2417r7);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final C2268l7 toModel(C2492u7 c2492u7) {
        Long l;
        EnumC2469t9 enumC2469t9;
        C2492u7 c2492u8 = new C2492u7();
        Integer numValueOf = Integer.valueOf(c2492u7.f6346a);
        Integer num = numValueOf.intValue() != c2492u8.f6346a ? numValueOf : null;
        String str = c2492u7.b;
        String str2 = !Intrinsics.areEqual(str, c2492u8.b) ? str : null;
        String str3 = c2492u7.c;
        String str4 = !Intrinsics.areEqual(str3, c2492u8.c) ? str3 : null;
        Long lValueOf = Long.valueOf(c2492u7.d);
        Long l2 = lValueOf.longValue() != c2492u8.d ? lValueOf : null;
        C2393q7 model = this.b.toModel(c2492u7.e);
        String str5 = c2492u7.f;
        String str6 = !Intrinsics.areEqual(str5, c2492u8.f) ? str5 : null;
        String str7 = c2492u7.g;
        String str8 = !Intrinsics.areEqual(str7, c2492u8.g) ? str7 : null;
        Long lValueOf2 = Long.valueOf(c2492u7.h);
        if (lValueOf2.longValue() == c2492u8.h) {
            lValueOf2 = null;
        }
        Integer numValueOf2 = Integer.valueOf(c2492u7.i);
        Integer num2 = numValueOf2.intValue() != c2492u8.i ? numValueOf2 : null;
        Integer numValueOf3 = Integer.valueOf(c2492u7.j);
        Integer num3 = numValueOf3.intValue() != c2492u8.j ? numValueOf3 : null;
        String str9 = c2492u7.k;
        String str10 = !Intrinsics.areEqual(str9, c2492u8.k) ? str9 : null;
        Integer numValueOf4 = Integer.valueOf(c2492u7.l);
        if (numValueOf4.intValue() == c2492u8.l) {
            numValueOf4 = null;
        }
        N8 n8A = numValueOf4 != null ? N8.a(Integer.valueOf(numValueOf4.intValue())) : null;
        String str11 = c2492u7.m;
        String str12 = !Intrinsics.areEqual(str11, c2492u8.m) ? str11 : null;
        Integer numValueOf5 = Integer.valueOf(c2492u7.n);
        if (numValueOf5.intValue() == c2492u8.n) {
            numValueOf5 = null;
        }
        EnumC2245ka enumC2245kaA = numValueOf5 != null ? EnumC2245ka.a(Integer.valueOf(numValueOf5.intValue())) : null;
        Integer numValueOf6 = Integer.valueOf(c2492u7.o);
        if (numValueOf6.intValue() == c2492u8.o) {
            numValueOf6 = null;
        }
        if (numValueOf6 != null) {
            int iIntValue = numValueOf6.intValue();
            EnumC2469t9[] enumC2469t9ArrValues = EnumC2469t9.values();
            int length = enumC2469t9ArrValues.length;
            int i = 0;
            while (true) {
                if (i < length) {
                    enumC2469t9 = enumC2469t9ArrValues[i];
                    l = lValueOf2;
                    if (enumC2469t9.f6330a == iIntValue) {
                        break;
                    }
                    i++;
                    lValueOf2 = l;
                } else {
                    l = lValueOf2;
                    enumC2469t9 = EnumC2469t9.NATIVE;
                    break;
                }
            }
        } else {
            l = lValueOf2;
            enumC2469t9 = null;
        }
        Boolean boolA = this.f6147a.a(c2492u7.p);
        Integer numValueOf7 = Integer.valueOf(c2492u7.q);
        Integer num4 = numValueOf7.intValue() != c2492u8.q ? numValueOf7 : null;
        byte[] bArr = c2492u7.r;
        return new C2268l7(num, str2, str4, l2, model, str6, str8, l, num2, num3, str10, n8A, str12, enumC2245kaA, enumC2469t9, boolA, num4, !Arrays.equals(bArr, c2492u8.r) ? bArr : null);
    }
}
