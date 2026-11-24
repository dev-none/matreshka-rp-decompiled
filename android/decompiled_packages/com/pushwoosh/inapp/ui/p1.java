package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.graphics.drawable.InsetDrawable;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public abstract class p1 {
    public static TextView a(Context context, String value, int i, float f, boolean z, int i2) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(value, "value");
        TextView textView = new TextView(context);
        textView.setText(value);
        textView.setTextColor(i);
        textView.setTextSize(f);
        if (z) {
            textView.setTypeface(textView.getTypeface(), 1);
        }
        if (i2 > 0) {
            textView.setMaxLines(i2);
            textView.setEllipsize(TextUtils.TruncateAt.END);
        }
        return textView;
    }

    public static final void a(Function1 onClick, c0 button, View view) {
        Intrinsics.checkNotNullParameter(onClick, "$onClick");
        Intrinsics.checkNotNullParameter(button, "$button");
        onClick.invoke(button.e);
    }

    public static TextView a(Context context, final c0 button, final Function1 onClick) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(button, "button");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        TextView textView = new TextView(context);
        textView.setText(button.f5112a.f5137a);
        textView.setTextColor(button.f5112a.b);
        textView.setGravity(17);
        textView.setAllCaps(false);
        textView.setTextSize(16.0f);
        float f = button.d;
        Intrinsics.checkNotNullParameter(context, "context");
        float fApplyDimension = (int) TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(button.b);
        gradientDrawable.setCornerRadius(fApplyDimension);
        Intrinsics.checkNotNullParameter(context, "context");
        gradientDrawable.setStroke((int) TypedValue.applyDimension(1, 1.5f, context.getResources().getDisplayMetrics()), button.c);
        textView.setBackground(gradientDrawable);
        Intrinsics.checkNotNullParameter(context, "context");
        int iApplyDimension = (int) TypedValue.applyDimension(1, 12.0f, context.getResources().getDisplayMetrics());
        textView.setPadding(iApplyDimension, iApplyDimension, iApplyDimension, iApplyDimension);
        textView.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.p1$$ExternalSyntheticLambda2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                p1.a(onClick, button, view);
            }
        });
        return textView;
    }

    public static TextView a(Activity context, final Function0 onClick) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        TextView textView = new TextView(context);
        textView.setText("✕");
        textView.setTextColor(-1);
        textView.setTextSize(15.0f);
        textView.setGravity(17);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setShape(1);
        gradientDrawable.setColor(Color.parseColor("#66000000"));
        textView.setBackground(gradientDrawable);
        textView.setContentDescription("Close");
        textView.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.p1$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                p1.a(onClick, view);
            }
        });
        return textView;
    }

    public static final void a(Function0 onClick, View view) {
        Intrinsics.checkNotNullParameter(onClick, "$onClick");
        onClick.invoke();
    }

    public static InsetDrawable a(Activity context) {
        Intrinsics.checkNotNullParameter(context, "context");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setShape(1);
        gradientDrawable.setColor(Color.parseColor("#66000000"));
        Intrinsics.checkNotNullParameter(context, "context");
        return new InsetDrawable((Drawable) gradientDrawable, (int) TypedValue.applyDimension(1, 7.0f, context.getResources().getDisplayMetrics()));
    }

    public static TextView a(InAppOverlayActivity context, k2 onClick) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        TextView textViewA = a((Activity) context, (Function0) onClick);
        textViewA.setBackground(a(context));
        return textViewA;
    }

    public static void a(final LinearLayout column, float f) {
        Intrinsics.checkNotNullParameter(column, "column");
        ViewParent parent = column.getParent();
        Intrinsics.checkNotNull(parent, "null cannot be cast to non-null type android.widget.FrameLayout");
        FrameLayout frameLayout = (FrameLayout) parent;
        Context context = column.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "column.context");
        Intrinsics.checkNotNullParameter(context, "context");
        final View view = new View(context);
        view.setBackground(new GradientDrawable(GradientDrawable.Orientation.TOP_BOTTOM, new int[]{0, Color.parseColor("#BF000000")}));
        Intrinsics.checkNotNullParameter(context, "context");
        view.setMinimumHeight((int) TypedValue.applyDimension(1, 140.0f, context.getResources().getDisplayMetrics()));
        Context context2 = column.getContext();
        Intrinsics.checkNotNullExpressionValue(context2, "column.context");
        Intrinsics.checkNotNullParameter(context2, "context");
        final int iApplyDimension = (int) TypedValue.applyDimension(1, f, context2.getResources().getDisplayMetrics());
        int iIndexOfChild = frameLayout.indexOfChild(column);
        Context context3 = column.getContext();
        Intrinsics.checkNotNullExpressionValue(context3, "column.context");
        Intrinsics.checkNotNullParameter(context3, "context");
        frameLayout.addView(view, iIndexOfChild, new FrameLayout.LayoutParams(-1, (int) TypedValue.applyDimension(1, 140.0f, context3.getResources().getDisplayMetrics()), 80));
        column.addOnLayoutChangeListener(new View.OnLayoutChangeListener() { // from class: com.pushwoosh.inapp.ui.p1$$ExternalSyntheticLambda0
            @Override // android.view.View.OnLayoutChangeListener
            public final void onLayoutChange(View view2, int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8) {
                p1.a(column, iApplyDimension, view, view2, i, i2, i3, i4, i5, i6, i7, i8);
            }
        });
    }

    public static final void a(View column, int i, View scrim, View view, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9) {
        Intrinsics.checkNotNullParameter(column, "$column");
        Intrinsics.checkNotNullParameter(scrim, "$scrim");
        int height = (column.getHeight() - column.getPaddingTop()) + i;
        if (scrim.getLayoutParams().height != height) {
            ViewGroup.LayoutParams layoutParams = scrim.getLayoutParams();
            layoutParams.height = height;
            scrim.setLayoutParams(layoutParams);
        }
    }
}
