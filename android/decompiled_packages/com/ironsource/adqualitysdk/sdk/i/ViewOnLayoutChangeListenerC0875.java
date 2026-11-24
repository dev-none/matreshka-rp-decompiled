package com.ironsource.adqualitysdk.sdk.i;

import android.view.View;
import android.view.ViewGroup;
import com.ironsource.adqualitysdk.sdk.StringFog;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ṿ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class ViewOnLayoutChangeListenerC0875 implements View.OnLayoutChangeListener {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0806 f3129;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ ViewGroup f3130;

    public ViewOnLayoutChangeListenerC0875(C0806 c0806, ViewGroup viewGroup) {
        this.f3129 = c0806;
        this.f3130 = viewGroup;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
        boolean z;
        C1142 c1142M8930 = C1142.m8930();
        synchronized (c1142M8930) {
            z = c1142M8930.f4011;
        }
        if (z) {
            return;
        }
        try {
            C0806.m8727(this.f3129, this.f3130, this);
        } catch (Throwable th) {
            AbstractC1104.m8887(StringFog.decrypt("m12pd/B86dapUq5Z+GPJ3LJUtEb0YsvQv1Q=\n", "3DHGFZEQvbk=\n"), StringFog.decrypt("6IhfAG+s9CSNlUMjfPXyP9m5RQ5z6/g=\n", "rfotbx2MnUo=\n"), th, false);
        }
    }
}
