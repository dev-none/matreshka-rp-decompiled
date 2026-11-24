package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.view.MotionEvent;
import android.widget.RelativeLayout;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ṝ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0867 extends RelativeLayout {

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final /* synthetic */ C0806 f3092;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ boolean f3093;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C0867(C0806 c0806, Context context, boolean z) {
        super(context);
        this.f3092 = c0806;
        this.f3093 = z;
    }

    @Override // android.view.View
    public final int getVisibility() {
        if (this.f3093) {
            return 4;
        }
        return super.getVisibility();
    }

    @Override // android.view.ViewGroup
    public final boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        C0806.m8726(this.f3092, motionEvent);
        return super.onInterceptTouchEvent(motionEvent);
    }
}
