package com.ironsource.adqualitysdk.sdk.i;

import android.text.TextUtils;
import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.io.UnsupportedEncodingException;
import java.security.GeneralSecurityException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.PBEKeySpec;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ҭ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0392 {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f1460;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final byte[] f1461;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f1462;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f1463;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final SecretKeySpec f1464;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public Cipher f1465;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public Cipher f1466;

    static {
        StringFog.decrypt("ji5PRiwyhtKEOQBjOhil4ccVc2k6DrzCgSlTSx4pnNI=\n", "51wgKH9d86A=\n");
        f1463 = StringFog.decrypt("OhCXorg=\n", "b0TRj4CqA0o=\n");
        StringFog.decrypt("0vZrmGIhVEPK9W+Bb0cpJsD9eo5uJjFTwPcDjWg=\n", "grQuzyt1HBA=\n");
        f1462 = StringFog.decrypt("zr7vMfcT59DfsP9NgQHFm+uS0nk=\n", "j/u8HrRRpP8=\n");
        f1460 = StringFog.decrypt("L6hh4ir5bgwgpiKuMPptCCKgIrkt/21PDYJfgzvwdBIvpnijK7swHQ==\n", "TMcMzFmWAWE=\n");
        f1461 = new byte[]{Ascii.DLE, 74, 71, -80, 32, 101, -47, 72, 117, -14, 0, -29, 70, 65, -12, 74};
    }

    public C0392(byte[] bArr, String str, String str2, String str3) {
        byte[] bArrDigest;
        try {
            bArrDigest = SecretKeyFactory.getInstance(StringFog.decrypt("YjRQL2v4XXN6N1Q2Zp4gFnA/QTln/zhjcDU4OmE=\n", "MnYVeCKsFSA=\n")).generateSecret(new PBEKeySpec((str + str2 + str3).toCharArray(), bArr, 1024, 256)).getEncoded();
        } catch (GeneralSecurityException unused) {
            String strDecrypt = StringFog.decrypt("2L46s2LDE37AtB2DVpAxWueUDQ==\n", "k/t/5SPjUjs=\n");
            String strDecrypt2 = StringFog.decrypt("8uJzFlPeu6WC8XJUW9K0s8/gfQBb3ru5gvR5AlvfsvKCxG4NW9Kw/Mb5ehJXzrKy1rB9BELOuL3B\n+DI=\n", "opAcdDK819w=\n");
            String str4 = AbstractC0267.f965;
            AbstractC0323.m8471(strDecrypt, strDecrypt2);
            try {
                MessageDigest messageDigest = MessageDigest.getInstance(StringFog.decrypt("mGq+\n", "1S6L5EgdTZA=\n"));
                char[] charArray = (str + str2 + str3).toCharArray();
                for (char c : charArray) {
                    messageDigest.update((byte) c);
                }
                bArrDigest = messageDigest.digest();
            } catch (NoSuchAlgorithmException e) {
                throw new RuntimeException(StringFog.decrypt("zANV5nVHWbDgA1Xua0FT/eADVw==\n", "hW0jhxkuPZA=\n"), e);
            }
        }
        this.f1464 = new SecretKeySpec(bArrDigest, StringFog.decrypt("7cH6\n", "rISp2rg9ynA=\n"));
        m8508();
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final synchronized String m8506(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        try {
            try {
                String str2 = new String(this.f1465.doFinal(AbstractC0389.m8505(str)), f1463);
                String str3 = f1460;
                if (str2.indexOf(str3) == 0) {
                    return str2.substring(str3.length(), str2.length());
                }
                throw new C0393(StringFog.decrypt("3khWgCw/obf5WReCJjjvvbYFXoo/LO2w8g1ThT0sobbkDVyBMGS7\n", "li035ElNgdk=\n") + str);
            } catch (C0386 e) {
                m8508();
                StringBuilder sb = new StringBuilder();
                sb.append(e.getMessage());
                throw new C0393(AbstractC0343.m8497("6A==\n", "0qgj7TEhzBM=\n", sb, str));
            } catch (BadPaddingException e2) {
                m8508();
                StringBuilder sb2 = new StringBuilder();
                sb2.append(e2.getMessage());
                throw new C0393(AbstractC0343.m8497("5A==\n", "3sjnbgzg0GE=\n", sb2, str));
            }
        } catch (UnsupportedEncodingException e3) {
            throw new RuntimeException(StringFog.decrypt("9luH7H8t8OXaW4fkYSv6qNpbhQ==\n", "vzXxjRNElMU=\n"), e3);
        } catch (IllegalBlockSizeException e4) {
            m8508();
            StringBuilder sb3 = new StringBuilder();
            sb3.append(e4.getMessage());
            throw new C0393(AbstractC0343.m8497("pA==\n", "nkI2dKENP9o=\n", sb3, str));
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8508() {
        try {
            String str = f1462;
            Cipher cipher = Cipher.getInstance(str);
            this.f1466 = cipher;
            SecretKeySpec secretKeySpec = this.f1464;
            byte[] bArr = f1461;
            cipher.init(1, secretKeySpec, new IvParameterSpec(bArr));
            Cipher cipher2 = Cipher.getInstance(str);
            this.f1465 = cipher2;
            cipher2.init(2, this.f1464, new IvParameterSpec(bArr));
        } catch (GeneralSecurityException e) {
            throw new RuntimeException(StringFog.decrypt("iw58iAkwoXynDnyAFzarMacOfslX\n", "wmAK6WVZxVw=\n"), e);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final synchronized String m8507(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        try {
            try {
                return AbstractC0389.m8504(this.f1466.doFinal((f1460 + str).getBytes(f1463)));
            } catch (GeneralSecurityException e) {
                m8508();
                throw new RuntimeException(StringFog.decrypt("gm2i2CKQRouubaLQPJZMxq5toA==\n", "ywPUuU75Iqs=\n"), e);
            }
        } catch (UnsupportedEncodingException e2) {
            m8508();
            throw new RuntimeException(StringFog.decrypt("K40SVlJTd48HjRJeTFV9wgeNEA==\n", "YuNkNz46E68=\n"), e2);
        }
    }
}
