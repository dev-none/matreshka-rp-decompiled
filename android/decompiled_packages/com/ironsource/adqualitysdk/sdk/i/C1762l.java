package com.ironsource.adqualitysdk.sdk.i;

import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.l, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes6.dex */
public final class C1762l extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f429;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f430;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f431;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ List f432;

    public C1762l(List list, C0944 c0944, C0704 c0704, C1013 c1013) {
        this.f432 = list;
        this.f431 = c0944;
        this.f430 = c0704;
        this.f429 = c1013;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f432.add(0, this);
        C0944 c0944 = this.f431;
        C0704 c0704 = this.f430;
        C1013 c1013 = this.f429;
        List list = this.f432;
        c0944.getClass();
        c0944.m8820(c0704, c0704.f2434, c1013, list);
        this.f432.remove(0);
    }
}
