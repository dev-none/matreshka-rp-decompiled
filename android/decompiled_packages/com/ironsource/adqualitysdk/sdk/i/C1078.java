package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺗ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1078 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3862;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3863;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3864;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3865;

    public C1078(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, KeyEvent.Callback callback) {
        this.f3865 = interfaceC0510;
        this.f3864 = jSONObject;
        this.f3863 = view;
        this.f3862 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3865.mo8357(this.f3864, this.f3863, this.f3862);
    }
}
