package io.appmetrica.analytics.impl;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.ll, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2282ll implements uo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2560x0 f6194a;

    public C2282ll(C2560x0 c2560x0) {
        this.f6194a = c2560x0;
    }

    @Override // io.appmetrica.analytics.impl.uo
    public final so a(Void r3) {
        this.f6194a.getClass();
        return C2560x0.a() ? new so(this, true, "") : new so(this, false, "AppMetrica isn't initialized. Use AppMetrica#activate(android.content.Context, String) method to activate.");
    }

    public final so a() {
        return a((Void) null);
    }
}
