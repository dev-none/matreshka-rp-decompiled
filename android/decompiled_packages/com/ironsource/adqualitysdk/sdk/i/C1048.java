package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﯾ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1048 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3793;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3794;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3795;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3796;

    public C1048(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, KeyEvent.Callback callback) {
        this.f3796 = interfaceC0510;
        this.f3795 = jSONObject;
        this.f3794 = view;
        this.f3793 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3796.mo8333(this.f3795, this.f3794, this.f3793);
    }
}
