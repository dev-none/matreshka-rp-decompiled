package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.core.view.ViewCompat;
import com.my.target.common.NavigationType;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.VideoData;
import com.my.target.common.views.StarsRatingView;
import com.my.target.nativeads.views.MediaAdView;
import io.sentry.android.core.anr.AnrProfilingIntegration;

/* JADX INFO: loaded from: classes6.dex */
public class qb extends ViewGroup {
    public static final int A = kb.c();
    public static final int B = kb.c();
    public static final int C = kb.c();
    public static final int D = kb.c();
    public static final int E = kb.c();
    public static final int F = kb.c();
    public static final int G = kb.c();
    public static final int H = kb.c();
    public static final int I = kb.c();
    public static final int J = kb.c();
    public static final int K = kb.c();
    public static final int L = kb.c();
    public static final int M = kb.c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TextView f4791a;
    public final StarsRatingView b;
    public final Button c;
    public final Button d;
    public final kb e;
    public final LinearLayout f;
    public final TextView g;
    public final FrameLayout h;
    public final MediaAdView i;
    public final TextView j;
    public final vb k;
    public final y2 l;
    public final z m;
    public final h2 n;
    public final h2 o;
    public final h2 p;
    public final Runnable q;
    public final c r;
    public final View.OnClickListener s;
    public final Bitmap t;
    public final Bitmap u;
    public final int v;
    public final int w;
    public d x;
    public int y;
    public boolean z;

