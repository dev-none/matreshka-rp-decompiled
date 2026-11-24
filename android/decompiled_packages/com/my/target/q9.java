package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.widget.Button;

/* JADX INFO: loaded from: classes6.dex */
public class q9 extends o9 {
    public q9(View view, View view2, n9.a aVar, View view3, aa aaVar, Context context) {
        super(view, view2, aVar, view3, aaVar, context);
    }

    private void a(int i, int i2) {
        this.q.setVisibility(8);
        this.r.setVisibility(8);
        this.n.setVisibility(8);
        this.d.setVisibility(0);
        if (a(i)) {
            this.s.setVisibility(0);
            kb.a(this.s, i, i2, Integer.MIN_VALUE);
            this.o.setVisibility(8);
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
        if (((double) this.i.getMeasuredHeight()) * 1.6d > i2) {
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
        ub ubVar = this.t;
        int i7 = this.C;
        kb.a(ubVar, i7, i7, 1073741824);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        if (i3 - i < i4 - i2) {
            b(i, i2, i3, i4);
        } else {
            a(i, i2, i3, i4);
        }
    }

    /* JADX WARN: Code duplicated, block: B:16:0x0062  */
    /* JADX WARN: Code duplicated, block: B:17:0x0066  */
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
            kb.a(this.i, i3, i4, Integer.MIN_VALUE);
            ma maVar = this.j;
            int i7 = this.F;
            kb.a(maVar, i7, i7, Integer.MIN_VALUE);
            x2 x2Var = this.c;
            int i8 = this.C + (this.D * 2);
            kb.a(x2Var, i8, i8, 1073741824);
            ub ubVar = this.t;
            int i9 = this.C;
            kb.a(ubVar, i9, i9, 1073741824);
            i iVar = this.k;
            int i10 = this.C + (this.D * 2);
            kb.a(iVar, i10, i10, 1073741824);
            if (size < size2) {
                b(size, size2);
            } else {
                a(size, size2);
            }
            setMeasuredDimension(size, size2);
        }
        i3 = size;
        i4 = size2;
        kb.a(this.i, i3, i4, Integer.MIN_VALUE);
        ma maVar2 = this.j;
        int i11 = this.F;
        kb.a(maVar2, i11, i11, Integer.MIN_VALUE);
        x2 x2Var2 = this.c;
        int i12 = this.C + (this.D * 2);
        kb.a(x2Var2, i12, i12, 1073741824);
        ub ubVar2 = this.t;
        int i13 = this.C;
        kb.a(ubVar2, i13, i13, 1073741824);
        i iVar2 = this.k;
        int i14 = this.C + (this.D * 2);
        kb.a(iVar2, i14, i14, 1073741824);
        if (size < size2) {
            b(size, size2);
        } else {
            a(size, size2);
        }
        setMeasuredDimension(size, size2);
    }

    @Override // com.my.target.o9, com.my.target.n9
    public void setBanner(o4 o4Var) {
        super.setBanner(o4Var);
        View view = this.K;
        if (view != null) {
            view.setVisibility(8);
        }
        this.m.setVisibility(8);
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
            kb.a(this.H, this.i.getRight() + this.H, kb.a(this.j.getMeasuredHeight(), this.s.getMeasuredHeight()) + this.D, this.D, this.j, this.s);
            View view = this.K;
            kb.a(view, i, i2, (view != null ? view.getMeasuredWidth() : 0) + i, i4);
            this.d.layout(this.i.getRight(), i2, i3, i4);
            this.n.layout(0, 0, 0, 0);
            this.f.a(false);
            if (this.c.getVisibility() == 0) {
                left = (this.c.getLeft() - this.z) + this.D;
            } else if (this.t.getVisibility() == 0) {
                left = this.t.getLeft() - this.z;
            } else {
                left = i3 - this.H;
            }
            kb.b(this.k, this.H, left);
            kb.b(this.k, this.H, left);
            return;
        }
        ma maVar2 = this.j;
        int i7 = this.H;
        kb.c(maVar2, i7, i7);
        kb.e(this.d, i4 - i2, i);
        kb.a(this.i, i, i2, i3, i4);
        kb.a(this.K, i, i2, i3, i4);
        this.m.layout(this.i.getLeft(), this.i.getTop(), this.i.getRight(), this.i.getBottom());
        this.n.layout(0, 0, 0, 0);
        kb.c(this.o, this.d.getTop(), this.d.getLeft());
        this.f.a(true);
        kb.d(this.k, this.d.getTop() - this.z, i3 - this.H);
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
        kb.a(this.i, i, i2, i3, i4);
        int measuredHeight = this.r.getMeasuredHeight() + (this.z / 2);
        if (this.q.getVisibility() == 0) {
            measuredHeight += this.z + this.q.getMeasuredHeight();
        }
        int i7 = this.z;
        int i8 = i3 - i;
        int measuredWidth = i7 + (((i8 - (i7 * 2)) - this.q.getMeasuredWidth()) / 2);
        int i9 = this.z;
        int measuredWidth2 = i9 + (((i8 - (i9 * 2)) - this.r.getMeasuredWidth()) / 2);
        int bottom = this.i.getBottom();
        if (measuredHeight < this.p.getTop() - bottom) {
            int top2 = bottom + (((this.p.getTop() - bottom) - measuredHeight) / 2);
            kb.c(this.q, top2, measuredWidth);
            kb.c(this.r, kb.a(top2, this.q.getBottom() + this.I), measuredWidth2);
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
        this.f.a(((double) (this.i.getBottom() - this.o.getTop())) > ((double) this.i.getMeasuredHeight()) * 0.1d);
        i iVar = this.k;
        int i11 = this.z;
        kb.d(iVar, i4 - i11, i3 - i11);
        ma maVar = this.j;
        int i12 = this.z;
        kb.e(maVar, i4 - i12, i12);
    }
}
