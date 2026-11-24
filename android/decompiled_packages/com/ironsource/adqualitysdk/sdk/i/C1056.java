package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹲ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1056 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final String f3807;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final int f3808;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f3809;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f3810;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f3811;

    public C1056(String str, String str2, String str3, int i, String str4) {
        this.f3811 = str;
        this.f3810 = str2;
        this.f3809 = str3;
        this.f3808 = i;
        this.f3807 = str4;
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.f3811);
        sb.append(StringFog.decrypt("JQ==\n", "C5UGaMmdBNM=\n"));
        sb.append(this.f3810);
        sb.append(StringFog.decrypt("JA==\n", "DElaaJSRCMY=\n"));
        sb.append(this.f3809);
        sb.append(StringFog.decrypt("GQ==\n", "I5Ke4H7VLgA=\n"));
        sb.append(this.f3808);
        String strM8850 = AbstractC0970.m8850("Dg==\n", "J1yv7bOdANs=\n", sb);
        if (this.f3807 == null) {
            return strM8850;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(strM8850);
        sb2.append(StringFog.decrypt("5AU=\n", "xDkehkGXy+s=\n"));
        sb2.append(this.f3807);
        return AbstractC0970.m8850("+A==\n", "xiKm730iFXw=\n", sb2);
    }
}
