package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import android.util.Base64;
import io.appmetrica.analytics.coreutils.internal.encryption.AESEncrypter;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2002b implements L8 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final AESEncrypter f6007a;

    public C2002b() {
        this(new C1976a(C2495ua.k().g()));
    }

    /* JADX WARN: Code duplicated, block: B:8:0x001e  */
    @Override // io.appmetrica.analytics.impl.L8
    public final E8 a(W5 w5) {
        String strEncodeToString;
        String value = w5.getValue();
        if (TextUtils.isEmpty(value)) {
            strEncodeToString = null;
        } else {
            try {
                byte[] bArrEncrypt = this.f6007a.encrypt(value.getBytes("UTF-8"));
                if (bArrEncrypt != null) {
                    strEncodeToString = Base64.encodeToString(bArrEncrypt, 0);
                } else {
                    strEncodeToString = null;
                }
            } catch (Throwable unused) {
            }
        }
        w5.setValue(strEncodeToString);
        return new E8(w5, N8.AES_VALUE_ENCRYPTION);
    }

    public C2002b(C1976a c1976a) {
        this(new AESEncrypter(AESEncrypter.DEFAULT_ALGORITHM, c1976a.b(), c1976a.a()));
    }

    public C2002b(AESEncrypter aESEncrypter) {
        this.f6007a = aESEncrypter;
    }

    @Override // io.appmetrica.analytics.impl.L8
    public final byte[] a(byte[] bArr) {
        byte[] bArr2 = new byte[0];
        if (bArr != null && bArr.length > 0) {
            try {
                return this.f6007a.decrypt(Base64.decode(bArr, 0));
            } catch (Throwable unused) {
            }
        }
        return bArr2;
    }

    public final N8 a() {
        return N8.AES_VALUE_ENCRYPTION;
    }
}
