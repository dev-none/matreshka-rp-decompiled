package ru.rustore.sdk.review;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.core.exception.RuStoreException;
import ru.rustore.sdk.reactive.single.SingleEmitter;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class m extends Lambda implements Function1<RuStoreException, Unit> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ SingleEmitter<Unit> f6705a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(SingleEmitter<Unit> singleEmitter) {
        super(1);
        this.f6705a = singleEmitter;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Unit invoke(RuStoreException ruStoreException) {
        RuStoreException error = ruStoreException;
        Intrinsics.checkNotNullParameter(error, "error");
        this.f6705a.error(error);
        return Unit.INSTANCE;
    }
}
