package ru.rustore.sdk.review;

import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.core.tasks.OnCompletionListener;
import ru.rustore.sdk.core.tasks.Task;
import ru.rustore.sdk.reactive.core.Disposable;
import ru.rustore.sdk.reactive.single.Single;
import ru.rustore.sdk.reactive.single.SingleSubscribeKt;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class c {

    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class a extends Lambda implements Function1<Throwable, Unit> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Task<T>.TaskResultProvider f6688a;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public a(Task<T>.TaskResultProvider taskResultProvider) {
            super(1);
            this.f6688a = taskResultProvider;
        }

        @Override // kotlin.jvm.functions.Function1
        public final Unit invoke(Throwable th) {
            Throwable error = th;
            Intrinsics.checkNotNullParameter(error, "error");
            this.f6688a.setTaskErrorResult(error);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Add missing generic type declarations: [T] */
    /* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
    public static final class b<T> extends Lambda implements Function1<T, Unit> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Task<T>.TaskResultProvider f6689a;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public b(Task<T>.TaskResultProvider taskResultProvider) {
            super(1);
            this.f6689a = taskResultProvider;
        }

        @Override // kotlin.jvm.functions.Function1
        public final Unit invoke(Object obj) {
            this.f6689a.setTaskSuccessResult(obj);
            return Unit.INSTANCE;
        }
    }

    public static final <T> Task<T> a(Single<T> single) {
        Intrinsics.checkNotNullParameter(single, "<this>");
        Pair<Task<T>, Task<T>.TaskResultProvider> pairCreate = Task.INSTANCE.create();
        Task<T> taskComponent1 = pairCreate.component1();
        Task<T>.TaskResultProvider taskResultProviderComponent2 = pairCreate.component2();
        final Disposable disposableSubscribe = SingleSubscribeKt.subscribe(single, new a(taskResultProviderComponent2), new b(taskResultProviderComponent2));
        taskComponent1.addOnCompletionListener(new OnCompletionListener() { // from class: ru.rustore.sdk.review.c$$ExternalSyntheticLambda0
            @Override // ru.rustore.sdk.core.tasks.OnCompletionListener
            public final void onComplete(Throwable th) {
                c.a(disposableSubscribe, th);
            }
        });
        return taskComponent1;
    }

    public static final void a(Disposable disposable, Throwable th) {
        disposable.dispose();
    }
}
