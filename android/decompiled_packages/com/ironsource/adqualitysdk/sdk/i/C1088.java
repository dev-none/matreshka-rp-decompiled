package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﺫ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1088 extends AbstractC1038 implements MediaPlayer.OnPreparedListener {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f3876 = StringFog.decrypt("HON6nWbPQsI26WaGcMtG3jb/bopg0FHRJ+JY\n", "U40q7wO/I7A=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final InterfaceC1111 f3877;

    public C1088(MediaPlayer.OnPreparedListener onPreparedListener, InterfaceC1111 interfaceC1111) {
        super(onPreparedListener);
        this.f3877 = interfaceC1111;
    }

    @Override // android.media.MediaPlayer.OnPreparedListener
    public final void onPrepared(MediaPlayer mediaPlayer) {
        try {
            this.f3877.mo8437(this, mediaPlayer);
        } catch (Throwable th) {
            AbstractC1104.m8887(f3876, StringFog.decrypt("TsPTnyCeCk4r3PWSHtcQVG7fxIJy0Q1wedTRkSDbBw==\n", "C7Gh8FK+YyA=\n"), th, false);
        }
        Object obj = this.f3771;
        if (obj != null) {
            ((MediaPlayer.OnPreparedListener) obj).onPrepared(mediaPlayer);
        }
    }
}
