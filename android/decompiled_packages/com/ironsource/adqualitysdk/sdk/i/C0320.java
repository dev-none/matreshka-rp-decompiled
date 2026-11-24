package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Γ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0320 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0319 f1181;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ MediaPlayer f1182;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0195 f1183;

    public C0320(C0319 c0319, C0195 c0195, MediaPlayer mediaPlayer) {
        this.f1181 = c0319;
        this.f1183 = c0195;
        this.f1182 = mediaPlayer;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f1181.f1180.mo8435(this.f1183, this.f1182);
    }
}
