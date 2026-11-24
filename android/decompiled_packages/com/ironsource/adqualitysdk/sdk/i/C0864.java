package com.ironsource.adqualitysdk.sdk.i;

import android.view.ViewGroup;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ḽ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0864 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ ViewOnLayoutChangeListenerC0875 f3083;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0867 f3084;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ViewGroup f3085;

    public C0864(ViewGroup viewGroup, C0867 c0867, ViewOnLayoutChangeListenerC0875 viewOnLayoutChangeListenerC0875) {
        this.f3085 = viewGroup;
        this.f3084 = c0867;
        this.f3083 = viewOnLayoutChangeListenerC0875;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f3085.addView(this.f3084, new ViewGroup.LayoutParams(-1, -1));
        this.f3085.removeOnLayoutChangeListener(this.f3083);
        this.f3085.addOnLayoutChangeListener(this.f3083);
    }
}
