package com.ironsource.adqualitysdk.sdk.i;

import android.view.MotionEvent;
import android.view.View;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ȓ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0237 implements InterfaceC1049 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f923;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ List f924;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f925;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f926;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f927;

    public C0237(C1137 c1137, C0944 c0944, C0704 c0704, C1013 c1013, List list) {
        this.f923 = c1137;
        this.f927 = c0944;
        this.f926 = c0704;
        this.f925 = c1013;
        this.f924 = list;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1049
    /* JADX INFO: renamed from: ﾒ */
    public final boolean mo8440(ViewOnTouchListenerC1045 viewOnTouchListenerC1045, View view, MotionEvent motionEvent) {
        C0944 c0944 = this.f927;
        C0704 c0704 = this.f926;
        C1013 c1013 = this.f925;
        ArrayList arrayListM8913 = C1137.m8913(this.f923, this.f924, new Object[]{this, viewOnTouchListenerC1045, view, motionEvent});
        c0944.getClass();
        return c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913).m8737();
    }
}
