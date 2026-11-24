package com.ironsource.adqualitysdk.sdk.i;

import java.util.Calendar;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᴰ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0793 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0783 f2682;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ String f2683;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f2684;

    public C0793(C0783 c0783, String str, String str2) {
        this.f2682 = c0783;
        this.f2684 = str;
        this.f2683 = str2;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0783 c0783 = this.f2682;
        String str = this.f2684;
        c0783.m8724(str, this.f2683);
        StringBuilder sb = new StringBuilder();
        sb.append(str);
        String strM8850 = AbstractC0970.m8850("VNMW+pER6QgbyxI=\n", "er93ieVkmWw=\n", sb);
        String str2 = AbstractC0202.f862;
        c0783.m8724(strM8850, Long.toString(Calendar.getInstance().getTimeInMillis()));
        this.f2682.getClass();
    }
}
