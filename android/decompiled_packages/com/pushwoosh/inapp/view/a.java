package com.pushwoosh.inapp.view;

import android.view.animation.Animation;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements Animation.AnimationListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ RichMediaWebActivity f5182a;

    public a(RichMediaWebActivity richMediaWebActivity) {
        this.f5182a = richMediaWebActivity;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationEnd(Animation animation) {
        super/*com.pushwoosh.inapp.view.WebActivity*/.close();
        this.f5182a.overridePendingTransition(0, 0);
        this.f5182a.h.setVisibility(8);
        RichMediaWebActivity.c(this.f5182a);
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationRepeat(Animation animation) {
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationStart(Animation animation) {
    }
}
