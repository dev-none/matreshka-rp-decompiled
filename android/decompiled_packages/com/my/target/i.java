package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;

/* JADX INFO: loaded from: classes6.dex */
public class i extends ma {
    public static final int DEFAULT_HEIGHT = 20;
    public int g;

    public i(Context context) {
        this(context, null);
    }

    @Override // com.my.target.ma, android.widget.ImageView, android.view.View
    public void onMeasure(int i, int i2) {
        if (this.g >= 0) {
            setMeasuredDimension(getMeasuredWidth(), getMeasuredHeight());
        } else {
            super.onMeasure(i, i2);
        }
    }

    public void setFixedHeight(int i) {
        this.g = i;
    }

    @Override // com.my.target.ma, android.widget.ImageView
    public void setImageBitmap(Bitmap bitmap) {
        int paddingTop;
        int width;
        int i = this.g;
        int height = 0;
        if (i >= 0) {
            paddingTop = (i - getPaddingTop()) - getPaddingBottom();
            if (paddingTop < 0) {
                paddingTop = 0;
            }
        } else {
            paddingTop = -1;
        }
        if (paddingTop >= 0) {
            if (bitmap != null) {
                width = bitmap.getWidth();
                height = bitmap.getHeight();
            } else {
                width = 0;
            }
            setMeasuredDimension(((int) (paddingTop * (height > 0 ? width / height : 0.0f))) + getPaddingLeft() + getPaddingRight(), this.g);
        }
        super.setImageBitmap(bitmap);
    }

    @Override // com.my.target.ma, android.widget.ImageView
    public void setImageDrawable(Drawable drawable) {
        int paddingTop;
        int intrinsicWidth;
        int i = this.g;
        int intrinsicHeight = 0;
        if (i >= 0) {
            paddingTop = (i - getPaddingTop()) - getPaddingBottom();
            if (paddingTop < 0) {
                paddingTop = 0;
            }
        } else {
            paddingTop = -1;
        }
        if (paddingTop >= 0) {
            if (drawable != null) {
                intrinsicWidth = drawable.getIntrinsicWidth();
                intrinsicHeight = drawable.getIntrinsicHeight();
            } else {
                intrinsicWidth = 0;
            }
            setMeasuredDimension(((int) (paddingTop * (intrinsicHeight > 0 ? intrinsicWidth / intrinsicHeight : 0.0f))) + getPaddingLeft() + getPaddingRight(), this.g);
        }
        super.setImageDrawable(drawable);
    }

    public i(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public i(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.g = -1;
        this.g = kb.a(20, context);
    }
}
