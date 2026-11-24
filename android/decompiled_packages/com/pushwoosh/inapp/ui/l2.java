package com.pushwoosh.inapp.ui;

import android.view.GestureDetector;
import android.view.MotionEvent;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class l2 extends GestureDetector.SimpleOnGestureListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ n2 f5141a;

    public l2(n2 n2Var) {
        this.f5141a = n2Var;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onFling(MotionEvent motionEvent, MotionEvent e2, float f, float f2) {
        Intrinsics.checkNotNullParameter(e2, "e2");
        if (f2 <= 0.0f || Math.abs(f2) <= Math.abs(f)) {
            return false;
        }
        i1 i1Var = this.f5141a.f5133a;
        if (i1Var == null) {
            return true;
        }
        i1Var.a();
        return true;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final void onLongPress(MotionEvent e) {
        Intrinsics.checkNotNullParameter(e, "e");
        this.f5141a.e();
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onSingleTapUp(MotionEvent e) {
        Intrinsics.checkNotNullParameter(e, "e");
        if (this.f5141a.q) {
            return true;
        }
        if (e.getX() < this.f5141a.getWidth() / 3.0f) {
            n2 n2Var = this.f5141a;
            int i = n2Var.m;
            n2Var.a(i > 0 ? i - 1 : 0);
        } else {
            this.f5141a.d();
        }
        return true;
    }
}
