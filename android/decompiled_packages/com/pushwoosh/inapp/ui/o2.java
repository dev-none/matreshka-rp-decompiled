package com.pushwoosh.inapp.ui;

import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.util.TypedValue;
import android.view.View;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class o2 extends View {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f5151a;
    public int b;
    public float c;
    public final Paint d;
    public final Paint e;
    public final float f;
    public final float g;
    public final RectF h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o2(InAppOverlayActivity context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Paint paint = new Paint(1);
        paint.setColor(Color.parseColor("#4DFFFFFF"));
        this.d = paint;
        Paint paint2 = new Paint(1);
        paint2.setColor(-1);
        this.e = paint2;
        Intrinsics.checkNotNullParameter(context, "context");
        this.f = (int) TypedValue.applyDimension(1, 4.0f, context.getResources().getDisplayMetrics());
        Intrinsics.checkNotNullParameter(context, "context");
        this.g = (int) TypedValue.applyDimension(1, 1.5f, context.getResources().getDisplayMetrics());
        this.h = new RectF();
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        float f;
        Intrinsics.checkNotNullParameter(canvas, "canvas");
        if (this.f5151a <= 0) {
            return;
        }
        float width = getWidth();
        float f2 = this.f;
        int i = this.f5151a;
        float f3 = (width - (f2 * (i - 1))) / i;
        float height = getHeight();
        int i2 = this.f5151a;
        int i3 = 0;
        while (i3 < i2) {
            float f4 = (this.f + f3) * i3;
            this.h.set(f4, 0.0f, f4 + f3, height);
            RectF rectF = this.h;
            float f5 = this.g;
            canvas.drawRoundRect(rectF, f5, f5, this.d);
            int i4 = this.b;
            if (i3 < i4) {
                f = 1.0f;
            } else {
                f = i3 == i4 ? this.c : 0.0f;
            }
            if (f > 0.0f) {
                this.h.set(f4, 0.0f, (f * f3) + f4, height);
                RectF rectF2 = this.h;
                float f6 = this.g;
                canvas.drawRoundRect(rectF2, f6, f6, this.e);
            }
            i3++;
        }
    }

    public final void setCount(int i) {
        this.f5151a = i;
        invalidate();
    }
}
