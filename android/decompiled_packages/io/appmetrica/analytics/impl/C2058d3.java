package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.encryption.AESEncrypter;
import io.appmetrica.analytics.coreutils.internal.io.GZIPCompressor;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.d3, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2058d3 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2032c3 f6039a;
    public final GZIPCompressor b;

    public C2058d3() {
        this(new C2032c3(), new GZIPCompressor());
    }

    public final byte[] a(byte[] bArr) {
        try {
            byte[] bArrCopyOfRange = Arrays.copyOfRange(bArr, 0, 16);
            C2032c3 c2032c3 = this.f6039a;
            byte[] bytes = "hBnBQbZrmjPXEWVJ".getBytes();
            c2032c3.getClass();
            AESEncrypter aESEncrypter = new AESEncrypter(AESEncrypter.DEFAULT_ALGORITHM, bytes, bArrCopyOfRange);
            if (bArr != null && bArr.length != 0) {
                return this.b.uncompress(aESEncrypter.decrypt(bArr, 16, bArr.length - 16));
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public C2058d3(C2032c3 c2032c3, GZIPCompressor gZIPCompressor) {
        this.f6039a = c2032c3;
        this.b = gZIPCompressor;
    }
}
