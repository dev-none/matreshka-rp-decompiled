package com.ironsource.adqualitysdk.sdk.i;

import android.media.MediaPlayer;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ĺ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0195 extends AbstractC1038 implements MediaPlayer.OnCompletionListener {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f796 = StringFog.decrypt("/6YNeTJG8IjEoSF4E1/vmdWmK2QbU/+Cwqk6eS0=\n", "sMhOFl82nO0=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final InterfaceC0197 f797;

    public C0195(MediaPlayer.OnCompletionListener onCompletionListener, InterfaceC0197 interfaceC0197) {
        super(onCompletionListener);
        this.f797 = interfaceC0197;
    }

    @Override // android.media.MediaPlayer.OnCompletionListener
    public final void onCompletion(MediaPlayer mediaPlayer) {
        try {
            this.f797.mo8435(this, mediaPlayer);
        } catch (Throwable th) {
            AbstractC1104.m8887(f796, StringFog.decrypt("IageOePv5MNEtzg03ab+2QG0CSSxoOPuC7ccOvS75MIK\n", "ZNpsVpHPja0=\n"), th, false);
        }
        Object obj = this.f3771;
        if (obj != null) {
            ((MediaPlayer.OnCompletionListener) obj).onCompletion(mediaPlayer);
        }
    }
}
