package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.view.View;
import android.widget.Button;
import android.widget.ProgressBar;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.VideoData;

/* JADX INFO: loaded from: classes6.dex */
public class r9 extends o9 {
    public r9(View view, View view2, n9.a aVar, View view3, aa aaVar, Context context) {
        super(view, view2, aVar, view3, aaVar, context);
        addView(this.f4758a);
        addView(this.g);
        addView(this.h);
        addView(this.l);
        addView(view2);
    }

    private void a(int i, int i2) {
        this.q.setVisibility(8);
        this.r.setVisibility(8);
        this.n.setVisibility(8);
        this.d.setVisibility(0);
        if (a(i)) {
            this.s.setVisibility(0);
            this.o.setVisibility(8);
            kb.a(this.s, i, i2, Integer.MIN_VALUE);
            View view = this.K;
            int iA = i - kb.a(view != null ? view.getMeasuredWidth() : 0, this.i.getMeasuredWidth());
            kb.a(this.d, iA, iA, Integer.MIN_VALUE);
        } else {
            this.s.setVisibility(8);
            this.o.setVisibility(0);
            kb.a(this.d, i, i2, Integer.MIN_VALUE);
        }
        kb.a(this.o, this.d.getMeasuredWidth(), this.d.getMeasuredHeight(), 1073741824);
    }

    private void b(int i, int i2) {
        this.d.setVisibility(0);
        this.n.setVisibility(0);
        this.o.setVisibility(0);
        this.s.setVisibility(8);
        kb.a(this.d, i - this.C, i2, Integer.MIN_VALUE);
        kb.a(this.n, i, this.d.getMeasuredHeight(), 1073741824);
        View view = this.K;
        if (((double) kb.a(view != null ? view.getMeasuredHeight() : 0, this.i.getMeasuredHeight())) * 1.6d > i2) {
            this.q.setVisibility(8);
            if (!TextUtils.isEmpty(this.r.getText())) {
                this.r.setVisibility(0);
            }
        } else {
            if (TextUtils.isEmpty(this.q.getText())) {
                this.q.setVisibility(8);
            } else {
                this.q.setVisibility(0);
            }
            if (TextUtils.isEmpty(this.r.getText())) {
                this.r.setVisibility(8);
            } else {
                this.r.setVisibility(0);
            }
        }
        int i3 = this.z;
        int i4 = i3 * 2;
        this.p.measure(View.MeasureSpec.makeMeasureSpec(((i - (i3 * 4)) - this.k.getMeasuredWidth()) - this.j.getMeasuredWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.G, 1073741824));
        int i5 = i - i4;
        int i6 = i2 - i4;
        kb.a(this.q, i5, i6, Integer.MIN_VALUE);
        kb.a(this.r, i5, i6, Integer.MIN_VALUE);
        kb.a(this.o, i, i2, 1073741824);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        if (this.e.getVisibility() == 0) {
            kb.e(this.e, i4 - i2, i);
        }
        if (i3 - i < i4 - i2) {
            b(i, i2, i3, i4);
        } else {
            a(i, i2, i3, i4);
        }
        View view = this.K;
        if (view == null) {
            view = this.i;
        }
        int left = view.getLeft();
        View view2 = this.K;
        if (view2 == null) {
            view2 = this.i;
        }
        int top = view2.getTop();
        View view3 = this.K;
        int iA = kb.a(view3 != null ? view3.getRight() : 0, this.i.getRight());
        View view4 = this.K;
        int iA2 = kb.a(view4 != null ? view4.getBottom() : 0, this.i.getBottom());
        if (this.l.getVisibility() == 0) {
            kb.a(this.l, left, top, iA, iA2);
        }
        if (this.g.getVisibility() != 0) {
            return;
        }
        if (this.h.getVisibility() != 0) {
            kb.a(this.g, left, top, iA, iA2);
            return;
        }
        int measuredWidth = left + (((iA - left) - ((this.g.getMeasuredWidth() + this.z) + this.h.getMeasuredWidth())) / 2);
        int measuredHeight = top + (((iA2 - top) - this.g.getMeasuredHeight()) / 2);
        kb.c(this.g, measuredHeight, measuredWidth);
        kb.c(this.h, measuredHeight, this.g.getRight() + this.z);
    }

