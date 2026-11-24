package com.pushwoosh.inapp.ui;

import android.view.View;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class d1 implements View.OnAttachStateChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ j1 f5116a;
    public final /* synthetic */ s0 b;
    public final /* synthetic */ Function1 c;

    public d1(j1 j1Var, s0 s0Var, Function1 function1) {
        this.f5116a = j1Var;
        this.b = s0Var;
        this.c = function1;
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewAttachedToWindow(View v) {
        Intrinsics.checkNotNullParameter(v, "v");
    }

    @Override // android.view.View.OnAttachStateChangeListener
    public final void onViewDetachedFromWindow(View v) {
        Intrinsics.checkNotNullParameter(v, "v");
        if (e1.b == this.f5116a) {
            e1.b = null;
            e1.c = null;
        }
        y1.f5178a.a(this.b.f);
        this.c.invoke(this.b.f5162a);
    }
}
