package com.google.android.play.integrity.internal;

import android.os.IBinder;
import android.os.IInterface;
import java.util.Iterator;

/* JADX INFO: compiled from: com.google.android.play:integrity@@1.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class aa extends t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ IBinder f4426a;
    final /* synthetic */ ad b;

    aa(ad adVar, IBinder iBinder) {
        this.b = adVar;
        this.f4426a = iBinder;
    }

    @Override // com.google.android.play.integrity.internal.t
    public final void b() {
        this.b.f4428a.o = (IInterface) this.b.f4428a.j.a(this.f4426a);
        ae.r(this.b.f4428a);
        this.b.f4428a.h = false;
        Iterator it = this.b.f4428a.e.iterator();
        while (it.hasNext()) {
            ((Runnable) it.next()).run();
        }
        this.b.f4428a.e.clear();
    }
}
