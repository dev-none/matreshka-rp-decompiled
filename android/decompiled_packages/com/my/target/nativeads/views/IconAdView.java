package com.my.target.nativeads.views;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.my.target.kb;
import com.my.target.ma;

/* JADX INFO: loaded from: classes6.dex */
public class IconAdView extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ma f4736a;
    public int b;
    public int c;

    public IconAdView(Context context) {
        this(context, null);
    }

    public final void a(int i, int i2) {
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int childCount = getChildCount();
        if (size == 0 && size2 == 0) {
            setMeasuredDimension(0, 0);
        }
        this.f4736a.measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
        int measuredWidth = this.f4736a.getMeasuredWidth();
        int measuredHeight = this.f4736a.getMeasuredHeight();
        if (mode2 != 1073741824) {
            size2 = measuredHeight;
        }
        if (mode != 1073741824) {
            size = measuredWidth;
        }
        if (childCount > 1) {
            for (int i3 = 1; i3 < childCount; i3++) {
                getChildAt(i3).measure(View.MeasureSpec.makeMeasureSpec(size, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(size2, Integer.MIN_VALUE));
            }
        }
        setMeasuredDimension(size, size2);
    }

    public ImageView getImageView() {
        return this.f4736a;
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public void onLayout(boolean z, int i, int i2, int i3, int i4) {
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt.getVisibility() != 8) {
                int measuredWidth = childAt.getMeasuredWidth();
                int measuredHeight = childAt.getMeasuredHeight();
                if (measuredWidth != 0 && measuredHeight != 0) {
                    int i6 = ((i3 - i) - measuredWidth) / 2;
                    int i7 = ((i4 - i2) - measuredHeight) / 2;
                    childAt.layout(i6, i7, measuredWidth + i6, measuredHeight + i7);
                }
            }
        }
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i, int i2) {
        int i3;
        int i4 = this.b;
        if (i4 == 0 || (i3 = this.c) == 0) {
            a(i, i2);
        } else {
            a(i, i2, i4 / i3);
        }
    }

    public void setPlaceHolderDimension(int i, int i2) {
        this.b = i;
        this.c = i2;
        this.f4736a.setPlaceholderDimensions(i, i2);
    }

    public IconAdView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public IconAdView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        ma maVar = new ma(context);
        this.f4736a = maVar;
        kb.b(maVar, "nativeads_icon");
        addView(maVar);
    }

    public final void a(int i, int i2, float f) {
        int i3;
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        int childCount = getChildCount();
        if (mode == 0 && mode2 == 0) {
            super.onMeasure(i, i2);
            return;
        }
        if (mode == 0) {
            size = (int) (size2 * f);
        } else if (mode2 == 0 || mode2 != 1073741824) {
            size2 = (int) (size / f);
        }
        boolean z = false;
        for (int i4 = 0; i4 < childCount; i4++) {
            View childAt = getChildAt(i4);
            if (childAt.getVisibility() != 8) {
                ViewGroup.LayoutParams layoutParams = childAt.getLayoutParams();
                int i5 = Integer.MIN_VALUE;
                if (layoutParams != null) {
                    i3 = layoutParams.width == -1 ? 1073741824 : Integer.MIN_VALUE;
                    if (layoutParams.height == -1) {
                        i5 = 1073741824;
                    }
                } else {
                    i3 = Integer.MIN_VALUE;
                }
                childAt.measure(View.MeasureSpec.makeMeasureSpec(size, i3), View.MeasureSpec.makeMeasureSpec(size2, i5));
                if (childAt.getMeasuredHeight() > 0) {
                    z = true;
                }
            }
        }
        if (z) {
            setMeasuredDimension(size, size2);
        } else {
            setMeasuredDimension(0, 0);
        }
    }
}
