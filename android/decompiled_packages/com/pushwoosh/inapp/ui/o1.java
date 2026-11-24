package com.pushwoosh.inapp.ui;

import android.graphics.Outline;
import android.view.View;
import android.view.ViewOutlineProvider;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class o1 extends ViewOutlineProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ float f5150a;

    public o1(float f) {
        this.f5150a = f;
    }

    @Override // android.view.ViewOutlineProvider
    public final void getOutline(View v, Outline outline) {
        Intrinsics.checkNotNullParameter(v, "v");
        Intrinsics.checkNotNullParameter(outline, "outline");
        outline.setRoundRect(0, 0, v.getWidth(), v.getHeight(), this.f5150a);
    }
}
