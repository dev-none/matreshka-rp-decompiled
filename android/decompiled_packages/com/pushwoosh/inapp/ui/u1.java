package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.provider.Settings;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.graphics.Insets;
import com.bumptech.glide.Glide;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class u1 extends j1 {
    public final FrameLayout c;
    public final int d;
    public final boolean e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u1(Activity context, q1 content) {
        boolean z;
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(content, "content");
        int iA = a(28.0f);
        this.d = iA;
        Intrinsics.checkNotNullParameter(context, "context");
        try {
            z = Settings.Global.getFloat(context.getContentResolver(), "animator_duration_scale", 1.0f) == 0.0f;
        } catch (Exception unused) {
        }
        this.e = z;
        if (content.g) {
            View view = new View(context);
            view.setBackgroundColor(Color.parseColor("#99000000"));
            view.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.u1$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view2) {
                    u1.a(this.f$0, view2);
                }
            });
            addView(view, new FrameLayout.LayoutParams(-1, -1));
        }
        FrameLayout frameLayout = new FrameLayout(context);
        int i = content.f5157a;
        float fA = a(16.0f);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(i);
        gradientDrawable.setCornerRadius(fA);
        frameLayout.setBackground(gradientDrawable);
        frameLayout.setClipToOutline(true);
        frameLayout.setClickable(true);
        this.c = frameLayout;
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -2, 17);
        layoutParams.leftMargin = iA;
        layoutParams.rightMargin = iA;
        Unit unit = Unit.INSTANCE;
        addView(frameLayout, layoutParams);
        boolean z2 = content.d != null;
        int iA2 = a(14.0f);
        int iA3 = a(20.0f) - iA2;
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        linearLayout.setPadding(iA2, z2 ? iA2 : a(20.0f), iA2, a(20.0f));
        frameLayout.addView(linearLayout, new FrameLayout.LayoutParams(-1, -2));
        String str = content.d;
        if (str != null) {
            ImageView imageView = new ImageView(context);
            imageView.setAdjustViewBounds(true);
            imageView.setScaleType(ImageView.ScaleType.FIT_CENTER);
            imageView.setMinimumHeight(a(180.0f));
            imageView.setOutlineProvider(new r1(this));
            imageView.setClipToOutline(true);
            linearLayout.addView(imageView, a(this, 0, a(12.0f), 0, 5));
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
        k1 k1Var = content.b;
        if (k1Var != null) {
            String value = k1Var.f5137a;
            int i2 = k1Var.b;
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(value, "value");
            TextView textView = new TextView(context);
            textView.setText(value);
            textView.setTextColor(i2);
            textView.setTextSize(20.0f);
            textView.setTypeface(textView.getTypeface(), 1);
            linearLayout.addView(textView, a(this, 0, 0, iA3, 3));
        }
        k1 k1Var2 = content.c;
        if (k1Var2 != null) {
            String value2 = k1Var2.f5137a;
            int i3 = k1Var2.b;
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(value2, "value");
            TextView textView2 = new TextView(context);
            textView2.setText(value2);
            textView2.setTextColor(i3);
            textView2.setTextSize(15.0f);
            linearLayout.addView(textView2, a(this, a(8.0f), 0, iA3, 2));
        }
        Iterator it = content.f.iterator();
        while (it.hasNext()) {
            linearLayout.addView(p1.a(context, (c0) it.next(), new s1(this)), a(this, a(12.0f), 0, iA3, 2));
        }
        if (content.e || content.f.isEmpty()) {
            int iA4 = a(48.0f);
            FrameLayout frameLayout2 = this.c;
            t1 onClick = new t1(this);
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(onClick, "onClick");
            TextView textViewA = p1.a(context, onClick);
            textViewA.setBackground(p1.a(context));
            FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(iA4, iA4, 8388661);
            layoutParams2.topMargin = a(13.0f);
            layoutParams2.setMarginEnd(a(13.0f));
            Unit unit2 = Unit.INSTANCE;
            frameLayout2.addView(textViewA, layoutParams2);
        }
    }

    public static final void a(u1 this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        i1 i1Var = this$0.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Insets insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        int iMax = Math.max(insets.left, insets.right) + this.d;
        int iMax2 = Math.max(insets.top, insets.bottom);
        ViewGroup.LayoutParams layoutParams = this.c.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
        FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
        layoutParams2.leftMargin = iMax;
        layoutParams2.rightMargin = iMax;
        layoutParams2.topMargin = iMax2;
        layoutParams2.bottomMargin = iMax2;
        this.c.requestLayout();
    }

    public final int a(float f) {
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        return (int) TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
    }

    public static LinearLayout.LayoutParams a(u1 u1Var, int i, int i2, int i3, int i4) {
        if ((i4 & 1) != 0) {
            i = 0;
        }
        if ((i4 & 2) != 0) {
            i2 = 0;
        }
        if ((i4 & 4) != 0) {
            i3 = 0;
        }
        u1Var.getClass();
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
        layoutParams.topMargin = i;
        layoutParams.bottomMargin = i2;
        layoutParams.setMarginStart(i3);
        layoutParams.setMarginEnd(i3);
        return layoutParams;
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a() {
        b0.a(this.c, this.e);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        b0.a(this.c, this.e, onEnd);
    }
}
