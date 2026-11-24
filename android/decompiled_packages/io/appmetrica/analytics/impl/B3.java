package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.data.ProtobufConverter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.MapsKt;
import kotlin.ranges.RangesKt;

/* JADX INFO: loaded from: classes7.dex */
public final class B3 implements ProtobufConverter {
    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final F3 fromModel(A3 a3) {
        F3 f3 = new F3();
        f3.f5671a = a(a3.f5589a);
        int size = a3.b.size();
        C3[] c3Arr = new C3[size];
        for (int i = 0; i < size; i++) {
            c3Arr[i] = a((C2613z3) a3.b.get(i));
        }
        f3.b = c3Arr;
        return f3;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Converter
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final A3 toModel(F3 f3) {
        C3 c3 = f3.f5671a;
        if (c3 == null) {
            c3 = new C3();
        }
        C2613z3 c2613z3A = a(c3);
        C3[] c3Arr = f3.b;
        ArrayList arrayList = new ArrayList(c3Arr.length);
        for (C3 c4 : c3Arr) {
            arrayList.add(a(c4));
        }
        return new A3(c2613z3A, arrayList);
    }

    public static C3 a(C2613z3 c2613z3) {
        E3 e3;
        C3 c3 = new C3();
        Map map = c2613z3.f6424a;
        int i = 0;
        if (map != null) {
            e3 = new E3();
            int size = map.size();
            D3[] d3Arr = new D3[size];
            for (int i2 = 0; i2 < size; i2++) {
                d3Arr[i2] = new D3();
            }
            e3.f5650a = d3Arr;
            int i3 = 0;
            for (Map.Entry entry : map.entrySet()) {
                String str = (String) entry.getKey();
                String str2 = (String) entry.getValue();
                D3 d3 = e3.f5650a[i3];
                d3.f5635a = str;
                d3.b = str2;
                i3++;
            }
        } else {
            e3 = null;
        }
        c3.f5620a = e3;
        int iOrdinal = c2613z3.b.ordinal();
        if (iOrdinal != 0) {
            if (iOrdinal != 1) {
                i = 2;
                if (iOrdinal != 2) {
                    i = 3;
                    if (iOrdinal != 3) {
                        throw new NoWhenBranchMatchedException();
                    }
                }
            } else {
                i = 1;
            }
        }
        c3.b = i;
        return c3;
    }

    public static C2613z3 a(C3 c3) {
        LinkedHashMap linkedHashMap;
        Y7 y7;
        E3 e3 = c3.f5620a;
        if (e3 != null) {
            D3[] d3Arr = e3.f5650a;
            linkedHashMap = new LinkedHashMap(RangesKt.coerceAtLeast(MapsKt.mapCapacity(d3Arr.length), 16));
            for (D3 d3 : d3Arr) {
                Pair pair = TuplesKt.to(d3.f5635a, d3.b);
                linkedHashMap.put(pair.getFirst(), pair.getSecond());
            }
        } else {
            linkedHashMap = null;
        }
        int i = c3.b;
        if (i == 0) {
            y7 = Y7.b;
        } else if (i == 1) {
            y7 = Y7.c;
        } else if (i == 2) {
            y7 = Y7.d;
        } else if (i != 3) {
            y7 = Y7.b;
        } else {
            y7 = Y7.e;
        }
        return new C2613z3(linkedHashMap, y7);
    }
}
