package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.view.MotionEvent;
import android.widget.FrameLayout;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class d2 extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ i2 f5117a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d2(Activity activity, i2 i2Var) {
        super(activity);
        this.f5117a = i2Var;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchTouchEvent(MotionEvent ev) {
        Intrinsics.checkNotNullParameter(ev, "ev");
        this.f5117a.k.onTouchEvent(ev);
        return super.dispatchTouchEvent(ev);
    }
}
