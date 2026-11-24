package io.appmetrica.analytics.impl;

/* JADX INFO: loaded from: classes7.dex */
public final class M8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Kc f5788a;
    public final Kc b;

    public M8() {
        this(new C2011b8(), new S9(), new C2002b());
    }

    public M8(C2011b8 c2011b8, S9 s9, C2002b c2002b) {
        Kc kc = new Kc(c2011b8);
        this.f5788a = kc;
        kc.a(N8.NONE, c2011b8);
        kc.a(N8.EXTERNALLY_ENCRYPTED_EVENT_CRYPTER, s9);
        kc.a(N8.AES_VALUE_ENCRYPTION, c2002b);
        this.b = new Kc(c2011b8);
    }
}
