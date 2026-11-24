package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﯦ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1044 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3782;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3783;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3784;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3785;

    public C1044(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, KeyEvent.Callback callback) {
        this.f3785 = interfaceC0510;
        this.f3784 = jSONObject;
        this.f3783 = view;
        this.f3782 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3785.mo8363(this.f3784, this.f3783, this.f3782);
    }
}
