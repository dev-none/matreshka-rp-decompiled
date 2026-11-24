package com.pushwoosh.inapp.ui;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class s1 extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ u1 f5163a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s1(u1 u1Var) {
        super(1);
        this.f5163a = u1Var;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        x it = (x) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        this.f5163a.a(it);
        return Unit.INSTANCE;
    }
}
