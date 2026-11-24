package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.backport.Consumer;
import io.appmetrica.analytics.coreutils.internal.logger.LoggerStorage;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.HashMap;
import java.util.Set;

/* JADX INFO: loaded from: classes7.dex */
public final class Zg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5988a;
    public final InterfaceC2101el b;
    public final C2496ub c = new C2496ub();
    public final C2539w4 d = new C2539w4(new C2077dm(), new C2514v4(), null);
    public final Consumer e;

    public Zg(Context context, final InterfaceC2241k6 interfaceC2241k6, final EnumC2195ib enumC2195ib, InterfaceC2101el interfaceC2101el) {
        this.f5988a = context;
        this.b = interfaceC2101el;
        this.e = new Consumer() { // from class: io.appmetrica.analytics.impl.Zg$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.coreapi.internal.backport.Consumer
            public final void consume(Object obj) {
                Zg.a(enumC2195ib, interfaceC2241k6, this, (C2397qb) obj);
            }
        };
    }

    public static final void a(EnumC2195ib enumC2195ib, InterfaceC2241k6 interfaceC2241k6, Zg zg, C2397qb c2397qb) {
        String str = c2397qb.h;
        X3 x3 = new X3(str, c2397qb.e, c2397qb.f, c2397qb.g, c2397qb.i);
        String str2 = c2397qb.b;
        byte[] bArr = c2397qb.f6271a;
        int i = c2397qb.c;
        HashMap map = c2397qb.d;
        String str3 = c2397qb.j;
        PublicLogger orCreatePublicLogger = LoggerStorage.getOrCreatePublicLogger(str);
        Set set = D9.f5638a;
        U3 u3 = new U3(bArr, str2, enumC2195ib.f6131a, orCreatePublicLogger);
        u3.q = map;
        u3.g = i;
        u3.c = str3;
        ((Xg) interfaceC2241k6).a(x3, u3, zg.d);
    }
}
