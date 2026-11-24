package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.executors.ICommonExecutor;
import io.appmetrica.analytics.coreutils.internal.services.SafePackageManager;
import io.appmetrica.analytics.coreutils.internal.time.SystemTimeProvider;
import java.util.LinkedHashMap;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.j5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public class C2214j5 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2163h5 f6146a;
    public final C2189i5 b;
    protected final Context c;
    public final X4 d;
    public final C2514v4 e;
    public final AbstractC2034c5 f;
    protected final C2231jm g;
    public final InterfaceC2303mh h;
    public final M8 i;
    public final ICommonExecutor j;
    public final Mb k;
    public final InterfaceC2619z9 l;
    public final int m;

    public C2214j5(Context context, X4 x4, C2514v4 c2514v4, AbstractC2034c5 abstractC2034c5, C2231jm c2231jm, InterfaceC2303mh interfaceC2303mh, ICommonExecutor iCommonExecutor, int i, Mb mb, InterfaceC2619z9 interfaceC2619z9) {
        this(context, x4, c2514v4, abstractC2034c5, c2231jm, interfaceC2303mh, iCommonExecutor, new M8(), i, new C2163h5(c2514v4.f6362a), new C2189i5(context, x4), mb, interfaceC2619z9);
    }

    public static C2089e9 c(C2085e5 c2085e5) {
        return new C2089e9(c2085e5);
    }

    public final R8 a() {
        Context context = this.c;
        X4 x4 = this.d;
        return new R8(new W8(context, x4), this.m);
    }

    public final S6 b(C2085e5 c2085e5) {
        return new S6(c2085e5, C2139g7.a(this.c).c(this.d), new O6(c2085e5.c()), new C2318n7());
    }

    public final C2163h5 d() {
        return this.f6146a;
    }

    public final C2189i5 e() {
        return this.b;
    }

    public final zo f() {
        zo zoVar;
        Do c2194ia;
        Co coD = C2495ua.H.D();
        X4 x4 = this.d;
        synchronized (coD) {
            String strValueOf = String.valueOf(x4);
            LinkedHashMap linkedHashMap = coD.b;
            Object zoVar2 = linkedHashMap.get(strValueOf);
            if (zoVar2 == null) {
                C2018bf c2018bf = new C2018bf(C2139g7.a(coD.f5631a).b(x4));
                if (x4.d()) {
                    String str = "appmetrica_vital_" + x4.b + ".dat";
                    c2194ia = new C2316n5(CollectionsKt.listOf((Object[]) new Pair[]{TuplesKt.to(str, new C2194ia(coD.f5631a, str)), TuplesKt.to("appmetrica_vital_main.dat", new C2194ia(coD.f5631a, "appmetrica_vital_main.dat"))}));
                } else {
                    c2194ia = new C2194ia(coD.f5631a, "appmetrica_vital_" + x4.b + ".dat");
                }
                zoVar2 = new zo(c2018bf, c2194ia, strValueOf);
                linkedHashMap.put(strValueOf, zoVar2);
            }
            zoVar = (zo) zoVar2;
        }
        return zoVar;
    }

    public C2214j5(Context context, X4 x4, C2514v4 c2514v4, AbstractC2034c5 abstractC2034c5, C2231jm c2231jm, InterfaceC2303mh interfaceC2303mh, ICommonExecutor iCommonExecutor, M8 m8, int i, C2163h5 c2163h5, C2189i5 c2189i5, Mb mb, InterfaceC2619z9 interfaceC2619z9) {
        this.c = context;
        this.d = x4;
        this.e = c2514v4;
        this.f = abstractC2034c5;
        this.g = c2231jm;
        this.h = interfaceC2303mh;
        this.j = iCommonExecutor;
        this.i = m8;
        this.m = i;
        this.f6146a = c2163h5;
        this.b = c2189i5;
        this.k = mb;
        this.l = interfaceC2619z9;
    }

    public final Ok c() {
        return new Ok(this.c, this.d);
    }

    public final Ai d(C2085e5 c2085e5) {
        Ai ai = new Ai(c2085e5, this.f.a(), this.j);
        Mb mb = this.k;
        synchronized (mb) {
            mb.c.add(ai);
        }
        return ai;
    }

    public final Vg a(C2085e5 c2085e5) {
        return new Vg(new C2328nh(c2085e5, this.h, new K3()), this.g, new C2252kh(this.e));
    }

    public static Wk a(C2085e5 c2085e5, zo zoVar, C2060d5 c2060d5) {
        Vk vk = new Vk(zoVar);
        return new Wk(c2085e5, vk, c2060d5, new C2346oa(c2085e5, vk, new Zk(c2085e5.h(), "foreground"), AbstractC2536w1.a(), new SystemTimeProvider()), new H2(c2085e5, vk, new Zk(c2085e5.h(), H2.g), AbstractC2536w1.a(), new SystemTimeProvider()));
    }

    public static Z4 b() {
        return new Z4();
    }

    public final C2488u3 b(C2018bf c2018bf) {
        Context context = this.c;
        return new C2488u3(context, c2018bf, context.getPackageName(), new SafePackageManager());
    }

    public final C2419r9 a(C2018bf c2018bf, zo zoVar, Wk wk, S6 s6, C2209j0 c2209j0, Ok ok, Ai ai) {
        return new C2419r9(c2018bf, zoVar, wk, s6, c2209j0, this.i, ok, this.m, new C2137g5(ai), new Y8(zoVar, new Z8(zoVar)), new SystemTimeProvider());
    }

    public static C2603yi a(C2085e5 c2085e5, C2089e9 c2089e9) {
        return new C2603yi(c2089e9, c2085e5);
    }

    public InterfaceC2569x9 a(C9 c9, S6 s6, Vg vg, C2514v4 c2514v4, X4 x4, C2018bf c2018bf) {
        return this.l.a(c9, s6, vg, c2514v4, x4, c2018bf).a();
    }

    public final C2562x2 a(C2018bf c2018bf) {
        return new C2562x2(this.d, c2018bf);
    }
}
