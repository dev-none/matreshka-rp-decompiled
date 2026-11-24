package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﯩ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1047 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3789;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3790;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3791;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3792;

    public C1047(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, KeyEvent.Callback callback) {
        this.f3792 = interfaceC0510;
        this.f3791 = jSONObject;
        this.f3790 = view;
        this.f3789 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3792.mo8351(this.f3791, this.f3790, this.f3789);
    }
}
