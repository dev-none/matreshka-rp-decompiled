package com.pushwoosh.inapp.ui;

import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class x0 implements i1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ InAppOverlayActivity f5177a;

    public x0(InAppOverlayActivity inAppOverlayActivity) {
        this.f5177a = inAppOverlayActivity;
    }

    @Override // com.pushwoosh.inapp.ui.i1
    public final void a(x action) {
        Intrinsics.checkNotNullParameter(action, "action");
        if (action instanceof w) {
            WeakReference weakReference = v0.d;
            w1 w1Var = null;
            InAppMessageDelegate inAppMessageDelegate = weakReference != null ? (InAppMessageDelegate) weakReference.get() : null;
            if (inAppMessageDelegate != null) {
                inAppMessageDelegate.clickedAction(((w) action).f5174a, this.f5177a.f5107a);
            }
            y1 y1Var = y1.f5178a;
            String str = this.f5177a.b;
            synchronized (y1Var) {
                if (str != null) {
                    w1Var = (w1) y1.b.get(str);
                }
            }
            if (w1Var != null) {
                y1.a(w1Var, 1);
            }
            y.a(this.f5177a, (w) action);
        }
        InAppOverlayActivity.a(this.f5177a);
    }

    @Override // com.pushwoosh.inapp.ui.i1
    public final void a() {
        InAppOverlayActivity.a(this.f5177a);
    }
}
