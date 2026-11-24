package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ҁ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0385 {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0326 f1449;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final C0392 f1450;

    public C0385(Context context, String str, String str2) {
        Context applicationContext = context.getApplicationContext();
        this.f1449 = new C0326(applicationContext, str);
        this.f1450 = new C0392(AbstractC0355.f1351, applicationContext.getPackageName(), AbstractC0267.m8459(applicationContext), str2);
    }
}
