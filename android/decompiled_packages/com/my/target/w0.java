package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.my.target.common.models.ImageData;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes6.dex */
public final class w0 extends LinearLayout implements View.OnTouchListener, v0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ma f4850a;
    public final TextView b;
    public final TextView c;
    public final Button d;
    public final aa e;
    public final Set f;
    public final int g;
    public final int h;
    public final int i;
    public v0.a j;
    public ImageData k;
    public boolean l;

    public w0(Context context, m9 m9Var, aa aaVar) {
        super(context);
        this.f = new HashSet();
        setOrientation(1);
        this.e = aaVar;
        this.f4850a = new ma(context);
        this.b = new TextView(context);
        this.c = new TextView(context);
        this.d = new Button(context);
        this.g = aaVar.a(aa.T);
        this.h = aaVar.a(aa.i);
        this.i = aaVar.a(aa.H);
        a(m9Var);
    }

    private void setClickArea(d1 d1Var) {
        setOnTouchListener(this);
        this.f4850a.setOnTouchListener(this);
        this.b.setOnTouchListener(this);
        this.c.setOnTouchListener(this);
        this.d.setOnTouchListener(this);
        this.f.clear();
        if (d1Var.m) {
            this.l = true;
            return;
        }
        if (d1Var.g) {
            this.f.add(this.d);
        } else {
            this.d.setEnabled(false);
            this.f.remove(this.d);
        }
        if (d1Var.l) {
            this.f.add(this);
        } else {
            this.f.remove(this);
        }
        if (d1Var.f4588a) {
            this.f.add(this.b);
        } else {
            this.f.remove(this.b);
        }
        if (d1Var.b) {
            this.f.add(this.c);
        } else {
            this.f.remove(this.c);
        }
        if (d1Var.d) {
            this.f.add(this.f4850a);
        } else {
            this.f.remove(this.f4850a);
        }
    }

    @Override // com.my.target.v0
    public View a() {
        return this;
    }

    @Override // android.widget.LinearLayout, android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        a(i, i2);
        if (getMeasuredHeight() > 0 && getMeasuredWidth() > 0 && getMeasuredWidth() == size) {
            setMeasuredDimension(getMeasuredWidth(), getMeasuredHeight());
            return;
        }
        int measuredWidth = this.f4850a.getMeasuredWidth();
        int measuredHeight = this.f4850a.getMeasuredHeight();
        if (size > size2) {
            setMeasuredDimension(measuredWidth, measuredHeight);
            return;
        }
        int paddingBottom = getPaddingBottom() + getPaddingTop();
        for (int i3 = 0; i3 < getChildCount(); i3++) {
            View childAt = getChildAt(i3);
            int measuredHeight2 = paddingBottom + childAt.getMeasuredHeight() + childAt.getPaddingTop() + childAt.getPaddingBottom();
            LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) childAt.getLayoutParams();
            paddingBottom = measuredHeight2 + layoutParams.topMargin + layoutParams.bottomMargin;
        }
        setMeasuredDimension(measuredWidth, paddingBottom);
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        boolean zContains;
        int action = motionEvent.getAction();
        if (action != 0) {
            if (action == 1) {
                setBackgroundColor(0);
                this.d.setPressed(false);
                if (this.j != null) {
                    int i = 2;
                    if (!this.l) {
                        zContains = this.f.contains(view);
                        if (!zContains || view != this.d) {
                            i = 1;
                        }
                    } else if (view == this.d) {
                        zContains = true;
                    } else {
                        zContains = true;
                        i = 1;
                    }
                    this.j.a(zContains, i);
                }
            } else if (action == 3) {
                setBackgroundColor(0);
                this.d.setPressed(false);
            }
        } else if (this.l || this.f.contains(view)) {
            Button button = this.d;
            if (view == button) {
                button.setPressed(true);
            } else {
                setBackgroundColor(-13421773);
            }
        }
        return true;
    }

    @Override // com.my.target.v0
    public void setBanner(g4 g4Var) {
        if (g4Var == null) {
            this.f.clear();
            ImageData imageData = this.k;
            if (imageData != null) {
                a3.a(imageData, this.f4850a);
            }
            this.f4850a.setPlaceholderDimensions(0, 0);
            this.b.setVisibility(8);
            this.c.setVisibility(8);
            this.d.setVisibility(8);
            return;
        }
        ImageData imageDataS = g4Var.s();
        this.k = imageDataS;
        if (imageDataS != null) {
            this.f4850a.setPlaceholderDimensions(imageDataS.getWidth(), this.k.getHeight());
            a3.b(this.k, this.f4850a);
        }
        if (g4Var.L()) {
            this.b.setVisibility(8);
            this.c.setVisibility(8);
            this.d.setVisibility(8);
        } else {
            this.b.setVisibility(0);
            this.c.setVisibility(0);
            this.d.setVisibility(0);
            this.b.setText(g4Var.A());
            this.c.setText(g4Var.k());
            this.d.setText(g4Var.i());
        }
        setClickArea(g4Var.g());
    }

    @Override // com.my.target.v0
    public void setListener(v0.a aVar) {
        this.j = aVar;
    }

    public final void a(m9 m9Var) {
        this.d.setTransformationMethod(null);
        this.d.setSingleLine();
        this.d.setTextSize(1, this.e.a(aa.w));
        Button button = this.d;
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        button.setEllipsize(truncateAt);
        this.d.setGravity(17);
        this.d.setIncludeFontPadding(false);
        Button button2 = this.d;
        int i = this.h;
        button2.setPadding(i, 0, i, 0);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -2);
        aa aaVar = this.e;
        int i2 = aa.P;
        layoutParams.leftMargin = aaVar.a(i2);
        layoutParams.rightMargin = this.e.a(i2);
        layoutParams.topMargin = this.i;
        layoutParams.gravity = 1;
        this.d.setLayoutParams(layoutParams);
        kb.b(this.d, m9Var.d(), m9Var.f(), this.e.a(aa.o));
        this.d.setTextColor(m9Var.e());
        this.b.setTextSize(1, this.e.a(aa.Q));
        this.b.setTextColor(m9Var.k());
        this.b.setIncludeFontPadding(false);
        TextView textView = this.b;
        aa aaVar2 = this.e;
        int i3 = aa.O;
        textView.setPadding(aaVar2.a(i3), 0, this.e.a(i3), 0);
        this.b.setTypeface(null, 1);
        this.b.setLines(this.e.a(aa.D));
        this.b.setEllipsize(truncateAt);
        this.b.setGravity(1);
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams2.gravity = 1;
        layoutParams2.topMargin = this.h;
        this.b.setLayoutParams(layoutParams2);
        this.c.setTextColor(m9Var.j());
        this.c.setIncludeFontPadding(false);
        this.c.setLines(this.e.a(aa.E));
        this.c.setTextSize(1, this.e.a(aa.R));
        this.c.setEllipsize(truncateAt);
        this.c.setPadding(this.e.a(i3), 0, this.e.a(i3), 0);
        this.c.setGravity(1);
        LinearLayout.LayoutParams layoutParams3 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams3.gravity = 1;
        this.c.setLayoutParams(layoutParams3);
        kb.b(this, "card_view");
        kb.b(this.b, "card_title_text");
        kb.b(this.c, "card_description_text");
        kb.b(this.d, "card_cta_button");
        kb.b(this.f4850a, "card_image");
        addView(this.f4850a);
        addView(this.b);
        addView(this.c);
        addView(this.d);
    }

    public final void a(int i, int i2) {
        this.f4850a.measure(i, i2);
        if (this.b.getVisibility() == 0) {
            this.b.measure(i, i2);
        }
        if (this.c.getVisibility() == 0) {
            this.c.measure(i, i2);
        }
        if (this.d.getVisibility() == 0) {
            kb.a(this.d, this.f4850a.getMeasuredWidth() - (this.e.a(aa.P) * 2), this.g, 1073741824);
        }
    }
}
