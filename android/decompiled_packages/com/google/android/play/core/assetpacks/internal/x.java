package com.google.android.play.core.assetpacks.internal;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class x implements ServiceConnection {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ z f4355a;

    /* synthetic */ x(z zVar, y yVar) {
        this.f4355a = zVar;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.f4355a.c.d("ServiceConnectionImpl.onServiceConnected(%s)", componentName);
        this.f4355a.c().post(new v(this, iBinder));
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        this.f4355a.c.d("ServiceConnectionImpl.onServiceDisconnected(%s)", componentName);
        this.f4355a.c().post(new w(this));
    }
}
