package com.ironsource.adqualitysdk.sdk.i;

import android.view.MotionEvent;
import android.view.View;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﯧ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class ViewOnTouchListenerC1045 extends AbstractC1038 implements View.OnTouchListener {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f3786 = StringFog.decrypt("QTCHxGdAb+FnLafOfEZ16Ws9vNlzV2jf\n", "Dl7TqxIjB60=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final InterfaceC1049 f3787;

    public ViewOnTouchListenerC1045(View.OnTouchListener onTouchListener, InterfaceC1049 interfaceC1049) {
        super(onTouchListener);
        this.f3787 = interfaceC1049;
    }

    @Override // android.view.View.OnTouchListener
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        try {
            this.f3787.mo8440(this, view, motionEvent);
        } catch (Throwable th) {
            AbstractC1104.m8887(f3786, StringFog.decrypt("C6ddoThI+HduuHusBgHibSu7SrxqB/9NIaBMpg==\n", "TtUvzkpokRk=\n"), th, false);
        }
        Object obj = this.f3771;
        if (obj != null) {
            return ((View.OnTouchListener) obj).onTouch(view, motionEvent);
        }
        return false;
    }
}
