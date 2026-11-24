package com.ironsource.adqualitysdk.sdk.i;

import android.view.KeyEvent;
import android.view.View;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﭠ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1021 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ KeyEvent.Callback f3687;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ L0 f3688;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ View f3689;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ JSONObject f3690;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC0510 f3691;

    public C1021(InterfaceC0510 interfaceC0510, JSONObject jSONObject, View view, L0 l0, KeyEvent.Callback callback) {
        this.f3691 = interfaceC0510;
        this.f3690 = jSONObject;
        this.f3689 = view;
        this.f3688 = l0;
        this.f3687 = callback;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3691.mo8360(this.f3690, this.f3689, this.f3688, this.f3687);
    }
}
