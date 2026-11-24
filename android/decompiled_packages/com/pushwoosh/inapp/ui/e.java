package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.provider.Settings;
import android.util.TypedValue;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.graphics.Insets;
import com.bumptech.glide.Glide;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class e extends j1 {
    public final a c;
    public final boolean d;
    public final LinearLayout e;
    public final int f;
    public final int g;
    public Runnable h;
    public final GestureDetector i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(Activity context, a content) {
        boolean z;
        Activity context2;
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(content, "content");
        this.c = content;
        Intrinsics.checkNotNullParameter(context, "context");
        try {
            z = Settings.Global.getFloat(context.getContentResolver(), "animator_duration_scale", 1.0f) == 0.0f;
        } catch (Exception unused) {
        }
        this.d = z;
        int iA = a(12.0f);
        this.f = iA;
        int iA2 = a(10.0f);
        this.g = iA2;
        this.i = new GestureDetector(context, new d(this));
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(0);
        linearLayout.setGravity(16);
        int i = content.e;
        float fA = a(18.0f);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(i);
        gradientDrawable.setCornerRadius(fA);
        linearLayout.setBackground(gradientDrawable);
        linearLayout.setElevation(a(6.0f));
        linearLayout.setClickable(true);
        linearLayout.setPadding(a(14.0f), a(12.0f), a(14.0f), a(12.0f));
        this.e = linearLayout;
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -2);
        layoutParams.leftMargin = iA;
        layoutParams.rightMargin = iA;
        layoutParams.topMargin = iA2;
        layoutParams.bottomMargin = iA2;
        Unit unit = Unit.INSTANCE;
        addView(linearLayout, layoutParams);
        String str = content.b;
        if (str != null) {
            ImageView imageView = new ImageView(context);
            imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
            int iA3 = a(52.0f);
            LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(iA3, iA3);
            layoutParams2.setMarginEnd(a(12.0f));
            linearLayout.addView(imageView, layoutParams2);
            float fA2 = a(12.0f);
            Intrinsics.checkNotNullParameter(imageView, "view");
            imageView.setOutlineProvider(new o1(fA2));
            imageView.setClipToOutline(true);
            Intrinsics.checkNotNullParameter(imageView, "imageView");
            if (str.length() == 0) {
                imageView.setVisibility(8);
            } else {
                imageView.setVisibility(0);
                GradientDrawable gradientDrawable2 = new GradientDrawable();
                gradientDrawable2.setColor(Color.parseColor("#E0E0E0"));
                Glide.with(imageView).load(str).placeholder(gradientDrawable2).error((Drawable) gradientDrawable2).into(imageView);
            }
        }
        LinearLayout linearLayout2 = new LinearLayout(context);
        linearLayout2.setOrientation(1);
        linearLayout.addView(linearLayout2, new LinearLayout.LayoutParams(0, -2, 1.0f));
        k1 k1Var = content.c;
        if (k1Var != null) {
            linearLayout2.addView(p1.a(context, k1Var.f5137a, k1Var.b, 16.0f, true, 1));
        }
        k1 k1Var2 = content.d;
        if (k1Var2 != null) {
            String str2 = k1Var2.f5137a;
            int i2 = k1Var2.b;
            context2 = context;
            TextView textViewA = p1.a(context2, str2, i2, 13.0f, false, 2);
            int iA4 = content.c != null ? a(2.0f) : 0;
            LinearLayout.LayoutParams layoutParams3 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams3.topMargin = iA4;
            linearLayout2.addView(textViewA, layoutParams3);
        } else {
            context2 = context;
        }
        if (content.h) {
            int iA5 = a(48.0f);
            b onClick = new b(this);
            Intrinsics.checkNotNullParameter(context2, "context");
            Intrinsics.checkNotNullParameter(onClick, "onClick");
            TextView textViewA2 = p1.a(context2, onClick);
            textViewA2.setBackground(null);
            textViewA2.setTextColor(Color.parseColor("#99FFFFFF"));
            LinearLayout.LayoutParams layoutParams4 = new LinearLayout.LayoutParams(iA5, iA5);
            layoutParams4.setMarginEnd(-a(12.0f));
            linearLayout.addView(textViewA2, layoutParams4);
        }
        linearLayout.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.e$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                e.a(this.f$0, view);
            }
        });
        linearLayout.setOnTouchListener(new View.OnTouchListener() { // from class: com.pushwoosh.inapp.ui.e$$ExternalSyntheticLambda1
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                return e.a(this.f$0, view, motionEvent);
            }
        });
    }

    public static final void a(e this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        i1 i1Var = this$0.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
    }

    public final void d() {
        if (this.c.g <= 0) {
            return;
        }
        Runnable runnable = new Runnable() { // from class: com.pushwoosh.inapp.ui.e$$ExternalSyntheticLambda2
            @Override // java.lang.Runnable
            public final void run() {
                e.a(this.f$0);
            }
        };
        postDelayed(runnable, this.c.g);
        this.h = runnable;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        Runnable runnable = this.h;
        if (runnable != null) {
            removeCallbacks(runnable);
        }
        this.h = null;
        super.onDetachedFromWindow();
    }

    public static final void a(e this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.a(this$0.c.f);
    }

    public static final boolean a(e this$0, View view, MotionEvent motionEvent) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        return this$0.i.onTouchEvent(motionEvent);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Insets insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        ViewGroup.LayoutParams layoutParams = this.e.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
        FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
        int i = this.f;
        layoutParams2.leftMargin = insets.left + i;
        layoutParams2.rightMargin = i + insets.right;
        int i2 = this.g;
        f fVar = this.c.f5103a;
        layoutParams2.topMargin = (fVar == f.TOP ? insets.top : 0) + i2;
        layoutParams2.bottomMargin = i2 + (fVar == f.BOTTOM ? insets.bottom : 0);
        this.e.requestLayout();
    }

    public final int a(float f) {
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        return (int) TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        Runnable runnable = this.h;
        if (runnable != null) {
            removeCallbacks(runnable);
        }
        this.h = null;
        b0.b(this.e, (this.c.f5103a == f.TOP ? -1.0f : 1.0f) * a(140.0f), this.d, onEnd);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a() {
        b0.a(this.e, (this.c.f5103a == f.TOP ? -1.0f : 1.0f) * a(140.0f), this.d, new c(this));
    }
}
