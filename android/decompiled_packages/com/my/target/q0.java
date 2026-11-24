package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.view.ViewCompat;
import com.my.target.common.NavigationType;
import com.my.target.common.views.StarsRatingView;
import com.my.target.nativeads.constants.NativeAdColor;
import java.util.HashMap;

/* JADX INFO: loaded from: classes6.dex */
public class q0 extends FrameLayout implements View.OnTouchListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TextView f4780a;
    public final TextView b;
    public final TextView c;
    public final LinearLayout d;
    public final LinearLayout e;
    public final TextView f;
    public final StarsRatingView g;
    public final TextView h;
    public final kb i;
    public final boolean j;
    public final HashMap k;
    public String l;
    public View.OnClickListener m;

    public q0(Context context, kb kbVar, boolean z) {
        super(context);
        this.k = new HashMap();
        TextView textView = new TextView(context);
        this.f4780a = textView;
        this.b = new TextView(context);
        TextView textView2 = new TextView(context);
        this.c = textView2;
        this.d = new LinearLayout(context);
        TextView textView3 = new TextView(context);
        this.f = textView3;
        StarsRatingView starsRatingView = new StarsRatingView(context);
        this.g = starsRatingView;
        TextView textView4 = new TextView(context);
        this.h = textView4;
        this.e = new LinearLayout(context);
        kb.b(textView, "title_text");
        kb.b(textView2, "description_text");
        kb.b(textView3, "disclaimer_text");
        kb.b(starsRatingView, "stars_view");
        kb.b(textView4, "votes_text");
        this.i = kbVar;
        this.j = z;
    }

    public void a(d1 d1Var, View.OnClickListener onClickListener) {
        if (d1Var.m) {
            setOnClickListener(onClickListener);
            kb.a(this, -1, NativeAdColor.BACKGROUND_TOUCH);
            return;
        }
        this.m = onClickListener;
        this.f4780a.setOnTouchListener(this);
        this.b.setOnTouchListener(this);
        this.c.setOnTouchListener(this);
        this.g.setOnTouchListener(this);
        this.h.setOnTouchListener(this);
        setOnTouchListener(this);
        this.k.put(this.f4780a, Boolean.valueOf(d1Var.f4588a));
        if (NavigationType.STORE.equals(this.l)) {
            this.k.put(this.b, Boolean.valueOf(d1Var.k));
        } else {
            this.k.put(this.b, Boolean.valueOf(d1Var.j));
        }
        this.k.put(this.c, Boolean.valueOf(d1Var.b));
        this.k.put(this.g, Boolean.valueOf(d1Var.e));
        this.k.put(this.h, Boolean.valueOf(d1Var.f));
        this.k.put(this, Boolean.valueOf(d1Var.l));
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        if (!this.k.containsKey(view)) {
            return false;
        }
        if (!((Boolean) this.k.get(view)).booleanValue()) {
            return true;
        }
        int action = motionEvent.getAction();
        if (action == 0) {
            setBackgroundColor(NativeAdColor.BACKGROUND_TOUCH);
        } else if (action == 1) {
            setBackgroundColor(-1);
            View.OnClickListener onClickListener = this.m;
            if (onClickListener != null) {
                onClickListener.onClick(view);
            }
        } else if (action == 3) {
            setBackgroundColor(-1);
        }
        return true;
    }

    public void setBanner(o4 o4Var) {
        this.l = o4Var.t();
        this.f4780a.setText(o4Var.A());
        this.c.setText(o4Var.k());
        this.g.setRating(o4Var.w());
        this.h.setText(String.valueOf(o4Var.F()));
        if (NavigationType.STORE.equals(o4Var.t())) {
            kb.b(this.b, "category_text");
            String strF = o4Var.f();
            String strZ = o4Var.z();
            String str = "";
            if (!TextUtils.isEmpty(strF)) {
                str = "" + strF;
            }
            if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(strZ)) {
                str = str + ", ";
            }
            if (!TextUtils.isEmpty(strZ)) {
                str = str + strZ;
            }
            if (TextUtils.isEmpty(str)) {
                this.b.setVisibility(8);
            } else {
                this.b.setText(str);
                this.b.setVisibility(0);
            }
            this.d.setVisibility(0);
            this.d.setGravity(16);
            if (o4Var.w() > 0.0f) {
                this.g.setVisibility(0);
                if (o4Var.F() > 0) {
                    this.h.setVisibility(0);
                } else {
                    this.h.setVisibility(8);
                }
            } else {
                this.g.setVisibility(8);
                this.h.setVisibility(8);
            }
            this.b.setTextColor(-3355444);
        } else {
            kb.b(this.b, "domain_text");
            this.d.setVisibility(8);
            this.b.setText(o4Var.n());
            this.d.setVisibility(8);
            this.b.setTextColor(-16733198);
        }
        if (TextUtils.isEmpty(o4Var.l())) {
            this.f.setVisibility(8);
        } else {
            this.f.setVisibility(0);
            this.f.setText(o4Var.l());
        }
        if (this.j) {
            this.f4780a.setTextSize(2, 32.0f);
            this.c.setTextSize(2, 24.0f);
            this.f.setTextSize(2, 18.0f);
            this.b.setTextSize(2, 18.0f);
            return;
        }
        this.f4780a.setTextSize(2, 20.0f);
        this.c.setTextSize(2, 16.0f);
        this.f.setTextSize(2, 14.0f);
        this.b.setTextSize(2, 16.0f);
    }

    public void a(boolean z) {
        this.e.setOrientation(1);
        this.e.setGravity(1);
        this.f4780a.setGravity(1);
        this.f4780a.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 1;
        layoutParams.leftMargin = this.i.b(8);
        layoutParams.rightMargin = this.i.b(8);
        this.f4780a.setLayoutParams(layoutParams);
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams2.gravity = 1;
        this.b.setLayoutParams(layoutParams2);
        this.b.setLines(1);
        this.b.setEllipsize(TextUtils.TruncateAt.MIDDLE);
        this.c.setGravity(1);
        this.c.setTextColor(ViewCompat.MEASURED_STATE_MASK);
        FrameLayout.LayoutParams layoutParams3 = new FrameLayout.LayoutParams(-2, -2);
        if (z) {
            this.c.setTextSize(2, 12.0f);
            this.c.setLines(2);
            this.c.setEllipsize(TextUtils.TruncateAt.END);
            layoutParams3.topMargin = 0;
            layoutParams3.leftMargin = this.i.b(4);
            layoutParams3.rightMargin = this.i.b(4);
        } else {
            this.c.setTextSize(2, 16.0f);
            layoutParams3.topMargin = this.i.b(8);
            layoutParams3.leftMargin = this.i.b(16);
            layoutParams3.rightMargin = this.i.b(16);
        }
        layoutParams3.gravity = 1;
        this.c.setLayoutParams(layoutParams3);
        this.d.setOrientation(0);
        FrameLayout.LayoutParams layoutParams4 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams4.gravity = 1;
        this.d.setLayoutParams(layoutParams4);
        FrameLayout.LayoutParams layoutParams5 = new FrameLayout.LayoutParams(this.i.b(73), this.i.b(12));
        layoutParams5.topMargin = this.i.b(4);
        layoutParams5.rightMargin = this.i.b(4);
        this.g.setLayoutParams(layoutParams5);
        this.h.setTextColor(NativeAdColor.STANDARD_GREY);
        this.h.setTextSize(2, 14.0f);
        this.f.setTextColor(NativeAdColor.STANDARD_GREY);
        this.f.setGravity(1);
        FrameLayout.LayoutParams layoutParams6 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams6.gravity = 1;
        if (z) {
            layoutParams6.leftMargin = this.i.b(4);
            layoutParams6.rightMargin = this.i.b(4);
        } else {
            layoutParams6.leftMargin = this.i.b(16);
            layoutParams6.rightMargin = this.i.b(16);
        }
        layoutParams6.gravity = 1;
        this.f.setLayoutParams(layoutParams6);
        FrameLayout.LayoutParams layoutParams7 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams7.gravity = 17;
        addView(this.e, layoutParams7);
        this.e.addView(this.f4780a);
        this.e.addView(this.b);
        this.e.addView(this.d);
        this.e.addView(this.c);
        this.e.addView(this.f);
        this.d.addView(this.g);
        this.d.addView(this.h);
    }
}
