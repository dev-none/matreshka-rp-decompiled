package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.util.TypedValue;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.graphics.Insets;
import com.bumptech.glide.Glide;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class u extends j1 {
    public final LinearLayout c;
    public final int d;
    public final int e;
    public final int f;
    public final TextView g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(InAppOverlayActivity context, q content) {
        InAppOverlayActivity context2;
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(context, "context");
        int iApplyDimension = (int) TypedValue.applyDimension(1, 24.0f, context.getResources().getDisplayMetrics());
        this.d = iApplyDimension;
        Intrinsics.checkNotNullParameter(context, "context");
        this.e = (int) TypedValue.applyDimension(1, 5.0f, context.getResources().getDisplayMetrics());
        Intrinsics.checkNotNullParameter(context, "context");
        this.f = (int) TypedValue.applyDimension(1, 9.0f, context.getResources().getDisplayMetrics());
        setBackgroundColor(content.b);
        ImageView imageView = new ImageView(context);
        imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
        addView(imageView, new FrameLayout.LayoutParams(-1, -1));
        String str = content.f5155a;
        Intrinsics.checkNotNullParameter(imageView, "imageView");
        if (str == null || str.length() == 0) {
            imageView.setVisibility(8);
        } else {
            imageView.setVisibility(0);
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setColor(Color.parseColor("#E0E0E0"));
            Glide.with(imageView).load(str).placeholder(gradientDrawable).error((Drawable) gradientDrawable).into(imageView);
        }
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        linearLayout.setPadding(iApplyDimension, iApplyDimension, iApplyDimension, iApplyDimension);
        this.c = linearLayout;
        addView(linearLayout, new FrameLayout.LayoutParams(-1, -2, 80));
        p1.a(linearLayout, 48.0f);
        k1 k1Var = content.c;
        if (k1Var != null) {
            TextView textViewA = p1.a(context, k1Var.f5137a, k1Var.b, 26.0f, true, 0);
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
            layoutParams.topMargin = 0;
            linearLayout.addView(textViewA, layoutParams);
        }
        k1 k1Var2 = content.d;
        if (k1Var2 != null) {
            String str2 = k1Var2.f5137a;
            int i = k1Var2.b;
            context2 = context;
            TextView textViewA2 = p1.a(context2, str2, i, 16.0f, false, 0);
            Context context3 = getContext();
            Intrinsics.checkNotNullExpressionValue(context3, "context");
            Intrinsics.checkNotNullParameter(context3, "context");
            int iApplyDimension2 = (int) TypedValue.applyDimension(1, 8.0f, context3.getResources().getDisplayMetrics());
            LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams2.topMargin = iApplyDimension2;
            linearLayout.addView(textViewA2, layoutParams2);
        } else {
            context2 = context;
        }
        for (c0 c0Var : content.e) {
            LinearLayout linearLayout2 = this.c;
            TextView textViewA3 = p1.a(context2, c0Var, new s(this));
            Context context4 = getContext();
            Intrinsics.checkNotNullExpressionValue(context4, "context");
            Intrinsics.checkNotNullParameter(context4, "context");
            int iApplyDimension3 = (int) TypedValue.applyDimension(1, 12.0f, context4.getResources().getDisplayMetrics());
            LinearLayout.LayoutParams layoutParams3 = new LinearLayout.LayoutParams(-1, -2);
            layoutParams3.topMargin = iApplyDimension3;
            linearLayout2.addView(textViewA3, layoutParams3);
        }
        if (content.f || content.e.isEmpty()) {
            Intrinsics.checkNotNullParameter(context2, "context");
            int iApplyDimension4 = (int) TypedValue.applyDimension(1, 48.0f, context2.getResources().getDisplayMetrics());
            t onClick = new t(this);
            Intrinsics.checkNotNullParameter(context2, "context");
            Intrinsics.checkNotNullParameter(onClick, "onClick");
            TextView textViewA4 = p1.a(context2, onClick);
            textViewA4.setBackground(p1.a(context2));
            FrameLayout.LayoutParams layoutParams4 = new FrameLayout.LayoutParams(iApplyDimension4, iApplyDimension4, 8388661);
            layoutParams4.topMargin = this.e;
            layoutParams4.setMarginEnd(this.f);
            Unit unit = Unit.INSTANCE;
            addView(textViewA4, layoutParams4);
            this.g = textViewA4;
        }
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Insets insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        LinearLayout linearLayout = this.c;
        int i = this.d;
        linearLayout.setPadding(insets.left + i, i, insets.right + i, insets.bottom + i);
        TextView button = this.g;
        if (button != null) {
            int layoutDirection = getLayoutDirection();
            int i2 = this.e + insets.top;
            int i3 = this.f;
            Intrinsics.checkNotNullParameter(button, "button");
            Intrinsics.checkNotNullParameter(insets, "insets");
            int i4 = layoutDirection == 1 ? insets.left : insets.right;
            ViewGroup.LayoutParams layoutParams = button.getLayoutParams();
            Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
            layoutParams2.topMargin = i2;
            layoutParams2.setMarginEnd(i3 + i4);
            button.setLayoutParams(layoutParams2);
        }
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a() {
        b0.a(this);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        b0.a(onEnd, this);
    }
}
