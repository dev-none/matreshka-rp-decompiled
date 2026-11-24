package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﹹ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1062 extends AbstractC1038 implements MediaPlayer.OnSeekCompleteListener {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f3818 = StringFog.decrypt("pjRM2gHZOVKEKnPaENc2VJouetEBwD5YijVt3hDdCA==\n", "6Vofv2Syej0=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final InterfaceC1068 f3819;

    public C1062(MediaPlayer.OnSeekCompleteListener onSeekCompleteListener, InterfaceC1068 interfaceC1068) {
        super(onSeekCompleteListener);
        this.f3819 = interfaceC1068;
    }

    @Override // android.media.MediaPlayer.OnSeekCompleteListener
    public final void onSeekComplete(MediaPlayer mediaPlayer) {
        try {
            this.f3819.mo8434(this, mediaPlayer);
        } catch (Throwable th) {
            AbstractC1104.m8887(f3818, StringFog.decrypt("si9kcQDmkrvXMEJ8Pq+IoZIzc2xSqZWGkjh9XR2ri7mSKXM=\n", "910WHnLG+9U=\n"), th, false);
        }
        Object obj = this.f3771;
        if (obj != null) {
            ((MediaPlayer.OnSeekCompleteListener) obj).onSeekComplete(mediaPlayer);
        }
    }
}
