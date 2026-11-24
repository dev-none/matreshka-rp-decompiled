package ru.rustore.sdk.reactive.observable;

import androidx.exifinterface.media.ExifInterface;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.reactive.core.Dispatcher;
import ru.rustore.sdk.reactive.core.Dispatchers;
import ru.rustore.sdk.reactive.single.Single;
import ru.rustore.sdk.reactive.single.SingleDelayKt;
import ru.rustore.sdk.reactive.single.SingleEmitter;
import ru.rustore.sdk.reactive.single.SingleToObservableKt;

/* JADX INFO: compiled from: ObservableDelay.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a.\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u0000\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005¨\u0006\u0006"}, d2 = {"delay", "Lru/rustore/sdk/reactive/observable/Observable;", ExifInterface.GPS_DIRECTION_TRUE, "", "dispatcher", "Lru/rustore/sdk/reactive/core/Dispatcher;", "sdk-public-reactive_release"}, k = 2, mv = {1, 8, 0}, xi = 48)
public final class ObservableDelayKt {
    public static /* synthetic */ Observable delay$default(Observable observable, long j, Dispatcher dispatcher, int i, Object obj) {
        if ((i & 2) != 0) {
            dispatcher = Dispatchers.INSTANCE.getIo();
        }
        return delay(observable, j, dispatcher);
    }

    public static final <T> Observable<T> delay(Observable<T> observable, final long j, final Dispatcher dispatcher) {
        Intrinsics.checkNotNullParameter(observable, "<this>");
        Intrinsics.checkNotNullParameter(dispatcher, "dispatcher");
        return ObservableSwitchMapKt.switchMap$default(observable, null, new Function1<T, Observable<T>>() { // from class: ru.rustore.sdk.reactive.observable.ObservableDelayKt.delay.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public final Observable<T> invoke(final T t) {
                return SingleToObservableKt.toObservable(SingleDelayKt.delay(Single.INSTANCE.create(new Function1<SingleEmitter<T>, Unit>() { // from class: ru.rustore.sdk.reactive.observable.ObservableDelayKt.delay.1.1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(1);
                    }

                    public final void invoke(SingleEmitter<T> it) {
                        Intrinsics.checkNotNullParameter(it, "it");
                    }

                    @Override // kotlin.jvm.functions.Function1
                    public /* bridge */ /* synthetic */ Unit invoke(Object obj) {
                        invoke((SingleEmitter) obj);
                        return Unit.INSTANCE;
                    }
                }), j, dispatcher));
            }
        }, 1, null);
    }
}
