package com.pushwoosh.inapp.ui;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final /* synthetic */ class y0 extends FunctionReferenceImpl implements Function2 {
    public y0() {
        super(2, e1.f5119a, e1.class, "show", "show(Lcom/pushwoosh/inapp/ui/model/InAppMessage;Lkotlin/jvm/functions/Function1;)Z", 0);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        s0 p0 = (s0) obj;
        Function1 p1 = (Function1) obj2;
        Intrinsics.checkNotNullParameter(p0, "p0");
        Intrinsics.checkNotNullParameter(p1, "p1");
        ((e1) this.receiver).getClass();
        return Boolean.valueOf(e1.a(p0, p1));
    }
}
