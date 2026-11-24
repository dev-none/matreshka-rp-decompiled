package com.pushwoosh.inapp.ui;

import android.view.View;
import android.widget.FrameLayout;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import kotlin.Pair;
import kotlin.TuplesKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.math.MathKt;

/* JADX INFO: loaded from: classes6.dex */
public final class j extends FrameLayout {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(InAppOverlayActivity context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    @Override // android.widget.FrameLayout, android.view.View
    public final void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getMode(i2) == 0 ? 0 : View.MeasureSpec.getSize(i2);
        int size2 = View.MeasureSpec.getSize(i);
        int iRoundToInt = MathKt.roundToInt(size2 * 1.32f);
        Pair pair = (size <= 0 || iRoundToInt <= size) ? TuplesKt.to(Integer.valueOf(size2), Integer.valueOf(iRoundToInt)) : TuplesKt.to(Integer.valueOf(MathKt.roundToInt(size / 1.32f)), Integer.valueOf(size));
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(((Number) pair.component1()).intValue(), 1073741824), View.MeasureSpec.makeMeasureSpec(((Number) pair.component2()).intValue(), 1073741824));
    }
}
