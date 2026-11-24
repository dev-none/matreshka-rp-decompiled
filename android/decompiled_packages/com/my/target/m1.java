package com.my.target;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;

/* JADX INFO: loaded from: classes6.dex */
public final class m1 extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final i f4704a;
    public int b;
    public int c;

    public m1(Context context) {
        this(context, null);
    }

    public void a(int i, int i2) {
        this.b = i;
        this.c = i2;
    }

    public i getAdChoicesView() {
        return this.f4704a;
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i, int i2) {
        int i3 = this.b;
        if (i3 <= 0 || this.c <= 0) {
            super.onMeasure(i, i2);
        } else {
            super.onMeasure(View.MeasureSpec.makeMeasureSpec(i3, Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(this.c, 1073741824));
        }
    }

    public m1(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public m1(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        i iVar = new i(context);
        this.f4704a = iVar;
        int iA = kb.a(2, context);
        iVar.setPadding(iA, iA, iA, iA);
        iVar.setFixedHeight(kb.a(17, context));
        addView(iVar);
    }
}
