package com.pushwoosh.richmedia;

import com.pushwoosh.richmedia.animation.RichMediaAnimation;

/* JADX INFO: loaded from: classes6.dex */
public class RichMediaStyle {
    private int backgroundColor;
    private com.pushwoosh.o0.b loadingViewCreator;
    private RichMediaAnimation richMediaAnimation;
    private long timeOutBackButtonEnable;

    public RichMediaStyle(int i, RichMediaAnimation richMediaAnimation) {
        this.backgroundColor = i;
        this.richMediaAnimation = richMediaAnimation;
    }

    public int getBackgroundColor() {
        return this.backgroundColor;
    }

    public com.pushwoosh.o0.b getLoadingViewCreator() {
        return null;
    }

    public RichMediaAnimation getRichMediaAnimation() {
        return this.richMediaAnimation;
    }

    public long getTimeOutBackButtonEnable() {
        return this.timeOutBackButtonEnable;
    }

    public void setBackgroundColor(int i) {
        this.backgroundColor = i;
    }

    public void setLoadingViewCreator(com.pushwoosh.o0.b bVar) {
    }

    public void setRichMediaAnimation(RichMediaAnimation richMediaAnimation) {
        this.richMediaAnimation = richMediaAnimation;
    }

    public void setTimeOutBackButtonEnable(long j) {
        this.timeOutBackButtonEnable = j;
    }
}
