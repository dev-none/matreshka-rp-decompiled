package io.appmetrica.analytics.impl;

import android.app.Activity;
import android.content.Intent;
import android.text.TextUtils;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityEvent;
import io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener;
import io.appmetrica.analytics.coreutils.internal.system.SystemServiceUtils;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2005b2 implements ActivityLifecycleListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f6010a = new ArrayList();
    public volatile G7 b = null;

    public final void a(G7 g7) {
        ArrayList arrayListA;
        synchronized (this) {
            this.b = g7;
            arrayListA = a();
        }
        Iterator it = arrayListA.iterator();
        while (it.hasNext()) {
            ((InterfaceC2172he) it.next()).consume(g7);
        }
    }

    public final void b() {
        C2213j4.l().e.registerListener(this, ActivityEvent.CREATED);
    }

    public final void c() {
        C2213j4.l().e.unregisterListener(this, ActivityEvent.CREATED);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.lifecycle.ActivityLifecycleListener
    public final void onEvent(Activity activity, ActivityEvent activityEvent) {
        Intent intent = (Intent) SystemServiceUtils.accessSystemServiceSafely(activity, "getting intent", "activity", new Z1());
        String dataString = intent == null ? null : intent.getDataString();
        if (TextUtils.isEmpty(dataString)) {
            return;
        }
        C1979a2 c1979a2 = new C1979a2(dataString);
        synchronized (this) {
            G7 g7 = this.b;
            if (g7 == null) {
                this.f6010a.add(c1979a2);
            } else {
                ((G9) C2213j4.l().c.a()).b.post(new Y1(c1979a2, g7));
            }
        }
    }

    public final synchronized ArrayList a() {
        ArrayList arrayList;
        arrayList = new ArrayList(this.f6010a);
        this.f6010a.clear();
        return arrayList;
    }
}
