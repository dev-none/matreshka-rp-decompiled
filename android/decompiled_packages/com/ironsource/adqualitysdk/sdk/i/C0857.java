package com.ironsource.adqualitysdk.sdk.i;

import android.os.Handler;
import android.os.Looper;
import android.view.View;
import android.view.ViewGroup;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ḷ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0857 extends AbstractRunnableC0910 {

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final /* synthetic */ C0806 f3074;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final /* synthetic */ ViewOnLayoutChangeListenerC0875 f3075;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final /* synthetic */ C0860 f3076;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ ViewGroup f3077;

    public C0857(C0806 c0806, ViewGroup viewGroup, C0860 c0860, ViewOnLayoutChangeListenerC0875 viewOnLayoutChangeListenerC0875) {
        this.f3074 = c0806;
        this.f3077 = viewGroup;
        this.f3076 = c0860;
        this.f3075 = viewOnLayoutChangeListenerC0875;
    }

    @Override // com.ironsource.adqualitysdk.sdk.i.AbstractRunnableC0910
    /* JADX INFO: renamed from: ﾒ */
    public final void mo8327() {
        C0806 c0806 = this.f3074;
        ViewGroup viewGroup = this.f3077;
        C0860 c0860 = this.f3076;
        c0806.getClass();
        View.OnTouchListener onTouchListenerM8667 = AbstractC0738.m8667(viewGroup);
        if (!(onTouchListenerM8667 instanceof ViewOnTouchListenerC1045)) {
            viewGroup.setOnTouchListener(new ViewOnTouchListenerC1045(onTouchListenerM8667, c0860));
        }
        for (int i = 0; i < this.f3077.getChildCount(); i++) {
            View childAt = this.f3077.getChildAt(i);
            if (childAt instanceof ViewGroup) {
                C0806 c0807 = this.f3074;
                ViewOnLayoutChangeListenerC0875 viewOnLayoutChangeListenerC0875 = this.f3075;
                c0807.getClass();
                new Handler(Looper.getMainLooper()).post(new C0857(c0807, (ViewGroup) childAt, new C0860(c0807), viewOnLayoutChangeListenerC0875));
            } else {
                C0806 c0808 = this.f3074;
                C0860 c0861 = this.f3076;
                c0808.getClass();
                View.OnTouchListener onTouchListenerM8668 = AbstractC0738.m8667(childAt);
                if (!(onTouchListenerM8668 instanceof ViewOnTouchListenerC1045)) {
                    childAt.setOnTouchListener(new ViewOnTouchListenerC1045(onTouchListenerM8668, c0861));
                }
            }
        }
        this.f3077.removeOnLayoutChangeListener(this.f3075);
        this.f3077.addOnLayoutChangeListener(this.f3075);
    }
}
