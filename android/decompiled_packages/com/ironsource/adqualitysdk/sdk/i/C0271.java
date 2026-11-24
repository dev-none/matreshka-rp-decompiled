package com.ironsource.adqualitysdk.sdk.i;

import java.util.ArrayList;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʔ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0271 implements InterfaceC0369 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f973;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f974;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f975;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ ArrayList f976;

    public C0271(ArrayList arrayList, C0944 c0944, C0704 c0704, C1013 c1013) {
        this.f976 = arrayList;
        this.f975 = c0944;
        this.f974 = c0704;
        this.f973 = c1013;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0369
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8460() {
        this.f976.add(0, this);
        C0944 c0944 = this.f975;
        C0704 c0704 = this.f974;
        c0944.m8820(c0704, c0704.f2434, this.f973, this.f976);
        this.f976.remove(0);
    }
}
