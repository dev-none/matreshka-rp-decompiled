package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Point;
import android.view.View;
import android.widget.RelativeLayout;
import androidx.core.view.ViewCompat;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.VideoData;

/* JADX INFO: loaded from: classes6.dex */
public class d9 extends RelativeLayout implements i5 {
    public static final int v = kb.c();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final m8 f4595a;
    public final View.OnClickListener b;
    public final ma c;
    public final pb d;
    public final g9 e;
    public final p8 f;
    public final y2 g;
    public final ub h;
    public final kb i;
    public final y2 j;
    public final i k;
    public final Bitmap l;
    public final Bitmap m;
    public final int n;
    public final int o;
    public final int p;
    public final int q;
    public final int r;
    public j5.a s;
    public float t;
    public y4.a u;

    public d9(Context context, e9 e9Var) {
        super(context);
        boolean z = (getContext().getResources().getConfiguration().screenLayout & 15) >= 3;
        kb kbVarE = kb.e(context);
        this.i = kbVarE;
        ma maVar = new ma(context);
        this.c = maVar;
        pb pbVarB = e9Var.b(kbVarE, z);
        this.d = pbVarB;
        g9 g9VarA = e9Var.a(kbVarE, z);
        this.e = g9VarA;
        int i = v;
        g9VarA.setId(i);
        y2 y2Var = new y2(context);
        this.g = y2Var;
        ub ubVar = new ub(context);
        this.h = ubVar;
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams.addRule(3, i);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams2.addRule(14, -1);
        p8 p8Var = new p8(context, kbVarE);
        this.f = p8Var;
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams3.addRule(12, -1);
        p8Var.setLayoutParams(layoutParams3);
        y2 y2Var2 = new y2(context);
        this.j = y2Var2;
        this.l = q4.f(context);
        this.m = q4.e(context);
        this.f4595a = new m8() { // from class: com.my.target.d9$$ExternalSyntheticLambda2
            @Override // com.my.target.m8
            public final void a(View view, int i2) {
                this.f$0.a(view, i2);
            }
        };
        this.b = new View.OnClickListener() { // from class: com.my.target.d9$$ExternalSyntheticLambda3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.c(view);
            }
        };
        this.n = kbVarE.b(64);
        this.o = kbVarE.b(20);
        i iVar = new i(context);
        this.k = iVar;
        int iB = kbVarE.b(28);
        this.r = iB;
        iVar.setFixedHeight(iB);
        kb.b(maVar, "icon_image");
        kb.b(y2Var2, "sound_button");
        kb.b(pbVarB, "vertical_view");
        kb.b(g9VarA, "media_view");
        kb.b(p8Var, "panel_view");
        kb.b(y2Var, "close_button");
        kb.b(ubVar, "progress_wheel");
        addView(p8Var, 0);
        addView(maVar, 0);
        addView(pbVarB, 0, layoutParams);
        addView(g9VarA, 0, layoutParams2);
        addView(y2Var2);
        addView(iVar);
        addView(y2Var);
        addView(ubVar);
        this.p = kbVarE.b(28);
        this.q = kbVarE.b(10);
    }

    @Override // com.my.target.i5
    public void a(o4 o4Var) {
        this.j.setVisibility(8);
        this.g.setVisibility(0);
        a(false);
        this.e.b(o4Var);
    }

    @Override // com.my.target.i5
    public boolean b() {
        return this.e.d();
    }

    @Override // com.my.target.i5
    public void c(boolean z) {
        this.f.a(this.j);
        this.e.a(z);
    }

    @Override // com.my.target.i5
    public void d() {
    }

    @Override // com.my.target.i5
    public void destroy() {
        this.e.a();
    }

    public final /* synthetic */ void e() {
        this.f.b(this.j);
    }

    @Override // com.my.target.j5
    public View getCloseButton() {
        return this.g;
    }

    @Override // com.my.target.i5
    public g9 getPromoMediaView() {
        return this.e;
    }

    @Override // com.my.target.j5
    public View getView() {
        return this;
    }

    @Override // com.my.target.i5
    public boolean isPlaying() {
        return this.e.e();
    }

    @Override // android.widget.RelativeLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        y2 y2Var = this.g;
        y2Var.layout(i3 - y2Var.getMeasuredWidth(), 0, i3, this.g.getMeasuredHeight());
        ub ubVar = this.h;
        int i5 = this.q;
        ubVar.layout(i5, i5, ubVar.getMeasuredWidth() + this.q, this.h.getMeasuredHeight() + this.q);
        kb.a(this.k, this.g.getLeft() - this.k.getMeasuredWidth(), this.g.getTop(), this.g.getLeft(), this.g.getBottom());
        if (i4 <= i3) {
            setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
            int measuredWidth = (i3 - this.e.getMeasuredWidth()) / 2;
            int measuredHeight = (i4 - this.e.getMeasuredHeight()) / 2;
            g9 g9Var = this.e;
            g9Var.layout(measuredWidth, measuredHeight, g9Var.getMeasuredWidth() + measuredWidth, this.e.getMeasuredHeight() + measuredHeight);
            this.c.layout(0, 0, 0, 0);
            this.d.layout(0, 0, 0, 0);
            p8 p8Var = this.f;
            p8Var.layout(0, i4 - p8Var.getMeasuredHeight(), i3, i4);
            y2 y2Var2 = this.j;
            y2Var2.layout(i3 - y2Var2.getMeasuredWidth(), this.f.getTop() - this.j.getMeasuredHeight(), i3, this.f.getTop());
            if (this.e.e()) {
                this.f.b(this.j);
                return;
            }
            return;
        }
        if (this.j.getTranslationY() > 0.0f) {
            this.j.setTranslationY(0.0f);
        }
        setBackgroundColor(-1);
        int measuredWidth2 = (i3 - this.e.getMeasuredWidth()) / 2;
        g9 g9Var2 = this.e;
        g9Var2.layout(measuredWidth2, 0, g9Var2.getMeasuredWidth() + measuredWidth2, this.e.getMeasuredHeight());
        this.d.layout(0, this.e.getBottom(), i3, i4);
        int bottom = this.o;
        if (this.e.getMeasuredHeight() != 0) {
            bottom = this.e.getBottom() - (this.c.getMeasuredHeight() / 2);
        }
        ma maVar = this.c;
        int i6 = this.o;
        maVar.layout(i6, bottom, maVar.getMeasuredWidth() + i6, this.c.getMeasuredHeight() + bottom);
        this.f.layout(0, 0, 0, 0);
        y2 y2Var3 = this.j;
        y2Var3.layout(i3 - y2Var3.getMeasuredWidth(), this.e.getBottom() - this.j.getMeasuredHeight(), i3, this.e.getBottom());
    }

    @Override // android.widget.RelativeLayout, android.view.View
    public void onMeasure(int i, int i2) {
        this.j.measure(i, i2);
        this.g.measure(i, i2);
        this.h.measure(View.MeasureSpec.makeMeasureSpec(this.p, 1073741824), View.MeasureSpec.makeMeasureSpec(this.p, 1073741824));
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE);
        int iMakeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE);
        i iVar = this.k;
        int i3 = this.r;
        kb.a(iVar, i3, i3, 1073741824);
        if (size2 > size) {
            this.e.measure(iMakeMeasureSpec, iMakeMeasureSpec2);
            this.d.measure(View.MeasureSpec.makeMeasureSpec(size, 1073741824), View.MeasureSpec.makeMeasureSpec(size2 - this.e.getMeasuredHeight(), Integer.MIN_VALUE));
            this.c.measure(View.MeasureSpec.makeMeasureSpec(this.n, Integer.MIN_VALUE), iMakeMeasureSpec2);
            this.f.setVisibility(8);
        } else {
            this.f.setVisibility(0);
            this.e.measure(iMakeMeasureSpec, iMakeMeasureSpec2);
            this.f.measure(View.MeasureSpec.makeMeasureSpec(size, 1073741824), iMakeMeasureSpec2);
        }
        setMeasuredDimension(i, i2);
    }

    @Override // com.my.target.i5
    public void pause() {
        this.f.e(this.j);
        this.e.f();
    }

    @Override // com.my.target.i5
    public void resume() {
        this.f.a(this.j);
        this.e.g();
    }

    @Override // com.my.target.j5
    public void setBanner(o4 o4Var) {
        int width;
        int height;
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(this.p, this.i.b(28));
        layoutParams.addRule(9);
        layoutParams.topMargin = this.i.b(10);
        layoutParams.leftMargin = this.i.b(10);
        this.h.setLayoutParams(layoutParams);
        this.h.setVisibility(8);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams2.addRule(11);
        this.g.setVisibility(8);
        this.g.setLayoutParams(layoutParams2);
        s5 s5VarV = o4Var.V();
        if (s5VarV == null) {
            this.j.setVisibility(8);
        }
        Point pointB = kb.b(getContext());
        boolean z = pointB.x + pointB.y < 1280 || b(o4Var);
        this.f.a();
        this.f.setBanner(o4Var);
        this.d.a(pointB.x, pointB.y, z);
        this.d.setBanner(o4Var);
        this.e.c();
        this.e.b(o4Var, 0);
        ImageData imageDataM = o4Var.M();
        if (imageDataM == null || imageDataM.getData() == null) {
            Bitmap bitmapA = l0.a(this.r);
            if (bitmapA != null) {
                this.g.a(bitmapA, false);
            }
        } else {
            this.g.a(imageDataM.getData(), true);
        }
        ImageData imageDataQ = o4Var.q();
        if (imageDataQ != null) {
            width = imageDataQ.getWidth();
            height = imageDataQ.getHeight();
        } else {
            width = 0;
            height = 0;
        }
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams3.bottomMargin = this.i.b(4);
        if (width != 0 && height != 0) {
            int iB = (int) (this.i.b(64) * (height / width));
            layoutParams3.width = this.n;
            layoutParams3.height = iB;
            if (!z) {
                layoutParams3.bottomMargin = (-iB) / 2;
            }
        }
        layoutParams3.addRule(8, v);
        layoutParams3.setMarginStart(this.i.b(20));
        this.c.setLayoutParams(layoutParams3);
        if (imageDataQ != null) {
            this.c.setImageBitmap(imageDataQ.getData());
        }
        if (s5VarV != null && s5VarV.h0()) {
            c(true);
            post(new Runnable() { // from class: com.my.target.d9$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.e();
                }
            });
        }
        if (s5VarV != null) {
            this.t = s5VarV.o();
            if (s5VarV.g0()) {
                this.j.a(this.m, false);
                this.j.setContentDescription("sound_off");
            } else {
                this.j.a(this.l, false);
                this.j.setContentDescription("sound_on");
            }
        }
        this.j.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.d9$$ExternalSyntheticLambda1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.b(view);
            }
        });
        c cVarA = o4Var.a();
        if (cVarA != null) {
            a(cVarA);
        } else {
            this.k.setVisibility(8);
        }
    }

    @Override // com.my.target.j5
    public void setClickArea(d1 d1Var) {
        gb.a("PromoDefaultStyleView: Apply click area " + d1Var.a() + " to view");
        this.c.setOnClickListener((d1Var.c || d1Var.m) ? this.b : null);
        this.e.getImageView().setOnClickListener((d1Var.m || d1Var.d) ? this.b : null);
        if (d1Var.m || d1Var.n) {
            this.e.getClickableLayout().setOnClickListener(this.b);
        } else {
            this.e.b();
        }
        this.d.a(d1Var, this.f4595a);
        this.f.a(d1Var, this.f4595a);
    }

    @Override // com.my.target.j5
    public void setInterstitialPromoViewListener(j5.a aVar) {
        this.s = aVar;
    }

    @Override // com.my.target.i5
    public void setMediaListener(y4.a aVar) {
        this.u = aVar;
        this.e.setInterstitialPromoViewListener(aVar);
        this.e.h();
    }

    @Override // com.my.target.i5
    public void setTimeChanged(float f) {
        this.h.setVisibility(0);
        float f2 = this.t;
        if (f2 > 0.0f) {
            this.h.setProgress(f / f2);
        }
        this.h.setDigit((int) ((this.t - f) + 1.0f));
    }

    @Override // com.my.target.i5
    public final void b(boolean z) {
        if (z) {
            this.j.a(this.m, false);
            this.j.setContentDescription("sound_off");
        } else {
            this.j.a(this.l, false);
            this.j.setContentDescription("sound_on");
        }
    }

    @Override // com.my.target.j5
    public void c() {
        this.g.setVisibility(0);
    }

    public void c(View view) {
        a(view, 1);
    }

    @Override // com.my.target.i5
    public void a(boolean z) {
        this.h.setVisibility(8);
        this.f.e(this.j);
        this.e.b(z);
    }

    @Override // com.my.target.i5
    public void a(int i) {
        this.e.a(i);
    }

    @Override // com.my.target.i5
    public void a() {
        this.e.i();
    }

    public final /* synthetic */ void b(View view) {
        y4.a aVar = this.u;
        if (aVar != null) {
            aVar.a();
        }
    }

    public final void a(c cVar) {
        this.k.setImageBitmap(cVar.c().getBitmap());
        this.k.setOnClickListener(new View.OnClickListener() { // from class: com.my.target.d9$$ExternalSyntheticLambda4
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                this.f$0.a(view);
            }
        });
    }

    public final /* synthetic */ void a(View view) {
        j5.a aVar = this.s;
        if (aVar != null) {
            aVar.c();
        }
    }

    /* JADX WARN: Code duplicated, block: B:10:0x0027  */
    public final boolean b(o4 o4Var) {
        int height;
        int width;
        s5 s5VarV = o4Var.V();
        if (s5VarV != null) {
            VideoData videoData = (VideoData) s5VarV.k0();
            if (videoData != null) {
                height = videoData.getHeight();
                width = videoData.getWidth();
            } else {
                width = 0;
                height = 0;
            }
        } else {
            ImageData imageDataS = o4Var.s();
            if (imageDataS != null) {
                height = imageDataS.getHeight();
                width = imageDataS.getWidth();
            } else {
                width = 0;
                height = 0;
            }
        }
        if (height <= 0 || width <= 0) {
            return false;
        }
        return height > width || ((float) width) / ((float) height) < 1.4f;
    }

    public void a(View view, int i) {
        j5.a aVar;
        if (!view.isEnabled() || (aVar = this.s) == null) {
            return;
        }
        aVar.a(i);
    }
}
