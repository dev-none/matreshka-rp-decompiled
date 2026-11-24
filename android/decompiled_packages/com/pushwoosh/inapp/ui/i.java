package com.pushwoosh.inapp.ui;

import androidx.viewpager2.widget.ViewPager2;

/* JADX INFO: loaded from: classes6.dex */
public final class i extends ViewPager2.OnPageChangeCallback {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ o f5130a;

    public i(o oVar) {
        this.f5130a = oVar;
    }

    @Override // androidx.viewpager2.widget.ViewPager2.OnPageChangeCallback
    public final void onPageSelected(int i) {
        this.f5130a.a(i);
    }
}
