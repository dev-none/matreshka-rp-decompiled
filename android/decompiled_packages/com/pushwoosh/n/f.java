package com.pushwoosh.n;

import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: loaded from: classes6.dex */
public final class f implements View.OnTouchListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public float f5263a;
    public float b;
    public final /* synthetic */ j c;

    public f(j jVar) {
        this.c = jVar;
    }

    @Override // android.view.View.OnTouchListener
    public final boolean onTouch(View view, MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.f5263a = motionEvent.getRawX();
            this.b = motionEvent.getRawY();
            j jVar = this.c;
            int i = com.pushwoosh.r.b.f5305a;
            float rawX = motionEvent.getRawX();
            float rawY = motionEvent.getRawY();
            int[] iArr = new int[2];
            jVar.getContentView().getLocationOnScreen(iArr);
            int width = jVar.getContentView().getWidth();
            int height = jVar.getContentView().getHeight();
            int i2 = iArr[0];
            if (rawX >= i2 && rawX <= i2 + width) {
                int i3 = iArr[1];
                if (rawY < i3 || rawY > i3 + height) {
                }
            }
            return true;
        }
        if (action == 1) {
            float rawX2 = motionEvent.getRawX();
            float rawY2 = motionEvent.getRawY();
            j jVar2 = this.c;
            if (!com.pushwoosh.r.b.a(jVar2, rawX2 - this.f5263a, rawY2 - this.b, jVar2.b)) {
                j jVar3 = this.c;
                com.pushwoosh.r.b.a(jVar3, 0, 0, jVar3.b);
            }
        } else if (action == 2) {
            float rawX3 = motionEvent.getRawX() - this.f5263a;
            float rawY3 = motionEvent.getRawY() - this.b;
            j jVar4 = this.c;
            com.pushwoosh.r.b.a(jVar4, (int) rawX3, (int) rawY3, jVar4.b);
        }
        return false;
    }
}
