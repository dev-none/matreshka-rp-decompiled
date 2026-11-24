package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڋ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0473 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0418 f1743;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ AbstractRunnableC0910 f1744;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ AbstractC0265 f1745;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ Context f1746;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ String f1747;

    public C0473(C0418 c0418, String str, Context context, AbstractC0265 abstractC0265, AbstractRunnableC0910 abstractRunnableC0910) {
        this.f1743 = c0418;
        this.f1747 = str;
        this.f1746 = context;
        this.f1745 = abstractC0265;
        this.f1744 = abstractRunnableC0910;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        if (this.f1743.f1535.get()) {
            return;
        }
        AbstractC1766n.m8388(new C0480(this, this.f1747.toLowerCase()));
    }
}
