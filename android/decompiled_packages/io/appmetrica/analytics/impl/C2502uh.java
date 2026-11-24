package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.uh, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2502uh extends Wg {
    public final C2603yi b;

    public C2502uh(C2085e5 c2085e5) {
        super(c2085e5);
        this.b = new C2603yi(new C2444s9(c2085e5), c2085e5);
    }

    @Override // io.appmetrica.analytics.impl.Wg
    public final boolean a(W5 w5) {
        return this.b.a(w5, new C2578xi());
    }
}
