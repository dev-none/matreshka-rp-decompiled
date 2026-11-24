package com.pushwoosh.richmedia.animation;

import android.view.View;
import android.view.animation.Animation;
import com.pushwoosh.p0.b;

/* JADX INFO: loaded from: classes6.dex */
public abstract class a implements RichMediaAnimation {
    public static final int DURATION_MILLIS = 300;

    @Override // com.pushwoosh.richmedia.animation.RichMediaAnimation
    public void closeAnimation(View view, View view2, Animation.AnimationListener animationListener) {
        Animation closeAnimation = getCloseAnimation(view2);
        if (closeAnimation != null) {
            closeAnimation.setDuration(300L);
            closeAnimation.setAnimationListener(new b(view, animationListener));
            if (view != null) {
                view.startAnimation(closeAnimation);
            }
        }
    }

    abstract Animation getCloseAnimation(View view);

    abstract Animation getOpenAnimation(View view);

    @Override // com.pushwoosh.richmedia.animation.RichMediaAnimation
    public void openAnimation(View view, View view2) {
        Animation openAnimation = getOpenAnimation(view2);
        if (openAnimation != null) {
            openAnimation.setDuration(300L);
            openAnimation.setAnimationListener(new com.pushwoosh.p0.a(view));
            if (view != null) {
                view.startAnimation(openAnimation);
            }
        }
    }
}
