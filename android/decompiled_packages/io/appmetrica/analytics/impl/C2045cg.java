package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.cg, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2045cg implements InterfaceC2576xg {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2225jg f6031a;

    public C2045cg(C2225jg c2225jg) {
        this.f6031a = c2225jg;
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2576xg
    public final void a(C2451sg c2451sg) {
        C2225jg c2225jg = this.f6031a;
        C2225jg.a(c2225jg, c2451sg, (InterfaceC2019bg) c2225jg.d.getValue());
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2576xg
    public final void a(Throwable th) {
        C2225jg c2225jg = this.f6031a;
        C2225jg.a(c2225jg, null, (InterfaceC2019bg) c2225jg.d.getValue());
    }
}
