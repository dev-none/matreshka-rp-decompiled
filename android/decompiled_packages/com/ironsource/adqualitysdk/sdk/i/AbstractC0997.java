package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.nio.charset.Charset;
import java.util.Arrays;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.וּ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0997 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final Charset f3538 = Charset.forName(StringFog.decrypt("jI6+Lww=\n", "2dr4AjQlbgw=\n"));

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static byte[] m8852(byte[] bArr, C1009 c1009, C0913 c0913) {
        if (bArr.length < 29) {
            StringBuilder sb = new StringBuilder();
            sb.append(StringFog.decrypt("ocV9RDeyzNzT1GFbeK/X1oHUNBQ=\n", "86AONFjcv7k=\n"));
            sb.append(bArr.length);
            throw new IllegalArgumentException(AbstractC0970.m8850("wof0kscq\n", "4uWN5qJZrSg=\n", sb));
        }
        int i = (bArr[0] & 255) + 1;
        if (i > bArr.length) {
            throw new IllegalArgumentException(StringFog.decrypt("3UJ//BUnZYKvU375FCp3k+pDLO0OaXiI4URp\n", "jycMjHpJFuc=\n"));
        }
        byte[] bArrCopyOfRange = Arrays.copyOfRange(bArr, 1, i);
        byte[] bArrCopyOfRange2 = Arrays.copyOfRange(bArr, i, bArr.length);
        if (bArrCopyOfRange2.length < 16) {
            throw new IllegalArgumentException(StringFog.decrypt("EBwOUDnehqFiDQ9VONOUsCcdXUEikJatMhEYUiLVjbA=\n", "Qnl9IFaw9cQ=\n"));
        }
        c0913.getClass();
        byte[] bArr2 = C0913.f3231;
        byte[] bArr3 = new byte[bArr2.length + 3];
        System.arraycopy(bArr2, 0, bArr3, 0, bArr2.length);
        bArr3[bArr2.length] = (byte) 0;
        bArr3[bArr2.length + 1] = (byte) 1;
        bArr3[bArr2.length + 2] = (byte) 2;
        return c0913.m8796(c0913.m8795(c1009.f3648, bArrCopyOfRange, bArr3), bArrCopyOfRange, bArrCopyOfRange2, c1009.f3649.getBytes(f3538));
    }
}
