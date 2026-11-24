package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﻳ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1110 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3937;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ Q0 f3938;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3939;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3940;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3941;

    public C1110(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, Q0 q0, KeyEvent.Callback callback) {
        this.f3941 = interfaceC0510;
        this.f3940 = jSONObject;
        this.f3939 = view;
        this.f3938 = q0;
        this.f3937 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3941.mo8356(this.f3940, this.f3939, this.f3938, this.f3937);
    }
}
