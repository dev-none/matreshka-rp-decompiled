package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.kc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2247kc implements InterfaceC2594y9 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2415r5 f6172a;

    public C2247kc(C9 c9, S6 s6, Vg vg, C2514v4 c2514v4, X4 x4, C2018bf c2018bf) {
        C2221jc c2221jc = new C2221jc(s6, vg, this, c2514v4, c2018bf);
        this.f6172a = new C2415r5(c9, c2221jc.a(), c2221jc.b(), x4);
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2594y9
    public final InterfaceC2569x9 a() {
        return this.f6172a;
    }

    public final C2415r5 b() {
        return this.f6172a;
    }
}
