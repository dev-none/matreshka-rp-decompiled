package com.my.target;

import android.content.Context;
import android.graphics.Bitmap;
import android.widget.FrameLayout;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes6.dex */
public class h2 extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ImageView f4647a;

    public h2(Context context) {
        super(context);
        ImageView imageView = new ImageView(context);
        this.f4647a = imageView;
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 17;
        addView(imageView, layoutParams);
    }

    public void setImageBitmap(Bitmap bitmap) {
        this.f4647a.setImageBitmap(bitmap);
    }
}
