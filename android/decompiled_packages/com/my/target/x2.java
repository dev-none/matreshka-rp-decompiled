package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.LightingColorFilter;
import android.graphics.Paint;
import android.graphics.Rect;
import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public class x2 extends View {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Rect f4858a;
    public final Paint b;
    public final ColorFilter c;
    public final float d;
    public int e;
    public Bitmap f;
    public int g;
    public int h;

    public x2(Context context) {
        super(context);
        Paint paint = new Paint();
        this.b = paint;
        paint.setFilterBitmap(true);
        this.d = kb.a();
        this.e = kb.a(10, context);
        this.f4858a = new Rect();
        this.c = new LightingColorFilter(-3355444, 1);
    }

    public void a(Bitmap bitmap, boolean z) {
        this.f = bitmap;
        if (bitmap == null) {
            this.h = 0;
            this.g = 0;
        } else if (z) {
            float f = this.d > 1.0f ? 2.0f : 1.0f;
            this.h = (int) ((bitmap.getHeight() / f) * this.d);
            this.g = (int) ((this.f.getWidth() / f) * this.d);
        } else {
            this.g = bitmap.getWidth();
            this.h = this.f.getHeight();
        }
        requestLayout();
    }

    public int getPadding() {
        return this.e;
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        if (this.f != null) {
            Rect rect = this.f4858a;
            int i = this.e;
            rect.left = i;
            rect.top = i;
            rect.right = getMeasuredWidth() - this.e;
            this.f4858a.bottom = getMeasuredHeight() - this.e;
            canvas.drawBitmap(this.f, (Rect) null, this.f4858a, this.b);
        }
    }

    /* JADX WARN: Code duplicated, block: B:20:0x0042  */
    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int i3;
        int i4;
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int i5 = this.e * 2;
        int i6 = size - i5;
        int i7 = size2 - i5;
        if (this.f == null || (i3 = this.g) <= 0 || (i4 = this.h) <= 0) {
            setMeasuredDimension(0, 0);
            return;
        }
        float f = i3;
        float f2 = i4;
        float f3 = f / f2;
        if (mode == 1073741824 && mode2 == 1073741824) {
            setMeasuredDimension(size, size2);
            return;
        }
        if (mode == 0 && mode2 == 0) {
            i6 = i3;
            i7 = i4;
        } else if (mode == 0) {
            i6 = (int) (i7 * f3);
        } else {
            float f4 = i6;
            if (mode2 == 0) {
                i7 = (int) (f4 / f3);
            } else {
                float f5 = f4 / f;
                float f6 = i7;
                if (Math.min(f5, f6 / f2) != f5 || f3 <= 0.0f) {
                    i6 = (int) (f6 * f3);
                } else {
                    i7 = (int) (f4 / f3);
                }
            }
        }
        int i8 = this.e * 2;
        setMeasuredDimension(i6 + i8, i7 + i8);
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.b.setColorFilter(this.c);
            invalidate();
            return true;
        }
        if (action != 1) {
            if (action != 3) {
                return super.onTouchEvent(motionEvent);
            }
        } else if (motionEvent.getX() >= 0.0f && motionEvent.getX() <= getMeasuredWidth() && motionEvent.getY() >= 0.0f && motionEvent.getY() <= getMeasuredHeight()) {
            performClick();
        }
        this.b.setColorFilter(null);
        invalidate();
        return true;
    }

    public void setPadding(int i) {
        this.e = i;
    }
}
