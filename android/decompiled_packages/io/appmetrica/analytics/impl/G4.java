package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class G4 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Mb f5685a;

    public G4() {
        this(C2495ua.k().l());
    }

    public static L4 a(E4 e4) {
        return new L4(new J4(e4), e4);
    }

    public G4(Mb mb) {
        this.f5685a = mb;
    }

    public final C2359on a(E4 e4, Em em) {
        C2359on c2359on = new C2359on(e4, new Ng(em));
        Mb mb = this.f5685a;
        synchronized (mb) {
            mb.c.add(c2359on);
        }
        return c2359on;
    }
}
