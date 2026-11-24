package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class Y1 implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ InterfaceC2172he f5963a;
    public final /* synthetic */ G7 b;

    public Y1(C1979a2 c1979a2, G7 g7) {
        this.f5963a = c1979a2;
        this.b = g7;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f5963a.consume(this.b);
    }
}
