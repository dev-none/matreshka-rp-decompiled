package com.my.target;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.Context;
import android.graphics.drawable.GradientDrawable;
import android.text.TextUtils;
import android.util.Property;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.my.target.common.NavigationType;
import com.my.target.common.models.ImageData;
import com.my.target.common.views.StarsRatingView;
import com.my.target.nativeads.constants.NativeAdColor;
import com.my.target.nativeads.views.MediaAdView;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public class p8 extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TextView f4770a;
    public final fb b;
    public final TextView c;
    public final LinearLayout d;
    public final StarsRatingView e;
    public final TextView f;
    public final TextView g;
    public final Button h;
    public final ma i;
    public final kb j;
    public final int k;
    public final int l;
    public final int m;

    public class a implements Animator.AnimatorListener {
        public a() {
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationCancel(Animator animator) {
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationEnd(Animator animator) {
            p8.this.c.setVisibility(8);
            p8.this.f4770a.setVisibility(8);
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationRepeat(Animator animator) {
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationStart(Animator animator) {
        }
    }

    public class b implements Animator.AnimatorListener {
        public b() {
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationCancel(Animator animator) {
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationEnd(Animator animator) {
            if (p8.this.d.isEnabled()) {
                p8.this.d.setVisibility(8);
            }
            if (p8.this.g.isEnabled()) {
                p8.this.g.setVisibility(8);
            }
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationRepeat(Animator animator) {
        }

        @Override // android.animation.Animator.AnimatorListener
        public void onAnimationStart(Animator animator) {
        }
    }

    public p8(Context context, kb kbVar) {
        super(context);
        this.j = kbVar;
        Button button = new Button(context);
        this.h = button;
        kb.b(button, "cta_button");
        ma maVar = new ma(context);
        this.i = maVar;
        kb.b(maVar, "icon_image");
        this.b = new fb(context);
        TextView textView = new TextView(context);
        this.f4770a = textView;
        kb.b(textView, "description_text");
        TextView textView2 = new TextView(context);
        this.c = textView2;
        kb.b(textView2, "disclaimer_text");
        this.d = new LinearLayout(context);
        StarsRatingView starsRatingView = new StarsRatingView(context);
        this.e = starsRatingView;
        kb.b(starsRatingView, "stars_view");
        TextView textView3 = new TextView(context);
        this.f = textView3;
        kb.b(textView3, "votes_text");
        TextView textView4 = new TextView(context);
        this.g = textView4;
        kb.b(textView4, "domain_text");
        this.k = kbVar.b(16);
        this.m = kbVar.b(8);
        this.l = kbVar.b(64);
    }

    public void a() {
        setBackgroundColor(1711276032);
        this.f4770a.setTextColor(-2236963);
        TextView textView = this.f4770a;
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        textView.setEllipsize(truncateAt);
        this.g.setTextColor(NativeAdColor.STANDARD_GREY);
        this.g.setVisibility(8);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(0);
        gradientDrawable.setStroke(1, -3355444);
        this.c.setPadding(this.j.b(4), this.j.b(4), this.j.b(4), this.j.b(4));
        this.c.setBackgroundDrawable(gradientDrawable);
        this.c.setTextSize(2, 12.0f);
        this.c.setTextColor(-3355444);
        this.c.setVisibility(8);
        this.d.setOrientation(0);
        this.d.setGravity(16);
        this.d.setVisibility(8);
        this.f.setTextColor(NativeAdColor.STANDARD_GREY);
        this.f.setGravity(16);
        this.f.setTextSize(2, 14.0f);
        this.h.setPadding(this.j.b(15), 0, this.j.b(15), 0);
        this.h.setMinimumWidth(this.j.b(100));
        this.h.setTransformationMethod(null);
        this.h.setTextSize(2, 22.0f);
        this.h.setMaxEms(10);
        this.h.setSingleLine();
        this.h.setEllipsize(truncateAt);
        r0 rightBorderedView = this.b.getRightBorderedView();
        rightBorderedView.a(1, -7829368);
        rightBorderedView.setPadding(this.j.b(2), 0, 0, 0);
        rightBorderedView.setTextColor(MediaAdView.COLOR_PLACEHOLDER_GRAY);
        rightBorderedView.a(1, MediaAdView.COLOR_PLACEHOLDER_GRAY, this.j.b(3));
        rightBorderedView.setBackgroundColor(1711276032);
        this.e.setStarSize(this.j.b(12));
        this.d.addView(this.e);
        this.d.addView(this.f);
        this.d.setVisibility(8);
        this.g.setVisibility(8);
        addView(this.b);
        addView(this.d);
        addView(this.g);
        addView(this.f4770a);
        addView(this.c);
        addView(this.i);
        addView(this.h);
    }

    public void b(View... viewArr) {
        if (getVisibility() == 0) {
            d(viewArr);
        }
    }

    public final void c(View... viewArr) {
        ArrayList arrayList = new ArrayList();
        Button button = this.h;
        Property property = View.SCALE_Y;
        arrayList.add(ObjectAnimator.ofFloat(button, (Property<Button, Float>) property, 1.0f));
        Button button2 = this.h;
        Property property2 = View.SCALE_X;
        arrayList.add(ObjectAnimator.ofFloat(button2, (Property<Button, Float>) property2, 1.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.i, (Property<ma, Float>) property, 1.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.i, (Property<ma, Float>) property2, 1.0f));
        TextView textView = this.f4770a;
        Property property3 = View.ALPHA;
        arrayList.add(ObjectAnimator.ofFloat(textView, (Property<TextView, Float>) property3, 1.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.c, (Property<TextView, Float>) property3, 1.0f));
        if (this.d.isEnabled()) {
            arrayList.add(ObjectAnimator.ofFloat(this.d, (Property<LinearLayout, Float>) property3, 0.0f));
        }
        arrayList.add(ObjectAnimator.ofFloat(this, (Property<p8, Float>) property3, 1.0f));
        fb fbVar = this.b;
        Property property4 = View.TRANSLATION_X;
        arrayList.add(ObjectAnimator.ofFloat(fbVar, (Property<fb, Float>) property4, 0.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.d, (Property<LinearLayout, Float>) property4, 0.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.g, (Property<TextView, Float>) property4, 0.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.f4770a, (Property<TextView, Float>) property4, 0.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.c, (Property<TextView, Float>) property4, 0.0f));
        Property property5 = View.TRANSLATION_Y;
        arrayList.add(ObjectAnimator.ofFloat(this, (Property<p8, Float>) property5, 0.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.h, (Property<Button, Float>) property5, 0.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.i, (Property<ma, Float>) property5, 0.0f));
        for (View view : viewArr) {
            arrayList.add(ObjectAnimator.ofFloat(view, (Property<View, Float>) View.TRANSLATION_Y, 0.0f));
        }
        if (!TextUtils.isEmpty(this.c.getText().toString())) {
            this.c.setVisibility(0);
        }
        this.f4770a.setVisibility(0);
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playTogether(arrayList);
        animatorSet.addListener(new b());
        animatorSet.setDuration(300L);
        animatorSet.start();
    }

    public final void d(View... viewArr) {
        a(0, viewArr);
    }

    public void e(View... viewArr) {
        c(viewArr);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int measuredWidth = getMeasuredWidth();
        int measuredHeight = getMeasuredHeight();
        int measuredHeight2 = this.i.getMeasuredHeight();
        int measuredWidth2 = this.i.getMeasuredWidth();
        int i5 = (measuredHeight - measuredHeight2) / 2;
        ma maVar = this.i;
        int i6 = this.k;
        maVar.layout(i6, i5, i6 + measuredWidth2, measuredHeight2 + i5);
        int measuredWidth3 = this.h.getMeasuredWidth();
        int measuredHeight3 = this.h.getMeasuredHeight();
        int i7 = (measuredHeight - measuredHeight3) / 2;
        int i8 = this.k;
        this.h.layout((measuredWidth - measuredWidth3) - i8, i7, measuredWidth - i8, measuredHeight3 + i7);
        int i9 = this.k;
        int i10 = measuredWidth2 + i9 + i9;
        fb fbVar = this.b;
        fbVar.layout(i10, this.m, fbVar.getMeasuredWidth() + i10, this.m + this.b.getMeasuredHeight());
        this.d.layout(i10, this.b.getBottom(), this.d.getMeasuredWidth() + i10, this.b.getBottom() + this.d.getMeasuredHeight());
        this.g.layout(i10, this.b.getBottom(), this.g.getMeasuredWidth() + i10, this.b.getBottom() + this.g.getMeasuredHeight());
        this.f4770a.layout(i10, this.b.getBottom(), this.f4770a.getMeasuredWidth() + i10, this.b.getBottom() + this.f4770a.getMeasuredHeight());
        this.c.layout(i10, this.f4770a.getBottom(), this.c.getMeasuredWidth() + i10, this.f4770a.getBottom() + this.c.getMeasuredHeight());
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2) / 4;
        int i3 = size - (this.k * 2);
        int i4 = size2 - (this.m * 2);
        int iMin = Math.min(i4, this.l);
        this.i.measure(View.MeasureSpec.makeMeasureSpec(iMin, 1073741824), View.MeasureSpec.makeMeasureSpec(iMin, 1073741824));
        this.h.measure(View.MeasureSpec.makeMeasureSpec(i3, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(iMin - (this.m * 2), 1073741824));
        int measuredWidth = ((i3 - this.i.getMeasuredWidth()) - this.h.getMeasuredWidth()) - (this.k * 2);
        this.b.measure(View.MeasureSpec.makeMeasureSpec(measuredWidth, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE));
        this.d.measure(View.MeasureSpec.makeMeasureSpec(measuredWidth, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE));
        this.g.measure(View.MeasureSpec.makeMeasureSpec(measuredWidth, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE));
        this.f4770a.measure(View.MeasureSpec.makeMeasureSpec(measuredWidth, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i4 - this.b.getMeasuredHeight(), Integer.MIN_VALUE));
        this.c.measure(View.MeasureSpec.makeMeasureSpec(measuredWidth, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE));
        int measuredHeight = this.b.getMeasuredHeight() + Math.max(this.f4770a.getMeasuredHeight(), this.d.getMeasuredHeight()) + (this.m * 2);
        if (this.c.getVisibility() == 0) {
            measuredHeight += this.c.getMeasuredHeight();
        }
        setMeasuredDimension(size, Math.max(this.h.getMeasuredHeight(), Math.max(this.i.getMeasuredHeight(), measuredHeight)) + (this.m * 2));
    }

    public void setBanner(o4 o4Var) {
        this.b.getLeftText().setText(o4Var.A());
        this.f4770a.setText(o4Var.k());
        String strL = o4Var.l();
        if (TextUtils.isEmpty(strL)) {
            this.c.setVisibility(8);
        } else {
            this.c.setVisibility(0);
            this.c.setText(strL);
        }
        ImageData imageDataQ = o4Var.q();
        if (imageDataQ != null) {
            this.i.setVisibility(0);
            this.i.setImageData(imageDataQ);
        } else {
            this.i.setVisibility(8);
        }
        this.h.setText(o4Var.i());
        if ("".equals(o4Var.c())) {
            this.b.getRightBorderedView().setVisibility(8);
        } else {
            this.b.getRightBorderedView().setText(o4Var.c());
        }
        kb.b(this.h, -16733198, -16746839, this.j.b(2));
        this.h.setTextColor(-1);
        if (NavigationType.STORE.equals(o4Var.t())) {
            if (o4Var.F() == 0 || o4Var.w() <= 0.0f) {
                this.d.setEnabled(false);
                this.d.setVisibility(8);
            } else {
                this.d.setEnabled(true);
                this.e.setRating(o4Var.w());
                this.f.setText(String.valueOf(o4Var.F()));
            }
            this.g.setEnabled(false);
        } else {
            String strN = o4Var.n();
            if (TextUtils.isEmpty(strN)) {
                this.g.setEnabled(false);
                this.g.setVisibility(8);
            } else {
                this.g.setEnabled(true);
                this.g.setText(strN);
            }
            this.d.setEnabled(false);
        }
        if (o4Var.V() == null || !o4Var.V().h0()) {
            this.d.setVisibility(8);
            this.g.setVisibility(8);
        }
    }

    public void a(d1 d1Var, final m8 m8Var) {
        View.OnClickListener onClickListener = new View.OnClickListener() { // from class: com.my.target.p8$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.a(m8Var, view);
            }
        };
        if (d1Var.m) {
            setOnClickListener(onClickListener);
            this.h.setOnClickListener(onClickListener);
            return;
        }
        if (d1Var.g) {
            this.h.setOnClickListener(onClickListener);
        } else {
            this.h.setEnabled(false);
        }
        if (d1Var.l) {
            setOnClickListener(onClickListener);
        } else {
            setOnClickListener(null);
        }
        if (d1Var.f4588a) {
            this.b.getLeftText().setOnClickListener(onClickListener);
        } else {
            this.b.getLeftText().setOnClickListener(null);
        }
        if (d1Var.h) {
            this.b.getRightBorderedView().setOnClickListener(onClickListener);
        } else {
            this.b.getRightBorderedView().setOnClickListener(null);
        }
        if (d1Var.c) {
            this.i.setOnClickListener(onClickListener);
        } else {
            this.i.setOnClickListener(null);
        }
        if (d1Var.b) {
            this.f4770a.setOnClickListener(onClickListener);
        } else {
            this.f4770a.setOnClickListener(null);
        }
        if (d1Var.e) {
            this.e.setOnClickListener(onClickListener);
        } else {
            this.e.setOnClickListener(null);
        }
        if (d1Var.f) {
            this.f.setOnClickListener(onClickListener);
        } else {
            this.f.setOnClickListener(null);
        }
        if (d1Var.j) {
            this.g.setOnClickListener(onClickListener);
        } else {
            this.g.setOnClickListener(null);
        }
    }

    public final /* synthetic */ void a(m8 m8Var, View view) {
        m8Var.a(view, view == this.h ? 2 : 1);
    }

    public void a(View... viewArr) {
        if (getVisibility() == 0) {
            a(300, viewArr);
        }
    }

    public final void a(int i, View... viewArr) {
        int height = this.i.getHeight();
        int height2 = getHeight();
        int width = this.h.getWidth();
        int height3 = this.h.getHeight();
        int width2 = this.i.getWidth();
        this.i.setPivotX(0.0f);
        this.i.setPivotY(height / 2.0f);
        this.h.setPivotX(width);
        this.h.setPivotY(height3 / 2.0f);
        float f = height2 * 0.3f;
        ArrayList arrayList = new ArrayList();
        Button button = this.h;
        Property property = View.SCALE_X;
        arrayList.add(ObjectAnimator.ofFloat(button, (Property<Button, Float>) property, 0.7f));
        Button button2 = this.h;
        Property property2 = View.SCALE_Y;
        arrayList.add(ObjectAnimator.ofFloat(button2, (Property<Button, Float>) property2, 0.7f));
        arrayList.add(ObjectAnimator.ofFloat(this.i, (Property<ma, Float>) property, 0.7f));
        arrayList.add(ObjectAnimator.ofFloat(this.i, (Property<ma, Float>) property2, 0.7f));
        TextView textView = this.f4770a;
        Property property3 = View.ALPHA;
        arrayList.add(ObjectAnimator.ofFloat(textView, (Property<TextView, Float>) property3, 0.0f));
        arrayList.add(ObjectAnimator.ofFloat(this.c, (Property<TextView, Float>) property3, 0.0f));
        if (this.d.isEnabled()) {
            arrayList.add(ObjectAnimator.ofFloat(this.d, (Property<LinearLayout, Float>) property3, 1.0f));
        }
        arrayList.add(ObjectAnimator.ofFloat(this, (Property<p8, Float>) property3, 0.6f));
        float f2 = -(width2 * 0.3f);
        fb fbVar = this.b;
        Property property4 = View.TRANSLATION_X;
        arrayList.add(ObjectAnimator.ofFloat(fbVar, (Property<fb, Float>) property4, f2));
        arrayList.add(ObjectAnimator.ofFloat(this.d, (Property<LinearLayout, Float>) property4, f2));
        arrayList.add(ObjectAnimator.ofFloat(this.g, (Property<TextView, Float>) property4, f2));
        arrayList.add(ObjectAnimator.ofFloat(this.f4770a, (Property<TextView, Float>) property4, f2));
        arrayList.add(ObjectAnimator.ofFloat(this.c, (Property<TextView, Float>) property4, f2));
        Property property5 = View.TRANSLATION_Y;
        arrayList.add(ObjectAnimator.ofFloat(this, (Property<p8, Float>) property5, f));
        float f3 = (-f) / 2.0f;
        arrayList.add(ObjectAnimator.ofFloat(this.h, (Property<Button, Float>) property5, f3));
        arrayList.add(ObjectAnimator.ofFloat(this.i, (Property<ma, Float>) property5, f3));
        for (View view : viewArr) {
            arrayList.add(ObjectAnimator.ofFloat(view, (Property<View, Float>) View.TRANSLATION_Y, f));
        }
        if (this.d.isEnabled()) {
            this.d.setVisibility(0);
        }
        if (this.g.isEnabled()) {
            this.g.setVisibility(0);
        }
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.addListener(new a());
        animatorSet.playTogether(arrayList);
        animatorSet.setDuration(i);
        animatorSet.start();
    }
}
