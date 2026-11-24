package com.pushwoosh.inapp.ui;

import android.view.GestureDetector;
import android.view.MotionEvent;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class g2 extends GestureDetector.SimpleOnGestureListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f5126a = true;
    public final /* synthetic */ i2 b;

    public g2(i2 i2Var) {
        this.b = i2Var;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onDown(MotionEvent e) {
        Intrinsics.checkNotNullParameter(e, "e");
        this.f5126a = this.b.g.getScrollY() == 0;
        return false;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onFling(MotionEvent motionEvent, MotionEvent e2, float f, float f2) {
        Intrinsics.checkNotNullParameter(e2, "e2");
        if (!this.f5126a || f2 <= Math.abs(f)) {
            return false;
        }
        i1 i1Var = this.b.f5133a;
        if (i1Var == null) {
            return true;
        }
        i1Var.a();
        return true;
    }
}
