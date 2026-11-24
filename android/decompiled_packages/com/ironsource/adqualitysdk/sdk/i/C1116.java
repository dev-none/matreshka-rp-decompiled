package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.＿, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1116 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3946;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ Q0 f3947;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3948;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3949;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3950;

    public C1116(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, Q0 q0, KeyEvent.Callback callback) {
        this.f3950 = interfaceC0510;
        this.f3949 = jSONObject;
        this.f3948 = view;
        this.f3947 = q0;
        this.f3946 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3950.mo8362(this.f3949, this.f3948, this.f3947, this.f3946);
    }
}
