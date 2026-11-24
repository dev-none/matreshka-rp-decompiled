package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹰ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1054 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3802;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3803;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3804;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3805;

    public C1054(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, KeyEvent.Callback callback) {
        this.f3805 = interfaceC0510;
        this.f3804 = jSONObject;
        this.f3803 = view;
        this.f3802 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3805.mo8335(this.f3804, this.f3803, this.f3802);
    }
}
