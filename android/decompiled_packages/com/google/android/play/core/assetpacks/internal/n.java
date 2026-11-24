package com.google.android.play.core.assetpacks.internal;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import com.google.android.play.core.listener.StateUpdatedListener;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
public abstract class n {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected final o f4346a;
    private final IntentFilter c;
    private final Context d;
    protected final Set b = new HashSet();
    private l e = null;
    private volatile boolean f = false;

    protected n(o oVar, IntentFilter intentFilter, Context context) {
        this.f4346a = oVar;
        this.c = intentFilter;
        this.d = ag.a(context);
    }

    private final void a() {
        l lVar;
        if ((this.f || !this.b.isEmpty()) && this.e == null) {
            this.e = new l(this, null);
            if (Build.VERSION.SDK_INT >= 33) {
                this.d.registerReceiver(this.e, this.c, 2);
            } else {
                this.d.registerReceiver(this.e, this.c);
            }
        }
        if (this.f || !this.b.isEmpty() || (lVar = this.e) == null) {
            return;
        }
        this.d.unregisterReceiver(lVar);
        this.e = null;
    }

    protected abstract void c(Context context, Intent intent);

    public final synchronized void d() {
        this.f4346a.d("clearListeners", new Object[0]);
        this.b.clear();
        a();
    }

    public final synchronized void e(StateUpdatedListener stateUpdatedListener) {
        this.f4346a.d("registerListener", new Object[0]);
        aj.a(stateUpdatedListener, "Registered Play Core listener should not be null.");
        this.b.add(stateUpdatedListener);
        a();
    }

    public final synchronized void f(boolean z) {
        this.f = z;
        a();
    }

    public final synchronized void g(StateUpdatedListener stateUpdatedListener) {
        this.f4346a.d("unregisterListener", new Object[0]);
        aj.a(stateUpdatedListener, "Unregistered Play Core listener should not be null.");
        this.b.remove(stateUpdatedListener);
        a();
    }

    public final synchronized void h(Object obj) {
        Iterator it = new HashSet(this.b).iterator();
        while (it.hasNext()) {
            ((StateUpdatedListener) it.next()).onStateUpdate(obj);
        }
    }

    public final synchronized boolean i() {
        return this.e != null;
    }
}
