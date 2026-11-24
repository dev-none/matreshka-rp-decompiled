package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.Arrays;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ṟ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0868 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] f3094;

    public C0868(byte[] bArr) {
        if (bArr.length == 65) {
            if (bArr[0] != 4) {
                throw new IllegalArgumentException(StringFog.decrypt("XB/pYURN8gZpE6tgWF2mTX8e6n9ZDqUEeAKrPVUe5k0kH+VuQkOiH2kZ+GhJDqICZQT/JA==\n", "DGqLDS0u0m0=\n"));
            }
            this.f3094 = Arrays.copyOf(bArr, bArr.length);
        } else {
            throw new IllegalArgumentException(StringFog.decrypt("AHRo2Z96KBY1eCrYg2p8XTJkKoPDOWoEJGR5ld5sZh4/bHrHk2p7GDQhWfC1KCFRcGZlwdY=\n", "UAEKtfYZCH0=\n") + Integer.valueOf(bArr.length));
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof C0868)) {
            return false;
        }
        C0868 c0868 = (C0868) obj;
        c0868.getClass();
        return Arrays.equals(this.f3094, c0868.f3094);
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f3094) + 31;
    }

    public final String toString() {
        return StringFog.decrypt("6/qwPNSX2enF5oALjA==\n", "oJ/Jb7HjooI=\n") + 1 + StringFog.decrypt("yCyGQWmqsW2vaY92crK9fdk=\n", "5Az2NAvG2A4=\n") + Arrays.toString(this.f3094) + '}';
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final byte[] m8741() {
        byte[] bArr = this.f3094;
        return Arrays.copyOf(bArr, bArr.length);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static C0868 m8740(String str) {
        if (str.startsWith(StringFog.decrypt("MGg=\n", "ABAhUfjUZdA=\n")) || str.startsWith(StringFog.decrypt("yXk=\n", "+SEWUuwEPt4=\n"))) {
            str = str.substring(2);
        }
        if (str.length() % 2 != 0) {
            throw new IllegalArgumentException(StringFog.decrypt("2fhwvuisan7/+ijz7qtsN/n8fvu7vW5y/71k+/W/bH8=\n", "kZ0InpvYGBc=\n"));
        }
        int length = str.length() / 2;
        byte[] bArr = new byte[length];
        for (int i = 0; i < length; i++) {
            int i2 = i * 2;
            bArr[i] = (byte) Integer.parseInt(str.substring(i2, i2 + 2), 16);
        }
        return new C0868(bArr);
    }
}
