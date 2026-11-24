package com.my.target;

import androidx.recyclerview.widget.RecyclerView;

/* JADX INFO: loaded from: classes6.dex */
public class y0 extends RecyclerView.ViewHolder {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final v0 f4866a;
    public c5 b;

    public y0(v0 v0Var) {
        super(v0Var.a());
        this.f4866a = v0Var;
    }

    public void a(c5 c5Var, int i) {
        this.b = c5Var;
        c5Var.a(this.f4866a, i);
    }

    public void a() {
        c5 c5Var = this.b;
        if (c5Var != null) {
            c5Var.a(this.f4866a);
        }
        this.b = null;
    }
}
