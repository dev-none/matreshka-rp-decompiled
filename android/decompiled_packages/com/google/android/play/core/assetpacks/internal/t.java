package com.google.android.play.core.assetpacks.internal;

/* JADX INFO: compiled from: com.google.android.play:asset-delivery@@2.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class t extends p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ z f4352a;

    t(z zVar) {
        this.f4352a = zVar;
    }

    @Override // com.google.android.play.core.assetpacks.internal.p
    public final void a() {
        synchronized (this.f4352a.g) {
            if (this.f4352a.l.get() > 0 && this.f4352a.l.decrementAndGet() > 0) {
                this.f4352a.c.d("Leaving the connection open for other ongoing calls.", new Object[0]);
                return;
            }
            z zVar = this.f4352a;
            if (zVar.n != null) {
                zVar.c.d("Unbind from service.", new Object[0]);
                z zVar2 = this.f4352a;
                zVar2.b.unbindService(zVar2.m);
                this.f4352a.h = false;
                this.f4352a.n = null;
                this.f4352a.m = null;
            }
            this.f4352a.w();
        }
    }
}
