package io.appmetrica.analytics.impl;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.z, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2609z extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2434s f6421a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2609z(C2434s c2434s) {
        super(1);
        this.f6421a = c2434s;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        this.f6421a.i = (byte[]) obj;
        return Unit.INSTANCE;
    }
}
