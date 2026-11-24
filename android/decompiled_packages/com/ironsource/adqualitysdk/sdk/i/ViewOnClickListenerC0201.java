package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ŀ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class ViewOnClickListenerC0201 extends AbstractC1038 implements View.OnClickListener {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f860 = StringFog.decrypt("8eZqpcjY9iXX+12sz97vLdvrRrvAz/Ib\n", "vogpyaG7nWk=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final InterfaceC0203 f861;

    public ViewOnClickListenerC0201(View.OnClickListener onClickListener, InterfaceC0203 interfaceC0203) {
        super(onClickListener);
        this.f861 = interfaceC0203;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        try {
            this.f861.mo8439(this, view);
        } catch (Throwable th) {
            AbstractC1104.m8887(f860, StringFog.decrypt("J5EYyOMFgeNCjj7F3Uyb+QeND9WxSobODooJzA==\n", "YuNqp5El6I0=\n"), th, false);
        }
        Object obj = this.f3771;
        if (obj != null) {
            ((View.OnClickListener) obj).onClick(view);
        }
    }
}
