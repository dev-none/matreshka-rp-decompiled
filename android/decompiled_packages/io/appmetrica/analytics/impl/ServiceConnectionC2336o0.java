package io.appmetrica.analytics.impl;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import io.appmetrica.analytics.internal.IAppMetricaService;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.o0, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class ServiceConnectionC2336o0 implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2361p0 f6231a;

    public ServiceConnectionC2336o0(C2361p0 c2361p0) {
        this.f6231a = c2361p0;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.f6231a) {
            this.f6231a.d = IAppMetricaService.Stub.asInterface(iBinder);
            this.f6231a.e.countDown();
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        synchronized (this.f6231a) {
            this.f6231a.d = null;
        }
    }
}
