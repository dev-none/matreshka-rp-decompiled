package com.my.target.common.views;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.view.View;
import com.my.target.gb;

/* JADX INFO: loaded from: classes6.dex */
public class StarsRatingView extends View {
    public static final Paint f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f4586a;
    public float b;
    public float c;
    public Bitmap d;
    public boolean e;

    static {
        Paint paint = new Paint();
        f = paint;
        paint.setAntiAlias(true);
        paint.setStyle(Paint.Style.FILL);
    }

    public StarsRatingView(Context context) {
        super(context);
    }

    public final void a() {
        if (this.f4586a <= 0) {
            return;
        }
        int iFloor = (int) Math.floor(this.c);
        int iCeil = (int) Math.ceil(5.0f - this.c);
        float f2 = iFloor;
        boolean z = this.c - f2 >= 0.2f;
        try {
            int i = this.f4586a;
            this.d = Bitmap.createBitmap((int) ((i + this.b) * 5.0f), i, Bitmap.Config.ARGB_8888);
            Canvas canvas = new Canvas(this.d);
            a(0, this.f4586a, -552162, canvas, iFloor);
            int i2 = this.f4586a;
            int i3 = (int) (0 + ((i2 + this.b) * f2));
            a(i3, i2, -3355444, canvas, iCeil);
            if (z) {
                int i4 = this.f4586a;
                double d = this.c;
                a(i3, i4, (float) (d - Math.floor(d)), canvas);
            }
            invalidate();
            this.e = false;
        } catch (OutOfMemoryError unused) {
            gb.a("StarsRatingView: Unable to create rating bitmap because of OOME");
        }
    }

    @Override // android.view.View
    public void onDraw(Canvas canvas) {
        if (this.c > 0.0f) {
            Bitmap bitmap = this.d;
            if (bitmap != null) {
                canvas.drawBitmap(bitmap, 0.0f, 0.0f, (Paint) null);
            } else {
                if (this.f4586a <= 0 || this.e) {
                    return;
                }
                this.e = true;
                post(new Runnable() { // from class: com.my.target.common.views.StarsRatingView$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a();
                    }
                });
            }
        }
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        int size = this.f4586a;
        if (size <= 0) {
            size = View.MeasureSpec.getSize(i2);
            this.f4586a = size;
        }
        setMeasuredDimension((int) ((size * 5) + (this.b * 4.0f)), size);
    }

    public void setRating(float f2) {
        setContentDescription(Float.toString(f2));
        if (f2 > 5.0f || f2 < 0.0f) {
            gb.a("StarsRatingView: Rating is out of bounds - " + f2);
            this.c = 0.0f;
        } else {
            this.c = f2;
        }
        invalidate();
    }

    public void setStarSize(int i) {
        this.f4586a = i;
    }

    public void setStarsPadding(float f2) {
        this.b = f2;
    }

    public final void a(int i, int i2, int i3, Canvas canvas, int i4) {
        Paint paint = f;
        paint.setColor(i3);
        canvas.drawPath(a(i, i2 / 2, i4), paint);
    }

    public final Path a(int i, float f2, int i2) {
        Path path = new Path();
        path.setFillType(Path.FillType.EVEN_ODD);
        int i3 = 0;
        while (i3 < i2) {
            float f3 = i3;
            double d = i + f2 + (f3 * f2 * 2.0f) + (f3 * this.b);
            double d2 = f2;
            float f4 = 2.0f * f2;
            path.moveTo((float) (d + (Math.sin(0.0d) * d2)), f4 - ((float) ((Math.cos(0.0d) * d2) + d2)));
            double d3 = 0.45f * f2;
            path.lineTo((float) (d + (Math.sin(0.6283185307179586d) * d3)), f4 - ((float) ((Math.cos(0.6283185307179586d) * d3) + d2)));
            int i4 = 1;
            while (i4 < 5) {
                double d4 = ((double) i4) * 1.2566370614359172d;
                path.lineTo((float) (d + (Math.sin(d4) * d2)), f4 - ((float) (d2 + (Math.cos(d4) * d2))));
                double d5 = d4 + 0.6283185307179586d;
                path.lineTo((float) (d + (Math.sin(d5) * d3)), f4 - ((float) ((Math.cos(d5) * d3) + d2)));
                i4++;
                i3 = i3;
            }
            i3++;
        }
        path.close();
        return path;
    }

    public final void a(int i, int i2, float f2, Canvas canvas) {
        Paint paint = f;
        paint.setColor(-552162);
        Path pathA = a(0, i2 / 2, 1);
        float f3 = i2 * f2;
        Rect rect = new Rect(i, 0, (int) (i + f3), i2);
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap((int) f3, i2, Bitmap.Config.ARGB_8888);
        new Canvas(bitmapCreateBitmap).drawPath(pathA, paint);
        canvas.drawBitmap(bitmapCreateBitmap, (Rect) null, rect, paint);
    }
}
