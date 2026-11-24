package ru.rustore.flutter_rustore_review;

import android.content.Context;
import io.sentry.SentryBaseEvent;
import kotlin.Metadata;
import kotlin.TuplesKt;
import kotlin.Unit;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.flutter_rustore_review.pigeons.Rustore;
import ru.rustore.sdk.core.config.SdkType;
import ru.rustore.sdk.core.tasks.OnFailureListener;
import ru.rustore.sdk.core.tasks.OnSuccessListener;
import ru.rustore.sdk.core.tasks.Task;
import ru.rustore.sdk.review.RuStoreReviewManager;
import ru.rustore.sdk.review.RuStoreReviewManagerFactory;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: FlutterRustoreReviewClient.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016J\u0010\u0010\u0012\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016J\u0010\u0010\u0013\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u001c\u0010\b\u001a\u0004\u0018\u00010\tX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\r¨\u0006\u0014"}, d2 = {"Lru/rustore/flutter_rustore_review/FlutterRustoreReviewClient;", "Lru/rustore/flutter_rustore_review/pigeons/Rustore$RustoreReview;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "manager", "Lru/rustore/sdk/review/RuStoreReviewManager;", "info", "Lru/rustore/sdk/review/model/ReviewInfo;", "getInfo", "()Lru/rustore/sdk/review/model/ReviewInfo;", "setInfo", "(Lru/rustore/sdk/review/model/ReviewInfo;)V", "initialize", "", "result", "Lru/rustore/flutter_rustore_review/pigeons/Rustore$VoidResult;", SentryBaseEvent.JsonKeys.REQUEST, "review", "flutter_rustore_review_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class FlutterRustoreReviewClient implements Rustore.RustoreReview {
    private final Context context;
    private ReviewInfo info;
    private RuStoreReviewManager manager;

    public FlutterRustoreReviewClient(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
    }

    public final ReviewInfo getInfo() {
        return this.info;
    }

    public final void setInfo(ReviewInfo reviewInfo) {
        this.info = reviewInfo;
    }

    @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.RustoreReview
    public void initialize(Rustore.VoidResult result) {
        Intrinsics.checkNotNullParameter(result, "result");
        this.manager = RuStoreReviewManagerFactory.INSTANCE.create(this.context, MapsKt.mapOf(TuplesKt.to("type", SdkType.FLUTTER)));
        result.success();
    }

    @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.RustoreReview
    public void request(final Rustore.VoidResult result) {
        Task<ReviewInfo> taskRequestReviewFlow;
        Task<ReviewInfo> taskAddOnSuccessListener;
        Intrinsics.checkNotNullParameter(result, "result");
        RuStoreReviewManager ruStoreReviewManager = this.manager;
        if (ruStoreReviewManager == null || (taskRequestReviewFlow = ruStoreReviewManager.requestReviewFlow()) == null || (taskAddOnSuccessListener = taskRequestReviewFlow.addOnSuccessListener(new OnSuccessListener() { // from class: ru.rustore.flutter_rustore_review.FlutterRustoreReviewClient$$ExternalSyntheticLambda0
            @Override // ru.rustore.sdk.core.tasks.OnSuccessListener
            public final void onSuccess(Object obj) {
                FlutterRustoreReviewClient.request$lambda$0(this.f$0, result, (ReviewInfo) obj);
            }
        })) == null) {
            return;
        }
        taskAddOnSuccessListener.addOnFailureListener(new OnFailureListener() { // from class: ru.rustore.flutter_rustore_review.FlutterRustoreReviewClient$$ExternalSyntheticLambda1
            @Override // ru.rustore.sdk.core.tasks.OnFailureListener
            public final void onFailure(Throwable th) {
                FlutterRustoreReviewClient.request$lambda$1(result, th);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void request$lambda$0(FlutterRustoreReviewClient flutterRustoreReviewClient, Rustore.VoidResult voidResult, ReviewInfo info) {
        Intrinsics.checkNotNullParameter(info, "info");
        flutterRustoreReviewClient.info = info;
        voidResult.success();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void request$lambda$1(Rustore.VoidResult voidResult, Throwable throwable) {
        Intrinsics.checkNotNullParameter(throwable, "throwable");
        voidResult.error(throwable);
    }

    @Override // ru.rustore.flutter_rustore_review.pigeons.Rustore.RustoreReview
    public void review(final Rustore.VoidResult result) {
        Task<Unit> taskAddOnSuccessListener;
        Intrinsics.checkNotNullParameter(result, "result");
        ReviewInfo reviewInfo = this.info;
        if (reviewInfo == null) {
            result.error(new IllegalStateException("ReviewInfo is null"));
            return;
        }
        RuStoreReviewManager ruStoreReviewManager = this.manager;
        if (ruStoreReviewManager != null) {
            Intrinsics.checkNotNull(reviewInfo);
            Task<Unit> taskLaunchReviewFlow = ruStoreReviewManager.launchReviewFlow(reviewInfo);
            if (taskLaunchReviewFlow == null || (taskAddOnSuccessListener = taskLaunchReviewFlow.addOnSuccessListener(new OnSuccessListener() { // from class: ru.rustore.flutter_rustore_review.FlutterRustoreReviewClient$$ExternalSyntheticLambda2
                @Override // ru.rustore.sdk.core.tasks.OnSuccessListener
                public final void onSuccess(Object obj) {
                    FlutterRustoreReviewClient.review$lambda$0(result, (Unit) obj);
                }
            })) == null) {
                return;
            }
            taskAddOnSuccessListener.addOnFailureListener(new OnFailureListener() { // from class: ru.rustore.flutter_rustore_review.FlutterRustoreReviewClient$$ExternalSyntheticLambda3
                @Override // ru.rustore.sdk.core.tasks.OnFailureListener
                public final void onFailure(Throwable th) {
                    FlutterRustoreReviewClient.review$lambda$1(result, th);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void review$lambda$0(Rustore.VoidResult voidResult, Unit it) {
        Intrinsics.checkNotNullParameter(it, "it");
        voidResult.success();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void review$lambda$1(Rustore.VoidResult voidResult, Throwable throwable) {
        Intrinsics.checkNotNullParameter(throwable, "throwable");
        voidResult.error(throwable);
    }
}
