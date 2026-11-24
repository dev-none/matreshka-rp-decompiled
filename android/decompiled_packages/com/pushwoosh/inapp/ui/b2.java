package com.pushwoosh.inapp.ui;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class b2 extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ i2 f5110a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b2(i2 i2Var) {
        super(1);
        this.f5110a = i2Var;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        x it = (x) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        this.f5110a.a(it);
        return Unit.INSTANCE;
    }
}
