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
public class y2 extends View {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Rect f4867a;
    public final Paint b;
    public final ColorFilter c;
    public final float d;
    public final int e;
    public Bitmap f;
    public int g;
    public int h;

    public y2(Context context) {
        super(context);
        Paint paint = new Paint();
        this.b = paint;
        paint.setFilterBitmap(true);
        this.d = kb.a();
        this.e = kb.a(10, context);
        this.f4867a = new Rect();
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
        int i = this.g;
        int i2 = this.e * 2;
        setMeasuredDimension(i + i2, this.h + i2);
        requestLayout();
    }

    public int getPadding() {
        return this.e;
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        Bitmap bitmap = this.f;
        if (bitmap != null) {
            Rect rect = this.f4867a;
            int i = this.e;
            rect.left = i;
            rect.top = i;
            rect.right = this.g + i;
            rect.bottom = this.h + i;
            canvas.drawBitmap(bitmap, (Rect) null, rect, this.b);
        }
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        setMeasuredDimension(getMeasuredWidth(), getMeasuredHeight());
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
}
