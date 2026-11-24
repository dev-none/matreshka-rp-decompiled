package ru.rustore.sdk.review;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.reactive.single.SingleEmitter;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class s extends Lambda implements Function1<ReviewInfo, Unit> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ SingleEmitter<ReviewInfo> f6710a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s(SingleEmitter<ReviewInfo> singleEmitter) {
        super(1);
        this.f6710a = singleEmitter;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Unit invoke(ReviewInfo reviewInfo) {
        ReviewInfo reviewInfo2 = reviewInfo;
        Intrinsics.checkNotNullParameter(reviewInfo2, "reviewInfo");
        this.f6710a.success(reviewInfo2);
        return Unit.INSTANCE;
    }
}
