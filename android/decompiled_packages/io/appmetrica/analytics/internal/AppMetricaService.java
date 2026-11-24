package io.appmetrica.analytics.internal;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.IBinder;
import io.appmetrica.analytics.impl.B1;
import io.appmetrica.analytics.impl.BinderC2586y1;
import io.appmetrica.analytics.impl.C2229jk;
import io.appmetrica.analytics.impl.C2240k5;
import io.appmetrica.analytics.impl.C2429rj;
import io.appmetrica.analytics.impl.C2454sj;
import io.appmetrica.analytics.impl.C2495ua;
import io.appmetrica.analytics.impl.C2561x1;
import io.appmetrica.analytics.impl.D1;
import io.appmetrica.analytics.impl.E1;
import io.appmetrica.analytics.impl.F1;
import io.appmetrica.analytics.impl.G1;
import io.appmetrica.analytics.impl.H1;
import io.appmetrica.analytics.impl.L1;
import io.appmetrica.analytics.impl.M1;
import io.appmetrica.analytics.impl.P1;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: loaded from: classes7.dex */
public class AppMetricaService extends Service {
    private static L1 c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final C2561x1 f6439a = new C2561x1(this);
    private final a b = new a();

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        String action = intent.getAction();
        IBinder binderC2586y1 = (action == null || !action.startsWith("io.appmetrica.analytics.ACTION_SERVICE_WAKELOCK")) ? this.b : new BinderC2586y1();
        L1 l1 = c;
        l1.f5767a.execute(new F1(l1, intent));
        return binderC2586y1;
    }

    @Override // android.app.Service, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        L1 l1 = c;
        l1.f5767a.execute(new B1(l1, configuration));
    }

    @Override // android.app.Service
    public void onCreate() {
        super.onCreate();
        C2495ua.a(getApplicationContext());
        PublicLogger.init(getApplicationContext());
        L1 l1 = c;
        if (l1 == null) {
            Context applicationContext = getApplicationContext();
            M1 m1 = new M1(applicationContext, this.f6439a, new C2240k5(applicationContext));
            C2229jk c2229jk = C2495ua.H.v;
            P1 p1 = new P1(m1);
            LinkedHashMap linkedHashMap = c2229jk.f6157a;
            Object arrayList = linkedHashMap.get(1);
            if (arrayList == null) {
                arrayList = new ArrayList();
                linkedHashMap.put(1, arrayList);
            }
            ((List) arrayList).add(p1);
            c = new L1(C2495ua.H.d.b(), m1);
        } else {
            l1.b.a(this.f6439a);
        }
        C2495ua c2495ua = C2495ua.H;
        C2454sj c2454sj = new C2454sj(c);
        synchronized (c2495ua) {
            c2495ua.f = new C2429rj(c2495ua.f6349a, c2454sj);
        }
        c.onCreate();
    }

    @Override // android.app.Service
    public void onDestroy() {
        c.onDestroy();
        super.onDestroy();
    }

    @Override // android.app.Service
    public void onRebind(Intent intent) {
        super.onRebind(intent);
        L1 l1 = c;
        l1.f5767a.execute(new G1(l1, intent));
    }

    @Override // android.app.Service
    public void onStart(Intent intent, int i) {
        L1 l1 = c;
        l1.f5767a.execute(new D1(l1, intent, i));
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        L1 l1 = c;
        l1.f5767a.execute(new E1(l1, intent, i, i2));
        return 2;
    }

    @Override // android.app.Service
    public boolean onUnbind(Intent intent) {
        L1 l1 = c;
        l1.f5767a.execute(new H1(l1, intent));
        String action = intent.getAction();
        return (action == null || !action.startsWith("io.appmetrica.analytics.ACTION_SERVICE_WAKELOCK")) && intent.getData() != null;
    }
}
