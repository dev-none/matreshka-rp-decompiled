package io.appmetrica.analytics.impl;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: loaded from: classes7.dex */
public final class B extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2434s f5603a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public B(C2434s c2434s) {
        super(1);
        this.f5603a = c2434s;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        this.f5603a.g = (byte[]) obj;
        return Unit.INSTANCE;
    }
}
