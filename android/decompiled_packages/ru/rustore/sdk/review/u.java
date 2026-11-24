package ru.rustore.sdk.review;

import android.content.Context;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.reactive.single.SingleEmitter;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class u extends Lambda implements Function1<SingleEmitter<ReviewInfo>, Unit> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ y f6712a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(y yVar) {
        super(1);
        this.f6712a = yVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Unit invoke(SingleEmitter<ReviewInfo> singleEmitter) {
        Object objM9861constructorimpl;
        SingleEmitter<ReviewInfo> emitter = singleEmitter;
        Intrinsics.checkNotNullParameter(emitter, "emitter");
        y yVar = this.f6712a;
        try {
            Result.Companion companion = Result.INSTANCE;
            Context context = yVar.f6717a;
            String applicationId = yVar.b;
            Intrinsics.checkNotNullExpressionValue(applicationId, "applicationId");
            y.a(yVar, yVar.f6717a, new q(emitter), new e(context, applicationId, new s(emitter), new t(emitter)));
            objM9861constructorimpl = Result.m9861constructorimpl(Unit.INSTANCE);
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
        Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9861constructorimpl);
        if (thM9864exceptionOrNullimpl != null) {
            emitter.error(thM9864exceptionOrNullimpl);
        }
        return Unit.INSTANCE;
    }
}
