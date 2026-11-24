package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.provider.Settings;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.viewpager2.widget.ViewPager2;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class o extends j1 {
    public final boolean c;
    public final LinearLayout d;
    public final int e;
    public final View f;
    public final j g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(InAppOverlayActivity context, g content) {
        boolean z;
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(content, "content");
        Intrinsics.checkNotNullParameter(context, "context");
        try {
            z = Settings.Global.getFloat(context.getContentResolver(), "animator_duration_scale", 1.0f) == 0.0f;
        } catch (Exception unused) {
        }
        this.c = z;
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(0);
        linearLayout.setGravity(17);
        this.d = linearLayout;
        int iA = a(5.0f);
        int iA2 = a(22.0f);
        this.e = iA2;
        View view = new View(context);
        view.setBackgroundColor(Color.parseColor("#CC000000"));
        view.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.o$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view2) {
                o.a(this.f$0, view2);
            }
        });
        this.f = view;
        addView(view, new FrameLayout.LayoutParams(-1, -1));
        j jVar = new j(context);
        float fA = a(24.0f);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(ViewCompat.MEASURED_STATE_MASK);
        gradientDrawable.setCornerRadius(fA);
        jVar.setBackground(gradientDrawable);
        jVar.setClipToOutline(true);
        jVar.setClickable(true);
        this.g = jVar;
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -2, 17);
        layoutParams.leftMargin = iA2;
        layoutParams.rightMargin = iA2;
        layoutParams.topMargin = iA2;
        layoutParams.bottomMargin = iA2;
        Unit unit = Unit.INSTANCE;
        addView(jVar, layoutParams);
        ViewPager2 viewPager2 = new ViewPager2(context);
        viewPager2.setAdapter(new l(content.f5124a, new n(this)));
        jVar.addView(viewPager2, new FrameLayout.LayoutParams(-1, -1));
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-2, -2, 81);
        layoutParams2.bottomMargin = a(12.0f);
        jVar.addView(linearLayout, layoutParams2);
        int iA3 = a(48.0f);
        h onClick = new h(this);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        TextView textViewA = p1.a(context, onClick);
        textViewA.setBackground(p1.a(context));
        FrameLayout.LayoutParams layoutParams3 = new FrameLayout.LayoutParams(iA3, iA3, 8388661);
        layoutParams3.topMargin = iA;
        layoutParams3.setMarginEnd(iA);
        jVar.addView(textViewA, layoutParams3);
        int size = content.f5124a.size();
        linearLayout.removeAllViews();
        if (size <= 1) {
            linearLayout.setVisibility(8);
        } else {
            int iA4 = a(8.0f);
            for (int i = 0; i < size; i++) {
                View view2 = new View(getContext());
                GradientDrawable gradientDrawable2 = new GradientDrawable();
                gradientDrawable2.setShape(1);
                gradientDrawable2.setColor(-1);
                view2.setBackground(gradientDrawable2);
                LinearLayout linearLayout2 = this.d;
                LinearLayout.LayoutParams layoutParams4 = new LinearLayout.LayoutParams(iA4, iA4);
                int iA5 = a(4.0f);
                layoutParams4.leftMargin = iA5;
                layoutParams4.rightMargin = iA5;
                Unit unit2 = Unit.INSTANCE;
                linearLayout2.addView(view2, layoutParams4);
            }
            a(0);
        }
        viewPager2.registerOnPageChangeCallback(new i(this));
    }

    public static final void a(o this$0, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        i1 i1Var = this$0.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Insets insets) {
        Intrinsics.checkNotNullParameter(insets, "insets");
        int iMax = Math.max(insets.left, insets.right) + this.e;
        int iMax2 = Math.max(insets.top, insets.bottom) + this.e;
        ViewGroup.LayoutParams layoutParams = this.g.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
        FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) layoutParams;
        layoutParams2.leftMargin = iMax;
        layoutParams2.rightMargin = iMax;
        layoutParams2.topMargin = iMax2;
        layoutParams2.bottomMargin = iMax2;
        this.g.requestLayout();
    }

    public final void a(int i) {
        int childCount = this.d.getChildCount();
        int i2 = 0;
        while (i2 < childCount) {
            this.d.getChildAt(i2).setAlpha(i2 == i ? 1.0f : 0.4f);
            i2++;
        }
    }

    public final int a(float f) {
        Context context = getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        return (int) TypedValue.applyDimension(1, f, context.getResources().getDisplayMetrics());
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a() {
        b0.a(this.f);
        b0.a(this.g, this.c);
    }

    @Override // com.pushwoosh.inapp.ui.j1
    public final void a(Function0 onEnd) {
        Intrinsics.checkNotNullParameter(onEnd, "onEnd");
        b0.a(m.f5142a, this.f);
        b0.a(this.g, this.c, onEnd);
    }
}
