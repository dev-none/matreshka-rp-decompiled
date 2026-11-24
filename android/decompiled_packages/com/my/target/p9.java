package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

/* JADX INFO: loaded from: classes6.dex */
public class p9 extends o9 {
    public final int P;

    public p9(boolean z, View view, View view2, n9.a aVar, View view3, aa aaVar, Context context) {
        super(view, view2, aVar, view3, aaVar, context);
        if (z) {
            this.P = 0;
        } else {
            this.P = 1;
        }
    }

    public final void a(int i, int i2) {
        this.q.setVisibility(8);
        this.r.setVisibility(8);
        this.n.setVisibility(8);
        this.d.setVisibility(0);
        this.o.setVisibility(0);
        kb.a(this.d, i, i2, Integer.MIN_VALUE);
        kb.a(this.o, this.d.getMeasuredWidth(), this.d.getMeasuredHeight(), 1073741824);
    }

    public final void b(int i, int i2) {
        this.d.setVisibility(0);
        this.n.setVisibility(0);
        kb.a(this.d, i - this.C, i2, Integer.MIN_VALUE);
        kb.a(this.n, i, this.d.getMeasuredHeight(), 1073741824);
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
        if (this.P != 0) {
            this.o.setVisibility(8);
            return;
        }
        int i3 = this.z;
        int i4 = i3 * 2;
        this.p.measure(View.MeasureSpec.makeMeasureSpec(((i - (i3 * 4)) - this.k.getMeasuredWidth()) - this.j.getMeasuredWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.G, 1073741824));
        int i5 = i - i4;
        int i6 = i2 - i4;
        kb.a(this.q, i5, i6, Integer.MIN_VALUE);
        kb.a(this.r, i5, i6, Integer.MIN_VALUE);
        this.o.setVisibility(0);
        kb.a(this.o, i, i2, 1073741824);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        if (i3 - i < i4 - i2) {
            b(i, i2, i3, i4);
        } else {
            a(i, i2, i3, i4);
        }
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        if (size < size2) {
            b(size, size2);
            int i3 = this.P;
            if (i3 == 1) {
                kb.a(this.K, size, (size2 - this.n.getMeasuredHeight()) - (this.z * 2), Integer.MIN_VALUE);
            } else if (i3 == 0) {
                kb.a(this.K, size, ((((size2 - this.d.getMeasuredHeight()) - this.q.getMeasuredHeight()) - this.p.getMeasuredHeight()) - this.r.getMeasuredHeight()) - (this.z * 8), Integer.MIN_VALUE);
            }
        } else {
            a(size, size2);
            kb.a(this.K, size, (size2 - this.d.getMeasuredHeight()) - (this.z * 2), 1073741824);
        }
        ub ubVar = this.t;
        int i4 = this.C;
        kb.a(ubVar, i4, i4, 1073741824);
        x2 x2Var = this.c;
        int i5 = this.C + (this.D * 2);
        kb.a(x2Var, i5, i5, 1073741824);
        i iVar = this.k;
        int i6 = this.C + (this.D * 2);
        kb.a(iVar, i6, i6, 1073741824);
        setMeasuredDimension(size, size2);
    }

    @Override // com.my.target.o9, com.my.target.n9
    public void setBanner(o4 o4Var) {
        super.setBanner(o4Var);
        this.f.a(true);
        View view = this.K;
        if (view != null) {
            view.setVisibility(0);
        }
    }

    public final void a(int i, int i2, int i3, int i4) {
        if (this.c.getVisibility() == 0) {
            x2 x2Var = this.c;
            int i5 = this.H - this.D;
            kb.b(x2Var, i2 + i5, (i3 - i) - i5);
        } else {
            ub ubVar = this.t;
            int i6 = this.H;
            kb.b(ubVar, i2 + i6, (i3 - i) - i6);
        }
        kb.e(this.d, i4, i);
        kb.e(this.K, this.d.getTop(), 0);
        this.n.layout(0, 0, 0, 0);
        View view = this.o;
        View view2 = this.K;
        if (view2 != null) {
            i4 = view2.getBottom();
        }
        kb.c(view, i4, 0);
        kb.d(this.k, this.d.getTop() - this.z, i3 - this.H);
    }

    /* JADX WARN: Code duplicated, block: B:18:0x00a6  */
    public final void b(int i, int i2, int i3, int i4) {
        int measuredHeight;
        int bottom;
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
        int measuredHeight2 = (i4 - this.j.getMeasuredHeight()) - this.z;
        Button button = this.p;
        kb.a(button, 0, measuredHeight2 - button.getMeasuredHeight(), i3, measuredHeight2);
        if (this.P == 1) {
            kb.a(this.K, i, this.d.getBottom(), i3, i4);
        }
        int top = this.p.getTop() - this.z;
        TextView textView = this.r;
        kb.a(textView, 0, top - textView.getMeasuredHeight(), i3, top);
        if (this.r.getVisibility() == 0) {
            measuredHeight = this.r.getTop();
        } else {
            measuredHeight = top + this.r.getMeasuredHeight();
        }
        int i7 = measuredHeight - this.z;
        TextView textView2 = this.q;
        kb.a(textView2, 0, i7 - textView2.getMeasuredHeight(), i3, i7);
        if (this.P == 0) {
            kb.a(this.K, i, this.d.getBottom(), i3, this.r.getTop());
            View view = this.K;
            if (view != null) {
                bottom = view.getBottom();
            } else {
                bottom = i4;
            }
        } else {
            bottom = i4;
        }
        kb.c(this.n, this.d.getTop(), this.d.getLeft());
        kb.c(this.o, bottom, i);
        i iVar = this.k;
        int i8 = this.z;
        kb.d(iVar, i4 - i8, i3 - i8);
        ma maVar = this.j;
        int i9 = this.H;
        kb.e(maVar, i4 - i9, i9);
    }
}
