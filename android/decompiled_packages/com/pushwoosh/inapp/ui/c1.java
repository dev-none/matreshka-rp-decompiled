package com.pushwoosh.inapp.ui;

import android.app.Activity;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class c1 implements i1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ s0 f5113a;
    public final /* synthetic */ Activity b;
    public final /* synthetic */ j1 c;

    public c1(s0 s0Var, Activity activity, j1 j1Var) {
        this.f5113a = s0Var;
        this.b = activity;
        this.c = j1Var;
    }

    @Override // com.pushwoosh.inapp.ui.i1
    public final void a(x action) {
        Intrinsics.checkNotNullParameter(action, "action");
        if (action instanceof w) {
            WeakReference weakReference = v0.d;
            w1 w1Var = null;
            InAppMessageDelegate inAppMessageDelegate = weakReference != null ? (InAppMessageDelegate) weakReference.get() : null;
            if (inAppMessageDelegate != null) {
                inAppMessageDelegate.clickedAction(((w) action).f5174a, this.f5113a.f5162a);
            }
            y1 y1Var = y1.f5178a;
            String str = this.f5113a.f;
            synchronized (y1Var) {
                if (str != null) {
                    w1Var = (w1) y1.b.get(str);
                }
            }
            if (w1Var != null) {
                y1.a(w1Var, 1);
            }
            y.a(this.b, (w) action);
        }
        e1.a(this.c, this.f5113a);
    }

    @Override // com.pushwoosh.inapp.ui.i1
    public final void a() {
        e1.a(this.c, this.f5113a);
    }
}
