package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.coreutils.internal.executors.SynchronizedBlockingExecutor;
import io.appmetrica.analytics.networktasks.internal.AllHostsExponentialBackoffPolicy;
import io.appmetrica.analytics.networktasks.internal.DefaultResponseValidityChecker;
import io.appmetrica.analytics.networktasks.internal.FinalConfigProvider;
import io.appmetrica.analytics.networktasks.internal.FullUrlFormer;
import io.appmetrica.analytics.networktasks.internal.NetworkTask;
import io.appmetrica.analytics.networktasks.internal.RequestDataHolder;
import io.appmetrica.analytics.networktasks.internal.ResponseDataHolder;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class Em {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Fm f5665a;
    public volatile NetworkTask b;

    public Em(Fm fm) {
        this.f5665a = fm;
    }

    public final Context b() {
        return this.f5665a.f5679a;
    }

    public final synchronized NetworkTask c() throws Throwable {
        NetworkTask networkTask;
        try {
            try {
                if (g()) {
                    networkTask = this.b;
                    if (networkTask == null || networkTask.isRemoved()) {
                        C2128fm c2128fmD = d();
                        C2043ce c2043ce = C2043ce.f6029a;
                        C2025bm c2025bm = new C2025bm(new C2325ne(), C2495ua.H.p());
                        FinalConfigProvider finalConfigProvider = new FinalConfigProvider(c2128fmD);
                        try {
                            NetworkTask networkTask2 = new NetworkTask(new SynchronizedBlockingExecutor(), new C2540w5(this.f5665a.f5679a), new AllHostsExponentialBackoffPolicy(C2043ce.f6029a.a(EnumC1991ae.STARTUP)), new Cm(this, new Vl(), new FullUrlFormer(c2025bm, finalConfigProvider), new RequestDataHolder(), new ResponseDataHolder(new DefaultResponseValidityChecker()), finalConfigProvider), CollectionsKt.emptyList(), C2043ce.c);
                            this.b = networkTask2;
                            networkTask = networkTask2;
                        } catch (Throwable th) {
                            th = th;
                            throw th;
                        }
                    }
                } else {
                    networkTask = null;
                }
                return networkTask;
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Throwable th3) {
            th = th3;
        }
    }

    public final C2128fm d() {
        return (C2128fm) this.f5665a.l.a();
    }

    public final C2231jm e() {
        C2231jm c2231jm;
        Ml ml = this.f5665a.l;
        synchronized (ml) {
            c2231jm = ml.c.f5877a;
        }
        return c2231jm;
    }

    public final void f() {
        C2231jm c2231jm;
        Ml ml = this.f5665a.l;
        synchronized (ml) {
            c2231jm = ml.c.f5877a;
        }
        C2333nm c2333nm = c2231jm.c;
        C2308mm c2308mmA = c2333nm.a(c2333nm.m);
        String strA = c2231jm.f6159a;
        String str = c2231jm.b;
        ro roVar = this.f5665a.n;
        String str2 = c2231jm.d;
        roVar.getClass();
        if (!ro.a(str2)) {
            c2308mmA.f6214a = this.f5665a.m.a().id;
        }
        String str3 = c2231jm.f6159a;
        if (str3 == null || str3.length() == 0) {
            strA = this.f5665a.h.a();
            str = "";
        }
        List<String> list = this.f5665a.c.e;
        if (list == null || list.isEmpty()) {
            list = null;
        }
        c2308mmA.g = list;
        C2231jm c2231jm2 = new C2231jm(strA, str, new C2333nm(c2308mmA));
        b(c2231jm2);
        a(c2231jm2);
    }

    /* JADX WARN: Code duplicated, block: B:27:0x0068 A[PHI: r2
  0x0068: PHI (r2v4 boolean) = (r2v3 boolean), (r2v7 boolean), (r2v7 boolean) binds: [B:15:0x0031, B:24:0x0063, B:25:0x0065] A[DONT_GENERATE, DONT_INLINE]] */
    public final synchronized boolean g() {
        boolean z;
        boolean z2;
        boolean z3 = false;
        if (C2495ua.H.h().isRestrictedForSdk()) {
            return false;
        }
        C2231jm c2231jmE = e();
        Set set = AbstractC2154gm.f6101a;
        if (!c2231jmE.w) {
            z = AbstractC2154gm.b.currentTimeSeconds() > c2231jmE.o + ((long) c2231jmE.z.f5696a);
        }
        if (!z) {
            if (AbstractC2154gm.a(c2231jmE.d) && AbstractC2154gm.a(c2231jmE.f6159a) && AbstractC2154gm.a(c2231jmE.b)) {
                z3 = true;
            }
            z = !z3;
            K3 k3 = this.f5665a.k;
            Map map = d().h;
            H3 h3 = this.f5665a.j;
            k3.getClass();
            z2 = (!z3 || K3.a(map, c2231jmE, h3)) ? z : true;
        }
        return z2;
    }

    public final synchronized void h() {
        this.b = null;
    }

    public final X4 a() {
        return this.f5665a.f;
    }

    public final synchronized void b(C2231jm c2231jm) {
        this.f5665a.l.a(c2231jm);
        C2205im c2205im = this.f5665a.g;
        c2205im.b.a(c2231jm.f6159a);
        c2205im.b.b(c2231jm.b);
        c2205im.f6139a.save(c2231jm.c);
        this.f5665a.e.a(c2231jm);
    }

    public final synchronized boolean a(List<String> list, Map<String, String> map) {
        return !AbstractC2154gm.a(e(), list, map, new Dm(this));
    }

    /* JADX WARN: Code duplicated, block: B:15:0x003c  */
    public final C2231jm a(C2180hm c2180hm, C2128fm c2128fm, long j) {
        String str;
        boolean zEquals;
        String strA = Jm.a(c2128fm.h);
        Map map = c2128fm.i.f6424a;
        String str2 = c2180hm.j;
        String str3 = e().k;
        if (!Jm.a(Jm.a(str2))) {
            str2 = Jm.a(Jm.a(str3)) ? str3 : null;
        }
        String str4 = e().f6159a;
        if (str4 != null) {
            str = StringsKt.isBlank(str4) ? null : str4;
            if (str == null) {
                str = c2180hm.h;
            }
        } else {
            str = c2180hm.h;
        }
        C2308mm c2308mm = new C2308mm(c2180hm.b);
        String str5 = c2180hm.i;
        c2308mm.o = this.f5665a.i.currentTimeSeconds();
        c2308mm.f6214a = e().d;
        c2308mm.c = c2180hm.d;
        c2308mm.f = c2180hm.c;
        c2308mm.g = c2128fm.e;
        c2308mm.b = c2180hm.e;
        c2308mm.d = c2180hm.f;
        c2308mm.e = c2180hm.g;
        c2308mm.h = c2180hm.n;
        c2308mm.i = c2180hm.o;
        c2308mm.j = str2;
        c2308mm.k = strA;
        this.f5665a.k.getClass();
        HashMap mapA = Jm.a(str2);
        if (no.a(map)) {
            zEquals = no.a((Map) mapA);
        } else {
            zEquals = mapA.equals(map);
        }
        c2308mm.q = zEquals;
        c2308mm.l = Jm.a(map);
        c2308mm.r = c2180hm.m;
        c2308mm.n = c2180hm.k;
        c2308mm.s = c2180hm.p;
        c2308mm.p = true;
        c2308mm.t = j;
        C2128fm c2128fmD = d();
        if (c2128fmD.n == 0) {
            c2128fmD.n = j;
        }
        c2308mm.u = c2128fmD.n;
        c2308mm.v = false;
        c2308mm.w = c2180hm.q;
        c2308mm.x = c2180hm.r;
        c2308mm.y = c2180hm.s;
        c2308mm.z = c2180hm.t;
        c2308mm.A = c2180hm.u;
        c2308mm.B = c2180hm.v;
        return new C2231jm(str, str5, new C2333nm(c2308mm));
    }

    /* JADX WARN: Code duplicated, block: B:10:0x0032  */
    public final void a(C2180hm c2180hm, C2128fm c2128fm, Map<String, ? extends List<String>> map) {
        Long lValueOf;
        C2231jm c2231jmA;
        synchronized (this) {
            if (no.a((Map) map)) {
                lValueOf = null;
            } else {
                List list = (List) CollectionUtils.getFromMapIgnoreCase(map, "Date");
                if (no.a((Collection) list)) {
                    lValueOf = null;
                } else {
                    try {
                        lValueOf = Long.valueOf(new SimpleDateFormat("E, d MMM yyyy HH:mm:ss z", Locale.US).parse((String) list.get(0)).getTime());
                    } catch (Throwable unused) {
                        lValueOf = null;
                    }
                }
            }
            long jLongValue = lValueOf != null ? lValueOf.longValue() : 0L;
            AbstractC2023bk.f6018a.a(jLongValue, c2180hm.l);
            c2231jmA = a(c2180hm, c2128fm, jLongValue);
            h();
            b(c2231jmA);
            Unit unit = Unit.INSTANCE;
        }
        a(c2231jmA);
    }

    public final void a(C2231jm c2231jm) {
        ArrayList arrayList;
        Fm fm = this.f5665a;
        Jl jl = fm.d;
        String str = fm.b;
        synchronized (jl.f5750a.b) {
            Ll ll = jl.f5750a;
            ll.c = c2231jm;
            Collection collection = (Collection) ll.f5780a.f6383a.get(str);
            if (collection == null) {
                arrayList = new ArrayList();
            } else {
                arrayList = new ArrayList(collection);
            }
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((Ul) it.next()).a(c2231jm);
        }
    }

    public final void a(Nl nl) {
        synchronized (this) {
            this.b = null;
        }
        Fm fm = this.f5665a;
        fm.d.a(fm.f.f5952a, nl, e());
    }

    public final synchronized void a(C2077dm c2077dm) {
        this.f5665a.l.a(c2077dm);
        C2128fm c2128fmD = d();
        if (c2128fmD.k) {
            List list = c2128fmD.j;
            if (list != null && !list.isEmpty()) {
                if (!no.a(list, c2128fmD.e)) {
                    C2231jm c2231jmE = e();
                    C2333nm c2333nm = c2231jmE.c;
                    C2308mm c2308mmA = c2333nm.a(c2333nm.m);
                    String str = c2231jmE.f6159a;
                    String str2 = c2231jmE.b;
                    c2308mmA.g = list;
                    C2231jm c2231jm = new C2231jm(str, str2, new C2333nm(c2308mmA));
                    b(c2231jm);
                    a(c2231jm);
                }
            } else {
                List list2 = c2128fmD.e;
                if (list2 != null && (!list2.isEmpty())) {
                    C2231jm c2231jmE2 = e();
                    C2333nm c2333nm2 = c2231jmE2.c;
                    C2308mm c2308mmA2 = c2333nm2.a(c2333nm2.m);
                    String str3 = c2231jmE2.f6159a;
                    String str4 = c2231jmE2.b;
                    c2308mmA2.g = null;
                    C2231jm c2231jm2 = new C2231jm(str3, str4, new C2333nm(c2308mmA2));
                    b(c2231jm2);
                    a(c2231jm2);
                }
            }
        }
    }
}
