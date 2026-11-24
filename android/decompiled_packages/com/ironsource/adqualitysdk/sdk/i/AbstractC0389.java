package com.ironsource.adqualitysdk.sdk.i;

import com.google.common.base.Ascii;
import com.ironsource.adqualitysdk.sdk.StringFog;
import kotlin.io.encoding.Base64;
import okio.Utf8;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ғ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0389 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final /* synthetic */ boolean f1453 = true;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final byte[] f1455 = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47};

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final byte[] f1454 = {-9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -5, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, 62, -9, -9, -9, Utf8.REPLACEMENT_BYTE, 52, 53, 54, 55, 56, 57, 58, 59, 60, Base64.padSymbol, -9, -9, -9, -1, -9, -9, -9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, Ascii.VT, Ascii.FF, Ascii.CR, Ascii.SO, Ascii.SI, Ascii.DLE, 17, Ascii.DC2, 19, Ascii.DC4, Ascii.NAK, Ascii.SYN, Ascii.ETB, Ascii.CAN, Ascii.EM, -9, -9, -9, -9, -9, -9, Ascii.SUB, Ascii.ESC, Ascii.FS, Ascii.GS, Ascii.RS, Ascii.US, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -9, -9, -9, -9, -9};

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8504(byte[] bArr) {
        int length = bArr.length;
        byte[] bArr2 = f1455;
        int i = ((length + 2) / 3) * 4;
        int i2 = (i / Integer.MAX_VALUE) + i;
        byte[] bArr3 = new byte[i2];
        int i3 = length - 2;
        int i4 = 0;
        int i5 = 0;
        int i6 = 0;
        while (i4 < i3) {
            int i7 = ((bArr[i4] << Ascii.CAN) >>> 8) | ((bArr[i4 + 1] << Ascii.CAN) >>> 16) | ((bArr[i4 + 2] << Ascii.CAN) >>> 24);
            bArr3[i5] = bArr2[i7 >>> 18];
            int i8 = i5 + 1;
            bArr3[i8] = bArr2[(i7 >>> 12) & 63];
            bArr3[i5 + 2] = bArr2[(i7 >>> 6) & 63];
            bArr3[i5 + 3] = bArr2[i7 & 63];
            i6 += 4;
            if (i6 == Integer.MAX_VALUE) {
                bArr3[i5 + 4] = 10;
                i6 = 0;
                i5 = i8;
            }
            i4 += 3;
            i5 += 4;
        }
        if (i4 < length) {
            int i9 = length - i4;
            int i10 = (i9 > 2 ? (bArr[i4 + 2] << Ascii.CAN) >>> 24 : 0) | (i9 > 0 ? (bArr[i4] << Ascii.CAN) >>> 8 : 0) | (i9 > 1 ? (bArr[i4 + 1] << Ascii.CAN) >>> 16 : 0);
            if (i9 == 1) {
                bArr3[i5] = bArr2[i10 >>> 18];
                bArr3[i5 + 1] = bArr2[(i10 >>> 12) & 63];
                bArr3[i5 + 2] = Base64.padSymbol;
                bArr3[i5 + 3] = Base64.padSymbol;
            } else if (i9 == 2) {
                bArr3[i5] = bArr2[i10 >>> 18];
                bArr3[i5 + 1] = bArr2[(i10 >>> 12) & 63];
                bArr3[i5 + 2] = bArr2[(i10 >>> 6) & 63];
                bArr3[i5 + 3] = Base64.padSymbol;
            } else if (i9 == 3) {
                bArr3[i5] = bArr2[i10 >>> 18];
                bArr3[i5 + 1] = bArr2[(i10 >>> 12) & 63];
                bArr3[i5 + 2] = bArr2[(i10 >>> 6) & 63];
                bArr3[i5 + 3] = bArr2[i10 & 63];
            }
            if (i6 + 4 == Integer.MAX_VALUE) {
                bArr3[i5 + 4] = 10;
                i5++;
            }
            i5 += 4;
        }
        if (f1453 || i5 == i2) {
            return new String(bArr3, 0, i2);
        }
        throw new AssertionError();
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static int m8503(byte[] bArr, byte[] bArr2, int i, byte[] bArr3) {
        byte b = bArr[2];
        if (b == 61) {
            bArr2[i] = (byte) ((((bArr3[bArr[1]] << Ascii.CAN) >>> 12) | ((bArr3[bArr[0]] << Ascii.CAN) >>> 6)) >>> 16);
            return 1;
        }
        byte b2 = bArr[3];
        if (b2 == 61) {
            int i2 = ((bArr3[bArr[1]] << Ascii.CAN) >>> 12) | ((bArr3[bArr[0]] << Ascii.CAN) >>> 6) | ((bArr3[b] << Ascii.CAN) >>> 18);
            bArr2[i] = (byte) (i2 >>> 16);
            bArr2[i + 1] = (byte) (i2 >>> 8);
            return 2;
        }
        int i3 = ((bArr3[bArr[1]] << Ascii.CAN) >>> 12) | ((bArr3[bArr[0]] << Ascii.CAN) >>> 6) | ((bArr3[b] << Ascii.CAN) >>> 18) | ((bArr3[b2] << Ascii.CAN) >>> 24);
        bArr2[i] = (byte) (i3 >> 16);
        bArr2[i + 1] = (byte) (i3 >> 8);
        bArr2[i + 2] = (byte) i3;
        return 3;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static byte[] m8505(String str) throws C0386 {
        byte[] bytes = str.getBytes();
        int length = bytes.length;
        byte[] bArr = f1454;
        byte[] bArr2 = new byte[((length * 3) / 4) + 2];
        byte[] bArr3 = new byte[4];
        int i = 0;
        int iM8503 = 0;
        for (int i2 = 0; i2 < length; i2++) {
            byte b = (byte) (bytes[i2] & 127);
            byte b2 = bArr[b];
            if (b2 < -5) {
                StringBuilder sb = new StringBuilder();
                sb.append(StringFog.decrypt("OehDJm3YjnNNvQdvQcmIYlvqT2dd2J5iHvsHZ1uZ\n", "e4knBi+5/RY=\n"));
                sb.append(i2);
                sb.append(StringFog.decrypt("OU8=\n", "A291IskZ3bM=\n"));
                sb.append((int) bytes[i2]);
                throw new C0386(AbstractC0970.m8850("ymb6OIP5yw3L\n", "4gKfW+qUqmE=\n", sb));
            }
            if (b2 >= -1) {
                if (b == 61) {
                    int i3 = length - i2;
                    byte b3 = (byte) (bytes[length - 1] & 127);
                    if (i == 0 || i == 1) {
                        throw new C0386(StringFog.decrypt("8kJmSQ5ddOzrTXRMC1p37PlVZE1CEy3ru01kCABNZKm7Q3ZOEVFk7A==\n", "mywQKGI0EMw=\n") + i2);
                    }
                    if ((i == 3 && i3 > 2) || (i == 4 && i3 > 1)) {
                        throw new C0386(StringFog.decrypt("x3IuaYgXyQjVaj5owV6TD5d1K2GSHMJRl2Ajao8YwluXdiRpwRbICNJ9KWKFHMoIwXImeIRZz1yX\nfCxrkhzaCA==\n", "txNKDeF5rig=\n") + i2);
                    }
                    if (b3 != 61 && b3 != 10) {
                        throw new C0386(StringFog.decrypt("GJvEKtx053kLlMsw3THrOA7VzivOcO8wGdXTN9l47zATkocnwWXm\n", "ffWnRbgRg1k=\n"));
                    }
                    break;
                    break;
                }
                int i4 = i + 1;
                bArr3[i] = b;
                if (i4 == 4) {
                    iM8503 += m8503(bArr3, bArr2, iM8503, bArr);
                    i = 0;
                } else {
                    i = i4;
                }
            }
        }
        if (i != 0) {
            if (i != 1) {
                bArr3[i] = Base64.padSymbol;
                iM8503 += m8503(bArr3, bArr2, iM8503, bArr);
            } else {
                throw new C0386(StringFog.decrypt("ZywrhmYtH/ZmJCyNYyZYonctJJNrK0vnZmUklSonWeRnIDHB\n", "FEVF4QpIP4I=\n") + (length - 1));
            }
        }
        byte[] bArr4 = new byte[iM8503];
        System.arraycopy(bArr2, 0, bArr4, 0, iM8503);
        return bArr4;
    }
}
