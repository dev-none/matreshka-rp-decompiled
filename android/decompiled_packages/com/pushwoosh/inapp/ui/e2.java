package com.pushwoosh.inapp.ui;

import android.app.Activity;
import android.view.View;
import android.widget.ImageView;
import kotlin.jvm.internal.Intrinsics;
import kotlin.math.MathKt;
import kotlin.ranges.RangesKt;

/* JADX INFO: loaded from: classes6.dex */
public final class e2 extends ImageView {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e2(Activity context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        setScaleType(ImageView.ScaleType.CENTER_CROP);
    }

    @Override // android.widget.ImageView, android.view.View
    public final void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int iRoundToInt = MathKt.roundToInt(size * 0.52f);
        int size2 = View.MeasureSpec.getSize(i2);
        if (View.MeasureSpec.getMode(i2) != 1073741824 && size2 > 0) {
            iRoundToInt = RangesKt.coerceAtMost(iRoundToInt, MathKt.roundToInt(size2 * 0.4f));
        }
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(size, 1073741824), View.MeasureSpec.makeMeasureSpec(iRoundToInt, 1073741824));
    }
}
