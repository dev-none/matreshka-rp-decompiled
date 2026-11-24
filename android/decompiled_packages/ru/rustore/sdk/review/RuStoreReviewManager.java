package ru.rustore.sdk.review;

import android.content.Context;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.core.tasks.Task;
import ru.rustore.sdk.reactive.core.Dispatchers;
import ru.rustore.sdk.reactive.single.Single;
import ru.rustore.sdk.reactive.single.SingleFlatMapKt;
import ru.rustore.sdk.reactive.single.SingleOnErrorReturnKt;
import ru.rustore.sdk.reactive.single.SingleSubscribeKt;
import ru.rustore.sdk.reactive.single.SingleSubscribeOnKt;
import ru.rustore.sdk.review.model.ReviewInfo;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B)\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0016\b\u0002\u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0001\u0018\u00010\u0004¢\u0006\u0004\b\u0007\u0010\bJ\u0013\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\n0\t¢\u0006\u0004\b\u000b\u0010\fJ\u001b\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u000e0\t2\u0006\u0010\r\u001a\u00020\n¢\u0006\u0004\b\u000f\u0010\u0010¨\u0006\u0011"}, d2 = {"Lru/rustore/sdk/review/RuStoreReviewManager;", "", "Landroid/content/Context;", "context", "", "", "internalConfig", "<init>", "(Landroid/content/Context;Ljava/util/Map;)V", "Lru/rustore/sdk/core/tasks/Task;", "Lru/rustore/sdk/review/model/ReviewInfo;", "requestReviewFlow", "()Lru/rustore/sdk/core/tasks/Task;", "reviewInfo", "", "launchReviewFlow", "(Lru/rustore/sdk/review/model/ReviewInfo;)Lru/rustore/sdk/core/tasks/Task;", "sdk-public-review_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class RuStoreReviewManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final y f6683a;

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class a extends Lambda implements Function1<Unit, Unit> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final a f6684a = new a();

        public a() {
            super(1);
        }

        @Override // kotlin.jvm.functions.Function1
        public final Unit invoke(Unit unit) {
            Unit it = unit;
            Intrinsics.checkNotNullParameter(it, "it");
            return Unit.INSTANCE;
        }
    }

    public RuStoreReviewManager(Context applicationContext, Map<String, ? extends Object> map) {
        d0 d0Var;
        Intrinsics.checkNotNullParameter(applicationContext, "context");
        this.f6683a = new y(applicationContext);
        new d0.a();
        Intrinsics.checkNotNullParameter(applicationContext, "applicationContext");
        synchronized (d0.a.class) {
            d0Var = d0.h;
            if (d0Var == null) {
                d0Var = new d0(applicationContext, map);
                d0.h = d0Var;
            }
        }
        f fVar = (f) d0Var.c.getValue();
        g event = new g((Map) fVar.c.getValue());
        l lVar = fVar.f6698a;
        lVar.getClass();
        Intrinsics.checkNotNullParameter(event, "event");
        SingleSubscribeKt.subscribe$default(SingleOnErrorReturnKt.onErrorReturn(SingleSubscribeOnKt.subscribeOn(SingleFlatMapKt.flatMap(Single.INSTANCE.from(new i(lVar, event)), new j(lVar)), Dispatchers.INSTANCE.getIo()), k.f6703a), null, a.f6684a, 1, null);
    }

    public final Task<Unit> launchReviewFlow(ReviewInfo reviewInfo) {
        Intrinsics.checkNotNullParameter(reviewInfo, "reviewInfo");
        y yVar = this.f6683a;
        yVar.getClass();
        Intrinsics.checkNotNullParameter(reviewInfo, "reviewInfo");
        return c.a(SingleSubscribeOnKt.subscribeOn(SingleFlatMapKt.flatMap(Single.INSTANCE.create(new p(yVar, reviewInfo)), new w(yVar, reviewInfo)), Dispatchers.INSTANCE.getIo()));
    }

    public final Task<ReviewInfo> requestReviewFlow() {
        y yVar = this.f6683a;
        yVar.getClass();
        return c.a(SingleSubscribeOnKt.subscribeOn(Single.INSTANCE.create(new u(yVar)), Dispatchers.INSTANCE.getIo()));
    }

    public /* synthetic */ RuStoreReviewManager(Context context, Map map, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i & 2) != 0 ? null : map);
    }
}
