package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.recyclerview.widget.RecyclerView;
import com.bumptech.glide.Glide;
import java.util.ArrayList;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: loaded from: classes6.dex */
public final class l extends RecyclerView.Adapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ArrayList f5139a;
    public final n b;

    public l(ArrayList items, n onAction) {
        Intrinsics.checkNotNullParameter(items, "items");
        Intrinsics.checkNotNullParameter(onAction, "onAction");
        this.f5139a = items;
        this.b = onAction;
    }

    public static final void a(l this$0, x xVar, View view) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        this$0.b.invoke(xVar);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final int getItemCount() {
        return this.f5139a.size();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final RecyclerView.ViewHolder onCreateViewHolder(ViewGroup parent, int i) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Context context = parent.getContext();
        FrameLayout frameLayout = new FrameLayout(context);
        frameLayout.setLayoutParams(new RecyclerView.LayoutParams(-1, -1));
        ImageView imageView = new ImageView(context);
        imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
        frameLayout.addView(imageView, new FrameLayout.LayoutParams(-1, -1));
        Intrinsics.checkNotNullExpressionValue(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        View view = new View(context);
        view.setBackground(new GradientDrawable(GradientDrawable.Orientation.TOP_BOTTOM, new int[]{0, Color.parseColor("#BF000000")}));
        Intrinsics.checkNotNullParameter(context, "context");
        view.setMinimumHeight((int) TypedValue.applyDimension(1, 140.0f, context.getResources().getDisplayMetrics()));
        Intrinsics.checkNotNullParameter(context, "context");
        frameLayout.addView(view, new FrameLayout.LayoutParams(-1, (int) TypedValue.applyDimension(1, 140.0f, context.getResources().getDisplayMetrics()), 80));
        LinearLayout linearLayout = new LinearLayout(context);
        linearLayout.setOrientation(1);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -2, 80);
        Intrinsics.checkNotNullParameter(context, "context");
        layoutParams.setMarginStart((int) TypedValue.applyDimension(1, 18.0f, context.getResources().getDisplayMetrics()));
        Intrinsics.checkNotNullParameter(context, "context");
        layoutParams.setMarginEnd((int) TypedValue.applyDimension(1, 18.0f, context.getResources().getDisplayMetrics()));
        Intrinsics.checkNotNullParameter(context, "context");
        layoutParams.bottomMargin = (int) TypedValue.applyDimension(1, 36.0f, context.getResources().getDisplayMetrics());
        Unit unit = Unit.INSTANCE;
        frameLayout.addView(linearLayout, layoutParams);
        TextView textViewA = p1.a(context, "", -1, 20.0f, true, 2);
        linearLayout.addView(textViewA, new LinearLayout.LayoutParams(-1, -2));
        TextView textViewA2 = p1.a(context, "", -1, 14.0f, false, 2);
        linearLayout.addView(textViewA2, new LinearLayout.LayoutParams(-1, -2));
        return new k(frameLayout, imageView, view, textViewA, textViewA2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public final void onBindViewHolder(k holder, int i) {
        boolean z;
        boolean z2;
        int iApplyDimension;
        Intrinsics.checkNotNullParameter(holder, "holder");
        p pVar = (p) this.f5139a.get(i);
        String str = pVar.f5152a;
        ImageView imageView = holder.b;
        Intrinsics.checkNotNullParameter(imageView, "imageView");
        if (str == null || str.length() == 0) {
            imageView.setVisibility(8);
        } else {
            imageView.setVisibility(0);
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setColor(Color.parseColor("#E0E0E0"));
            Glide.with(imageView).load(str).placeholder(gradientDrawable).error((Drawable) gradientDrawable).into(imageView);
        }
        TextView textView = holder.d;
        k1 k1Var = pVar.b;
        if (k1Var == null || StringsKt.isBlank(k1Var.f5137a)) {
            textView.setVisibility(8);
            z = false;
        } else {
            textView.setText(k1Var.f5137a);
            textView.setTextColor(k1Var.b);
            textView.setVisibility(0);
            z = true;
        }
        TextView textView2 = holder.e;
        k1 k1Var2 = pVar.c;
        if (k1Var2 == null || StringsKt.isBlank(k1Var2.f5137a)) {
            textView2.setVisibility(8);
            z2 = false;
        } else {
            textView2.setText(k1Var2.f5137a);
            textView2.setTextColor(k1Var2.b);
            textView2.setVisibility(0);
            z2 = true;
        }
        ViewGroup.LayoutParams layoutParams = holder.e.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.LinearLayout.LayoutParams");
        LinearLayout.LayoutParams layoutParams2 = (LinearLayout.LayoutParams) layoutParams;
        if (z) {
            Context context = holder.f5135a.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "holder.root.context");
            Intrinsics.checkNotNullParameter(context, "context");
            iApplyDimension = (int) TypedValue.applyDimension(1, 3.0f, context.getResources().getDisplayMetrics());
        } else {
            iApplyDimension = 0;
        }
        layoutParams2.topMargin = iApplyDimension;
        holder.e.requestLayout();
        holder.c.setVisibility((z || z2) ? 0 : 8);
        final x xVar = pVar.d;
        if (xVar != null) {
            holder.f5135a.setOnClickListener(new View.OnClickListener() { // from class: com.pushwoosh.inapp.ui.l$$ExternalSyntheticLambda0
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    l.a(this.f$0, xVar, view);
                }
            });
        } else {
            holder.f5135a.setOnClickListener(null);
            holder.f5135a.setClickable(false);
        }
    }
}
