package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;

/* JADX INFO: loaded from: classes6.dex */
public final class K0 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ L0 f221;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ boolean f222;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ String f223;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ WebView f224;

    public K0(L0 l0, WebView webView, String str, boolean z) {
        this.f221 = l0;
        this.f224 = webView;
        this.f223 = str;
        this.f222 = z;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        AbstractC1766n.m8388(new J0(this, this.f224.getOriginalUrl(), this.f221.f226.mo8336(this.f224)));
    }
}
