package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʏ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0270 implements InterfaceC0203 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f968;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ List f969;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f970;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f971;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f972;

    public C0270(C1137 c1137, C0944 c0944, C0704 c0704, C1013 c1013, List list) {
        this.f968 = c1137;
        this.f972 = c0944;
        this.f971 = c0704;
        this.f970 = c1013;
        this.f969 = list;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0203
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8439(ViewOnClickListenerC0201 viewOnClickListenerC0201, View view) {
        C0944 c0944 = this.f972;
        C0704 c0704 = this.f971;
        C1013 c1013 = this.f970;
        ArrayList arrayListM8913 = C1137.m8913(this.f968, this.f969, new Object[]{this, viewOnClickListenerC0201, view});
        c0944.getClass();
        c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913);
    }
}
