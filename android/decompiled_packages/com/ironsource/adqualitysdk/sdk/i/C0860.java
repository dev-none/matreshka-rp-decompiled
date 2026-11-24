package com.ironsource.adqualitysdk.sdk.i;

import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ḹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0860 implements InterfaceC1049 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0806 f3080;

    public C0860(C0806 c0806) {
        this.f3080 = c0806;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1049
    /* JADX INFO: renamed from: ﾒ */
    public final boolean mo8440(ViewOnTouchListenerC1045 viewOnTouchListenerC1045, View view, MotionEvent motionEvent) {
        C0806.m8726(this.f3080, motionEvent);
        return true;
    }
}
