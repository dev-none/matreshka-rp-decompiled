package com.pushwoosh.p0;

import android.view.View;
import android.view.animation.Animation;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements Animation.AnimationListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ View f5301a;

    public a(View view) {
        this.f5301a = view;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationEnd(Animation animation) {
        View view = this.f5301a;
        if (view == null || !view.isAttachedToWindow()) {
            return;
        }
        this.f5301a.setLayerType(0, null);
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationRepeat(Animation animation) {
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationStart(Animation animation) {
        View view = this.f5301a;
        if (view == null || !view.isAttachedToWindow()) {
            return;
        }
        this.f5301a.setLayerType(2, null);
    }
}
