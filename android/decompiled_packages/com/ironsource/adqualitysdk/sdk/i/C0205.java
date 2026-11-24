package com.ironsource.adqualitysdk.sdk.i;

import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ŕ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0205 implements InterfaceC1049 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ InterfaceC1049 f863;

    public C0205(InterfaceC1049 interfaceC1049) {
        this.f863 = interfaceC1049;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1049
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final boolean mo8440(ViewOnTouchListenerC1045 viewOnTouchListenerC1045, View view, MotionEvent motionEvent) {
        AbstractC1766n.m8385(new C0233(this, viewOnTouchListenerC1045, view, motionEvent));
        return false;
    }
}
