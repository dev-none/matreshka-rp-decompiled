package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ɻ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0257 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0254 f945;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ View f946;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ViewOnClickListenerC0201 f947;

    public C0257(C0254 c0254, ViewOnClickListenerC0201 viewOnClickListenerC0201, View view) {
        this.f945 = c0254;
        this.f947 = viewOnClickListenerC0201;
        this.f946 = view;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f945.f941.mo8439(this.f947, this.f946);
    }
}
