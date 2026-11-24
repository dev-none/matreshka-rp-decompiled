package com.my.target;

import android.content.Context;
import android.graphics.Typeface;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import androidx.core.view.GravityCompat;
import com.my.target.common.NavigationType;

/* JADX INFO: loaded from: classes6.dex */
public class i9 extends ViewGroup implements h9, View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ma f4659a;
    public final la b;
    public final TextView c;
    public final TextView d;
    public final TextView e;
    public final TextView f;
    public final TextView g;
    public final Button h;
    public final h9.a i;
    public final int j;
    public final int k;
    public final int l;
    public final int m;
    public final int n;
    public final int o;
    public final int p;
    public final aa q;
    public final int r;
    public final int s;
    public final int t;
    public b u;
    public boolean v;

    public static /* synthetic */ class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final /* synthetic */ int[] f4660a;

        static {
            int[] iArr = new int[b.values().length];
            f4660a = iArr;
            try {
                iArr[b.SQUARE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f4660a[b.PORTRAIT.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f4660a[b.LANDSCAPE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    public enum b {
        PORTRAIT,
        LANDSCAPE,
        SQUARE
    }

    public i9(aa aaVar, Context context, h9.a aVar) {
        super(context);
        this.u = b.PORTRAIT;
        this.i = aVar;
        this.q = aaVar;
        this.j = aaVar.a(aa.F);
        this.k = aaVar.a(aa.G);
        this.t = aaVar.a(aa.H);
        this.l = aaVar.a(aa.I);
        this.m = aaVar.a(aa.o);
        this.n = aaVar.a(aa.n);
        int iA = aaVar.a(aa.N);
        this.r = iA;
        int iA2 = aaVar.a(aa.U);
        this.o = iA2;
        this.p = aaVar.a(aa.T);
        this.s = kb.a(iA, context);
        ma maVar = new ma(context);
        this.f4659a = maVar;
        la laVar = new la(context);
        this.b = laVar;
        TextView textView = new TextView(context);
        this.c = textView;
        textView.setMaxLines(1);
        textView.setTextSize(1, aaVar.a(aa.J));
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        textView.setEllipsize(truncateAt);
        textView.setIncludeFontPadding(false);
        TextView textView2 = new TextView(context);
        this.d = textView2;
        textView2.setTextSize(1, aaVar.a(aa.L));
        textView2.setMaxLines(aaVar.a(aa.M));
        textView2.setEllipsize(truncateAt);
        textView2.setIncludeFontPadding(false);
        TextView textView3 = new TextView(context);
        this.e = textView3;
        float f = iA;
        textView3.setTextSize(1, f);
        textView3.setEllipsize(truncateAt);
        textView3.setLines(1);
        textView3.setIncludeFontPadding(false);
        TextView textView4 = new TextView(context);
        this.f = textView4;
        textView4.setTextSize(1, f);
        textView4.setIncludeFontPadding(false);
        Button button = new Button(context);
        this.h = button;
        button.setLines(1);
        button.setTextSize(1, aaVar.a(aa.w));
        button.setEllipsize(truncateAt);
        button.setMinimumWidth(iA2);
        button.setIncludeFontPadding(false);
        int iA3 = aaVar.a(aa.x);
        int i = iA3 * 2;
        button.setPadding(i, iA3, i, iA3);
        TextView textView5 = new TextView(context);
        this.g = textView5;
        textView5.setPadding(aaVar.a(aa.y), 0, 0, 0);
        textView5.setTextColor(-1);
        textView5.setMaxLines(aaVar.a(aa.B));
        textView5.setIncludeFontPadding(false);
        textView5.setTextSize(1, aaVar.a(aa.C));
        kb.a(maVar, "panel_icon");
        kb.a(textView, "panel_title");
        kb.a(textView2, "panel_description");
        kb.a(textView3, "panel_domain");
        kb.a(textView4, "panel_rating");
        kb.a(button, "panel_cta");
        kb.a(textView5, "age_bordering");
        addView(maVar);
        addView(laVar);
        addView(textView);
        addView(textView2);
        addView(textView3);
        addView(textView4);
        addView(button);
        addView(textView5);
    }

    private void setClickArea(d1 d1Var) {
        if (d1Var.m) {
            setOnClickListener(this);
            this.h.setOnClickListener(this);
            return;
        }
        if (d1Var.g) {
            this.h.setOnClickListener(this);
        } else {
            this.h.setEnabled(false);
        }
        if (d1Var.l) {
            setOnClickListener(this);
        } else {
            setOnClickListener(null);
        }
        if (d1Var.f4588a) {
            this.c.setOnClickListener(this);
        } else {
            this.c.setOnClickListener(null);
        }
        if (d1Var.c) {
            this.f4659a.setOnClickListener(this);
        } else {
            this.f4659a.setOnClickListener(null);
        }
        if (d1Var.b) {
            this.d.setOnClickListener(this);
        } else {
            this.d.setOnClickListener(null);
        }
        if (d1Var.e) {
            this.f.setOnClickListener(this);
            this.b.setOnClickListener(this);
        } else {
            this.f.setOnClickListener(null);
            this.b.setOnClickListener(null);
        }
        if (d1Var.j) {
            this.e.setOnClickListener(this);
        } else {
            this.e.setOnClickListener(null);
        }
        if (d1Var.h) {
            this.g.setOnClickListener(this);
        } else {
            this.g.setOnClickListener(null);
        }
    }

    @Override // com.my.target.h9
    public View a() {
        return this;
    }

    public final void b(int i, int i2, int i3) {
        this.c.setGravity(GravityCompat.START);
        this.d.setVisibility(8);
        this.h.setVisibility(0);
        this.c.setTextSize(this.q.a(aa.K));
        this.g.setVisibility(0);
        TextView textView = this.c;
        textView.setTypeface(textView.getTypeface(), 1);
        this.c.setTextSize(1, this.q.a(aa.J));
        this.h.measure(View.MeasureSpec.makeMeasureSpec(i2 / 3, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.p, 1073741824));
        kb.a(this.g, i2, i3, Integer.MIN_VALUE);
        int measuredWidth = i2 - ((((this.f4659a.getMeasuredWidth() + this.h.getMeasuredWidth()) + (this.k * 2)) + this.g.getMeasuredWidth()) + this.l);
        kb.a(this.c, measuredWidth, i3, Integer.MIN_VALUE);
        kb.a(this.e, measuredWidth, i3, Integer.MIN_VALUE);
        int measuredHeight = this.h.getMeasuredHeight() + (this.t * 2);
        if (this.v) {
            measuredHeight += this.n;
        }
        setMeasuredDimension(i, measuredHeight);
    }

    public final void c(int i, int i2, int i3) {
        this.c.setGravity(GravityCompat.START);
        this.d.setVisibility(8);
        this.h.setVisibility(8);
        this.g.setVisibility(0);
        TextView textView = this.c;
        textView.setTypeface(textView.getTypeface(), 1);
        this.c.setTextSize(1, this.q.a(aa.J));
        kb.a(this.g, i2, i3, Integer.MIN_VALUE);
        kb.a(this.c, ((i2 - this.f4659a.getMeasuredWidth()) - (this.k * 2)) - this.g.getMeasuredWidth(), this.f4659a.getMeasuredHeight() - (this.l * 2), Integer.MIN_VALUE);
        setMeasuredDimension(i, kb.a(this.f4659a.getMeasuredHeight() + (this.k * 2), this.c.getMeasuredHeight() + kb.a(this.r, this.e.getMeasuredHeight()) + this.k));
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.i.a(null, 1);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int measuredHeight = this.e.getMeasuredHeight();
        int measuredHeight2 = this.b.getMeasuredHeight();
        int i5 = a.f4660a[this.u.ordinal()];
        if (i5 == 1) {
            a(i, i2, i3, i4);
        } else if (i5 != 3) {
            a(i2, measuredHeight, measuredHeight2);
        } else {
            a(i, i2, i3, i4, measuredHeight, measuredHeight2);
        }
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int i3 = this.k * 2;
        int i4 = size - i3;
        int i5 = size2 - i3;
        if (i4 == i5) {
            this.u = b.SQUARE;
        } else if (i4 > i5) {
            this.u = b.LANDSCAPE;
        } else {
            this.u = b.PORTRAIT;
        }
        ma maVar = this.f4659a;
        int i6 = this.j;
        kb.a(maVar, i6, i6, 1073741824);
        if (this.f.getVisibility() != 8) {
            kb.a(this.f, (i4 - this.f4659a.getMeasuredWidth()) - this.l, i5, Integer.MIN_VALUE);
            la laVar = this.b;
            int i7 = this.s;
            kb.a(laVar, i7, i7, 1073741824);
        }
        if (this.e.getVisibility() != 8) {
            kb.a(this.e, (i4 - this.f4659a.getMeasuredWidth()) - (this.k * 2), i5, Integer.MIN_VALUE);
        }
        b bVar = this.u;
        if (bVar == b.SQUARE) {
            int i8 = this.t * 2;
            a(size - i8, i4 - i8);
        } else if (bVar == b.LANDSCAPE) {
            b(size, i4, i5);
        } else {
            c(size, i4, i5);
        }
    }

    @Override // com.my.target.h9
    public void setBanner(o4 o4Var) {
        m9 m9VarT = o4Var.T();
        int iJ = m9VarT.j();
        this.c.setTextColor(m9VarT.k());
        this.d.setTextColor(iJ);
        this.e.setTextColor(iJ);
        this.f.setTextColor(iJ);
        this.b.setColor(iJ);
        this.v = o4Var.V() != null;
        this.f4659a.setImageData(o4Var.q());
        this.c.setText(o4Var.A());
        this.d.setText(o4Var.k());
        if (o4Var.t().equals(NavigationType.STORE)) {
            this.e.setVisibility(8);
            if (o4Var.w() > 0.0f) {
                this.f.setVisibility(0);
                String strValueOf = String.valueOf(o4Var.w());
                if (strValueOf.length() > 3) {
                    strValueOf = strValueOf.substring(0, 3);
                }
                this.f.setText(strValueOf);
            } else {
                this.f.setVisibility(8);
            }
        } else {
            this.f.setVisibility(8);
            this.e.setVisibility(0);
            this.e.setText(o4Var.n());
            this.e.setTextColor(m9VarT.g());
        }
        this.h.setText(o4Var.i());
        kb.b(this.h, m9VarT.d(), m9VarT.f(), this.m);
        this.h.setTextColor(m9VarT.j());
        setClickArea(o4Var.g());
        this.g.setText(o4Var.c());
    }

    public final void a(int i, int i2) {
        this.c.setGravity(1);
        this.d.setGravity(1);
        this.d.setVisibility(0);
        this.h.setVisibility(0);
        this.g.setVisibility(8);
        this.c.setTypeface(Typeface.defaultFromStyle(0));
        this.c.setTextSize(1, this.q.a(aa.K));
        this.h.measure(View.MeasureSpec.makeMeasureSpec(i2, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.p, 1073741824));
        kb.a(this.c, i2, i2, Integer.MIN_VALUE);
        kb.a(this.d, i2, i2, Integer.MIN_VALUE);
        setMeasuredDimension(i, i);
    }

    public final void a(int i, int i2, int i3, int i4, int i5, int i6) {
        ma maVar = this.f4659a;
        int i7 = i4 - i2;
        int i8 = this.t;
        kb.e(maVar, i7 - i8, i8);
        Button button = this.h;
        int i9 = this.t;
        kb.d(button, i7 - i9, (i3 - i) - i9);
        int right = this.f4659a.getRight() + this.k;
        int iA = kb.a(this.f.getMeasuredHeight(), i6, i5);
        int iA2 = kb.a(this.f4659a.getTop(), this.l) + ((((this.f4659a.getMeasuredHeight() - this.c.getMeasuredHeight()) - this.l) - iA) / 2);
        TextView textView = this.c;
        textView.layout(right, iA2, textView.getMeasuredWidth() + right, this.c.getMeasuredHeight() + iA2);
        kb.a(this.c.getBottom() + this.l, right, this.c.getBottom() + this.l + iA, this.k / 4, this.b, this.f, this.e);
        kb.e(this.g, this.c.getBottom(), this.c.getRight() + (this.k / 2));
    }

    public final void a(int i, int i2, int i3, int i4) {
        int i5;
        int i6;
        int measuredHeight = this.f4659a.getMeasuredHeight();
        if (measuredHeight > 0) {
            i5 = measuredHeight;
            i6 = 1;
        } else {
            i5 = 0;
            i6 = 0;
        }
        int measuredHeight2 = this.c.getMeasuredHeight();
        if (measuredHeight2 > 0) {
            i6++;
            i5 += measuredHeight2;
        }
        int measuredHeight3 = this.d.getMeasuredHeight();
        if (measuredHeight3 > 0) {
            i6++;
            i5 += measuredHeight3;
        }
        int iMax = Math.max(this.b.getMeasuredHeight(), this.e.getMeasuredHeight());
        if (iMax > 0) {
            i6++;
            i5 += iMax;
        }
        int measuredHeight4 = this.h.getMeasuredHeight();
        if (measuredHeight4 > 0) {
            i6++;
            i5 += measuredHeight4;
        }
        int i7 = (i4 - i2) - i5;
        int iA = kb.a(this.l, this.k, i7 / i6);
        int i8 = (i7 - (i6 * iA)) / 2;
        int i9 = i3 - i;
        kb.a(this.f4659a, 0, i8, i9, measuredHeight + i8);
        int iA2 = kb.a(i8, this.f4659a.getBottom() + iA);
        kb.a(this.c, 0, iA2, i9, measuredHeight2 + iA2);
        int iA3 = kb.a(iA2, this.c.getBottom() + iA);
        kb.a(this.d, 0, iA3, i9, measuredHeight3 + iA3);
        int iA4 = kb.a(iA3, this.d.getBottom() + iA);
        int measuredWidth = ((i9 - this.f.getMeasuredWidth()) - this.b.getMeasuredWidth()) - this.e.getMeasuredWidth();
        int i10 = this.l;
        kb.a(iA4, (measuredWidth - (i10 * 2)) / 2, iMax + iA4, i10, this.b, this.f, this.e);
        int iA5 = kb.a(iA4, this.e.getBottom(), this.b.getBottom()) + iA;
        kb.a(this.h, 0, iA5, i9, measuredHeight4 + iA5);
    }

    public final void a(int i, int i2, int i3) {
        ma maVar = this.f4659a;
        int i4 = this.k;
        kb.c(maVar, i4, i4);
        int right = this.f4659a.getRight() + (this.k / 2);
        int iA = kb.a(this.f.getMeasuredHeight(), i3, i2);
        int iA2 = kb.a(i + this.k, this.f4659a.getTop());
        if (this.f4659a.getMeasuredHeight() > 0) {
            iA2 += (((this.f4659a.getMeasuredHeight() - this.c.getMeasuredHeight()) - this.l) - iA) / 2;
        }
        TextView textView = this.c;
        textView.layout(right, iA2, textView.getMeasuredWidth() + right, this.c.getMeasuredHeight() + iA2);
        kb.a(this.c.getBottom() + this.l, right, this.c.getBottom() + this.l + iA, this.k / 4, this.b, this.f, this.e);
        kb.e(this.g, this.c.getBottom(), this.c.getRight() + this.l);
    }
}
