package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Arrays;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ɜ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0245 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final byte[] f933;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] f934;

    public C0245(byte[] bArr, byte[] bArr2) {
        this.f934 = bArr;
        this.f933 = bArr2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C0245)) {
            return false;
        }
        C0245 c0245 = (C0245) obj;
        return Arrays.equals(this.f934, c0245.f934) && Arrays.equals(this.f933, c0245.f933);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f933) + (Arrays.hashCode(this.f934) * 31);
    }

    public final String toString() {
        return StringFog.decrypt("oM17KYY8etSJ9nY1uzhhx57NYSWdOHzQrthqDpItbcbY\n", "5b0TTOtZCLU=\n") + Arrays.toString(this.f934) + StringFog.decrypt("MbIi51bRdepW9yvQTcl5+iA=\n", "HZJSkjS9HIk=\n") + Arrays.toString(this.f933) + '}';
    }
}
