package com.my.target;

import android.view.ViewGroup;
import androidx.recyclerview.widget.RecyclerView;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class t0 extends RecyclerView.Adapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f4821a;
    public final f9 b;

    public t0(List list, f9 f9Var) {
        this.f4821a = list;
        this.b = f9Var;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public int getItemCount() {
        return this.f4821a.size();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onBindViewHolder(y0 y0Var, int i) {
        y0Var.a((c5) this.f4821a.get(i), i);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public y0 onCreateViewHolder(ViewGroup viewGroup, int i) {
        v0 v0VarA = this.b.a();
        v0VarA.a().setLayoutParams(new ViewGroup.LayoutParams(-1, -2));
        return new y0(v0VarA);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public boolean onFailedToRecycleView(y0 y0Var) {
        y0Var.a();
        return super.onFailedToRecycleView(y0Var);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.Adapter
    public void onViewRecycled(y0 y0Var) {
        y0Var.a();
        super.onViewRecycled(y0Var);
    }
}
