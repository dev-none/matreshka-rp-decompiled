package com.pushwoosh.inapp.ui;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class v1 extends Drawable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Paint f5173a;
    public final Path b;
    public final RectF c;
    public boolean d;

    public v1() {
        Paint paint = new Paint(1);
        paint.setColor(-1);
        paint.setStrokeCap(Paint.Cap.ROUND);
        this.f5173a = paint;
        this.b = new Path();
        this.c = new RectF();
        this.d = true;
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        float fWidth = getBounds().width();
        float fHeight = getBounds().height();
        if (fWidth <= 0.0f || fHeight <= 0.0f) {
            return;
        }
        float fMin = Math.min(fWidth, fHeight) / 24.0f;
        float f = (fWidth / 2.0f) + getBounds().left;
        float f2 = (fHeight / 2.0f) + getBounds().top;
        this.b.reset();
        float f3 = 8.0f * fMin;
        float f4 = f - f3;
        float f5 = 3.0f * fMin;
        float f6 = f2 - f5;
        this.b.moveTo(f4, f6);
        float f7 = f - (4.0f * fMin);
        this.b.lineTo(f7, f6);
        this.b.lineTo(f, f2 - f3);
        this.b.lineTo(f, f3 + f2);
        float f8 = f5 + f2;
        this.b.lineTo(f7, f8);
        this.b.lineTo(f4, f8);
        this.b.close();
        this.f5173a.setStyle(Paint.Style.FILL);
        canvas.drawPath(this.b, this.f5173a);
        this.f5173a.setStyle(Paint.Style.STROKE);
        this.f5173a.setStrokeWidth(1.8f * fMin);
        if (!this.d) {
            float f9 = 5.0f * fMin;
            this.c.set(f - (2.0f * fMin), f2 - f9, (6.0f * fMin) + f, f9 + f2);
            canvas.drawArc(this.c, -50.0f, 100.0f, false, this.f5173a);
            float f10 = 9.0f * fMin;
            this.c.set(f7, f2 - f10, (fMin * 10.0f) + f, f2 + f10);
            canvas.drawArc(this.c, -50.0f, 100.0f, false, this.f5173a);
            return;
        }
        float f11 = (2.5f * fMin) + f;
        float f12 = 3.5f * fMin;
        float f13 = f2 - f12;
        float f14 = (fMin * 8.5f) + f;
        float f15 = f2 + f12;
        canvas.drawLine(f11, f13, f14, f15, this.f5173a);
        canvas.drawLine(f14, f13, f11, f15, this.f5173a);
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i) {
        this.f5173a.setAlpha(i);
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        this.f5173a.setColorFilter(colorFilter);
    }
}
