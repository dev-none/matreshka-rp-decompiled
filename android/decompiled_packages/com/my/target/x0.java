package com.my.target;

import android.content.Context;
import android.view.View;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

/* JADX INFO: loaded from: classes6.dex */
public class x0 extends LinearLayoutManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final float f4857a;
    public a b;

    public interface a {
        void a();
    }

    public x0(float f, Context context) {
        super(context, 0, false);
        this.f4857a = e2.a(f, -1.0f) == 0 ? 0.75f : f;
    }

    public void a(a aVar) {
        this.b = aVar;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void measureChildWithMargins(View view, int i, int i2) {
        ((RecyclerView.LayoutParams) view.getLayoutParams()).width = (int) (getWidth() * this.f4857a);
        super.measureChildWithMargins(view, i, i2);
    }

    @Override // androidx.recyclerview.widget.LinearLayoutManager, androidx.recyclerview.widget.RecyclerView.LayoutManager
    public void onLayoutCompleted(RecyclerView.State state) {
        super.onLayoutCompleted(state);
        a aVar = this.b;
        if (aVar != null) {
            aVar.a();
        }
    }

    public boolean a(View view) {
        return findViewByPosition(findFirstCompletelyVisibleItemPosition()) == view;
    }
}
