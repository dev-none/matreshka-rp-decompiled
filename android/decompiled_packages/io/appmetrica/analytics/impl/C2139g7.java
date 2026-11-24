package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.data.IBinaryDataHelper;
import io.appmetrica.analytics.coreapi.internal.db.DatabaseScript;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import io.appmetrica.analytics.modulesapi.internal.common.TableDescription;
import io.appmetrica.analytics.modulesapi.internal.service.ModuleServicesDatabase;
import io.sentry.protocol.SentryThread;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.g7, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2139g7 {
    public static volatile C2139g7 q;
    public final Context e;
    public C2113f7 f;
    public C1980a3 g;
    public C2006b3 h;
    public C2621zb i;
    public Ab j;
    public C2508un k;
    public C2533vn l;
    public C2621zb m;
    public Ab n;
    public C2144gc o;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final HashMap f6089a = new HashMap();
    public final HashMap b = new HashMap();
    public final HashMap c = new HashMap();
    public final T6 d = D5.a();
    public final C2191i7 p = new C2191i7();

    public C2139g7(Context context) {
        this.e = context;
    }

    public static C2139g7 a(Context context) {
        if (q == null) {
            synchronized (C2139g7.class) {
                if (q == null) {
                    q = new C2139g7(context.getApplicationContext());
                }
            }
        }
        return q;
    }

    public final synchronized Oa b(X4 x4) {
        Oa c2621zb;
        String str = new O4(x4).f5816a;
        c2621zb = (Oa) this.b.get(str);
        if (c2621zb == null) {
            c2621zb = new C2621zb(new C2506ul(c(x4)));
            this.b.put(str, c2621zb);
        }
        return c2621zb;
    }

    public final synchronized C2113f7 c(X4 x4) {
        C2113f7 c2113f7;
        O4 o4 = new O4(x4);
        c2113f7 = (C2113f7) this.f6089a.get(o4.f5816a);
        if (c2113f7 == null) {
            Context context = this.e;
            C2191i7 c2191i7 = this.p;
            String strA = new C2165h7(c2191i7.f6127a, c2191i7.b, false).a(context, o4);
            T6 t6 = this.d;
            t6.getClass();
            String str = x4.b;
            if (str == null) {
                str = SentryThread.JsonKeys.MAIN;
            }
            String str2 = String.format("component-%s", str);
            C2258kn c2258kn = t6.c;
            C2062d7 c2062d7 = t6.f5899a;
            V6 v6 = c2062d7.f6043a;
            W6 w6 = c2062d7.b;
            C2545wa c2545wa = new C2545wa(false);
            c2545wa.a(112, new R4());
            C2334nn c2334nn = new C2334nn(str2, t6.b.f5623a);
            c2258kn.getClass();
            c2113f7 = new C2113f7(context, strA, new C2284ln(v6, w6, c2545wa, c2334nn), PublicLogger.getAnonymousInstance());
            this.f6089a.put(o4.f5816a, c2113f7);
        }
        return c2113f7;
    }

    public final synchronized Oa d() {
        if (this.i == null) {
            this.i = new C2621zb(new C2506ul(h()));
        }
        return this.i;
    }

    public final Oa e() {
        C2144gc c2144gc;
        if (this.m == null) {
            synchronized (this) {
                if (this.o == null) {
                    C2191i7 c2191i7 = this.p;
                    String strA = new C2165h7(c2191i7.f6127a, c2191i7.b, true).a(this.e, new V3());
                    Context context = this.e;
                    T6 t6 = this.d;
                    t6.getClass();
                    HashMap map = new HashMap();
                    map.put("preferences", A5.f5590a);
                    C2258kn c2258kn = t6.c;
                    C2062d7 c2062d7 = t6.f5899a;
                    Z6 z6 = c2062d7.c;
                    C1984a7 c1984a7 = c2062d7.d;
                    C2545wa c2545wa = new C2545wa(false);
                    c2545wa.a(112, new W3());
                    C2334nn c2334nn = new C2334nn("service database", map);
                    c2258kn.getClass();
                    this.o = new C2144gc(context, strA, new C2116fa(strA), new C2284ln(z6, c1984a7, c2545wa, c2334nn));
                }
                c2144gc = this.o;
            }
            this.m = new C2621zb(c2144gc);
        }
        return this.m;
    }

    public final IBinaryDataHelper f() {
        if (this.g == null) {
            this.g = new C1980a3(new C2506ul(h()), "binary_data");
        }
        return this.g;
    }

    public final synchronized IBinaryDataHelper g() {
        if (this.h == null) {
            this.h = new C2006b3(f());
        }
        return this.h;
    }

    public final synchronized C2113f7 h() {
        if (this.f == null) {
            Context context = this.e;
            C2191i7 c2191i7 = this.p;
            String strA = new C2165h7(c2191i7.f6127a, c2191i7.b, true).a(context, new C2255kk());
            T6 t6 = this.d;
            t6.getClass();
            HashMap map = new HashMap();
            map.put("preferences", A5.f5590a);
            map.put("binary_data", AbstractC2590y5.f6409a);
            map.put("temp_cache", AbstractC2583xn.f6405a);
            Iterator<ModuleServicesDatabase> it = C2495ua.H.p().b().iterator();
            while (it.hasNext()) {
                for (TableDescription tableDescription : it.next().getTables()) {
                    map.put(tableDescription.getTableName(), tableDescription.getColumnNames());
                }
            }
            C2258kn c2258kn = t6.c;
            C2062d7 c2062d7 = t6.f5899a;
            C2010b7 c2010b7 = c2062d7.e;
            C2036c7 c2036c7 = c2062d7.f;
            C2545wa c2545wa = new C2545wa(false);
            c2545wa.a(114, new C2281lk());
            Iterator<ModuleServicesDatabase> it2 = C2495ua.H.p().b().iterator();
            while (it2.hasNext()) {
                Iterator<TableDescription> it3 = it2.next().getTables().iterator();
                while (it3.hasNext()) {
                    for (Map.Entry<Integer, DatabaseScript> entry : it3.next().getDatabaseProviderUpgradeScript().entrySet()) {
                        c2545wa.a(entry.getKey(), entry.getValue());
                    }
                }
            }
            C2334nn c2334nn = new C2334nn("service database", map);
            c2258kn.getClass();
            this.f = new C2113f7(context, strA, new C2284ln(c2010b7, c2036c7, c2545wa, c2334nn), PublicLogger.getAnonymousInstance());
        }
        return this.f;
    }

    public final synchronized Oa b() {
        return e();
    }

    public final synchronized IBinaryDataHelper a(X4 x4) {
        IBinaryDataHelper c1980a3;
        String str = new O4(x4).f5816a;
        c1980a3 = (IBinaryDataHelper) this.c.get(str);
        if (c1980a3 == null) {
            c1980a3 = new C1980a3(new C2506ul(c(x4)), "binary_data");
            this.c.put(str, c1980a3);
        }
        return c1980a3;
    }

    public final synchronized Oa a() {
        if (this.n == null) {
            this.n = new Ab(e());
        }
        return this.n;
    }

    public final synchronized Oa c() {
        if (this.j == null) {
            if (this.i == null) {
                this.i = new C2621zb(new C2506ul(h()));
            }
            this.j = new Ab(this.i);
        }
        return this.j;
    }
}
