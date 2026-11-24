package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.io.Base64Utils;

/* JADX INFO: loaded from: classes7.dex */
public final class Rn implements vo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final M8 f5872a;

    public Rn() {
        this(new M8());
    }

    @Override // io.appmetrica.analytics.impl.vo
    public final byte[] a(S8 s8, C2378ph c2378ph) {
        byte[] bArrDecompressBase64GzipAsBytes = new byte[0];
        try {
            bArrDecompressBase64GzipAsBytes = Base64Utils.decompressBase64GzipAsBytes(s8.b);
        } catch (Throwable unused) {
        }
        byte[] bArrA = ((L8) this.f5872a.f5788a.a(s8.o)).a(bArrDecompressBase64GzipAsBytes);
        return bArrA == null ? new byte[0] : bArrA;
    }

    public Rn(M8 m8) {
        this.f5872a = m8;
    }

    public final M8 a() {
        return this.f5872a;
    }
}
