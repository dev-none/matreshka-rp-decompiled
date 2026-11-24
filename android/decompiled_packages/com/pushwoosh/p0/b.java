package com.pushwoosh.p0;

import android.view.View;
import android.view.animation.Animation;

/* JADX INFO: loaded from: classes6.dex */
public final class b implements Animation.AnimationListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ View f5302a;
    public final /* synthetic */ Animation.AnimationListener b;

    public b(View view, Animation.AnimationListener animationListener) {
        this.f5302a = view;
        this.b = animationListener;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationEnd(Animation animation) {
        View view = this.f5302a;
        if (view != null && view.isAttachedToWindow()) {
            this.f5302a.setLayerType(0, null);
        }
        Animation.AnimationListener animationListener = this.b;
        if (animationListener != null) {
            animationListener.onAnimationEnd(animation);
        }
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationRepeat(Animation animation) {
        Animation.AnimationListener animationListener = this.b;
        if (animationListener != null) {
            animationListener.onAnimationRepeat(animation);
        }
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationStart(Animation animation) {
        View view = this.f5302a;
        if (view != null && view.isAttachedToWindow()) {
            this.f5302a.setLayerType(2, null);
        }
        Animation.AnimationListener animationListener = this.b;
        if (animationListener != null) {
            animationListener.onAnimationStart(animation);
        }
    }
}
