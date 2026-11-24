package com.pushwoosh.inapp.ui;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class u2 extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ v2 f5170a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u2(v2 v2Var) {
        super(0);
        this.f5170a = v2Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        this.f5170a.e();
        return Unit.INSTANCE;
    }
}
