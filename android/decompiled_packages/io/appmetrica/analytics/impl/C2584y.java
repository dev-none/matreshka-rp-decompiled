package io.appmetrica.analytics.impl;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Lambda;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.y, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2584y extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ C2434s f6406a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public C2584y(C2434s c2434s) {
        super(1);
        this.f6406a = c2434s;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        this.f6406a.h = (byte[]) obj;
        return Unit.INSTANCE;
    }
}
