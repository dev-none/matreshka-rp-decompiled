package com.pushwoosh.inapp.ui;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;

/* JADX INFO: loaded from: classes6.dex */
public final /* synthetic */ class z0 extends FunctionReferenceImpl implements Function1 {
    public z0(Object obj) {
        super(1, obj, g1.class, "onDismissed", "onDismissed(Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        ((g1) this.receiver).a((String) obj);
        return Unit.INSTANCE;
    }
}
