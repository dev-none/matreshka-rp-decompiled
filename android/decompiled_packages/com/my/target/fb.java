package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

/* JADX INFO: loaded from: classes6.dex */
public class fb extends ViewGroup {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final TextView f4625a;
    public final r0 b;
    public final int c;
    public final int d;

    public fb(Context context) {
        super(context);
        kb kbVarE = kb.e(context);
        TextView textView = new TextView(context);
        this.f4625a = textView;
        r0 r0Var = new r0(context);
        this.b = r0Var;
        r0Var.setLines(1);
        textView.setTextSize(2, 18.0f);
        textView.setEllipsize(TextUtils.TruncateAt.END);
        textView.setMaxLines(1);
        textView.setTextColor(-1);
        this.c = kbVarE.b(4);
        this.d = kbVarE.b(2);
        kb.b(textView, "title_text");
        kb.b(r0Var, "age_bordering");
        addView(textView);
        addView(r0Var);
    }

    public TextView getLeftText() {
        return this.f4625a;
    }

    public r0 getRightBorderedView() {
        return this.b;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int measuredWidth = this.f4625a.getMeasuredWidth();
        int measuredHeight = this.f4625a.getMeasuredHeight();
        int measuredWidth2 = this.b.getMeasuredWidth();
        int measuredHeight2 = this.b.getMeasuredHeight();
        int measuredHeight3 = getMeasuredHeight();
        int i5 = (measuredHeight3 - measuredHeight) / 2;
        int i6 = (measuredHeight3 - measuredHeight2) / 2;
        int i7 = this.c + measuredWidth;
        this.f4625a.layout(0, i5, measuredWidth, measuredHeight + i5);
        this.b.layout(i7, i6, measuredWidth2 + i7, measuredHeight2 + i6);
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        this.b.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2 - (this.d * 2), Integer.MIN_VALUE));
        int i3 = size / 2;
        if (this.b.getMeasuredWidth() > i3) {
            this.b.measure(View.MeasureSpec.makeMeasureSpec(i3, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2 - (this.d * 2), Integer.MIN_VALUE));
        }
        this.f4625a.measure(View.MeasureSpec.makeMeasureSpec((size - this.b.getMeasuredWidth()) - this.c, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2 - (this.d * 2), Integer.MIN_VALUE));
        setMeasuredDimension(this.f4625a.getMeasuredWidth() + this.b.getMeasuredWidth() + this.c, Math.max(this.f4625a.getMeasuredHeight(), this.b.getMeasuredHeight()));
    }
}
