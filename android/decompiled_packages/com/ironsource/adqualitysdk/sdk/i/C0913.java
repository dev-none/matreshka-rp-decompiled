package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.math.BigInteger;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.security.GeneralSecurityException;
import java.security.KeyFactory;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.SecureRandom;
import java.security.interfaces.ECPrivateKey;
import java.security.interfaces.ECPublicKey;
import java.security.spec.ECGenParameterSpec;
import java.security.spec.ECParameterSpec;
import java.security.spec.ECPoint;
import java.security.spec.ECPrivateKeySpec;
import java.security.spec.ECPublicKeySpec;
import java.util.Arrays;
import javax.crypto.Cipher;
import javax.crypto.KeyAgreement;
import javax.crypto.Mac;
import javax.crypto.spec.GCMParameterSpec;
import javax.crypto.spec.SecretKeySpec;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ῒ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0913 {

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final byte[] f3231;

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final byte[] f3232;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final SecureRandom f3238 = new SecureRandom();

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String f3237 = StringFog.decrypt("y+U=\n", "jqb1BgsWtlQ=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f3236 = StringFog.decrypt("45Q/KA==\n", "ptd7YFZYcGQ=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f3235 = StringFog.decrypt("EPAnNMM1BAttqw==\n", "WJ1GV5B9RTk=\n");

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f3234 = StringFog.decrypt("f+ubKXG8IfFwwZhnUpsFsFk=\n", "Pq7IBjb/bN4=\n");

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f3233 = StringFog.decrypt("Qv6iS3oe4sAA\n", "MZvBO0gr1LI=\n");

    static {
        String strDecrypt = StringFog.decrypt("vj1KMNaJPo+qOU8l\n", "63wOYfv/D6I=\n");
        Charset charset = StandardCharsets.US_ASCII;
        f3232 = strDecrypt.getBytes(charset);
        f3231 = StringFog.decrypt("QI0NFJ9RQa9HiRoV\n", "FcxJRbIncII=\n").getBytes(charset);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0263 m8792(byte[] bArr, byte[] bArr2, byte[] bArr3, byte[] bArr4) {
        if (bArr.length != 32) {
            throw new IllegalArgumentException(StringFog.decrypt("D/B55VXXkF0jwFmxHtCMXX2HCqdHxowOYpVNqkqS\n", "TrUqxT6y6X0=\n") + bArr.length);
        }
        if (bArr2.length != 12) {
            throw new IllegalArgumentException(StringFog.decrypt("XBxDfEbdruZ+f2MpW8bg535/P24I0LnxfiwifE/dtKU=\n", "G18OXCiywIU=\n") + bArr2.length);
        }
        try {
            Cipher cipher = Cipher.getInstance(f3234);
            cipher.init(1, new SecretKeySpec(bArr, StringFog.decrypt("6KVN\n", "qeAew+d5uP0=\n")), new GCMParameterSpec(128, bArr2));
            cipher.updateAAD(bArr4);
            return new C0263(cipher.doFinal(bArr3));
        } catch (GeneralSecurityException e) {
            throw new RuntimeException(StringFog.decrypt("iE+DcYn44b+sZLMut8vY9qZk8Dqv0sD6rQ==\n", "yQrQXM67rJ8=\n"), e);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0245 m8793() {
        try {
            KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance(f3237);
            keyPairGenerator.initialize(new ECGenParameterSpec(f3233), this.f3238);
            KeyPair keyPairGenerateKeyPair = keyPairGenerator.generateKeyPair();
            ECPrivateKey eCPrivateKey = (ECPrivateKey) keyPairGenerateKeyPair.getPrivate();
            ECPublicKey eCPublicKey = (ECPublicKey) keyPairGenerateKeyPair.getPublic();
            byte[] bArrM8791 = m8791(eCPrivateKey.getS());
            ECPoint w = eCPublicKey.getW();
            byte[] bArrM8792 = m8791(w.getAffineX());
            byte[] bArrM8793 = m8791(w.getAffineY());
            byte[] bArr = new byte[65];
            bArr[0] = 4;
            System.arraycopy(bArrM8792, 0, bArr, 1, 32);
            System.arraycopy(bArrM8793, 0, bArr, 33, 32);
            return new C0245(bArrM8791, bArr);
        } catch (GeneralSecurityException e) {
            throw new RuntimeException(StringFog.decrypt("UJy/eC2obi953bFxJqk8OmKY9nE4pCs2c4+3eGinKyI2jbd9Og==\n", "Fv3WFEjMTls=\n"), e);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] m8794(byte[] bArr, byte[] bArr2) {
        if (bArr.length == 32) {
            if (bArr2.length == 65) {
                if (bArr2[0] == 4) {
                    try {
                        String str = f3237;
                        KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance(str);
                        keyPairGenerator.initialize(new ECGenParameterSpec(f3233));
                        ECParameterSpec params = ((ECPublicKey) keyPairGenerator.generateKeyPair().getPublic()).getParams();
                        ECPrivateKey eCPrivateKey = (ECPrivateKey) KeyFactory.getInstance(str).generatePrivate(new ECPrivateKeySpec(new BigInteger(1, bArr), params));
                        ECPublicKey eCPublicKeyM8790 = m8790(bArr2, params);
                        KeyAgreement keyAgreement = KeyAgreement.getInstance(f3236);
                        keyAgreement.init(eCPrivateKey);
                        keyAgreement.doPhase(eCPublicKeyM8790, true);
                        byte[] bArrGenerateSecret = keyAgreement.generateSecret();
                        if (bArrGenerateSecret.length == 32) {
                            return bArrGenerateSecret;
                        }
                        if (bArrGenerateSecret.length < 32) {
                            byte[] bArr3 = new byte[32];
                            System.arraycopy(bArrGenerateSecret, 0, bArr3, 32 - bArrGenerateSecret.length, bArrGenerateSecret.length);
                            return bArr3;
                        }
                        if (bArrGenerateSecret.length == 65 && bArrGenerateSecret[0] == 4) {
                            return Arrays.copyOfRange(bArrGenerateSecret, 1, 33);
                        }
                        return Arrays.copyOfRange(bArrGenerateSecret, bArrGenerateSecret.length - 32, bArrGenerateSecret.length);
                    } catch (GeneralSecurityException e) {
                        throw new RuntimeException(StringFog.decrypt("KQcdKA2W+GpMJT4SSJjwdgIweQZMlPF2CA==\n", "bERZYC39nRM=\n"), e);
                    }
                }
                throw new IllegalArgumentException(StringFog.decrypt("uV8GtCSfYYWMU0S1OI81zppeBao53DaHnUJE6DXMdQ==\n", "6Spk2E38Qe4=\n"));
            }
            throw new IllegalArgumentException(StringFog.decrypt("1EIuOEwp31jhTmw5UDmLE+ZSbGIQap1K8FI/dA0/kVDrWjwmQDmMVuAeYHRCJYsT\n", "hDdMVCVK/zM=\n") + bArr2.length);
        }
        throw new IllegalArgumentException(StringFog.decrypt("O474hc07C+UAmejTwTodsUue9NOffU6nEoj0gIBvCaof3A==\n", "a/yR86xPbsU=\n") + bArr.length);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] m8796(byte[] bArr, byte[] bArr2, byte[] bArr3, byte[] bArr4) {
        if (bArr.length == 32) {
            if (bArr2.length == 12) {
                if (bArr3.length >= 16) {
                    try {
                        Cipher cipher = Cipher.getInstance(f3234);
                        cipher.init(2, new SecretKeySpec(bArr, StringFog.decrypt("NkqJ\n", "dw/ajMD1Cpc=\n")), new GCMParameterSpec(128, bArr2));
                        cipher.updateAAD(bArr4);
                        return cipher.doFinal(bArr3);
                    } catch (GeneralSecurityException e) {
                        throw new RuntimeException(StringFog.decrypt("zQDlyz8bvCroINWUASiFY+MrloAZMZ1v6A==\n", "jEW25nhY8Qo=\n"), e);
                    }
                }
                throw new IllegalArgumentException(StringFog.decrypt("62XBDeUOobDQeJES6Qi99dxt1kXtCaahiG7UReEI9bnNbcIRoE3j9cp1xQDz\n", "qAyxZYB81dU=\n"));
            }
            throw new IllegalArgumentException(StringFog.decrypt("P5deUbyjXKEd9H4EobgSoB30IkPyrku2Hac/UbWjRuI=\n", "eNQTcdLMMsI=\n") + bArr2.length);
        }
        throw new IllegalArgumentException(StringFog.decrypt("ctKDUQXfutxe4qMFTtim3ACl8BMXzqaPH7e3Hhqa\n", "M5fQcW66w/w=\n") + bArr.length);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] m8795(byte[] bArr, byte[] bArr2, byte[] bArr3) {
        try {
            String str = f3235;
            Mac mac = Mac.getInstance(str);
            mac.init(new SecretKeySpec(bArr2, str));
            byte[] bArrDoFinal = mac.doFinal(bArr);
            byte[] bArr4 = new byte[bArr3.length + 1];
            System.arraycopy(bArr3, 0, bArr4, 0, bArr3.length);
            bArr4[bArr3.length] = 1;
            Mac mac2 = Mac.getInstance(str);
            mac2.init(new SecretKeySpec(bArrDoFinal, str));
            return mac2.doFinal(bArr4);
        } catch (GeneralSecurityException e) {
            throw new RuntimeException(StringFog.decrypt("MLQQMXhFYHhYmzEFMVhkdRGQOlc+T2xtHZs=\n", "eP9Ud1guBQE=\n"), e);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static ECPublicKey m8790(byte[] bArr, ECParameterSpec eCParameterSpec) {
        if (bArr.length == 65 && bArr[0] == 4) {
            return (ECPublicKey) KeyFactory.getInstance(f3237).generatePublic(new ECPublicKeySpec(new ECPoint(new BigInteger(1, Arrays.copyOfRange(bArr, 1, 33)), new BigInteger(1, Arrays.copyOfRange(bArr, 33, 65))), eCParameterSpec));
        }
        throw new IllegalArgumentException(StringFog.decrypt("9DkJFZpU53fIORwbm03xMs4kGhDWeMB3zTgWGoI=\n", "vVd/dPY9g1c=\n"));
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static byte[] m8791(BigInteger bigInteger) {
        byte[] byteArray = bigInteger.toByteArray();
        if (byteArray.length == 32) {
            return byteArray;
        }
        if (byteArray.length > 32) {
            return Arrays.copyOfRange(byteArray, byteArray.length - 32, byteArray.length);
        }
        byte[] bArr = new byte[32];
        System.arraycopy(byteArray, 0, bArr, 32 - byteArray.length, byteArray.length);
        return bArr;
    }
}
