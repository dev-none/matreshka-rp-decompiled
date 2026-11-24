package com.pushwoosh.inapp.ui;

import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.os.SystemClock;
import android.util.TypedValue;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.graphics.Insets;
import androidx.core.view.GravityCompat;
import androidx.core.view.ViewCompat;
import com.bumptech.glide.Glide;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.RangesKt;

/* JADX INFO: loaded from: classes6.dex */
public final class n2 extends j1 {
    public final j2 c;
    public final ImageView d;
    public final o2 e;
    public final TextView f;
    public final TextView g;
    public final LinearLayout h;
    public final LinearLayout i;
    public final GestureDetector j;
    public final int k;
    public final int l;
    public int m;
    public ValueAnimator n;
    public Runnable o;
    public final ArrayList p;
    public boolean q;
    public long r;
    public long s;
    public long t;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n2(InAppOverlayActivity context, j2 content) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(content, "content");
        this.c = content;
        ImageView imageView = new ImageView(context);
        imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.d = imageView;
        o2 o2Var = new o2(context);
        this.e = o2Var;
        TextView textViewA = p1.a(context, "", -1, 20.0f, true, 2);
        this.f = textViewA;
        TextView textViewA2 = p1.a(context, "", -1, 15.0f, false, 2);
        this.g = textViewA2;
        int iA = a(12.0f);
        this.k = iA;
        int iA2 = a(20.0f);
        this.l = iA2;
        this.p = new ArrayList();
        setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        addView(imageView, new FrameLayout.LayoutParams(-1, -1));
        o2Var.setCount(content.f5134a.size());
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        linearLayout.setPadding(iA, a(12.0f), iA, iA);
        this.h = linearLayout;
        linearLayout.addView(o2Var, new LinearLayout.LayoutParams(-1, a(3.0f)));
        addView(linearLayout, new FrameLayout.LayoutParams(-1, -2, 48));
        LinearLayout linearLayout2 = new LinearLayout(context);
        linearLayout2.setOrientation(1);
        linearLayout2.setPadding(iA2, iA2, iA2, iA2);
        this.i = linearLayout2;
        linearLayout2.addView(textViewA);
        linearLayout2.addView(textViewA2);
        addView(linearLayout2, new FrameLayout.LayoutParams(-1, -2, 80));
        p1.a(linearLayout2, 44.0f);
        if (content.c) {
            int iA3 = a(48.0f);
            FrameLayout frameLayout = new FrameLayout(context);
            frameLayout.addView(p1.a(context, new k2(this)), new FrameLayout.LayoutParams(iA3, iA3, GravityCompat.END));
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
            layoutParams.topMargin = a(3.0f);
            Unit unit = Unit.INSTANCE;
            linearLayout.addView(frameLayout, layoutParams);
        }
        this.j = new GestureDetector(context, new l2(this));
    }

    public static final void b(n2 this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.d();
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Insets insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        LinearLayout linearLayout = this.h;
        int i = this.k + insets.left;
        int iA = a(12.0f) + insets.top;
        int i2 = this.k;
        linearLayout.setPadding(i, iA, insets.right + i2, i2);
        LinearLayout linearLayout2 = this.i;
        int i3 = this.l;
        linearLayout2.setPadding(insets.left + i3, i3, insets.right + i3, insets.bottom + i3);
    }

    public final void d() {
        if (this.m + 1 < this.c.f5134a.size()) {
            a(this.m + 1);
            return;
        }
        if (this.c.b) {
            a(0);
            return;
        }
        i1 i1Var = this.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
    }

    public final void e() {
        if (this.q || this.n == null) {
            return;
        }
        this.q = true;
        this.r = RangesKt.coerceAtLeast(this.t - (SystemClock.uptimeMillis() - this.s), 0L);
        ValueAnimator valueAnimator = this.n;
        if (valueAnimator != null) {
            valueAnimator.pause();
        }
        Runnable runnable = this.o;
        if (runnable != null) {
            removeCallbacks(runnable);
        }
    }

    public final void f() {
        if (this.q) {
            this.q = false;
            this.t = this.r;
            this.s = SystemClock.uptimeMillis();
            ValueAnimator valueAnimator = this.n;
            if (valueAnimator != null) {
                valueAnimator.resume();
            }
            Runnable runnable = new Runnable() { // from class: com.pushwoosh.inapp.ui.n2$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    n2.a(this.f$0);
                }
            };
            postDelayed(runnable, this.r);
            this.o = runnable;
        }
    }

    public final void g() {
        ValueAnimator valueAnimator = this.n;
        if (valueAnimator != null) {
            valueAnimator.cancel();
        }
        this.n = null;
        Runnable runnable = this.o;
        if (runnable != null) {
            removeCallbacks(runnable);
        }
        this.o = null;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        g();
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        this.j.onTouchEvent(event);
        if ((event.getActionMasked() == 1 || event.getActionMasked() == 3) && this.q) {
            f();
        }
        return true;
    }

    public final int a(float f) {
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        return (int) TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
    }

    public final void a(int i) {
        if (i < 0 || i >= this.c.f5134a.size()) {
            return;
        }
        this.m = i;
        p2 p2Var = (p2) this.c.f5134a.get(i);
        String str = p2Var.f5154a;
        ImageView imageView = this.d;
        Intrinsics.checkNotNullParameter(imageView, "imageView");
        if (str != null && str.length() != 0) {
            imageView.setVisibility(0);
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setColor(Color.parseColor("#E0E0E0"));
            Glide.with(imageView).load(str).placeholder(gradientDrawable).error((Drawable) gradientDrawable).into(imageView);
        } else {
            imageView.setVisibility(8);
        }
        TextView textView = this.f;
        k1 k1Var = p2Var.b;
        if (k1Var == null) {
            textView.setVisibility(8);
        } else {
            textView.setText(k1Var.f5137a);
            textView.setTextColor(k1Var.b);
            textView.setVisibility(0);
        }
        TextView textView2 = this.g;
        k1 k1Var2 = p2Var.c;
        if (k1Var2 == null) {
            textView2.setVisibility(8);
        } else {
            textView2.setText(k1Var2.f5137a);
            textView2.setTextColor(k1Var2.b);
            textView2.setVisibility(0);
        }
        Iterator it = this.p.iterator();
        while (it.hasNext()) {
            this.i.removeView((View) it.next());
        }
        this.p.clear();
        for (c0 c0Var : p2Var.d) {
            Context context = getContext();
            Intrinsics.checkNotNullExpressionValue(context, "context");
            TextView textViewA = p1.a(context, c0Var, new m2(this));
            this.p.add(textViewA);
            LinearLayout linearLayout = this.i;
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
            layoutParams.topMargin = a(12.0f);
            Unit unit = Unit.INSTANCE;
            linearLayout.addView(textViewA, layoutParams);
        }
        a(p2Var.e);
    }

    public final void a(long j) {
        g();
        this.q = false;
        this.t = j;
        this.s = SystemClock.uptimeMillis();
        final ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        valueAnimatorOfFloat.setDuration(j);
        valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.pushwoosh.inapp.ui.n2$$ExternalSyntheticLambda0
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                n2.a(this.f$0, valueAnimatorOfFloat, valueAnimator);
            }
        });
        valueAnimatorOfFloat.start();
        this.n = valueAnimatorOfFloat;
        Runnable runnable = new Runnable() { // from class: com.pushwoosh.inapp.ui.n2$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                n2.b(this.f$0);
            }
        };
        postDelayed(runnable, j);
        this.o = runnable;
    }

    public static final void a(n2 this$0, ValueAnimator valueAnimator, ValueAnimator it) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(it, "it");
        o2 o2Var = this$0.e;
        int i = this$0.m;
        Object animatedValue = valueAnimator.getAnimatedValue();
        Intrinsics.checkNotNull(animatedValue, "null cannot be cast to non-null type kotlin.Float");
        float fFloatValue = ((Float) animatedValue).floatValue();
        o2Var.b = i;
        o2Var.c = RangesKt.coerceIn(fFloatValue, 0.0f, 1.0f);
        o2Var.invalidate();
    }

    public static final void a(n2 this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.d();
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a() {
        b0.a(this);
        a(0);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        g();
        b0.a(onEnd, this);
    }
}
