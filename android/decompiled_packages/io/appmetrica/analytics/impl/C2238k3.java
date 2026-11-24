package io.appmetrica.analytics.impl;

import android.util.Base64;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.k3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2238k3 implements vo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final M8 f6165a;

    public C2238k3() {
        this(new M8());
    }

    @Override // io.appmetrica.analytics.impl.vo
    public final byte[] a(S8 s8, C2378ph c2378ph) {
        byte[] bArrDecode = new byte[0];
        String str = s8.b;
        if (str != null) {
            try {
                bArrDecode = Base64.decode(str, 0);
            } catch (Throwable unused) {
            }
        }
        M8 m8 = this.f6165a;
        return ((L8) m8.f5788a.a(s8.o)).a(bArrDecode);
    }

    public C2238k3(M8 m8) {
        this.f6165a = m8;
    }
}
