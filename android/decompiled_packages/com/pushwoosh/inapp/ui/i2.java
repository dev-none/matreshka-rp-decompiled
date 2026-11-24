package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.provider.Settings;
import android.util.TypedValue;
import android.view.GestureDetector;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import androidx.core.graphics.Insets;
import com.bumptech.glide.Glide;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class i2 extends j1 {
    public final boolean c;
    public final int d;
    public final int e;
    public final d2 f;
    public final ScrollView g;
    public final LinearLayout h;
    public final TextView i;
    public f2 j;
    public final GestureDetector k;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i2(Activity context, a2 content) {
        boolean z;
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(context, "context");
        int i = 0;
        boolean z2 = true;
        try {
            z = Settings.Global.getFloat(context.getContentResolver(), "animator_duration_scale", 1.0f) == 0.0f;
        } catch (Exception unused) {
        }
        this.c = z;
        int iA = a(16.0f);
        this.d = iA;
        this.e = a(9.0f);
        ScrollView scrollView = new ScrollView(context);
        this.g = scrollView;
        this.k = new GestureDetector(context, new g2(this));
        if (content.g) {
            View view = new View(context);
            view.setBackgroundColor(Color.parseColor("#99000000"));
            view.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.i2$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view2) {
                    i2.a(this.f$0, view2);
                }
            });
            addView(view, new FrameLayout.LayoutParams(-1, -1));
        }
        d2 d2Var = new d2(context, this);
        int i2 = content.f5106a;
        float fA = a(28.0f);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(i2);
        gradientDrawable.setCornerRadii(new float[]{fA, fA, fA, fA, 0.0f, 0.0f, 0.0f, 0.0f});
        d2Var.setBackground(gradientDrawable);
        d2Var.setElevation(a(8.0f));
        d2Var.setClickable(true);
        this.f = d2Var;
        addView(d2Var, new FrameLayout.LayoutParams(-1, -2, 80));
        d2Var.addView(scrollView, new FrameLayout.LayoutParams(-1, -2));
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        linearLayout.setPadding(0, 0, 0, iA);
        this.h = linearLayout;
        scrollView.addView(linearLayout, new FrameLayout.LayoutParams(-1, -2));
        View view2 = new View(context);
        int i3 = content.f5106a;
        int color = Color.parseColor(((((float) Color.blue(i3)) * 0.114f) + ((((float) Color.green(i3)) * 0.587f) + (((float) Color.red(i3)) * 0.299f))) / 255.0f > 0.65f ? "#4D000000" : "#4DFFFFFF");
        float fA2 = a(2.5f);
        GradientDrawable gradientDrawable2 = new GradientDrawable();
        gradientDrawable2.setColor(color);
        gradientDrawable2.setCornerRadius(fA2);
        view2.setBackground(gradientDrawable2);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(a(36.0f), a(5.0f));
        layoutParams.gravity = 1;
        layoutParams.topMargin = a(8.0f);
        Unit unit = Unit.INSTANCE;
        linearLayout.addView(view2, layoutParams);
        String str = content.d;
        boolean z3 = str != null;
        if (str != null) {
            e2 imageView = new e2(context);
            int iA2 = a(12.0f);
            int iA3 = a(14.0f);
            LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams2.topMargin = iA2;
            layoutParams2.setMarginStart(iA3);
            layoutParams2.setMarginEnd(iA3);
            linearLayout.addView(imageView, layoutParams2);
            float fA3 = a(18.0f);
            Intrinsics.checkNotNullParameter(imageView, "view");
            imageView.setOutlineProvider(new o1(fA3));
            imageView.setClipToOutline(true);
            Intrinsics.checkNotNullParameter(imageView, "imageView");
            if (str.length() == 0) {
                imageView.setVisibility(8);
            } else {
                imageView.setVisibility(0);
                GradientDrawable gradientDrawable3 = new GradientDrawable();
                gradientDrawable3.setColor(Color.parseColor("#E0E0E0"));
                Glide.with(imageView).load(str).placeholder(gradientDrawable3).error((Drawable) gradientDrawable3).into(imageView);
            }
        }
        int iA4 = a(z3 ? 16.0f : 8.0f);
        k1 k1Var = content.b;
        if (k1Var != null) {
            String value = k1Var.f5137a;
            int i4 = k1Var.b;
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(value, "value");
            TextView textView = new TextView(context);
            textView.setText(value);
            textView.setTextColor(i4);
            textView.setTextSize(22.0f);
            textView.setTypeface(textView.getTypeface(), 1);
            int iA5 = a(24.0f);
            LinearLayout.LayoutParams layoutParams3 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams3.topMargin = iA4;
            layoutParams3.setMarginStart(iA5);
            layoutParams3.setMarginEnd(iA5);
            linearLayout.addView(textView, layoutParams3);
            z3 = true;
        }
        k1 k1Var2 = content.c;
        if (k1Var2 != null) {
            iA4 = content.b != null ? a(6.0f) : iA4;
            String value2 = k1Var2.f5137a;
            int i5 = k1Var2.b;
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(value2, "value");
            TextView textView2 = new TextView(context);
            textView2.setText(value2);
            textView2.setTextColor(i5);
            textView2.setTextSize(15.0f);
            int iA6 = a(24.0f);
            LinearLayout.LayoutParams layoutParams4 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams4.topMargin = iA4;
            layoutParams4.setMarginStart(iA6);
            layoutParams4.setMarginEnd(iA6);
            linearLayout.addView(textView2, layoutParams4);
        } else {
            z2 = z3;
        }
        for (Object obj : content.f) {
            int i6 = i + 1;
            if (i < 0) {
                CollectionsKt.throwIndexOverflow();
            }
            c0 c0Var = (c0) obj;
            int iA7 = (i == 0 && z2) ? a(24.0f) : a(10.0f);
            LinearLayout linearLayout2 = this.h;
            TextView textViewA = p1.a(context, c0Var, new b2(this));
            int iA8 = a(20.0f);
            LinearLayout.LayoutParams layoutParams5 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams5.topMargin = iA7;
            layoutParams5.setMarginStart(iA8);
            layoutParams5.setMarginEnd(iA8);
            linearLayout2.addView(textViewA, layoutParams5);
            i = i6;
        }
        if (content.e) {
            int iA9 = a(48.0f);
            c2 onClick = new c2(this);
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(onClick, "onClick");
            TextView textViewA2 = p1.a(context, onClick);
            textViewA2.setBackground(p1.a(context));
            d2 d2Var2 = this.f;
            FrameLayout.LayoutParams layoutParams6 = new FrameLayout.LayoutParams(iA9, iA9, 8388661);
            int i7 = this.e;
            layoutParams6.topMargin = i7;
            layoutParams6.setMarginEnd(i7);
            Unit unit2 = Unit.INSTANCE;
            d2Var2.addView(textViewA2, layoutParams6);
            this.i = textViewA2;
        }
    }

    public static final void a(i2 this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        i1 i1Var = this$0.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
    }

    public final void d() {
        f2 f2Var = this.j;
        if (f2Var != null) {
            this.f.removeOnLayoutChangeListener(f2Var);
        }
        this.j = null;
    }

    @Override // android.view.View
    public final void onRtlPropertiesChanged(int i) {
        super.onRtlPropertiesChanged(i);
        if (this.i != null) {
            a(getSystemInsets());
        }
    }

    public final int a(float f) {
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        return (int) TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Insets insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        d2 d2Var = this.f;
        ViewGroup.LayoutParams layoutParams = d2Var.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
        FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
        layoutParams2.topMargin = insets.top;
        d2Var.setLayoutParams(layoutParams2);
        this.h.setPadding(insets.left, 0, insets.right, this.d + insets.bottom);
        TextView button = this.i;
        if (button != null) {
            int layoutDirection = getLayoutDirection();
            int i = this.e;
            Intrinsics.checkNotNullParameter(button, "button");
            Intrinsics.checkNotNullParameter(insets, "insets");
            int i2 = layoutDirection == 1 ? insets.left : insets.right;
            ViewGroup.LayoutParams layoutParams3 = button.getLayoutParams();
            Intrinsics.checkNotNull(layoutParams3, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
            FrameLayout.LayoutParams layoutParams4 = (FrameLayout.LayoutParams) layoutParams3;
            layoutParams4.topMargin = i;
            layoutParams4.setMarginEnd(i + i2);
            button.setLayoutParams(layoutParams4);
        }
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a() {
        this.f.setAlpha(0.0f);
        if (this.f.getHeight() > 0) {
            d2 d2Var = this.f;
            b0.a(d2Var, a(40.0f) + d2Var.getHeight(), this.c, h2.f5129a);
        } else {
            f2 f2Var = new f2(this);
            this.f.addOnLayoutChangeListener(f2Var);
            this.j = f2Var;
        }
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        d();
        d2 d2Var = this.f;
        b0.b(d2Var, a(40.0f) + d2Var.getHeight(), this.c, onEnd);
    }
}
