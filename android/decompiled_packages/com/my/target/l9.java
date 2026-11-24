package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.view.ViewCompat;
import com.google.android.material.timepicker.TimeModel;
import com.my.target.common.NavigationType;
import com.my.target.common.views.StarsRatingView;
import io.sentry.android.core.anr.AnrProfilingIntegration;

/* JADX INFO: loaded from: classes6.dex */
public class l9 extends ViewGroup implements i5 {
    public y4.a A;
    public int B;
    public float C;
    public float D;
    public boolean E;
    public boolean F;
    public String G;
    public String H;
    public boolean I;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final LinearLayout f4695a;
    public final g9 b;
    public final g2 c;
    public final g2 d;
    public final i e;
    public final Runnable f;
    public final c g;
    public final TextView h;
    public final StarsRatingView i;
    public final Button j;
    public final TextView k;
    public final kb l;
    public final TextView m;
    public final ub n;
    public final y2 o;
    public final g2 p;
    public final d q;
    public final a r;
    public final TextView s;
    public final FrameLayout t;
    public final int u;
    public final int v;
    public final Bitmap w;
    public final Bitmap x;
    public final int y;
    public j5.a z;

    public class a implements View.OnClickListener {
        public a() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            j5.a aVar;
            y4.a aVar2;
            l9 l9Var = l9.this;
            if (view == l9Var.f4695a) {
                y4.a aVar3 = l9Var.A;
                if (aVar3 != null) {
                    aVar3.o();
                }
                l9.this.e();
                return;
            }
            if (view == l9Var.c) {
                if (!l9Var.b.e() || (aVar2 = l9.this.A) == null) {
                    return;
                }
                aVar2.c();
                return;
            }
            if (view != l9Var.d) {
                if (view != l9Var.e || (aVar = l9Var.z) == null) {
                    return;
                }
                aVar.c();
                return;
            }
            if (l9Var.A != null) {
                if (l9Var.b()) {
                    l9.this.A.i();
                } else {
                    l9.this.A.o();
                }
            }
            l9.this.e();
        }
    }

    public final class b implements Runnable {
        public b() {
        }

        @Override // java.lang.Runnable
        public void run() {
            l9 l9Var = l9.this;
            int i = l9Var.B;
            if (i == 2 || i == 0) {
                l9Var.e();
            }
        }
    }

    public final class c implements View.OnClickListener {
        public c() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            j5.a aVar;
            int i = view == l9.this.j ? 2 : 1;
            if (!view.isEnabled() || (aVar = l9.this.z) == null) {
                return;
            }
            aVar.a(i);
        }
    }

    public class d implements View.OnClickListener {
        public d() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            l9 l9Var = l9.this;
            l9Var.removeCallbacks(l9Var.f);
            l9 l9Var2 = l9.this;
            int i = l9Var2.B;
            if (i == 2) {
                l9Var2.e();
                l9 l9Var3 = l9.this;
                l9Var3.postDelayed(l9Var3.f, AnrProfilingIntegration.THRESHOLD_ANR_MS);
            } else if (i == 0 || i == 3) {
                l9Var2.g();
                l9 l9Var4 = l9.this;
                l9Var4.postDelayed(l9Var4.f, AnrProfilingIntegration.THRESHOLD_ANR_MS);
            }
        }
    }

    public l9(Context context, boolean z) {
        super(context);
        TextView textView = new TextView(context);
        this.k = textView;
        TextView textView2 = new TextView(context);
        this.h = textView2;
        StarsRatingView starsRatingView = new StarsRatingView(context);
        this.i = starsRatingView;
        Button button = new Button(context);
        this.j = button;
        TextView textView3 = new TextView(context);
        this.s = textView3;
        FrameLayout frameLayout = new FrameLayout(context);
        this.t = frameLayout;
        g2 g2Var = new g2(context);
        this.c = g2Var;
        g2 g2Var2 = new g2(context);
        this.d = g2Var2;
        g2 g2Var3 = new g2(context);
        this.p = g2Var3;
        TextView textView4 = new TextView(context);
        this.m = textView4;
        g9 g9Var = new g9(context, kb.e(context), false, z);
        this.b = g9Var;
        ub ubVar = new ub(context);
        this.n = ubVar;
        y2 y2Var = new y2(context);
        this.o = y2Var;
        this.f4695a = new LinearLayout(context);
        kb kbVarE = kb.e(context);
        this.l = kbVarE;
        this.f = new b();
        this.q = new d();
        this.r = new a();
        this.e = new i(context);
        kb.b(textView, "dismiss_button");
        kb.b(textView2, "title_text");
        kb.b(starsRatingView, "stars_view");
        kb.b(button, "cta_button");
        kb.b(textView3, "replay_text");
        kb.b(frameLayout, "shadow");
        kb.b(g2Var, "pause_button");
        kb.b(g2Var2, "play_button");
        kb.b(g2Var3, "replay_button");
        kb.b(textView4, "domain_text");
        kb.b(g9Var, "media_view");
        kb.b(ubVar, "video_progress_wheel");
        kb.b(y2Var, "sound_button");
        this.y = kbVarE.b(28);
        this.u = kbVarE.b(16);
        this.v = kbVarE.b(4);
        this.w = q4.f(context);
        this.x = q4.e(context);
        this.g = new c();
        f();
    }

    public final /* synthetic */ void a(View view) {
        y4.a aVar = this.A;
        if (aVar != null) {
            aVar.a();
        }
    }

    @Override // com.my.target.i5
    public boolean b() {
        return this.b.d();
    }

    @Override // com.my.target.j5
    public void c() {
        this.k.setText(this.G);
        this.k.setTextSize(2, 16.0f);
        this.k.setVisibility(0);
        this.k.setTextColor(-1);
        this.k.setEnabled(true);
        TextView textView = this.k;
        int i = this.u;
        textView.setPadding(i, i, i, i);
        kb.a(this.k, -2013265920, -1, -1, this.l.b(1), this.l.b(4));
        this.I = true;
    }

    @Override // com.my.target.i5
    public void d() {
        this.n.setVisibility(8);
        j();
    }

    @Override // com.my.target.i5
    public void destroy() {
        this.b.a();
    }

    public void e() {
        this.B = 0;
        this.f4695a.setVisibility(8);
        this.d.setVisibility(8);
        this.c.setVisibility(8);
        this.t.setVisibility(8);
    }

    public final void f() {
        setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        int i = this.u;
        this.b.setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        this.b.c();
        this.t.setBackgroundColor(-1728053248);
        this.t.setVisibility(8);
        this.k.setTextSize(2, 16.0f);
        this.k.setTransformationMethod(null);
        TextView textView = this.k;
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        textView.setEllipsize(truncateAt);
        this.k.setVisibility(8);
        this.k.setTextAlignment(4);
        this.k.setTextColor(-1);
        kb.a(this.k, -2013265920, -1, -1, this.l.b(1), this.l.b(4));
        this.h.setMaxLines(2);
        this.h.setEllipsize(truncateAt);
        this.h.setTextSize(2, 18.0f);
        this.h.setTextColor(-1);
        kb.a(this.j, -2013265920, -1, -1, this.l.b(1), this.l.b(4));
        this.j.setTextColor(-1);
        this.j.setTransformationMethod(null);
        this.j.setGravity(1);
        this.j.setTextSize(2, 16.0f);
        this.j.setMinimumWidth(this.l.b(100));
        this.j.setPadding(i, i, i, i);
        this.h.setShadowLayer(this.l.b(1), this.l.b(1), this.l.b(1), ViewCompat.MEASURED_STATE_MASK);
        this.m.setTextColor(-3355444);
        this.m.setMaxEms(10);
        this.m.setShadowLayer(this.l.b(1), this.l.b(1), this.l.b(1), ViewCompat.MEASURED_STATE_MASK);
        this.f4695a.setOnClickListener(this.r);
        this.f4695a.setGravity(17);
        this.f4695a.setVisibility(8);
        this.f4695a.setPadding(this.l.b(8), 0, this.l.b(8), 0);
        this.s.setSingleLine();
        this.s.setEllipsize(truncateAt);
        TextView textView2 = this.s;
        textView2.setTypeface(textView2.getTypeface(), 1);
        this.s.setTextColor(-1);
        this.s.setTextSize(2, 16.0f);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, -2);
        layoutParams.leftMargin = this.l.b(4);
        this.p.setPadding(this.l.b(16), this.l.b(16), this.l.b(16), this.l.b(16));
        this.c.setOnClickListener(this.r);
        this.c.setVisibility(8);
        this.c.setPadding(this.l.b(16), this.l.b(16), this.l.b(16), this.l.b(16));
        this.d.setOnClickListener(this.r);
        this.d.setVisibility(8);
        this.d.setPadding(this.l.b(16), this.l.b(16), this.l.b(16), this.l.b(16));
        Bitmap bitmapC = q4.c(getContext());
        if (bitmapC != null) {
            this.d.setImageBitmap(bitmapC);
        }
        Bitmap bitmapB = q4.b(getContext());
        if (bitmapB != null) {
            this.c.setImageBitmap(bitmapB);
        }
        kb.a(this.c, -2013265920, -1, -1, this.l.b(1), this.l.b(4));
        kb.a(this.d, -2013265920, -1, -1, this.l.b(1), this.l.b(4));
        kb.a(this.p, -2013265920, -1, -1, this.l.b(1), this.l.b(4));
        this.i.setStarSize(this.l.b(12));
        this.n.setVisibility(8);
        this.e.setFixedHeight(this.y);
        addView(this.b);
        addView(this.t);
        addView(this.o);
        addView(this.k);
        addView(this.n);
        addView(this.f4695a);
        addView(this.c);
        addView(this.d);
        addView(this.i);
        addView(this.m);
        addView(this.j);
        addView(this.h);
        addView(this.e);
        this.f4695a.addView(this.p);
        this.f4695a.addView(this.s, layoutParams);
    }

    public void g() {
        this.B = 2;
        this.f4695a.setVisibility(8);
        this.d.setVisibility(8);
        this.c.setVisibility(0);
        this.t.setVisibility(8);
    }

    @Override // com.my.target.j5
    public View getCloseButton() {
        return this.k;
    }

    @Override // com.my.target.i5
    public g9 getPromoMediaView() {
        return this.b;
    }

    @Override // com.my.target.j5
    public View getView() {
        return this;
    }

    public final void h() {
        this.B = 1;
        this.f4695a.setVisibility(8);
        this.d.setVisibility(0);
        this.c.setVisibility(8);
        this.t.setVisibility(0);
    }

    public final void i() {
        this.f4695a.setVisibility(8);
        this.d.setVisibility(8);
        if (this.B != 2) {
            this.c.setVisibility(8);
        }
    }

    @Override // com.my.target.i5
    public boolean isPlaying() {
        return this.b.e();
    }

    public final void j() {
        this.B = 4;
        if (this.F) {
            this.f4695a.setVisibility(0);
            this.t.setVisibility(0);
        }
        this.d.setVisibility(8);
        this.c.setVisibility(8);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int i5 = i3 - i;
        int i6 = i4 - i2;
        int measuredWidth = this.b.getMeasuredWidth();
        int measuredHeight = this.b.getMeasuredHeight();
        int i7 = (i5 - measuredWidth) >> 1;
        int i8 = (i6 - measuredHeight) >> 1;
        this.b.layout(i7, i8, measuredWidth + i7, measuredHeight + i8);
        this.t.layout(this.b.getLeft(), this.b.getTop(), this.b.getRight(), this.b.getBottom());
        int measuredWidth2 = this.d.getMeasuredWidth();
        int i9 = i3 >> 1;
        int i10 = measuredWidth2 >> 1;
        int i11 = i4 >> 1;
        int measuredHeight2 = this.d.getMeasuredHeight() >> 1;
        this.d.layout(i9 - i10, i11 - measuredHeight2, i10 + i9, measuredHeight2 + i11);
        int measuredWidth3 = this.c.getMeasuredWidth();
        int i12 = measuredWidth3 >> 1;
        int measuredHeight3 = this.c.getMeasuredHeight() >> 1;
        this.c.layout(i9 - i12, i11 - measuredHeight3, i12 + i9, measuredHeight3 + i11);
        int measuredWidth4 = this.f4695a.getMeasuredWidth();
        int i13 = measuredWidth4 >> 1;
        int measuredHeight4 = this.f4695a.getMeasuredHeight() >> 1;
        this.f4695a.layout(i9 - i13, i11 - measuredHeight4, i9 + i13, i11 + measuredHeight4);
        TextView textView = this.k;
        int i14 = this.u;
        textView.layout(i14, i14, textView.getMeasuredWidth() + i14, this.u + this.k.getMeasuredHeight());
        if (i5 <= i6) {
            this.o.layout(((this.b.getRight() - this.u) - this.o.getMeasuredWidth()) + this.o.getPadding(), ((this.b.getBottom() - this.u) - this.o.getMeasuredHeight()) + this.o.getPadding(), (this.b.getRight() - this.u) + this.o.getPadding(), (this.b.getBottom() - this.u) + this.o.getPadding());
            this.e.layout((this.b.getRight() - this.u) - this.e.getMeasuredWidth(), this.b.getTop() + this.u, this.b.getRight() - this.u, this.b.getTop() + this.u + this.e.getMeasuredHeight());
            int i15 = this.u;
            int measuredHeight5 = this.h.getMeasuredHeight() + this.i.getMeasuredHeight() + this.m.getMeasuredHeight() + this.j.getMeasuredHeight();
            int bottom = getBottom() - this.b.getBottom();
            if ((i15 * 3) + measuredHeight5 > bottom) {
                i15 = (bottom - measuredHeight5) / 3;
            }
            TextView textView2 = this.h;
            int i16 = i5 >> 1;
            textView2.layout(i16 - (textView2.getMeasuredWidth() >> 1), this.b.getBottom() + i15, (this.h.getMeasuredWidth() >> 1) + i16, this.b.getBottom() + i15 + this.h.getMeasuredHeight());
            StarsRatingView starsRatingView = this.i;
            starsRatingView.layout(i16 - (starsRatingView.getMeasuredWidth() >> 1), this.h.getBottom() + i15, (this.i.getMeasuredWidth() >> 1) + i16, this.h.getBottom() + i15 + this.i.getMeasuredHeight());
            TextView textView3 = this.m;
            textView3.layout(i16 - (textView3.getMeasuredWidth() >> 1), this.h.getBottom() + i15, (this.m.getMeasuredWidth() >> 1) + i16, this.h.getBottom() + i15 + this.m.getMeasuredHeight());
            Button button = this.j;
            button.layout(i16 - (button.getMeasuredWidth() >> 1), this.i.getBottom() + i15, i16 + (this.j.getMeasuredWidth() >> 1), this.i.getBottom() + i15 + this.j.getMeasuredHeight());
            this.n.layout(this.u, (this.b.getBottom() - this.u) - this.n.getMeasuredHeight(), this.u + this.n.getMeasuredWidth(), this.b.getBottom() - this.u);
            return;
        }
        int iMax = Math.max(this.j.getMeasuredHeight(), Math.max(this.h.getMeasuredHeight(), this.i.getMeasuredHeight()));
        Button button2 = this.j;
        int measuredWidth5 = (i5 - this.u) - button2.getMeasuredWidth();
        int measuredHeight6 = ((i6 - this.u) - this.j.getMeasuredHeight()) - ((iMax - this.j.getMeasuredHeight()) >> 1);
        int i17 = this.u;
        button2.layout(measuredWidth5, measuredHeight6, i5 - i17, (i6 - i17) - ((iMax - this.j.getMeasuredHeight()) >> 1));
        this.o.layout((this.j.getRight() - this.o.getMeasuredWidth()) + this.o.getPadding(), (((this.b.getBottom() - (this.u << 1)) - this.o.getMeasuredHeight()) - iMax) + this.o.getPadding(), this.j.getRight() + this.o.getPadding(), ((this.b.getBottom() - (this.u << 1)) - iMax) + this.o.getPadding());
        this.e.layout(this.j.getRight() - this.e.getMeasuredWidth(), this.u, this.j.getRight(), this.u + this.e.getMeasuredHeight());
        StarsRatingView starsRatingView2 = this.i;
        int left = (this.j.getLeft() - this.u) - this.i.getMeasuredWidth();
        int measuredHeight7 = ((i6 - this.u) - this.i.getMeasuredHeight()) - ((iMax - this.i.getMeasuredHeight()) >> 1);
        int left2 = this.j.getLeft();
        int i18 = this.u;
        starsRatingView2.layout(left, measuredHeight7, left2 - i18, (i6 - i18) - ((iMax - this.i.getMeasuredHeight()) >> 1));
        TextView textView4 = this.m;
        int left3 = (this.j.getLeft() - this.u) - this.m.getMeasuredWidth();
        int measuredHeight8 = ((i6 - this.u) - this.m.getMeasuredHeight()) - ((iMax - this.m.getMeasuredHeight()) >> 1);
        int left4 = this.j.getLeft();
        int i19 = this.u;
        textView4.layout(left3, measuredHeight8, left4 - i19, (i6 - i19) - ((iMax - this.m.getMeasuredHeight()) >> 1));
        int iMin = Math.min(this.i.getLeft(), this.m.getLeft());
        TextView textView5 = this.h;
        int measuredWidth6 = (iMin - this.u) - textView5.getMeasuredWidth();
        int measuredHeight9 = ((i6 - this.u) - this.h.getMeasuredHeight()) - ((iMax - this.h.getMeasuredHeight()) >> 1);
        int i20 = this.u;
        textView5.layout(measuredWidth6, measuredHeight9, iMin - i20, (i6 - i20) - ((iMax - this.h.getMeasuredHeight()) >> 1));
        ub ubVar = this.n;
        int i21 = this.u;
        ubVar.layout(i21, ((i6 - i21) - ubVar.getMeasuredHeight()) - ((iMax - this.n.getMeasuredHeight()) >> 1), this.u + this.n.getMeasuredWidth(), (i6 - this.u) - ((iMax - this.n.getMeasuredHeight()) >> 1));
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        this.o.measure(View.MeasureSpec.makeMeasureSpec(this.y, 1073741824), View.MeasureSpec.makeMeasureSpec(this.y, 1073741824));
        this.n.measure(View.MeasureSpec.makeMeasureSpec(this.y, 1073741824), View.MeasureSpec.makeMeasureSpec(this.y, 1073741824));
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        this.b.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
        int i3 = this.u << 1;
        int i4 = size - i3;
        int i5 = size2 - i3;
        this.k.measure(View.MeasureSpec.makeMeasureSpec(i4 / 2, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.e.measure(View.MeasureSpec.makeMeasureSpec(this.y, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.y, Integer.MIN_VALUE));
        this.c.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.d.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.f4695a.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.i.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.t.measure(View.MeasureSpec.makeMeasureSpec(this.b.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(this.b.getMeasuredHeight(), 1073741824));
        this.j.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.h.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.m.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        if (size > size2) {
            int measuredWidth = this.j.getMeasuredWidth();
            int measuredWidth2 = this.h.getMeasuredWidth();
            if (this.n.getMeasuredWidth() + measuredWidth2 + Math.max(this.i.getMeasuredWidth(), this.m.getMeasuredWidth()) + measuredWidth + (this.u * 3) > i4) {
                int measuredWidth3 = (i4 - this.n.getMeasuredWidth()) - (this.u * 3);
                int i6 = measuredWidth3 / 3;
                this.j.measure(View.MeasureSpec.makeMeasureSpec(i6, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
                this.i.measure(View.MeasureSpec.makeMeasureSpec(i6, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
                this.m.measure(View.MeasureSpec.makeMeasureSpec(i6, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
                this.h.measure(View.MeasureSpec.makeMeasureSpec(((measuredWidth3 - this.j.getMeasuredWidth()) - this.m.getMeasuredWidth()) - this.i.getMeasuredWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
            }
        } else {
            int measuredHeight = this.h.getMeasuredHeight() + this.i.getMeasuredHeight() + this.m.getMeasuredHeight() + this.j.getMeasuredHeight();
            int measuredHeight2 = (size2 - this.b.getMeasuredHeight()) / 2;
            int i7 = this.u;
            if (measuredHeight + (i7 * 3) > measuredHeight2) {
                int i8 = i7 / 2;
                this.j.setPadding(i7, i8, i7, i8);
                this.j.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
            }
        }
        setMeasuredDimension(size, size2);
    }

    @Override // com.my.target.i5
    public void pause() {
        int i = this.B;
        if (i == 0 || i == 2) {
            h();
            this.b.f();
        }
    }

    @Override // com.my.target.i5
    public void resume() {
        this.b.g();
    }

    @Override // com.my.target.j5
    public void setBanner(o4 o4Var) {
        this.b.b(o4Var, 1);
        s5 s5VarV = o4Var.V();
        if (s5VarV == null) {
            return;
        }
        this.n.setMax(o4Var.o());
        this.F = s5VarV.c0();
        this.E = o4Var.O();
        this.j.setText(o4Var.i());
        this.h.setText(o4Var.A());
        if (NavigationType.STORE.equals(o4Var.t())) {
            if (o4Var.w() > 0.0f) {
                this.i.setVisibility(0);
                this.i.setRating(o4Var.w());
            } else {
                this.i.setVisibility(8);
            }
            this.m.setVisibility(8);
        } else {
            this.i.setVisibility(8);
            this.m.setVisibility(0);
            this.m.setText(o4Var.n());
        }
        this.G = s5VarV.N();
        this.H = s5VarV.O();
        this.k.setText(this.G);
        if (s5VarV.a0() && s5VarV.h0()) {
            if (s5VarV.M() > 0.0f) {
                this.D = s5VarV.M();
                this.k.setEnabled(false);
                this.k.setTextColor(-3355444);
                TextView textView = this.k;
                int i = this.v;
                textView.setPadding(i, i, i, i);
                kb.a(this.k, -2013265920, -2013265920, -3355444, this.l.b(1), this.l.b(4));
                this.k.setTextSize(2, 12.0f);
            } else {
                TextView textView2 = this.k;
                int i2 = this.u;
                textView2.setPadding(i2, i2, i2, i2);
                this.k.setVisibility(0);
            }
        }
        this.s.setText(s5VarV.W());
        Bitmap bitmapD = q4.d(getContext());
        if (bitmapD != null) {
            this.p.setImageBitmap(bitmapD);
        }
        if (s5VarV.h0()) {
            c(true);
            e();
        } else {
            h();
        }
        this.C = s5VarV.o();
        y2 y2Var = this.o;
        y2Var.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.l9$$ExternalSyntheticLambda0
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.a(view);
            }
        });
        if (s5VarV.g0()) {
            y2Var.a(this.x, false);
            y2Var.setContentDescription("sound_off");
        } else {
            y2Var.a(this.w, false);
            y2Var.setContentDescription("sound_on");
        }
        com.my.target.c cVarA = o4Var.a();
        if (cVarA != null) {
            a(cVarA);
        } else {
            this.e.setVisibility(8);
        }
    }

    @Override // com.my.target.j5
    public void setClickArea(d1 d1Var) {
        gb.a("PromoStyle1View: Apply click area " + d1Var.a() + " to view");
        setOnClickListener((d1Var.l || d1Var.m) ? this.g : null);
        this.j.setOnClickListener((d1Var.g || d1Var.m) ? this.g : null);
        this.h.setOnClickListener((d1Var.f4588a || d1Var.m) ? this.g : null);
        this.i.setOnClickListener((d1Var.e || d1Var.m) ? this.g : null);
        this.m.setOnClickListener((d1Var.j || d1Var.m) ? this.g : null);
        this.b.getClickableLayout().setOnClickListener((d1Var.n || d1Var.m) ? this.g : this.q);
    }

    @Override // com.my.target.j5
    public void setInterstitialPromoViewListener(j5.a aVar) {
        this.z = aVar;
    }

    @Override // com.my.target.i5
    public void setMediaListener(y4.a aVar) {
        this.A = aVar;
        this.b.setInterstitialPromoViewListener(aVar);
    }

    @Override // com.my.target.i5
    public void setTimeChanged(float f) {
        if (!this.I && this.E) {
            float f2 = this.D;
            if (f2 > 0.0f && f2 >= f) {
                if (this.k.getVisibility() != 0) {
                    this.k.setVisibility(0);
                }
                if (this.H != null) {
                    int iCeil = (int) Math.ceil(this.D - f);
                    String strValueOf = String.valueOf(iCeil);
                    if (this.D > 9.0f && iCeil <= 9) {
                        strValueOf = "0" + strValueOf;
                    }
                    this.k.setText(this.H.replace(TimeModel.NUMBER_FORMAT, strValueOf));
                }
            }
        }
        if (this.n.getVisibility() != 0) {
            this.n.setVisibility(0);
        }
        this.n.setProgress(f / this.C);
        this.n.setDigit((int) Math.ceil(this.C - f));
    }

    @Override // com.my.target.i5
    public final void b(boolean z) {
        y2 y2Var = this.o;
        if (z) {
            y2Var.a(this.x, false);
            y2Var.setContentDescription("sound_off");
        } else {
            y2Var.a(this.w, false);
            y2Var.setContentDescription("sound_on");
        }
    }

    @Override // com.my.target.i5
    public void a(o4 o4Var) {
        this.b.setOnClickListener(null);
        this.o.setVisibility(8);
        this.b.b(o4Var);
        c();
        this.B = 4;
        this.f4695a.setVisibility(8);
        this.d.setVisibility(8);
        this.c.setVisibility(8);
        this.t.setVisibility(8);
        this.n.setVisibility(8);
    }

    @Override // com.my.target.i5
    public void c(boolean z) {
        this.b.a(z);
        e();
    }

    @Override // com.my.target.i5
    public void a(boolean z) {
        this.b.b(true);
    }

    @Override // com.my.target.i5
    public void a(int i) {
        this.b.a(i);
    }

    @Override // com.my.target.i5
    public void a() {
        this.b.i();
        i();
    }

    private void a(com.my.target.c cVar) {
        this.e.setImageBitmap(cVar.c().getBitmap());
        this.e.setOnClickListener(this.r);
    }
}
