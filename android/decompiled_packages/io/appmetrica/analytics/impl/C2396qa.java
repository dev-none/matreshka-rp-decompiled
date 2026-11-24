package io.appmetrica.analytics.impl;

import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.qa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2396qa implements InterfaceC2041cc {
    @Override // io.appmetrica.analytics.impl.InterfaceC2041cc
    public final C2141g9 a(C2393q7 c2393q7) {
        C2141g9 c2141g9 = null;
        if ((c2393q7 != null ? c2393q7.b : null) != null && c2393q7.c != null) {
            c2141g9 = new C2141g9();
            c2141g9.b = c2393q7.b.doubleValue();
            c2141g9.f6090a = c2393q7.c.doubleValue();
            Integer num = c2393q7.d;
            if (num != null) {
                c2141g9.g = num.intValue();
            }
            Integer num2 = c2393q7.e;
            if (num2 != null) {
                c2141g9.e = num2.intValue();
            }
            Integer num3 = c2393q7.f;
            if (num3 != null) {
                c2141g9.d = num3.intValue();
            }
            Integer num4 = c2393q7.g;
            if (num4 != null) {
                c2141g9.f = num4.intValue();
            }
            Long l = c2393q7.h;
            if (l != null) {
                c2141g9.c = TimeUnit.MILLISECONDS.toSeconds(l.longValue());
            }
            String str = c2393q7.i;
            if (str != null) {
                if (Intrinsics.areEqual(str, "gps")) {
                    c2141g9.h = 1;
                } else if (Intrinsics.areEqual(str, "network")) {
                    c2141g9.h = 2;
                }
            }
            String str2 = c2393q7.j;
            if (str2 != null) {
                c2141g9.i = str2;
            }
        }
        return c2141g9;
    }
}
