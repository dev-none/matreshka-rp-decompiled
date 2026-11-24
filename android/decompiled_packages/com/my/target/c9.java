package com.my.target;

import android.content.Context;
import android.os.Parcelable;
import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public interface c9 {

    public interface a {
        void a(int i, Context context);

        void a(View view, int i, int i2);

        void a(int[] iArr, Context context);
    }

    void dispose();

    Parcelable getState();

    int[] getVisibleCardNumbers();

    void restoreState(Parcelable parcelable);

    void setPromoCardSliderListener(a aVar);
}
