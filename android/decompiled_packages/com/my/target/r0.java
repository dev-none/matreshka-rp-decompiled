package com.my.target;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.widget.TextView;

/* JADX INFO: loaded from: classes6.dex */
public class r0 extends TextView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final GradientDrawable f4795a;
    public final int b;

    public r0(Context context) {
        this(context, null);
    }

    public void a(int i, int i2) {
        a(i, i2, 0);
    }

    @Override // android.widget.TextView, android.view.View
    public void onDraw(Canvas canvas) {
        this.f4795a.setBounds(getPaddingLeft() - this.b, getPaddingTop(), getWidth(), getHeight());
        this.f4795a.draw(canvas);
        super.onDraw(canvas);
    }

    @Override // android.widget.TextView, android.view.View
    public void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        setMeasuredDimension(getMeasuredWidth() + (this.b * 2), getMeasuredHeight());
    }

    @Override // android.view.View
    public void setBackgroundColor(int i) {
        this.f4795a.setColor(i);
        invalidate();
    }

    public r0(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public void a(int i, int i2, int i3) {
        this.f4795a.setStroke(i, i2);
        this.f4795a.setCornerRadius(i3);
        invalidate();
    }

    public r0(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        GradientDrawable gradientDrawable = new GradientDrawable();
        this.f4795a = gradientDrawable;
        gradientDrawable.setStroke(0, -13421773);
        gradientDrawable.setColor(0);
        this.b = (int) TypedValue.applyDimension(1, 2.0f, context.getResources().getDisplayMetrics());
    }
}
