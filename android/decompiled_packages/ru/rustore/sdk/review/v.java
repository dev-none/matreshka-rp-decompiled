package ru.rustore.sdk.review;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.activitylauncher.ActivityLauncherResult;
import ru.rustore.sdk.activitylauncher.ContextExtensionKt;
import ru.rustore.sdk.activitylauncher.OnReceiveResultCallback;
import ru.rustore.sdk.reactive.single.SingleEmitter;
import ru.rustore.sdk.review.errors.RuStoreReviewStartException;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class v extends Lambda implements Function1<SingleEmitter<Unit>, Unit> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ y f6713a;
    public final /* synthetic */ ReviewInfo b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(y yVar, ReviewInfo reviewInfo) {
        super(1);
        this.f6713a = yVar;
        this.b = reviewInfo;
    }

    public final void a(final SingleEmitter<Unit> emitter) {
        Object objM9861constructorimpl;
        Intrinsics.checkNotNullParameter(emitter, "emitter");
        y yVar = this.f6713a;
        ReviewInfo reviewInfo = this.b;
        try {
            Result.Companion companion = Result.INSTANCE;
            Context context = yVar.f6717a;
            Intent intent = new Intent("ru.vk.store.RequestAppReview");
            intent.putExtra("KEY_APPLICATION_ID", yVar.b);
            intent.putExtras(reviewInfo.toBundle$sdk_public_review_release());
            ContextExtensionKt.openActivityForResult(context, intent, new OnReceiveResultCallback() { // from class: ru.rustore.sdk.review.v$$ExternalSyntheticLambda0
                @Override // ru.rustore.sdk.activitylauncher.OnReceiveResultCallback
                public final void onReceiveResult(ActivityLauncherResult activityLauncherResult, Bundle bundle) {
                    v.a(emitter, activityLauncherResult, bundle);
                }
            });
            objM9861constructorimpl = Result.m9861constructorimpl(Unit.INSTANCE);
        } catch (Throwable th) {
            Result.Companion companion2 = Result.INSTANCE;
            objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
        }
        Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9861constructorimpl);
        if (thM9864exceptionOrNullimpl != null) {
            emitter.error(thM9864exceptionOrNullimpl);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final /* bridge */ /* synthetic */ Unit invoke(SingleEmitter<Unit> singleEmitter) {
        a(singleEmitter);
        return Unit.INSTANCE;
    }

    public static final void a(SingleEmitter singleEmitter, ActivityLauncherResult launcherResult, Bundle bundle) {
        Intrinsics.checkNotNullParameter(launcherResult, "launcherResult");
        if (launcherResult instanceof ActivityLauncherResult.ActivityResultUnknown ? true : Intrinsics.areEqual(launcherResult, ActivityLauncherResult.ActivitySendIntentError.INSTANCE) ? true : Intrinsics.areEqual(launcherResult, ActivityLauncherResult.ActivityUnknownError.INSTANCE) ? true : Intrinsics.areEqual(launcherResult, ActivityLauncherResult.ActivityNotFound.INSTANCE)) {
            singleEmitter.error(new RuStoreReviewStartException());
            return;
        }
        if (Intrinsics.areEqual(launcherResult, ActivityLauncherResult.ActivityResultCanceled.INSTANCE) ? true : Intrinsics.areEqual(launcherResult, ActivityLauncherResult.ActivityResultOk.INSTANCE)) {
            singleEmitter.success(Unit.INSTANCE);
        }
    }
}
