package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ܢ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class ViewOnLayoutChangeListenerC0509 implements View.OnLayoutChangeListener {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public final /* synthetic */ C1137 f1810;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C1013 f1811;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ C0704 f1812;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0944 f1813;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ boolean f1814;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ List f1815;

    public ViewOnLayoutChangeListenerC0509(C1137 c1137, C0944 c0944, C1013 c1013, C0704 c0704, List list, boolean z) {
        this.f1810 = c1137;
        this.f1815 = list;
        this.f1814 = z;
        this.f1813 = c0944;
        this.f1812 = c0704;
        this.f1811 = c1013;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
        try {
            ArrayList arrayListM8913 = C1137.m8913(this.f1810, this.f1815, new Object[]{this, view, Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4), Integer.valueOf(i5), Integer.valueOf(i6), Integer.valueOf(i7), Integer.valueOf(i8)});
            if (!this.f1814) {
                AbstractC1766n.m8385(new C0578(this, arrayListM8913));
                return;
            }
            C0944 c0944 = this.f1813;
            C0704 c0704 = this.f1812;
            C1013 c1013 = this.f1811;
            c0944.getClass();
            c0944.m8820(c0704, c0704.f2434, c1013, arrayListM8913);
        } catch (Throwable th) {
            AbstractC1104.m8887(this.f1811.m8859(), StringFog.decrypt("XGN8Cz8H3ME5XmAoLF7a2m1SZgUjQNDjcGJ6ASNCx49wf30NKUKV\n", "GREOZE0nta8=\n") + this.f1813.f3335, th, false);
        }
    }
}
