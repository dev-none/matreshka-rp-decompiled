package io.appmetrica.analytics.impl;

import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import io.appmetrica.analytics.internal.AppMetricaService;
import io.appmetrica.analytics.modulesapi.internal.service.ServiceWakeLock;
import java.util.HashMap;

/* JADX INFO: loaded from: classes7.dex */
public final class Hk implements ServiceWakeLock {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5711a;
    public final Gk b;
    public final HashMap c = new HashMap();

    public Hk(Context context, Gk gk) {
        this.f5711a = context;
        this.b = gk;
    }

    public final String a(String str) {
        return "io.appmetrica.analytics.ACTION_SERVICE_WAKELOCK." + str;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceWakeLock
    public final synchronized boolean acquireWakeLock(String str) {
        if (this.c.get(str) == null) {
            HashMap map = this.c;
            Gk gk = this.b;
            Context context = this.f5711a;
            String strA = a(str);
            gk.f5695a.getClass();
            Intent intent = new Intent(context, (Class<?>) AppMetricaService.class);
            intent.setAction(strA);
            Fk fk = new Fk();
            try {
                context.bindService(intent, fk, 1);
            } catch (Throwable unused) {
                fk = null;
            }
            map.put(str, fk);
        }
        return this.c.get(str) != null;
    }

    @Override // io.appmetrica.analytics.modulesapi.internal.service.ServiceWakeLock
    public final synchronized void releaseWakeLock(String str) {
        ServiceConnection serviceConnection = (ServiceConnection) this.c.get(str);
        if (serviceConnection != null) {
            Gk gk = this.b;
            a(str);
            Context context = this.f5711a;
            gk.getClass();
            try {
                context.unbindService(serviceConnection);
            } catch (Throwable unused) {
            }
        }
    }
}
