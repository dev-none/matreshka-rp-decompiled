package com.pushwoosh.inapp.ui;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class c2 extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ i2 f5114a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c2(i2 i2Var) {
        super(0);
        this.f5114a = i2Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        i1 i1Var = this.f5114a.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
        return Unit.INSTANCE;
    }
}
