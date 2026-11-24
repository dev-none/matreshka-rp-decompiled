package com.pushwoosh.inapp.ui;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes6.dex */
public final class b extends Lambda implements Function0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ e f5108a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(e eVar) {
        super(0);
        this.f5108a = eVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        i1 i1Var = this.f5108a.f5133a;
        if (i1Var != null) {
            i1Var.a();
        }
        return Unit.INSTANCE;
    }
}
