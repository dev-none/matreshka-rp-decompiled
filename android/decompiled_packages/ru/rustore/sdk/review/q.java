package ru.rustore.sdk.review;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.core.exception.RuStoreException;
import ru.rustore.sdk.reactive.single.SingleEmitter;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class q extends Lambda implements Function1<RuStoreException, Unit> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ SingleEmitter<ReviewInfo> f6709a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public q(SingleEmitter<ReviewInfo> singleEmitter) {
        super(1);
        this.f6709a = singleEmitter;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Unit invoke(RuStoreException ruStoreException) {
        RuStoreException error = ruStoreException;
        Intrinsics.checkNotNullParameter(error, "error");
        this.f6709a.error(error);
        return Unit.INSTANCE;
    }
}
