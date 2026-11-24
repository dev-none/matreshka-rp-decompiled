package ru.rustore.sdk.review;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.reactive.single.Single;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class w extends Lambda implements Function1<Unit, Single<Unit>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ y f6714a;
    public final /* synthetic */ ReviewInfo b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public w(y yVar, ReviewInfo reviewInfo) {
        super(1);
        this.f6714a = yVar;
        this.b = reviewInfo;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Single<Unit> invoke(Unit unit) {
        Unit it = unit;
        Intrinsics.checkNotNullParameter(it, "it");
        y yVar = this.f6714a;
        ReviewInfo reviewInfo = this.b;
        yVar.getClass();
        return Single.INSTANCE.create(new v(yVar, reviewInfo));
    }
}
