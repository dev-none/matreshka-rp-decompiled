package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Į, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0187 implements InterfaceC0186 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f769;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ List f770;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f771;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f772;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f773;

    public C0187(C1137 c1137, C0944 c0944, C0704 c0704, C1013 c1013, List list) {
        this.f769 = c1137;
        this.f773 = c0944;
        this.f772 = c0704;
        this.f771 = c1013;
        this.f770 = list;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0186
    /* JADX INFO: renamed from: ﾒ */
    public final boolean mo8436(C0184 c0184, MediaPlayer mediaPlayer, int i, int i2) {
        C0944 c0944 = this.f773;
        C0704 c0704 = this.f772;
        C1013 c1013 = this.f771;
        ArrayList arrayListM8913 = C1137.m8913(this.f769, this.f770, new Object[]{this, c0184, mediaPlayer, Integer.valueOf(i), Integer.valueOf(i2)});
        c0944.getClass();
        return c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913).m8737();
    }
}
