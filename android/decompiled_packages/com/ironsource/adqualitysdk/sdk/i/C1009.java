package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.וֹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1009 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final long f3647;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final byte[] f3648;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f3649;

    public C1009(String str, byte[] bArr, long j) {
        this.f3649 = str;
        this.f3648 = bArr;
        this.f3647 = j;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof C1009) {
            return this.f3649.equals(((C1009) obj).f3649);
        }
        return false;
    }

    public final int hashCode() {
        return this.f3649.hashCode();
    }

    public final String toString() {
        return StringFog.decrypt("XIBq6pDzUsVrlmj2mu5d5GuUbvqG9G/yM8I=\n", "DuUbn/WAJpY=\n") + this.f3649 + '\'' + StringFog.decrypt("gGyiTK6QOhc=\n", "rEzJKdfZXio=\n") + 1 + StringFog.decrypt("TuBkKDR43BYQrSk=\n", "YsAURFUMunk=\n") + 2 + StringFog.decrypt("rHeARO+XXtLkFpd7+cs=\n", "gFfjNor2Krc=\n") + this.f3647 + '}';
    }
}
