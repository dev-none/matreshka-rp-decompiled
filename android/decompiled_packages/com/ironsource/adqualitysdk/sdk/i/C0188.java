package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.į, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0188 implements InterfaceC1111 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f774;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ List f775;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f776;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f777;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f778;

    public C0188(C1137 c1137, C0944 c0944, C0704 c0704, C1013 c1013, List list) {
        this.f774 = c1137;
        this.f778 = c0944;
        this.f777 = c0704;
        this.f776 = c1013;
        this.f775 = list;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC1111
    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void mo8437(C1088 c1088, MediaPlayer mediaPlayer) {
        C0944 c0944 = this.f778;
        C0704 c0704 = this.f777;
        C1013 c1013 = this.f776;
        ArrayList arrayListM8913 = C1137.m8913(this.f774, this.f775, new Object[]{this, c1088, mediaPlayer});
        c0944.getClass();
        c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913);
    }
}
