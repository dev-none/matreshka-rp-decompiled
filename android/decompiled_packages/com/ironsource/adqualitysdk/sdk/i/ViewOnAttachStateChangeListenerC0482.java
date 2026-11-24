package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ڔ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class ViewOnAttachStateChangeListenerC0482 implements View.OnAttachStateChangeListener {

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f1765;

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f1766;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f1767;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ boolean f1768;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ List f1769;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f1770;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f1771;

    public ViewOnAttachStateChangeListenerC0482(C1137 c1137, C0944 c0944, C0944 c0945, List list, boolean z, C0704 c0704, C1013 c1013) {
        this.f1765 = c1137;
        this.f1771 = c0944;
        this.f1770 = c0945;
        this.f1769 = list;
        this.f1768 = z;
        this.f1767 = c0704;
        this.f1766 = c1013;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View view) {
        m8547(this.f1771, view);
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View view) {
        m8547(this.f1770, view);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final void m8547(C0944 c0944, View view) {
        try {
            ArrayList arrayListM8913 = C1137.m8913(this.f1765, this.f1769, new Object[]{this, view});
            if (!this.f1768) {
                AbstractC1766n.m8385(new C0503(this, c0944, arrayListM8913));
                return;
            }
            C0704 c0704 = this.f1767;
            C1013 c1013 = this.f1766;
            c0944.getClass();
            c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913);
        } catch (Throwable th) {
            AbstractC1104.m8887(this.f1766.m8859(), StringFog.decrypt("23h+dXHWn3++RWJbd4KXcvZZeHt3k7V5/2Rrf0+fhWX7ZGloI5+YYvduaTo=\n", "ngoMGgP29hE=\n") + c0944.f3335, th, false);
        }
    }
}
