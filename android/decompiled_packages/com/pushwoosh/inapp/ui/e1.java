package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import android.widget.FrameLayout;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import java.lang.ref.WeakReference;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class e1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final e1 f5119a = new e1();
    public static volatile j1 b;
    public static s0 c;
    public static boolean d;

    public static boolean a(s0 message, Function1 onDismissed) {
        j1 i2Var;
        int i;
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(onDismissed, "onDismissed");
        PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
        Activity topActivity = pushwooshPlatform != null ? pushwooshPlatform.getTopActivity() : null;
        if (topActivity == null) {
            return false;
        }
        Window window = topActivity.getWindow();
        View decorView = window != null ? window.getDecorView() : null;
        ViewGroup viewGroup = decorView instanceof ViewGroup ? (ViewGroup) decorView : null;
        if (viewGroup == null) {
            return false;
        }
        r0 r0Var = message.b;
        int i2 = 80;
        if (r0Var instanceof k0) {
            k0 k0Var = (k0) r0Var;
            i2Var = new e(topActivity, k0Var.f5136a);
            i = -2;
            if (k0Var.f5136a.f5103a == f.TOP) {
                i2 = 48;
            }
        } else {
            if (r0Var instanceof n0) {
                i2Var = new u1(topActivity, ((n0) r0Var).f5147a);
                i2 = 17;
            } else {
                if (!(r0Var instanceof o0)) {
                    throw new IllegalStateException(("InAppOverlayController cannot present " + message.b + ": routing sent a non-overlay layout to the overlay channel").toString());
                }
                i2Var = new i2(topActivity, ((o0) r0Var).f5149a);
            }
            i = -1;
        }
        i2Var.setListener(new c1(message, topActivity, i2Var));
        d1 d1Var = new d1(i2Var, message, onDismissed);
        i2Var.addOnAttachStateChangeListener(d1Var);
        viewGroup.addView(i2Var, new FrameLayout.LayoutParams(-1, i, i2));
        b = i2Var;
        c = message;
        d = true;
        try {
            WeakReference weakReference = v0.d;
            InAppMessageDelegate inAppMessageDelegate = weakReference != null ? (InAppMessageDelegate) weakReference.get() : null;
            if (inAppMessageDelegate != null) {
                inAppMessageDelegate.willPresent(message.f5162a);
            }
            i2Var.a();
            WeakReference weakReference2 = v0.d;
            InAppMessageDelegate inAppMessageDelegate2 = weakReference2 != null ? (InAppMessageDelegate) weakReference2.get() : null;
            if (inAppMessageDelegate2 != null) {
                inAppMessageDelegate2.didPresent(message.f5162a);
            }
            y1.f5178a.b(message.f);
            d = false;
            return true;
        } catch (Throwable th) {
            try {
                i2Var.removeOnAttachStateChangeListener(d1Var);
                b = null;
                c = null;
                ViewParent parent = i2Var.getParent();
                ViewGroup viewGroup2 = parent instanceof ViewGroup ? (ViewGroup) parent : null;
                if (viewGroup2 != null) {
                    viewGroup2.removeView(i2Var);
                }
                throw th;
            } catch (Throwable th2) {
                d = false;
                throw th2;
            }
        }
    }

    public static final void b(j1 view, s0 message) {
        Intrinsics.checkNotNullParameter(view, "$view");
        Intrinsics.checkNotNullParameter(message, "$message");
        a(view, message);
    }

    public static void a(final j1 j1Var, final s0 s0Var) {
        if (b != j1Var) {
            return;
        }
        if (d) {
            BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.inapp.ui.e1$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    e1.b(j1Var, s0Var);
                }
            });
            return;
        }
        b = null;
        c = null;
        j1Var.a(new b1(j1Var));
    }
}
