package com.pushwoosh.inapp.ui;

import android.view.GestureDetector;
import android.view.MotionEvent;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class d extends GestureDetector.SimpleOnGestureListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ e f5115a;

    public d(e eVar) {
        this.f5115a = eVar;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnGestureListener
    public final boolean onFling(MotionEvent motionEvent, MotionEvent e2, float f, float f2) {
        Intrinsics.checkNotNullParameter(e2, "e2");
        f position = this.f5115a.c.f5103a;
        Intrinsics.checkNotNullParameter(position, "position");
        if (Math.abs(f2) <= Math.abs(f)) {
            return false;
        }
        int iOrdinal = position.ordinal();
        if (iOrdinal != 0) {
            if (iOrdinal != 1) {
                throw new NoWhenBranchMatchedException();
            }
            if (f2 <= 0.0f) {
                return false;
            }
        } else if (f2 >= 0.0f) {
            return false;
        }
        i1 i1Var = this.f5115a.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
        return true;
    }
}
