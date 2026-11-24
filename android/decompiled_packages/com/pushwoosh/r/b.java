package com.pushwoosh.r;

import android.R;
import android.animation.ValueAnimator;
import android.app.Activity;
import android.content.res.Resources;
import android.os.Build;
import android.view.View;
import android.view.Window;
import android.view.WindowInsets;
import androidx.core.util.Consumer;
import androidx.core.view.WindowInsetsCompat;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.view.config.ModalRichmediaConfig;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaSwipeGesture;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.n.j;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f5305a = Resources.getSystem().getDisplayMetrics().widthPixels;
    public static final int b = Resources.getSystem().getDisplayMetrics().heightPixels;

    public static void a(final Consumer consumer) {
        Activity topActivity = PushwooshPlatform.getInstance().getTopActivity();
        if (topActivity == null) {
            consumer.accept(null);
            return;
        }
        final Window window = topActivity.getWindow();
        if (window != null) {
            window.getDecorView().post(new Runnable() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    b.a(window, consumer);
                }
            });
        } else {
            consumer.accept(null);
        }
    }

    public static boolean b(j jVar) {
        View contentView = jVar.getContentView();
        return jVar.isShowing() && contentView != null && contentView.isAttachedToWindow();
    }

    public static void d(j jVar, ValueAnimator valueAnimator) {
        int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
        int i = jVar.d + jVar.c;
        if (b(jVar)) {
            jVar.update(iIntValue, i, -1, -1);
        }
    }

    public static void e(j jVar, ValueAnimator valueAnimator) {
        int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
        int i = jVar.d + jVar.c;
        if (b(jVar)) {
            jVar.update(iIntValue, i, -1, -1);
        }
    }

    public static ValueAnimator b(final j jVar, int i) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(0, i);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda1
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.b(jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static ValueAnimator c(final j jVar, int i) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(-i, 0);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda4
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.d(jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static void b(j jVar, ValueAnimator valueAnimator) {
        int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
        int i = jVar.c + jVar.d;
        if (b(jVar)) {
            jVar.update(iIntValue, i, -1, -1);
        }
    }

    public static ValueAnimator c(final j jVar, int i, final ModalRichmediaConfig modalRichmediaConfig) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(i, 0);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda0
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.c(modalRichmediaConfig, jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static ValueAnimator d(final j jVar, int i) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(i, 0);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda2
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.e(jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static void c(ModalRichmediaConfig modalRichmediaConfig, j jVar, ValueAnimator valueAnimator) {
        int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
        if (modalRichmediaConfig.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
            iIntValue = -iIntValue;
        }
        int i = iIntValue + jVar.c + jVar.d;
        if (b(jVar)) {
            jVar.update(0, i, -1, -1);
        }
    }

    public static ValueAnimator d(final j jVar, int i, final ModalRichmediaConfig modalRichmediaConfig) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(-i, 0);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda10
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.d(modalRichmediaConfig, jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static ValueAnimator b(final j jVar, int i, final ModalRichmediaConfig modalRichmediaConfig) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(0, -i);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda9
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.b(modalRichmediaConfig, jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static void d(ModalRichmediaConfig modalRichmediaConfig, j jVar, ValueAnimator valueAnimator) {
        int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
        if (modalRichmediaConfig.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
            iIntValue = -iIntValue;
        }
        int i = iIntValue + jVar.c + jVar.d;
        if (b(jVar)) {
            jVar.update(0, i, -1, -1);
        }
    }

    public static void b(ModalRichmediaConfig modalRichmediaConfig, j jVar, ValueAnimator valueAnimator) {
        int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
        if (modalRichmediaConfig.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
            iIntValue = -iIntValue;
        }
        int i = iIntValue + jVar.c + jVar.d;
        if (b(jVar)) {
            jVar.update(0, i, -1, -1);
        }
    }

    public static ValueAnimator c(final j jVar) {
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda5
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                jVar.getContentView().setAlpha(((Float) valueAnimator.getAnimatedValue()).floatValue());
            }
        });
        return valueAnimatorOfFloat;
    }

    public static /* synthetic */ void a(Window window, Consumer consumer) {
        try {
            consumer.accept(window.getDecorView().findViewById(R.id.content));
        } catch (Throwable th) {
            PWLog.error("ModalRichMediaWindowUtils", "Failed to deliver parent view to async callback", th);
        }
    }

    public static ValueAnimator a(final j jVar) {
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(1.0f, 0.0f);
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda8
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                jVar.getContentView().setAlpha(((Float) valueAnimator.getAnimatedValue()).floatValue());
            }
        });
        return valueAnimatorOfFloat;
    }

    public static ValueAnimator a(final j jVar, int i) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(0, i);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda6
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.a(jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static void a(j jVar, ValueAnimator valueAnimator) {
        int i = -((Integer) valueAnimator.getAnimatedValue()).intValue();
        int i2 = jVar.c + jVar.d;
        if (b(jVar)) {
            jVar.update(i, i2, -1, -1);
        }
    }

    public static ValueAnimator a(final j jVar, int i, final ModalRichmediaConfig modalRichmediaConfig) {
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt(0, i);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.r.b$$ExternalSyntheticLambda7
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                b.a(modalRichmediaConfig, jVar, valueAnimator);
            }
        });
        return valueAnimatorOfInt;
    }

    public static void a(ModalRichmediaConfig modalRichmediaConfig, j jVar, ValueAnimator valueAnimator) {
        int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
        if (modalRichmediaConfig.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
            iIntValue = -iIntValue;
        }
        int i = iIntValue + jVar.c + jVar.d;
        if (b(jVar)) {
            jVar.update(0, i, -1, -1);
        }
    }

    /* JADX WARN: Code duplicated, block: B:9:0x0051  */
    public static boolean a(j jVar, float f, float f2, ModalRichmediaConfig modalRichmediaConfig) {
        boolean z;
        WindowInsets rootWindowInsets;
        float f3 = Resources.getSystem().getDisplayMetrics().widthPixels;
        float f4 = Resources.getSystem().getDisplayMetrics().heightPixels;
        View contentView = jVar.getContentView();
        int[] iArr = new int[2];
        contentView.getLocationOnScreen(iArr);
        int width = contentView.getWidth();
        int height = contentView.getHeight();
        if (Math.abs(f) > Math.abs(f2)) {
            Set<ModalRichMediaSwipeGesture> swipeGestures = modalRichmediaConfig.getSwipeGestures();
            if (!swipeGestures.contains(ModalRichMediaSwipeGesture.LEFT)) {
                z = false;
            } else if ((width * 0.5f) + iArr[0] < 0.0f) {
                z = true;
            } else {
                z = false;
            }
            if (swipeGestures.contains(ModalRichMediaSwipeGesture.RIGHT)) {
                if ((width * 0.5f) + iArr[0] > f3) {
                    z = true;
                }
            }
        } else {
            z = false;
        }
        if (Math.abs(f2) > Math.abs(f)) {
            Set<ModalRichMediaSwipeGesture> swipeGestures2 = modalRichmediaConfig.getSwipeGestures();
            if (swipeGestures2.contains(ModalRichMediaSwipeGesture.UP)) {
                if ((height * 0.5f) + iArr[1] < 0.0f) {
                    z = true;
                }
            }
            if (swipeGestures2.contains(ModalRichMediaSwipeGesture.DOWN)) {
                float f5 = (height * 0.5f) + iArr[1];
                float fA = f4 + a();
                Activity topActivity = PushwooshPlatform.getInstance().getTopActivity();
                if (f5 > fA + ((topActivity == null || topActivity.getWindow() == null || (rootWindowInsets = topActivity.getWindow().getDecorView().getRootWindowInsets()) == null) ? 0 : WindowInsetsCompat.toWindowInsetsCompat(rootWindowInsets).getInsets(WindowInsetsCompat.Type.navigationBars()).bottom)) {
                    z = true;
                }
            }
        }
        if (!z) {
            return false;
        }
        jVar.dismiss();
        return true;
    }

    public static void a(j jVar, int i, int i2, ModalRichmediaConfig modalRichmediaConfig) {
        if (modalRichmediaConfig.getViewPosition() == ModalRichMediaViewPosition.BOTTOM) {
            i2 = -i2;
        }
        Set<ModalRichMediaSwipeGesture> swipeGestures = modalRichmediaConfig.getSwipeGestures();
        if (swipeGestures.isEmpty()) {
            return;
        }
        boolean z = swipeGestures.contains(ModalRichMediaSwipeGesture.UP) || swipeGestures.contains(ModalRichMediaSwipeGesture.DOWN);
        int i3 = (swipeGestures.contains(ModalRichMediaSwipeGesture.LEFT) || swipeGestures.contains(ModalRichMediaSwipeGesture.RIGHT)) ? i : 0;
        if (!z) {
            i2 = 0;
        }
        int i4 = i2 + jVar.c + jVar.d;
        if (b(jVar)) {
            jVar.update(i3, i4, -1, -1, true);
        }
    }

    public static int a() {
        WindowInsets rootWindowInsets;
        Activity topActivity = PushwooshPlatform.getInstance().getTopActivity();
        if (topActivity == null || topActivity.getWindow() == null || (rootWindowInsets = topActivity.getWindow().getDecorView().getRootWindowInsets()) == null) {
            return 0;
        }
        return WindowInsetsCompat.toWindowInsetsCompat(rootWindowInsets).getInsets(WindowInsetsCompat.Type.statusBars()).top;
    }

    public static int a(ModalRichmediaConfig modalRichmediaConfig) {
        WindowInsets rootWindowInsets;
        Activity topActivity = PushwooshPlatform.getInstance().getTopActivity();
        if (topActivity == null || topActivity.getWindow() == null || (rootWindowInsets = topActivity.getWindow().getDecorView().getRootWindowInsets()) == null) {
            return 0;
        }
        int i = WindowInsetsCompat.toWindowInsetsCompat(rootWindowInsets).getInsets(WindowInsetsCompat.Type.navigationBars()).bottom;
        if (Build.VERSION.SDK_INT <= 34 || modalRichmediaConfig == null || !Boolean.TRUE.equals(modalRichmediaConfig.shouldRespectEdgeToEdgeLayout())) {
            return i;
        }
        return 0;
    }
}
