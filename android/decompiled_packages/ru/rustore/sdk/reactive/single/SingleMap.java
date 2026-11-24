package ru.rustore.sdk.reactive.single;

import androidx.exifinterface.media.ExifInterface;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.reactive.core.Disposable;

/* JADX INFO: compiled from: SingleMap.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0002\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022\b\u0012\u0004\u0012\u0002H\u00020\u0003B'\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006¢\u0006\u0002\u0010\u0007J\u0016\u0010\b\u001a\u00020\t2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00028\u00010\u000bH\u0016R\u001a\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lru/rustore/sdk/reactive/single/SingleMap;", ExifInterface.GPS_DIRECTION_TRUE, "R", "Lru/rustore/sdk/reactive/single/Single;", "upstream", "mapper", "Lkotlin/Function1;", "(Lru/rustore/sdk/reactive/single/Single;Lkotlin/jvm/functions/Function1;)V", "subscribe", "", "downstream", "Lru/rustore/sdk/reactive/single/SingleObserver;", "sdk-public-reactive_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
final class SingleMap<T, R> extends Single<R> {
    private final Function1<T, R> mapper;
    private final Single<T> upstream;

    /* JADX WARN: Multi-variable type inference failed */
    public SingleMap(Single<T> upstream, Function1<? super T, ? extends R> mapper) {
        Intrinsics.checkNotNullParameter(upstream, "upstream");
        Intrinsics.checkNotNullParameter(mapper, "mapper");
        this.upstream = upstream;
        this.mapper = mapper;
    }

    @Override // ru.rustore.sdk.reactive.single.Single
    public void subscribe(final SingleObserver<R> downstream) {
        Intrinsics.checkNotNullParameter(downstream, "downstream");
        this.upstream.subscribe(new SingleObserver<T>() { // from class: ru.rustore.sdk.reactive.single.SingleMap$subscribe$wrappedObserver$1
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

            /* JADX WARN: Type inference incomplete: some casts might be missing */
            @Override // ru.rustore.sdk.reactive.single.SingleObserver
            public void onSuccess(T item) {
                Object objM9861constructorimpl;
                SingleMap<T, R> singleMap = this;
                try {
                    Result.Companion companion = Result.INSTANCE;
                    SingleMap$subscribe$wrappedObserver$1<T> singleMap$subscribe$wrappedObserver$1 = this;
                    objM9861constructorimpl = Result.m9861constructorimpl(((SingleMap) singleMap).mapper.invoke(item));
                } catch (Throwable th) {
                    Result.Companion companion2 = Result.INSTANCE;
                    objM9861constructorimpl = Result.m9861constructorimpl(ResultKt.createFailure(th));
                }
                SingleObserver<R> singleObserver = downstream;
                if (Result.m9868isSuccessimpl(objM9861constructorimpl)) {
                    singleObserver.onSuccess((R) objM9861constructorimpl);
                }
                SingleObserver<R> singleObserver2 = downstream;
                Throwable thM9864exceptionOrNullimpl = Result.m9864exceptionOrNullimpl(objM9861constructorimpl);
                if (thM9864exceptionOrNullimpl != null) {
                    singleObserver2.onError(thM9864exceptionOrNullimpl);
                }
            }
        });
    }
}
