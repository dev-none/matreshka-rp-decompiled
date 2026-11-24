package com.pushwoosh.inapp.ui;

import android.view.View;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class f2 implements View.OnLayoutChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ i2 f5123a;

    public f2(i2 i2Var) {
        this.f5123a = i2Var;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View v, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
        Intrinsics.checkNotNullParameter(v, "v");
        this.f5123a.d();
        i2 i2Var = this.f5123a;
        d2 d2Var = i2Var.f;
        b0.a(d2Var, i2Var.a(40.0f) + d2Var.getHeight(), i2Var.c, h2.f5129a);
    }
}
