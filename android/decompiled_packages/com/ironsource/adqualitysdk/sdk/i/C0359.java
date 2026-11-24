package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Г, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0359 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C0338 f1354;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ int f1355;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ int f1356;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ MediaPlayer f1357;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0184 f1358;

    public C0359(C0338 c0338, C0184 c0184, MediaPlayer mediaPlayer, int i, int i2) {
        this.f1354 = c0338;
        this.f1358 = c0184;
        this.f1357 = mediaPlayer;
        this.f1356 = i;
        this.f1355 = i2;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f1354.f1318.mo8436(this.f1358, this.f1357, this.f1356, this.f1355);
    }
}
