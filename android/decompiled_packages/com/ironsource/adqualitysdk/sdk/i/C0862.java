package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ḻ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0862 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final ConcurrentHashMap f3081 = new ConcurrentHashMap();

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] m8738() {
        C0868 c0868 = (C0868) this.f3081.get(1);
        if (c0868 != null) {
            byte[] bArrM8741 = c0868.m8741();
            byte[] bArr = new byte[bArrM8741.length];
            System.arraycopy(bArrM8741, 0, bArr, 0, bArrM8741.length);
            return bArr;
        }
        throw new IllegalArgumentException(StringFog.decrypt("3RypX+L36oHhU+JJ/qX6i+Yd7Qzh6u7E+BbwDM7BpsQ=\n", "k3OJLIeFnOQ=\n") + 1);
    }
}
