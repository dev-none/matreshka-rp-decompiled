package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import android.widget.RelativeLayout;
import com.my.target.nativeads.constants.NativeAdColor;
import com.my.target.nativeads.views.MediaAdView;

/* JADX INFO: loaded from: classes6.dex */
public class pb extends RelativeLayout {
    public static final int g = kb.c();
    public static final int h = kb.c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final q0 f4779a;
    public final Button b;
    public final r0 c;
    public final f2 d;
    public final kb e;
    public final boolean f;

    public pb(Context context, kb kbVar, boolean z) {
        super(context);
        this.e = kbVar;
        this.f = z;
        f2 f2Var = new f2(context, kbVar, z);
        this.d = f2Var;
        kb.b(f2Var, "footer_layout");
        q0 q0Var = new q0(context, kbVar, z);
        this.f4779a = q0Var;
        kb.b(q0Var, "body_layout");
        Button button = new Button(context);
        this.b = button;
        kb.b(button, "cta_button");
        r0 r0Var = new r0(context);
        this.c = r0Var;
        kb.b(r0Var, "age_bordering");
    }

    public void a(int i, int i2, boolean z) {
        int iMax = Math.max(i2, i) / 8;
        this.f4779a.a(z);
        this.d.a();
        View view = new View(getContext());
        view.setBackgroundColor(-5592406);
        view.setLayoutParams(new RelativeLayout.LayoutParams(-1, 1));
        f2 f2Var = this.d;
        int i3 = g;
        f2Var.setId(i3);
        this.d.a(iMax, z);
        this.b.setPadding(this.e.b(15), 0, this.e.b(15), 0);
        this.b.setMinimumWidth(this.e.b(100));
        this.b.setTransformationMethod(null);
        this.b.setSingleLine();
        this.b.setEllipsize(TextUtils.TruncateAt.END);
        this.c.a(1, -7829368);
        this.c.setPadding(this.e.b(2), 0, 0, 0);
        this.c.setTextColor(MediaAdView.COLOR_PLACEHOLDER_GRAY);
        this.c.setMaxEms(5);
        this.c.a(1, MediaAdView.COLOR_PLACEHOLDER_GRAY, this.e.b(3));
        this.c.setBackgroundColor(1711276032);
        q0 q0Var = this.f4779a;
        int i4 = h;
        q0Var.setId(i4);
        if (z) {
            this.f4779a.setPadding(this.e.b(4), this.e.b(4), this.e.b(4), this.e.b(4));
        } else {
            this.f4779a.setPadding(this.e.b(16), this.e.b(16), this.e.b(16), this.e.b(16));
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams.addRule(2, i3);
        this.f4779a.setLayoutParams(layoutParams);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams2.setMargins(this.e.b(16), z ? this.e.b(8) : this.e.b(16), this.e.b(16), this.e.b(4));
        layoutParams2.addRule(21, -1);
        this.c.setLayoutParams(layoutParams2);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, this.f ? this.e.b(64) : this.e.b(52));
        layoutParams3.addRule(14, -1);
        layoutParams3.addRule(8, i4);
        if (z) {
            layoutParams3.bottomMargin = (int) (((double) (-this.e.b(52))) / 1.5d);
        } else {
            layoutParams3.bottomMargin = (-this.e.b(52)) / 2;
        }
        this.b.setLayoutParams(layoutParams3);
        RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(-1, iMax);
        layoutParams4.addRule(12, -1);
        this.d.setLayoutParams(layoutParams4);
        addView(this.f4779a);
        addView(view);
        addView(this.c);
        addView(this.d);
        addView(this.b);
        setClickable(true);
        if (this.f) {
            this.b.setTextSize(2, 32.0f);
        } else {
            this.b.setTextSize(2, 22.0f);
        }
    }

    public void setBanner(o4 o4Var) {
        this.f4779a.setBanner(o4Var);
        this.b.setText(o4Var.i());
        this.d.setBackgroundColor(-39322);
        if (TextUtils.isEmpty(o4Var.c())) {
            this.c.setVisibility(8);
        } else {
            this.c.setText(o4Var.c());
        }
        kb.b(this.b, -16733198, -16746839, this.e.b(2));
        this.b.setTextColor(-1);
    }

    public void a(final d1 d1Var, final m8 m8Var) {
        final View.OnClickListener onClickListener = new View.OnClickListener() { // from class: com.my.target.pb$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.a(m8Var, view);
            }
        };
        this.f4779a.a(d1Var, onClickListener);
        if (d1Var.m) {
            this.b.setOnClickListener(onClickListener);
            return;
        }
        if (d1Var.g) {
            this.b.setOnClickListener(onClickListener);
            this.b.setEnabled(true);
        } else {
            this.b.setOnClickListener(null);
            this.b.setEnabled(false);
        }
        this.c.setOnTouchListener(new View.OnTouchListener() { // from class: com.my.target.pb$$ExternalSyntheticLambda1
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                return this.f$0.a(d1Var, onClickListener, view, motionEvent);
            }
        });
    }

    public final /* synthetic */ void a(m8 m8Var, View view) {
        m8Var.a(view, view == this.b ? 2 : 1);
    }

    public final /* synthetic */ boolean a(d1 d1Var, View.OnClickListener onClickListener, View view, MotionEvent motionEvent) {
        if (!d1Var.h) {
            return true;
        }
        int action = motionEvent.getAction();
        if (action == 0) {
            this.f4779a.setBackgroundColor(NativeAdColor.BACKGROUND_TOUCH);
        } else if (action == 1) {
            this.f4779a.setBackgroundColor(-1);
            onClickListener.onClick(view);
        } else if (action == 3) {
            setBackgroundColor(-1);
        }
        return true;
    }
}
