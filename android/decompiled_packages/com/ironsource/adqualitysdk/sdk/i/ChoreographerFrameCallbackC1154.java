package com.ironsource.adqualitysdk.sdk.i;

import android.view.Choreographer;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾄ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class ChoreographerFrameCallbackC1154 implements Choreographer.FrameCallback {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C1151 f4055;

    public ChoreographerFrameCallbackC1154(C1151 c1151) {
        this.f4055 = c1151;
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        try {
            AbstractC1766n.m8388(this.f4055);
        } catch (Throwable th) {
            String strDecrypt = StringFog.decrypt("ZPBRFUcBGcRcx0Qr\n", "JZQAYCZtcLA=\n");
            AbstractC0323.m8479(strDecrypt, strDecrypt, StringFog.decrypt("bM77oBFWqFNl6eCtGlc=\n", "Cq+SzHQyiDc=\n"), th, null, false);
        }
    }
}
