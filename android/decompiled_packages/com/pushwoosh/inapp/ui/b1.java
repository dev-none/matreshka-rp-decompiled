package com.pushwoosh.inapp.ui;

import android.view.ViewGroup;
import android.view.ViewParent;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class b1 extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ j1 f5109a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b1(j1 j1Var) {
        super(0);
        this.f5109a = j1Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        ViewParent parent = this.f5109a.getParent();
        ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
        if (viewGroup != null) {
            viewGroup.removeView(this.f5109a);
        }
        return Unit.INSTANCE;
    }
}
