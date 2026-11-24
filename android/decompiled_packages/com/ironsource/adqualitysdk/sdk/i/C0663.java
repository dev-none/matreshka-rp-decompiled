package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import java.util.Collections;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ᓒ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0663 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0622 f2291;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Activity f2292;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f2293;

    public C0663(C0622 c0622, String str, Activity activity) {
        this.f2291 = c0622;
        this.f2293 = str;
        this.f2292 = activity;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C1013.m8856(this.f2291.f2167, this.f2293, false, false, Collections.singletonList(this.f2292));
    }
}