    /* JADX WARN: Code duplicated, block: B:16:0x0078  */
    /* JADX WARN: Code duplicated, block: B:17:0x007c  */
    /* JADX WARN: Code duplicated, block: B:20:0x0087  */
    /* JADX WARN: Code duplicated, block: B:22:0x0096  */
    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int i3;
        int i4;
        int i5;
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int i6 = this.L;
        if (i6 > 0 && (i5 = this.M) > 0) {
            float f = i6;
            float f2 = i5;
            float f3 = f / f2;
            float f4 = size;
            float f5 = f4 / f;
            float f6 = size2;
            if (Math.min(f5, f6 / f2) != f5 || f3 <= 0.0f) {
                i3 = (int) (f6 * f3);
            } else {
                i4 = (int) (f4 / f3);
                i3 = size;
            }
            kb.a(this.K, i3, i4, Integer.MIN_VALUE);
            kb.a(this.i, i3, i4, Integer.MIN_VALUE);
            kb.a(this.m, i3, i4, 1073741824);
            ma maVar = this.j;
            int i7 = this.F;
            kb.a(maVar, i7, i7, Integer.MIN_VALUE);
            x2 x2Var = this.f4758a;
            int i8 = this.C + (this.D * 2);
            kb.a(x2Var, i8, i8, 1073741824);
            x2 x2Var2 = this.c;
            int i9 = this.C + (this.D * 2);
            kb.a(x2Var2, i9, i9, 1073741824);
            ub ubVar = this.t;
            int i10 = this.C;
            kb.a(ubVar, i10, i10, 1073741824);
            i iVar = this.k;
            int i11 = this.C + (this.D * 2);
            kb.a(iVar, i11, i11, 1073741824);
            if (size < size2) {
                b(size, size2);
            } else {
                a(size, size2);
            }
            if (this.g.getVisibility() == 0) {
                g2 g2Var = this.g;
                int i12 = this.A;
                kb.a(g2Var, i12, i12, 1073741824);
                if (this.h.getVisibility() == 0) {
                    this.h.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.g.getMeasuredHeight(), 1073741824));
                }
            }
            ProgressBar progressBar = this.l;
            int i13 = this.A;
            kb.a(progressBar, i13, i13, 1073741824);
            kb.a(this.e, size, this.B, 1073741824);
            setMeasuredDimension(size, size2);
        }
        i3 = size;
        i4 = size2;
        kb.a(this.K, i3, i4, Integer.MIN_VALUE);
        kb.a(this.i, i3, i4, Integer.MIN_VALUE);
        kb.a(this.m, i3, i4, 1073741824);
        ma maVar2 = this.j;
        int i14 = this.F;
        kb.a(maVar2, i14, i14, Integer.MIN_VALUE);
        x2 x2Var3 = this.f4758a;
        int i15 = this.C + (this.D * 2);
        kb.a(x2Var3, i15, i15, 1073741824);
        x2 x2Var4 = this.c;
        int i16 = this.C + (this.D * 2);
        kb.a(x2Var4, i16, i16, 1073741824);
        ub ubVar2 = this.t;
        int i17 = this.C;
        kb.a(ubVar2, i17, i17, 1073741824);
        i iVar2 = this.k;
        int i18 = this.C + (this.D * 2);
        kb.a(iVar2, i18, i18, 1073741824);
        if (size < size2) {
            b(size, size2);
        } else {
            a(size, size2);
        }
        if (this.g.getVisibility() == 0) {
            g2 g2Var2 = this.g;
            int i19 = this.A;
            kb.a(g2Var2, i19, i19, 1073741824);
            if (this.h.getVisibility() == 0) {
                this.h.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.g.getMeasuredHeight(), 1073741824));
            }
        }
        ProgressBar progressBar2 = this.l;
        int i110 = this.A;
        kb.a(progressBar2, i110, i110, 1073741824);
        kb.a(this.e, size, this.B, 1073741824);
        setMeasuredDimension(size, size2);
    }

    @Override // com.my.target.o9, com.my.target.n9
    public void setBanner(o4 o4Var) {
        ImageData imageDataS;
        Bitmap bitmap;
        super.setBanner(o4Var);
        s5 s5VarV = o4Var.V();
        if (s5VarV == null) {
            return;
        }
        this.e.setVisibility(0);
        this.f4758a.setVisibility(0);
        this.f4758a.setOnClickListener(this);
        if (s5VarV.g0()) {
            this.f4758a.a(this.v, false);
            this.f4758a.setContentDescription("sound_off");
        } else {
            this.f4758a.a(this.u, false);
            this.f4758a.setContentDescription("sound_on");
        }
        this.g.setImageBitmap(this.w);
        this.O = 0;
        View view = this.K;
        if (view != null) {
            view.setOnClickListener(this);
        }
        this.m.setOnClickListener(this);
        VideoData videoData = (VideoData) s5VarV.k0();
        ImageData imageDataV = s5VarV.V();
        if (videoData != null) {
            this.L = videoData.getWidth();
            this.M = videoData.getHeight();
        }
        if ((this.L <= 0 || this.M <= 0) && imageDataV != null) {
            this.L = imageDataV.getWidth();
            this.M = imageDataV.getHeight();
        }
        if ((this.L <= 0 || this.M <= 0) && (imageDataS = o4Var.s()) != null) {
            this.L = imageDataS.getWidth();
            int height = imageDataS.getHeight();
            this.M = height;
            if ((this.L <= 0 || height <= 0) && (bitmap = imageDataS.getBitmap()) != null) {
                this.L = bitmap.getWidth();
                this.M = bitmap.getHeight();
            }
        }
    }

    private void a(int i, int i2, int i3, int i4) {
        int left;
        if (this.c.getVisibility() == 0) {
            x2 x2Var = this.c;
            int i5 = this.H - this.D;
            kb.b(x2Var, i2 + i5, (i3 - i) - i5);
        } else {
            ub ubVar = this.t;
            int i6 = this.H;
            kb.b(ubVar, i2 + i6, (i3 - i) - i6);
        }
        if (a(i3 - i)) {
            ma maVar = this.i;
            kb.a(maVar, i, i2, maVar.getMeasuredWidth() + i, i4);
            View view = this.K;
            kb.a(view, i, i2, (view != null ? view.getMeasuredWidth() : 0) + i, i4);
            View view2 = this.K;
            if (view2 == null) {
                view2 = this.i;
            }
            int left2 = view2.getLeft();
            View view3 = this.K;
            if (view3 == null) {
                view3 = this.i;
            }
            int right = view3.getRight();
            View view4 = this.K;
            if (view4 == null) {
                view4 = this.i;
            }
            int bottom = view4.getBottom();
            View view5 = this.K;
            if (view5 == null) {
                view5 = this.i;
            }
            int top = view5.getTop();
            int i7 = this.H;
            int iA = kb.a(right, this.i.getRight()) + this.H;
            int iA2 = kb.a(this.j.getMeasuredHeight(), this.s.getMeasuredHeight());
            int i8 = this.D;
            kb.a(i7, iA, iA2 + i8, i8, this.j, this.s);
            this.m.layout(left2, top, right, bottom);
            this.d.layout(kb.a(right, this.i.getRight()), i2, i3, i4);
            this.n.layout(0, 0, 0, 0);
            int iMax = Math.max(this.i.getRight(), right);
            int i9 = this.H - this.D;
            kb.d(this.f4758a, i4 - i9, iMax - i9);
            this.f.a(false);
            kb.c(this.o, i4, this.d.getLeft());
            if (this.c.getVisibility() == 0) {
                left = (this.c.getLeft() - this.z) + this.D;
            } else if (this.t.getVisibility() == 0) {
                left = this.t.getLeft() - this.z;
            } else {
                left = i3 - this.H;
            }
            kb.b(this.k, this.H, left);
            return;
        }
        ma maVar2 = this.j;
        int i10 = this.H;
        kb.c(maVar2, i10, i10);
        kb.e(this.d, i4 - i2, i);
        kb.a(this.i, i, i2, i3, i4);
        kb.a(this.K, i, i2, i3, i4);
        this.m.layout(this.i.getLeft(), this.i.getTop(), this.i.getRight(), this.i.getBottom());
        this.n.layout(0, 0, 0, 0);
        kb.c(this.o, this.d.getTop(), this.d.getLeft());
        int top2 = this.d.getTop();
        int i11 = this.z;
        int i12 = this.D;
        kb.d(this.f4758a, top2 - (i11 - i12), i3 - (this.H - i12));
        kb.d(this.k, this.f4758a.getTop() - (this.z - this.D), i3 - this.H);
        this.f.a(true);
    }

    private void b(int i, int i2, int i3, int i4) {
        int top;
        if (this.c.getVisibility() == 0) {
            x2 x2Var = this.c;
            int i5 = this.z - this.D;
            kb.b(x2Var, i2 + i5, (i3 - i) - i5);
        } else {
            ub ubVar = this.t;
            int i6 = this.z;
            kb.b(ubVar, i2 + i6, (i3 - i) - i6);
        }
        kb.c(this.d, i2, i);
        Button button = this.p;
        kb.a(button, 0, (i4 - this.E) - button.getMeasuredHeight(), i3, i4 - this.E);
        kb.a(this.K, i, i2, i3, i4);
        if (this.i.getMeasuredWidth() > 0 && this.i.getMeasuredHeight() > 0) {
            kb.a(this.i, i, i2, i3, i4);
        }
        View view = this.K;
        int left = view != null ? view.getLeft() : 0;
        View view2 = this.K;
        int top2 = view2 != null ? view2.getTop() : 0;
        View view3 = this.K;
        int iA = kb.a(view3 != null ? view3.getRight() : 0, this.i.getRight());
        View view4 = this.K;
        int iA2 = kb.a(view4 != null ? view4.getBottom() : 0, this.i.getBottom());
        this.m.layout(left, top2, iA, iA2);
        int measuredHeight = this.r.getMeasuredHeight() + (this.z / 2);
        if (this.q.getVisibility() == 0) {
            measuredHeight += this.z + this.q.getMeasuredHeight();
        }
        int i7 = this.z;
        int i8 = i3 - i;
        int measuredWidth = i7 + (((i8 - (i7 * 2)) - this.q.getMeasuredWidth()) / 2);
        int i9 = this.z;
        int measuredWidth2 = i9 + (((i8 - (i9 * 2)) - this.r.getMeasuredWidth()) / 2);
        int iA3 = kb.a(this.i.getBottom(), iA2);
        if (measuredHeight < this.p.getTop() - iA3) {
            int top3 = iA3 + (((this.p.getTop() - iA3) - measuredHeight) / 2);
            kb.c(this.q, top3, measuredWidth);
            kb.c(this.r, kb.a(top3, this.q.getBottom() + this.I), measuredWidth2);
        } else {
            kb.e(this.r, this.p.getTop() - this.z, measuredWidth2);
            this.q.layout(0, 0, 0, 0);
        }
        if (this.q.getTop() > 0) {
            top = this.q.getTop();
        } else if (this.r.getTop() > 0) {
            top = this.r.getTop();
        } else {
            top = this.p.getTop();
        }
        int i10 = top - this.z;
        kb.c(this.n, this.d.getTop(), this.d.getLeft());
        kb.c(this.o, i10, i);
        int iMin = Math.min(this.o.getTop(), Math.max(iA2, this.i.getBottom()));
        int i11 = this.z - this.D;
        kb.d(this.f4758a, iMin - i11, i3 - i11);
        this.f.a(((double) (this.i.getBottom() - this.o.getTop())) > ((double) this.i.getMeasuredHeight()) * 0.1d);
        if (this.e.getVisibility() == 0) {
            i4 = this.e.getTop();
        }
        i iVar = this.k;
        int i12 = this.z;
        kb.d(iVar, i4 - i12, i3 - i12);
        ma maVar = this.j;
        int i13 = this.z;
        kb.e(maVar, i4 - i13, i13);
    }
}
