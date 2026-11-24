package com.pushwoosh.inapp.ui;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class s2 extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ v2 f5164a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s2(v2 v2Var) {
        super(0);
        this.f5164a = v2Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        i1 i1Var = this.f5164a.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
        return Unit.INSTANCE;
    }
}
