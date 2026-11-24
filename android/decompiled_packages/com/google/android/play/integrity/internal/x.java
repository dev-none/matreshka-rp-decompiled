package com.google.android.play.integrity.internal;

/* JADX INFO: compiled from: com.google.android.play:integrity@@1.3.0 */
/* JADX INFO: loaded from: classes5.dex */
final class x extends t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ae f4440a;

    x(ae aeVar) {
        this.f4440a = aeVar;
    }

    @Override // com.google.android.play.integrity.internal.t
    public final void b() {
        synchronized (this.f4440a.g) {
            if (this.f4440a.m.get() > 0 && this.f4440a.m.decrementAndGet() > 0) {
                this.f4440a.c.d("Leaving the connection open for other ongoing calls.", new Object[0]);
                return;
            }
            ae aeVar = this.f4440a;
            if (aeVar.o != null) {
                aeVar.c.d("Unbind from service.", new Object[0]);
                ae aeVar2 = this.f4440a;
                aeVar2.b.unbindService(aeVar2.n);
                this.f4440a.h = false;
                this.f4440a.o = null;
                this.f4440a.n = null;
            }
            this.f4440a.x();
        }
    }
}
