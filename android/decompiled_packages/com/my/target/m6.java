package com.my.target;

import android.content.Context;
import android.view.animation.AccelerateDecelerateInterpolator;
import androidx.recyclerview.widget.RecyclerView;

/* JADX INFO: loaded from: classes6.dex */
public class m6 extends RecyclerView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f4706a;

    public interface a {
        void b();
    }

    public m6(Context context) {
        super(context);
    }

    @Override // androidx.recyclerview.widget.RecyclerView
    public void onScrollStateChanged(int i) {
        a aVar;
        super.onScrollStateChanged(i);
        if (i == 0 && (aVar = this.f4706a) != null) {
            aVar.b();
        }
    }

    public void setMoveStopListener(a aVar) {
        this.f4706a = aVar;
    }

    @Override // androidx.recyclerview.widget.RecyclerView
    public void smoothScrollBy(int i, int i2) {
        super.smoothScrollBy(i, i2, new AccelerateDecelerateInterpolator());
    }
}
