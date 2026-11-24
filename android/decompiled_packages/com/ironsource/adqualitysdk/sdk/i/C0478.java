package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڐ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0478 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0455 f1758;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ MediaPlayer f1759;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C1062 f1760;

    public C0478(C0455 c0455, C1062 c1062, MediaPlayer mediaPlayer) {
        this.f1758 = c0455;
        this.f1760 = c1062;
        this.f1759 = mediaPlayer;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        this.f1758.f1722.mo8434(this.f1760, this.f1759);
    }
}
