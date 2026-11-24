package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺏ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1072 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0783 f3855;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final String f3856;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String f3857;

    static {
        StringFog.decrypt("8YVzk2kbrI3AhXee\n", "suQQ+wxI2OI=\n");
    }

    public C1072(C0783 c0783, String str, String str2) {
        this.f3856 = str2;
        this.f3857 = str;
        this.f3855 = c0783;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8880(C1072 c1072) {
        c1072.getClass();
        StringBuilder sb = new StringBuilder();
        sb.append(StringFog.decrypt("jarQsy5B7EG8qtS+azo=\n", "zsuz20sSmC4=\n"));
        sb.append(c1072.f3857);
        return AbstractC0970.m8850("1w==\n", "/gBWFWTdqF0=\n", sb);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8881(C1141 c1141, C0873 c0873) {
        synchronized (this) {
        }
        C0783.m8721().post(new C1084(this, c1141, c0873));
    }
}
