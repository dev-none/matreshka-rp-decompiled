package io.appmetrica.analytics.impl;

import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import io.appmetrica.analytics.AppMetrica;
import io.appmetrica.analytics.coreapi.internal.executors.IHandlerExecutor;
import io.appmetrica.analytics.coreutils.internal.executors.BlockingExecutor;
import io.appmetrica.analytics.coreutils.internal.io.FileUtils;
import io.appmetrica.analytics.internal.CounterConfiguration;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrash;
import io.appmetrica.analytics.ndkcrashesapi.internal.NativeCrashServiceConfig;
import io.appmetrica.analytics.networktasks.internal.NetworkServiceLocator;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import kotlin.collections.CollectionsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class M1 implements A1, InterfaceC2435s0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f5784a;
    public final Context b;
    public volatile InterfaceC2611z1 c;
    public final C2188i4 d;
    public final T1 e;
    public Xg f;
    public final C2271la g;
    public final C2363p2 h;
    public final N1 i;
    public final C2200ih j;

    public M1(Context context, InterfaceC2611z1 interfaceC2611z1) {
        this(context, interfaceC2611z1, new C2240k5(context));
    }

    public final void a() {
        this.e.c(new S1() { // from class: io.appmetrica.analytics.impl.M1$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.impl.S1
            public final void a(Intent intent) {
                this.f$0.d(intent);
            }
        });
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void b(Intent intent) {
        this.e.d(intent);
        if (intent != null) {
            String action = intent.getAction();
            Uri data = intent.getData();
            String encodedAuthority = data == null ? null : data.getEncodedAuthority();
            if (!"io.appmetrica.analytics.IAppMetricaService".equals(action) || encodedAuthority == null || data == null || !Objects.equals(data.getPath(), "/client")) {
                return;
            }
            int i = Integer.parseInt(data.getQueryParameter("pid"));
            this.d.a(encodedAuthority, Integer.valueOf(i), data.getQueryParameter("psid"));
            this.h.a(i);
        }
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void c(Intent intent) {
        T1 t1 = this.e;
        if (intent == null) {
            t1.getClass();
            return;
        }
        t1.getClass();
        String action = intent.getAction();
        if (!TextUtils.isEmpty(action)) {
            t1.f5894a.a(action, Integer.valueOf(T1.a(intent)));
        }
        for (Map.Entry entry : t1.b.entrySet()) {
            S1 s1 = (S1) entry.getKey();
            if (((R1) entry.getValue()).a(intent)) {
                s1.a(intent);
            }
        }
    }

    public final void d(Intent intent) {
        C2495ua.H.v().a(AbstractC2322nb.e(intent.getStringExtra("screen_size")));
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void onConfigurationChanged(Configuration configuration) {
        C2495ua.H.v().a(configuration);
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void onCreate() {
        if (this.f5784a) {
            C2495ua.H.v().a(this.b.getResources().getConfiguration());
        } else {
            this.g.b(this.b);
            C2495ua c2495ua = C2495ua.H;
            synchronized (c2495ua) {
                c2495ua.B.initAsync();
                c2495ua.u.a(c2495ua.f6349a);
                c2495ua.u.a(new lo(c2495ua.B));
                NetworkServiceLocator.init(new C2291m5(new C2503ui(c2495ua.h()), new C2540w5(c2495ua.f6349a)));
                c2495ua.l().a(c2495ua.q);
                c2495ua.E();
            }
            AbstractC2023bk.f6018a.e();
            C2283lm c2283lm = C2495ua.H.u;
            c2283lm.b();
            C2231jm c2231jmB = c2283lm.b();
            Ck ckP = C2495ua.H.p();
            ckP.a(new C2178hk(new C2171hd(this.e)), c2231jmB);
            c2283lm.a(ckP);
            ((El) C2495ua.H.A()).getClass();
            a();
            C2495ua.H.m().init();
            C2495ua.H.c().init();
            N1 n1 = this.i;
            Context context = this.b;
            C2188i4 c2188i4 = this.d;
            n1.getClass();
            this.f = new Xg(context, c2188i4);
            Context context2 = this.b;
            AbstractC2461t1.f6322a.b(context2);
            AppMetrica.getReporter(context2, "20799a27-fa80-4b36-b2db-0f8141f24180");
            Context context3 = this.b;
            Xg xg = this.f;
            Vd vdR = C2495ua.k().r();
            IHandlerExecutor iHandlerExecutorE = C2495ua.k().x().e();
            C2317n6 c2317n6 = new C2317n6(context3, xg, EnumC2195ib.EVENT_TYPE_PREV_SESSION_EXCEPTION_UNHANDLED_FROM_FILE, new X(), new BlockingExecutor(), "previous");
            C2317n6 c2317n7 = new C2317n6(context3, xg, EnumC2195ib.EVENT_TYPE_EXCEPTION_UNHANDLED_FROM_FILE, new C2471tb(), iHandlerExecutorE, "actual");
            File crashesDirectory = FileUtils.getCrashesDirectory(context3);
            if (crashesDirectory != null) {
                FileObserverC2267l6 fileObserverC2267l6 = new FileObserverC2267l6(crashesDirectory, c2317n7, new C2168ha());
                iHandlerExecutorE.execute(new Zf(crashesDirectory, c2317n6));
                if (!crashesDirectory.exists()) {
                    crashesDirectory.mkdir();
                } else if (!crashesDirectory.isDirectory() && crashesDirectory.delete()) {
                    crashesDirectory.mkdir();
                }
                fileObserverC2267l6.startWatching();
                C2495ua.H.E.storeReference(fileObserverC2267l6);
            }
            vdR.getClass();
            File nativeCrashDirectory = FileUtils.getNativeCrashDirectory(context3);
            String absolutePath = nativeCrashDirectory != null ? nativeCrashDirectory.getAbsolutePath() : null;
            if (absolutePath != null) {
                vdR.f5932a.init(context3, new NativeCrashServiceConfig(absolutePath));
                List<NativeCrash> allCrashes = vdR.f5932a.getAllCrashes();
                if (!allCrashes.isEmpty()) {
                    Qd qdB = vdR.b.b(context3, xg);
                    Iterator<T> it = allCrashes.iterator();
                    while (it.hasNext()) {
                        qdB.newCrash((NativeCrash) it.next());
                    }
                }
                vdR.f5932a.setDefaultCrashHandler(vdR.b.a(context3, xg));
            }
            new P5(CollectionsKt.listOf(new RunnableC2072dh())).run();
            this.f5784a = true;
        }
        C2495ua.H.l().a();
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void onDestroy() {
        Mb mbL = C2495ua.H.l();
        synchronized (mbL) {
            Iterator it = mbL.c.iterator();
            while (it.hasNext()) {
                ((InterfaceC2381pk) it.next()).onDestroy();
            }
        }
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void pauseUserSession(Bundle bundle) {
        Gf gf;
        bundle.setClassLoader(Gf.class.getClassLoader());
        String str = Gf.c;
        try {
            gf = (Gf) bundle.getParcelable("PROCESS_CFG_OBJ");
        } catch (Throwable unused) {
            gf = null;
        }
        Integer asInteger = gf != null ? gf.f5692a.getAsInteger("PROCESS_CFG_PROCESS_ID") : null;
        if (asInteger != null) {
            this.h.b(asInteger.intValue());
        }
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void reportData(int i, Bundle bundle) {
        this.j.getClass();
        List listEmptyList = (List) C2495ua.H.v.f6157a.get(Integer.valueOf(i));
        if (listEmptyList == null) {
            listEmptyList = CollectionsKt.emptyList();
        }
        if (listEmptyList.isEmpty()) {
            return;
        }
        Iterator it = listEmptyList.iterator();
        while (it.hasNext()) {
            ((InterfaceC2203ik) it.next()).reportData(i, bundle);
        }
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void resumeUserSession(Bundle bundle) {
        Gf gf;
        bundle.setClassLoader(Gf.class.getClassLoader());
        String str = Gf.c;
        try {
            gf = (Gf) bundle.getParcelable("PROCESS_CFG_OBJ");
        } catch (Throwable unused) {
            gf = null;
        }
        Integer asInteger = gf != null ? gf.f5692a.getAsInteger("PROCESS_CFG_PROCESS_ID") : null;
        if (asInteger != null) {
            this.h.c(asInteger.intValue());
        }
    }

    public M1(Context context, InterfaceC2611z1 interfaceC2611z1, C2240k5 c2240k5) {
        this(context, interfaceC2611z1, new C2188i4(context, c2240k5), new T1(), C2271la.d, C2495ua.k().e(), new N1());
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void a(Intent intent) {
        T1 t1 = this.e;
        if (intent == null) {
            t1.getClass();
            return;
        }
        t1.getClass();
        String action = intent.getAction();
        if (!TextUtils.isEmpty(action)) {
            t1.f5894a.a(action, Integer.valueOf(T1.a(intent)));
        }
        for (Map.Entry entry : t1.b.entrySet()) {
            S1 s1 = (S1) entry.getKey();
            if (((R1) entry.getValue()).a(intent)) {
                s1.a(intent);
            }
        }
    }

    public M1(Context context, InterfaceC2611z1 interfaceC2611z1, C2188i4 c2188i4, T1 t1, C2271la c2271la, C2363p2 c2363p2, N1 n1) {
        this.f5784a = false;
        this.b = context;
        this.c = interfaceC2611z1;
        this.d = c2188i4;
        this.e = t1;
        this.g = c2271la;
        this.h = c2363p2;
        this.i = n1;
        this.j = new C2200ih();
    }

    public final void a(Bundle bundle) {
        bundle.setClassLoader(CounterConfiguration.class.getClassLoader());
        W5.b(bundle);
        Xg xg = this.f;
        if (xg != null) {
            xg.a(W5.b(bundle), bundle);
        }
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void a(InterfaceC2611z1 interfaceC2611z1) {
        this.c = interfaceC2611z1;
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void a(Intent intent, int i) {
        ((C2561x1) this.c).f6396a.stopSelfResult(i);
    }

    @Override // io.appmetrica.analytics.impl.A1
    public final void a(Intent intent, int i, int i2) {
        ((C2561x1) this.c).f6396a.stopSelfResult(i2);
    }
}
