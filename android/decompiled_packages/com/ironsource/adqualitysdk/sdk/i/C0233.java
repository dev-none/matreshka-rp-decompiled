package com.ironsource.adqualitysdk.sdk.i;

import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ȉ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0233 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0205 f916;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ MotionEvent f917;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ View f918;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ViewOnTouchListenerC1045 f919;

    public C0233(C0205 c0205, ViewOnTouchListenerC1045 viewOnTouchListenerC1045, View view, MotionEvent motionEvent) {
        this.f916 = c0205;
        this.f919 = viewOnTouchListenerC1045;
        this.f918 = view;
        this.f917 = motionEvent;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f916.f863.mo8440(this.f919, this.f918, this.f917);
    }
}
