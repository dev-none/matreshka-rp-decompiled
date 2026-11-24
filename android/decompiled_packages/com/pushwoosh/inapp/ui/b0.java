package com.pushwoosh.inapp.ui;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewPropertyAnimator;
import android.widget.FrameLayout;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b0 {
    public static void a(View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setAlpha(0.0f);
        view.animate().alpha(1.0f).setDuration(300L).start();
    }

    public static final void b(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "$onEnd");
        onEnd.invoke();
    }

    public static void b(ViewGroup view, float f, boolean z, Function0 onEnd) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        ViewPropertyAnimator duration = view.animate().alpha(0.0f).setDuration(220L);
        Intrinsics.checkNotNullExpressionValue(duration, "view.animate().alpha(0f).setDuration(OUT_MS)");
        if (!z) {
            duration.translationY(f);
        }
        duration.setListener(new a0(onEnd)).start();
    }

    public static void a(Function0 onEnd, View view) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        view.animate().alpha(0.0f).setDuration(220L).setListener(new a0(onEnd)).start();
    }

    public static void a(FrameLayout view, boolean z) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setAlpha(0.0f);
        if (z) {
            view.animate().alpha(1.0f).setDuration(300L).start();
            return;
        }
        view.setScaleX(0.88f);
        view.setScaleY(0.88f);
        view.animate().alpha(1.0f).scaleX(1.0f).scaleY(1.0f).setDuration(300L).start();
    }

    public static void a(FrameLayout view, boolean z, Function0 onEnd) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        ViewPropertyAnimator duration = view.animate().alpha(0.0f).setDuration(220L);
        Intrinsics.checkNotNullExpressionValue(duration, "view.animate().alpha(0f).setDuration(OUT_MS)");
        if (!z) {
            duration.scaleX(0.92f).scaleY(0.92f);
        }
        duration.setListener(new a0(onEnd)).start();
    }

    public static void a(ViewGroup view, float f, boolean z, final Function0 onEnd) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        view.setAlpha(0.0f);
        if (z) {
            view.animate().alpha(1.0f).setDuration(300L).withEndAction(new Runnable() { // from class: com.pushwoosh.inapp.ui.b0$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    b0.a(onEnd);
                }
            }).start();
        } else {
            view.setTranslationY(f);
            view.animate().alpha(1.0f).translationY(0.0f).setDuration(300L).withEndAction(new Runnable() { // from class: com.pushwoosh.inapp.ui.b0$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    b0.b(onEnd);
                }
            }).start();
        }
    }

    public static final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "$onEnd");
        onEnd.invoke();
    }
}
