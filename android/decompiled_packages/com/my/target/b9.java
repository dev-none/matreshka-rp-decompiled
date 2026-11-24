package com.my.target;

import android.content.Context;
import android.view.View;
import android.widget.FrameLayout;
import androidx.core.view.GravityCompat;
import androidx.recyclerview.widget.LinearLayoutManager;

/* JADX INFO: loaded from: classes6.dex */
public class b9 extends FrameLayout implements a9, z0.a, m6.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final m6 f4556a;
    public final LinearLayoutManager b;
    public final j2 c;
    public a9.a d;

    public b9(Context context) {
        super(context);
        m6 m6Var = new m6(context);
        this.f4556a = m6Var;
        z0 z0Var = new z0(context);
        z0Var.a(this);
        m6Var.setLayoutManager(z0Var);
        this.b = z0Var;
        j2 j2Var = new j2(17);
        this.c = j2Var;
        j2Var.attachToRecyclerView(m6Var);
        m6Var.setHasFixedSize(true);
        m6Var.setMoveStopListener(this);
        addView(m6Var, new FrameLayout.LayoutParams(-1, -1));
    }

    @Override // com.my.target.a9
    public boolean a(int i) {
        return i >= this.b.findFirstCompletelyVisibleItemPosition() && i <= this.b.findLastCompletelyVisibleItemPosition();
    }

    @Override // com.my.target.a9
    public void b(int i) {
        this.c.b(i);
    }

    public final void c() {
        int[] iArr;
        if (this.d != null) {
            int iFindFirstVisibleItemPosition = this.b.findFirstVisibleItemPosition();
            int iFindLastVisibleItemPosition = this.b.findLastVisibleItemPosition();
            if (iFindFirstVisibleItemPosition < 0 || iFindLastVisibleItemPosition < 0) {
                return;
            }
            if (a(this.b.findViewByPosition(iFindFirstVisibleItemPosition))) {
                iFindFirstVisibleItemPosition++;
            }
            if (a(this.b.findViewByPosition(iFindLastVisibleItemPosition))) {
                iFindLastVisibleItemPosition--;
            }
            if (iFindFirstVisibleItemPosition > iFindLastVisibleItemPosition) {
                return;
            }
            if (iFindFirstVisibleItemPosition == iFindLastVisibleItemPosition) {
                iArr = new int[]{iFindFirstVisibleItemPosition};
            } else {
                int i = (iFindLastVisibleItemPosition - iFindFirstVisibleItemPosition) + 1;
                int[] iArr2 = new int[i];
                for (int i2 = 0; i2 < i; i2++) {
                    iArr2[i2] = iFindFirstVisibleItemPosition;
                    iFindFirstVisibleItemPosition++;
                }
                iArr = iArr2;
            }
            this.d.a(iArr);
        }
    }

    public void setAdapter(t0 t0Var) {
        this.f4556a.setAdapter(t0Var);
    }

    @Override // com.my.target.a9
    public void setListener(a9.a aVar) {
        this.d = aVar;
    }

    @Override // com.my.target.m6.a
    public void b() {
        c();
    }

    @Override // com.my.target.z0.a
    public void a() {
        int iFindFirstCompletelyVisibleItemPosition = this.b.findFirstCompletelyVisibleItemPosition();
        View viewFindViewByPosition = iFindFirstCompletelyVisibleItemPosition >= 0 ? this.b.findViewByPosition(iFindFirstCompletelyVisibleItemPosition) : null;
        if (this.f4556a.getChildCount() != 0 && viewFindViewByPosition != null && getWidth() <= ((double) viewFindViewByPosition.getWidth()) * 1.7d) {
            this.c.a(17);
        } else {
            this.c.a(GravityCompat.START);
        }
        c();
    }

    public final boolean a(View view) {
        return bc.a(view) < 50.0f;
    }
}
