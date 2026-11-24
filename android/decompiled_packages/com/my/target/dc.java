package com.my.target;

import android.content.Context;
import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public final class dc extends View {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public a f4598a;
    public boolean b;
    public boolean c;

    public interface a {
        void a(boolean z);
    }

    public dc(Context context) {
        super(context);
    }

    public final void a() {
        a aVar = this.f4598a;
        if (aVar == null) {
            return;
        }
        if (b()) {
            aVar.a(true);
        } else {
            if (this.c) {
                return;
            }
            aVar.a(false);
        }
    }

    public boolean b() {
        return this.b && this.c;
    }

    @Override // android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        a(true);
    }

    @Override // android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        a(false);
    }

    @Override // android.view.View
    public void onMeasure(int i, int i2) {
        setMeasuredDimension(1, 1);
    }

    @Override // android.view.View
    public void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
        this.c = z;
        a();
    }

    public void setStateChangedListener(a aVar) {
        this.f4598a = aVar;
    }

    public final void a(boolean z) {
        this.b = z;
        this.c = hasWindowFocus();
        a();
    }
}
