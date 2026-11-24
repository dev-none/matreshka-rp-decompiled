package ru.rustore.sdk.reactive.single;

import androidx.exifinterface.media.ExifInterface;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.reactive.core.Disposable;

/* JADX INFO: compiled from: SingleDoOnSuccess.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\b\u0002\u0018\u0000*\u0004\b\u0000\u0010\u00012\b\u0012\u0004\u0012\u0002H\u00010\u0002B'\u0012\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002\u0012\u0012\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\u00060\u0005¢\u0006\u0002\u0010\u0007J\u0016\u0010\b\u001a\u00020\u00062\f\u0010\t\u001a\b\u0012\u0004\u0012\u00028\u00000\nH\u0016R\u001a\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0003\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lru/rustore/sdk/reactive/single/SingleDoOnSuccess;", ExifInterface.GPS_DIRECTION_TRUE, "Lru/rustore/sdk/reactive/single/Single;", "upstream", "block", "Lkotlin/Function1;", "", "(Lru/rustore/sdk/reactive/single/Single;Lkotlin/jvm/functions/Function1;)V", "subscribe", "downstream", "Lru/rustore/sdk/reactive/single/SingleObserver;", "sdk-public-reactive_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
final class SingleDoOnSuccess<T> extends Single<T> {
    private final Function1<T, Unit> block;
    private final Single<T> upstream;

    /* JADX WARN: Multi-variable type inference failed */
    public SingleDoOnSuccess(Single<T> upstream, Function1<? super T, Unit> block) {
        Intrinsics.checkNotNullParameter(upstream, "upstream");
        Intrinsics.checkNotNullParameter(block, "block");
        this.upstream = upstream;
        this.block = block;
    }

    @Override // ru.rustore.sdk.reactive.single.Single
    public void subscribe(final SingleObserver<T> downstream) {
        Intrinsics.checkNotNullParameter(downstream, "downstream");
        this.upstream.subscribe(new SingleObserver<T>() { // from class: ru.rustore.sdk.reactive.single.SingleDoOnSuccess$subscribe$wrappedObserver$1
            @Override // ru.rustore.sdk.reactive.single.SingleObserver
            public void onSubscribe(Disposable d) {
                Intrinsics.checkNotNullParameter(d, "d");
                downstream.onSubscribe(d);
            }

            @Override // ru.rustore.sdk.reactive.single.SingleObserver
            public void onError(Throwable e) {
                Intrinsics.checkNotNullParameter(e, "e");
                downstream.onError(e);
            }

            @Override // ru.rustore.sdk.reactive.single.SingleObserver
            public void onSuccess(T item) {
                Object objM9861constructorimpl;
                SingleDoOnSuccess<T> singleDoOnSuccess = this;
                try {
                    Result.Companion companion = Result.INSTANCE;
                    SingleDoOnSuccess$subscribe$wrappedObserver$1<T> singleDoOnSuccess$subscribe$wrappedObserver$1 = this;
                    ((SingleDoOnSuccess) singleDoOnSuccess).block.invoke(item);
                    objM9861constructorimpl = Result.m9861constructorimpl(Unit.INSTANCE);
                } catch (Throwable th) {
                    Result.Companion companion2 = Result.INSTANCE;
                    objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
                }
                SingleObserver<T> singleObserver = downstream;
                if (Result.m9868isSuccessimpl(objM9861constructorimpl)) {
                    singleObserver.onSuccess(item);
                }
                SingleObserver<T> singleObserver2 = downstream;
                Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9861constructorimpl);
                if (thM9864exceptionOrNullimpl != null) {
                    singleObserver2.onError(thM9864exceptionOrNullimpl);
                }
            }
        });
    }
}
