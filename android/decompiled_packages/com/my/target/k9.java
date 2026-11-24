package com.my.target;

import android.content.Context;
import android.graphics.drawable.ClipDrawable;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.LayerDrawable;
import android.view.View;
import android.widget.ProgressBar;
import androidx.core.view.GravityCompat;

/* JADX INFO: loaded from: classes6.dex */
public class k9 extends ProgressBar implements j9 {
    public k9(Context context) {
        super(context, null, android.R.attr.progressBarStyleHorizontal);
    }

    @Override // com.my.target.j9
    public View a() {
        return this;
    }

    @Override // com.my.target.j9
    public void setColor(int i) {
        ClipDrawable clipDrawable = new ClipDrawable(new ColorDrawable(i), GravityCompat.START, 1);
        ColorDrawable colorDrawable = new ColorDrawable(0);
        LayerDrawable layerDrawable = (LayerDrawable) getProgressDrawable();
        layerDrawable.setDrawableByLayerId(android.R.id.background, colorDrawable);
        layerDrawable.setDrawableByLayerId(android.R.id.progress, clipDrawable);
        setProgressDrawable(layerDrawable);
    }

    @Override // com.my.target.j9
    public void setMaxTime(float f) {
        setMax((int) (f * 1000.0f));
    }

    @Override // com.my.target.j9
    public void setVisible(boolean z) {
        setVisibility(z ? 0 : 8);
    }

    @Override // com.my.target.j9
    public void setTimeChanged(float f) {
        setProgress((int) (f * 1000.0f), true);
    }
}