    public class a implements View.OnClickListener {
        public a() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            if (qb.this.x != null) {
                int id = view.getId();
                if (id == qb.B) {
                    qb.this.x.a(view);
                    return;
                }
                if (id == qb.C) {
                    qb.this.x.m();
                    return;
                }
                if (id == qb.E) {
                    qb.this.x.g();
                    return;
                }
                if (id == qb.D) {
                    qb.this.x.h();
                } else if (id == qb.A) {
                    qb.this.x.a();
                } else if (id == qb.J) {
                    qb.this.x.j();
                }
            }
        }
    }

    public class b implements Runnable {
        public b() {
        }

        @Override // java.lang.Runnable
        public void run() {
            qb qbVar = qb.this;
            if (qbVar.y == 2) {
                qbVar.a();
            }
        }
    }

    public class c implements View.OnClickListener {
        public c() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            qb qbVar = qb.this;
            qbVar.removeCallbacks(qbVar.q);
            qb qbVar2 = qb.this;
            int i = qbVar2.y;
            if (i == 2) {
                qbVar2.a();
                return;
            }
            if (i == 0) {
                qbVar2.c();
            }
            qb qbVar3 = qb.this;
            qbVar3.postDelayed(qbVar3.q, AnrProfilingIntegration.THRESHOLD_ANR_MS);
        }
    }

    public interface d {
        void a();

        void a(View view);

        void g();

        void h();

        void j();

        void m();
    }

    public qb(Context context) {
        super(context);
        Button button = new Button(context);
        this.d = button;
        TextView textView = new TextView(context);
        this.f4791a = textView;
        StarsRatingView starsRatingView = new StarsRatingView(context);
        this.b = starsRatingView;
        Button button2 = new Button(context);
        this.c = button2;
        TextView textView2 = new TextView(context);
        this.g = textView2;
        FrameLayout frameLayout = new FrameLayout(context);
        this.h = frameLayout;
        h2 h2Var = new h2(context);
        this.n = h2Var;
        h2 h2Var2 = new h2(context);
        this.o = h2Var2;
        h2 h2Var3 = new h2(context);
        this.p = h2Var3;
        TextView textView3 = new TextView(context);
        this.j = textView3;
        MediaAdView mediaAdView = new MediaAdView(context);
        this.i = mediaAdView;
        vb vbVar = new vb(context);
        this.k = vbVar;
        y2 y2Var = new y2(context);
        this.l = y2Var;
        this.f = new LinearLayout(context);
        kb kbVarE = kb.e(context);
        this.e = kbVarE;
        this.q = new b();
        this.r = new c();
        this.s = new a();
        this.m = new z(context);
        this.t = l7.c(kbVarE.b(28));
        this.u = l7.b(kbVarE.b(28));
        kb.b(button, "dismiss_button");
        kb.b(textView, "title_text");
        kb.b(starsRatingView, "stars_view");
        kb.b(button2, "cta_button");
        kb.b(textView2, "replay_text");
        kb.b(frameLayout, "shadow");
        kb.b(h2Var, "pause_button");
        kb.b(h2Var2, "play_button");
        kb.b(h2Var3, "replay_button");
        kb.b(textView3, "domain_text");
        kb.b(mediaAdView, "media_view");
        kb.b(vbVar, "video_progress_wheel");
        kb.b(y2Var, "sound_button");
        this.w = kbVarE.b(28);
        this.v = kbVarE.b(16);
        b();
    }

    public void a(b7 b7Var, VideoData videoData) {
        s5 s5VarP = b7Var.P();
        if (s5VarP == null) {
            return;
        }
        this.k.setMax(b7Var.o());
        this.z = s5VarP.c0();
        this.c.setText(b7Var.i());
        this.f4791a.setText(b7Var.A());
        if (NavigationType.STORE.equals(b7Var.t())) {
            this.j.setVisibility(8);
            if (b7Var.F() == 0 || b7Var.w() <= 0.0f) {
                this.b.setVisibility(8);
            } else {
                this.b.setVisibility(0);
                this.b.setRating(b7Var.w());
            }
        } else {
            this.b.setVisibility(8);
            this.j.setVisibility(0);
            this.j.setText(b7Var.n());
        }
        this.d.setText(s5VarP.N());
        this.g.setText(s5VarP.W());
        Bitmap bitmapC = l7.c();
        if (bitmapC != null) {
            this.p.setImageBitmap(bitmapC);
        }
        this.i.setPlaceHolderDimension(videoData.getWidth(), videoData.getHeight());
        ImageData imageDataS = b7Var.s();
        if (imageDataS != null) {
            this.i.getImageView().setImageBitmap(imageDataS.getBitmap());
        }
    }

    public final void b() {
        setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        int i = this.v;
        this.l.setId(J);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.addRule(13, -1);
        this.i.setId(M);
        this.i.setLayoutParams(layoutParams);
        this.i.setId(I);
        this.i.setOnClickListener(this.r);
        this.i.setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        this.h.setBackgroundColor(-1728053248);
        this.h.setVisibility(8);
        this.d.setId(A);
        this.d.setTextSize(2, 16.0f);
        this.d.setTransformationMethod(null);
        Button button = this.d;
        TextUtils.TruncateAt truncateAt = TextUtils.TruncateAt.END;
        button.setEllipsize(truncateAt);
        this.d.setMaxLines(2);
        this.d.setPadding(i, i, i, i);
        this.d.setTextColor(-1);
        kb.a(this.d, -2013265920, -1, -1, this.e.b(1), this.e.b(4));
        this.f4791a.setId(G);
        this.f4791a.setMaxLines(2);
        this.f4791a.setEllipsize(truncateAt);
        this.f4791a.setTextSize(2, 18.0f);
        this.f4791a.setTextColor(-1);
        kb.a(this.c, -2013265920, -1, -1, this.e.b(1), this.e.b(4));
        this.c.setId(B);
        this.c.setTextColor(-1);
        this.c.setTransformationMethod(null);
        this.c.setGravity(1);
        this.c.setTextSize(2, 16.0f);
        this.c.setLines(1);
        this.c.setEllipsize(truncateAt);
        this.c.setMinimumWidth(this.e.b(100));
        this.c.setPadding(i, i, i, i);
        this.f4791a.setShadowLayer(this.e.b(1), this.e.b(1), this.e.b(1), ViewCompat.MEASURED_STATE_MASK);
        this.j.setId(H);
        this.j.setTextColor(-3355444);
        this.j.setMaxEms(10);
        this.j.setShadowLayer(this.e.b(1), this.e.b(1), this.e.b(1), ViewCompat.MEASURED_STATE_MASK);
        this.f.setId(C);
        this.f.setOnClickListener(this.s);
        this.f.setGravity(17);
        this.f.setVisibility(8);
        this.f.setPadding(this.e.b(8), 0, this.e.b(8), 0);
        this.g.setSingleLine();
        this.g.setEllipsize(truncateAt);
        TextView textView = this.g;
        textView.setTypeface(textView.getTypeface(), 1);
        this.g.setTextColor(-1);
        this.g.setTextSize(2, 16.0f);
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-2, -2);
        layoutParams2.leftMargin = this.e.b(4);
        this.p.setPadding(this.e.b(16), this.e.b(16), this.e.b(16), this.e.b(16));
        this.n.setId(E);
        this.n.setOnClickListener(this.s);
        this.n.setVisibility(8);
        this.n.setPadding(this.e.b(16), this.e.b(16), this.e.b(16), this.e.b(16));
        this.o.setId(D);
        this.o.setOnClickListener(this.s);
        this.o.setVisibility(8);
        this.o.setPadding(this.e.b(16), this.e.b(16), this.e.b(16), this.e.b(16));
        this.h.setId(K);
        Bitmap bitmapB = l7.b();
        if (bitmapB != null) {
            this.o.setImageBitmap(bitmapB);
        }
        Bitmap bitmapA = l7.a();
        if (bitmapA != null) {
            this.n.setImageBitmap(bitmapA);
        }
        kb.a(this.n, -2013265920, -1, -1, this.e.b(1), this.e.b(4));
        kb.a(this.o, -2013265920, -1, -1, this.e.b(1), this.e.b(4));
        kb.a(this.p, -2013265920, -1, -1, this.e.b(1), this.e.b(4));
        this.b.setId(L);
        this.b.setStarSize(this.e.b(12));
        this.k.setId(F);
        this.k.setVisibility(8);
        this.i.addView(this.m, new ViewGroup.LayoutParams(-1, -1));
        addView(this.i);
        addView(this.h);
        addView(this.l);
        addView(this.d);
        addView(this.k);
        addView(this.f);
        addView(this.n);
        addView(this.o);
        addView(this.b);
        addView(this.j);
        addView(this.c);
        addView(this.f4791a);
        this.f.addView(this.p);
        this.f.addView(this.g, layoutParams2);
        this.c.setOnClickListener(this.s);
        this.d.setOnClickListener(this.s);
        this.l.setOnClickListener(this.s);
    }

    public final void c() {
        if (this.y != 2) {
            this.y = 2;
            this.i.getImageView().setVisibility(8);
            this.i.getProgressBarView().setVisibility(8);
            this.f.setVisibility(8);
            this.o.setVisibility(8);
            this.n.setVisibility(0);
            this.h.setVisibility(8);
        }
    }

    public void d() {
        if (this.y != 3) {
            this.y = 3;
            this.i.getProgressBarView().setVisibility(0);
            this.f.setVisibility(8);
            this.o.setVisibility(8);
            this.n.setVisibility(8);
            this.h.setVisibility(8);
        }
    }

    public void e() {
        if (this.y != 1) {
            this.y = 1;
            this.i.getImageView().setVisibility(0);
            this.i.getProgressBarView().setVisibility(8);
            this.f.setVisibility(8);
            this.o.setVisibility(0);
            this.n.setVisibility(8);
            this.h.setVisibility(0);
        }
    }

    public void f() {
        int i = this.y;
        if (i == 0 || i == 2) {
            return;
        }
        this.y = 0;
        this.i.getImageView().setVisibility(8);
        this.i.getProgressBarView().setVisibility(8);
        this.f.setVisibility(8);
        this.o.setVisibility(8);
        if (this.y != 2) {
            this.n.setVisibility(8);
        }
    }

    public void g() {
        this.i.getImageView().setVisibility(0);
    }

    public z getAdVideoView() {
        return this.m;
    }

    public MediaAdView getMediaAdView() {
        return this.i;
    }

    public void h() {
        if (this.y != 4) {
            this.y = 4;
            this.i.getImageView().setVisibility(0);
            this.i.getProgressBarView().setVisibility(8);
            if (this.z) {
                this.f.setVisibility(0);
                this.h.setVisibility(0);
            }
            this.o.setVisibility(8);
            this.n.setVisibility(8);
            this.k.setVisibility(8);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int i5 = i3 - i;
        int i6 = i4 - i2;
        int measuredWidth = this.i.getMeasuredWidth();
        int measuredHeight = this.i.getMeasuredHeight();
        int i7 = (i5 - measuredWidth) >> 1;
        int i8 = (i6 - measuredHeight) >> 1;
        this.i.layout(i7, i8, measuredWidth + i7, measuredHeight + i8);
        this.h.layout(this.i.getLeft(), this.i.getTop(), this.i.getRight(), this.i.getBottom());
        int measuredWidth2 = this.o.getMeasuredWidth();
        int i9 = i3 >> 1;
        int i10 = measuredWidth2 >> 1;
        int i11 = i4 >> 1;
        int measuredHeight2 = this.o.getMeasuredHeight() >> 1;
        this.o.layout(i9 - i10, i11 - measuredHeight2, i10 + i9, measuredHeight2 + i11);
        int measuredWidth3 = this.n.getMeasuredWidth();
        int i12 = measuredWidth3 >> 1;
        int measuredHeight3 = this.n.getMeasuredHeight() >> 1;
        this.n.layout(i9 - i12, i11 - measuredHeight3, i12 + i9, measuredHeight3 + i11);
        int measuredWidth4 = this.f.getMeasuredWidth();
        int i13 = measuredWidth4 >> 1;
        int measuredHeight4 = this.f.getMeasuredHeight() >> 1;
        this.f.layout(i9 - i13, i11 - measuredHeight4, i9 + i13, i11 + measuredHeight4);
        Button button = this.d;
        int i14 = this.v;
        button.layout(i14, i14, button.getMeasuredWidth() + i14, this.v + this.d.getMeasuredHeight());
        if (i5 <= i6) {
            this.l.layout(((this.i.getRight() - this.v) - this.l.getMeasuredWidth()) + this.l.getPadding(), ((this.i.getBottom() - this.v) - this.l.getMeasuredHeight()) + this.l.getPadding(), (this.i.getRight() - this.v) + this.l.getPadding(), (this.i.getBottom() - this.v) + this.l.getPadding());
            TextView textView = this.f4791a;
            int i15 = i5 >> 1;
            textView.layout(i15 - (textView.getMeasuredWidth() >> 1), this.i.getBottom() + this.v, (this.f4791a.getMeasuredWidth() >> 1) + i15, this.i.getBottom() + this.v + this.f4791a.getMeasuredHeight());
            StarsRatingView starsRatingView = this.b;
            starsRatingView.layout(i15 - (starsRatingView.getMeasuredWidth() >> 1), this.f4791a.getBottom() + this.v, (this.b.getMeasuredWidth() >> 1) + i15, this.f4791a.getBottom() + this.v + this.b.getMeasuredHeight());
            TextView textView2 = this.j;
            textView2.layout(i15 - (textView2.getMeasuredWidth() >> 1), this.f4791a.getBottom() + this.v, (this.j.getMeasuredWidth() >> 1) + i15, this.f4791a.getBottom() + this.v + this.j.getMeasuredHeight());
            Button button2 = this.c;
            button2.layout(i15 - (button2.getMeasuredWidth() >> 1), this.b.getBottom() + this.v, i15 + (this.c.getMeasuredWidth() >> 1), this.b.getBottom() + this.v + this.c.getMeasuredHeight());
            this.k.layout(this.v, (this.i.getBottom() - this.v) - this.k.getMeasuredHeight(), this.v + this.k.getMeasuredWidth(), this.i.getBottom() - this.v);
            return;
        }
        int iMax = Math.max(this.c.getMeasuredHeight(), Math.max(this.f4791a.getMeasuredHeight(), this.b.getMeasuredHeight()));
        Button button3 = this.c;
        int measuredWidth5 = (i5 - this.v) - button3.getMeasuredWidth();
        int measuredHeight5 = ((i6 - this.v) - this.c.getMeasuredHeight()) - ((iMax - this.c.getMeasuredHeight()) >> 1);
        int i16 = this.v;
        button3.layout(measuredWidth5, measuredHeight5, i5 - i16, (i6 - i16) - ((iMax - this.c.getMeasuredHeight()) >> 1));
        this.l.layout((this.c.getRight() - this.l.getMeasuredWidth()) + this.l.getPadding(), (((this.i.getBottom() - (this.v << 1)) - this.l.getMeasuredHeight()) - iMax) + this.l.getPadding(), this.c.getRight() + this.l.getPadding(), ((this.i.getBottom() - (this.v << 1)) - iMax) + this.l.getPadding());
        StarsRatingView starsRatingView2 = this.b;
        int left = (this.c.getLeft() - this.v) - this.b.getMeasuredWidth();
        int measuredHeight6 = ((i6 - this.v) - this.b.getMeasuredHeight()) - ((iMax - this.b.getMeasuredHeight()) >> 1);
        int left2 = this.c.getLeft();
        int i17 = this.v;
        starsRatingView2.layout(left, measuredHeight6, left2 - i17, (i6 - i17) - ((iMax - this.b.getMeasuredHeight()) >> 1));
        TextView textView3 = this.j;
        int left3 = (this.c.getLeft() - this.v) - this.j.getMeasuredWidth();
        int measuredHeight7 = ((i6 - this.v) - this.j.getMeasuredHeight()) - ((iMax - this.j.getMeasuredHeight()) >> 1);
        int left4 = this.c.getLeft();
        int i18 = this.v;
        textView3.layout(left3, measuredHeight7, left4 - i18, (i6 - i18) - ((iMax - this.j.getMeasuredHeight()) >> 1));
        int iMin = Math.min(this.b.getLeft(), this.j.getLeft());
        TextView textView4 = this.f4791a;
        int measuredWidth6 = (iMin - this.v) - textView4.getMeasuredWidth();
        int measuredHeight8 = ((i6 - this.v) - this.f4791a.getMeasuredHeight()) - ((iMax - this.f4791a.getMeasuredHeight()) >> 1);
        int i19 = this.v;
        textView4.layout(measuredWidth6, measuredHeight8, iMin - i19, (i6 - i19) - ((iMax - this.f4791a.getMeasuredHeight()) >> 1));
        vb vbVar = this.k;
        int i20 = this.v;
        vbVar.layout(i20, ((i6 - i20) - vbVar.getMeasuredHeight()) - ((iMax - this.k.getMeasuredHeight()) >> 1), this.v + this.k.getMeasuredWidth(), (i6 - this.v) - ((iMax - this.k.getMeasuredHeight()) >> 1));
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        this.l.measure(View.MeasureSpec.makeMeasureSpec(this.w, 1073741824), View.MeasureSpec.makeMeasureSpec(this.w, 1073741824));
        this.k.measure(View.MeasureSpec.makeMeasureSpec(this.w, 1073741824), View.MeasureSpec.makeMeasureSpec(this.w, 1073741824));
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        this.i.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
        int i3 = this.v << 1;
        int i4 = size - i3;
        int i5 = size2 - i3;
        this.d.measure(View.MeasureSpec.makeMeasureSpec(i4 / 2, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.n.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.o.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.f.measure(View.MeasureSpec.makeMeasureSpec(i4 - (this.v * 4), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.b.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.h.measure(View.MeasureSpec.makeMeasureSpec(this.i.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(this.i.getMeasuredHeight(), 1073741824));
        this.c.measure(View.MeasureSpec.makeMeasureSpec(i4 - (this.v * 4), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.f4791a.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        this.j.measure(View.MeasureSpec.makeMeasureSpec(i4, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
        if (size > size2) {
            int measuredWidth = this.c.getMeasuredWidth();
            int measuredWidth2 = this.f4791a.getMeasuredWidth();
            if (this.k.getMeasuredWidth() + measuredWidth2 + Math.max(this.b.getMeasuredWidth(), this.j.getMeasuredWidth()) + measuredWidth + (this.v * 3) > i4) {
                int measuredWidth3 = (i4 - this.k.getMeasuredWidth()) - (this.v * 3);
                int i6 = measuredWidth3 / 3;
                this.c.measure(View.MeasureSpec.makeMeasureSpec(i6, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
                this.b.measure(View.MeasureSpec.makeMeasureSpec(i6, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
                this.j.measure(View.MeasureSpec.makeMeasureSpec(i6, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
                this.f4791a.measure(View.MeasureSpec.makeMeasureSpec(((measuredWidth3 - this.c.getMeasuredWidth()) - this.j.getMeasuredWidth()) - this.b.getMeasuredWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE));
            }
        }
        setMeasuredDimension(size, size2);
    }

    public void setVideoDialogViewListener(d dVar) {
        this.x = dVar;
    }

    public void a(float f, float f2) {
        if (this.k.getVisibility() != 0) {
            this.k.setVisibility(0);
        }
        this.k.setProgress(f / f2);
        this.k.setDigit((int) Math.ceil(f2 - f));
    }

    public void a(boolean z) {
        if (z) {
            this.l.a(this.u, false);
            this.l.setContentDescription("sound off");
        } else {
            this.l.a(this.t, false);
            this.l.setContentDescription("sound on");
        }
    }

    public final void a() {
        if (this.y != 0) {
            this.y = 0;
            this.i.getImageView().setVisibility(8);
            this.i.getProgressBarView().setVisibility(8);
            this.f.setVisibility(8);
            this.o.setVisibility(8);
            this.n.setVisibility(8);
            this.h.setVisibility(8);
        }
    }
}
