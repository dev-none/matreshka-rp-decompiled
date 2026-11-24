package com.ironsource.adqualitysdk.sdk.i;

import android.webkit.WebView;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class I0 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ L0 f212;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ boolean f213;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ String f214;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ WebView f215;

    public I0(L0 l0, WebView webView, String str, boolean z) {
        this.f212 = l0;
        this.f215 = webView;
        this.f214 = str;
        this.f213 = z;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8327() {
        M0 m0 = this.f212.f226;
        if (m0.f233) {
            List list = m0.f236;
            if (list == null || list.isEmpty()) {
                L0 l0 = this.f212;
                WebView webView = this.f215;
                String str = this.f214;
                boolean z = this.f213;
                l0.getClass();
                AbstractC1766n.m8386(new K0(l0, webView, str, z));
                return;
            }
            Iterator it = this.f212.f226.f236.iterator();
            while (it.hasNext()) {
                if (this.f214.startsWith((String) it.next())) {
                    L0 l1 = this.f212;
                    WebView webView2 = this.f215;
                    String str2 = this.f214;
                    boolean z2 = this.f213;
                    l1.getClass();
                    AbstractC1766n.m8386(new K0(l1, webView2, str2, z2));
                    return;
                }
            }
        }
    }
}
