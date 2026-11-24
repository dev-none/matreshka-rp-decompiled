package com.pushwoosh.richmedia.animation;

import android.view.View;
import android.view.animation.Animation;
import android.view.animation.TranslateAnimation;

/* JADX INFO: loaded from: classes6.dex */
public class RichMediaAnimationSlideBottom extends a {
    @Override // com.pushwoosh.richmedia.animation.a
    public Animation getCloseAnimation(View view) {
        return new TranslateAnimation(0.0f, 0.0f, 0.0f, view.getHeight());
    }

    @Override // com.pushwoosh.richmedia.animation.a
    public Animation getOpenAnimation(View view) {
        return new TranslateAnimation(0.0f, 0.0f, view.getHeight(), 0.0f);
    }
}
