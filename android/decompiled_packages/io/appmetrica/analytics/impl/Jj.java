package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Jj implements Xa {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ Yj f5748a;

    public Jj(Yj yj) {
        this.f5748a = yj;
    }

    @Override // io.appmetrica.analytics.impl.Xa
    public final void a(Ya ya) {
        Xj xjA = ((C2274ld) this.f5748a).a();
        if (xjA != null) {
            ya.reportEvent(xjA.f5958a, xjA.b);
        }
    }
}
