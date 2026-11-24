package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ī, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0184 extends AbstractC1038 implements MediaPlayer.OnInfoListener {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f762 = StringFog.decrypt("8lqvkDemUa/OQIOQNLtZo95blJ8lpm8=\n", "vTTm/lHJHcY=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final InterfaceC0186 f763;

    public C0184(MediaPlayer.OnInfoListener onInfoListener, InterfaceC0186 interfaceC0186) {
        super(onInfoListener);
        this.f763 = interfaceC0186;
    }

    @Override // android.media.MediaPlayer.OnInfoListener
    public final boolean onInfo(MediaPlayer mediaPlayer, int i, int i2) {
        try {
            this.f763.mo8436(this, mediaPlayer, i, i2);
        } catch (Throwable th) {
            AbstractC1104.m8887(f762, StringFog.decrypt("0od3/E/slIW3mFHxcaWOn/KbYOEdo5Oi+ZNq\n", "l/UFkz3M/es=\n"), th, false);
        }
        Object obj = this.f3771;
        if (obj != null) {
            return ((MediaPlayer.OnInfoListener) obj).onInfo(mediaPlayer, i, i2);
        }
        return false;
    }
}
