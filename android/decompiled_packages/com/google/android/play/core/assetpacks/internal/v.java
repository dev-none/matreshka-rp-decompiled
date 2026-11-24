package com.google.android.play.core.assetpacks.internal;

import android.os.IBinder;
import java.util.Iterator;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class v extends p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ IBinder f4353a;
    final /* synthetic */ x b;

    v(x xVar, IBinder iBinder) {
        this.f4353a = iBinder;
        this.b = xVar;
    }

    @Override // com.google.android.play.core.assetpacks.internal.p
    public final void a() {
        this.b.f4355a.n = e.b(this.f4353a);
        z.r(this.b.f4355a);
        this.b.f4355a.h = false;
        Iterator it = this.b.f4355a.e.iterator();
        while (it.hasNext()) {
            ((Runnable) it.next()).run();
        }
        this.b.f4355a.e.clear();
    }
}
