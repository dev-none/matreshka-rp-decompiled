package ru.rustore.sdk.reactive.single;

import androidx.exifinterface.media.ExifInterface;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import ru.rustore.sdk.reactive.core.Dispatcher;
import ru.rustore.sdk.reactive.core.Dispatchers;
import ru.rustore.sdk.reactive.core.Disposable;

/* JADX INFO: compiled from: SingleDelay.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a.\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00012\u0006\u0010\u0000\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005¨\u0006\u0006"}, d2 = {"delay", "Lru/rustore/sdk/reactive/single/Single;", ExifInterface.GPS_DIRECTION_TRUE, "", "dispatcher", "Lru/rustore/sdk/reactive/core/Dispatcher;", "sdk-public-reactive_release"}, k = 2, mv = {1, 8, 0}, xi = 48)
public final class SingleDelayKt {
    public static /* synthetic */ Single delay$default(Single single, long j, Dispatcher dispatcher, int i, Object obj) {
        if ((i & 2) != 0) {
            dispatcher = Dispatchers.INSTANCE.getIo();
        }
        return delay(single, j, dispatcher);
    }

    public static final <T> Single<T> delay(Single<T> single, final long j, final Dispatcher dispatcher) {
        Intrinsics.checkNotNullParameter(single, "<this>");
        Intrinsics.checkNotNullParameter(dispatcher, "dispatcher");
        return SingleFlatMapKt.flatMap(single, new Function1<T, Single<T>>() { // from class: ru.rustore.sdk.reactive.single.SingleDelayKt.delay.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public final Single<T> invoke(final T t) {
                final Ref.ObjectRef objectRef = new Ref.ObjectRef();
                Single.Companion companion = Single.INSTANCE;
                final Dispatcher dispatcher2 = dispatcher;
                final long j2 = j;
                return SingleDoOnDisposeKt.doOnDispose(companion.create(new Function1<SingleEmitter<T>, Unit>() { // from class: ru.rustore.sdk.reactive.single.SingleDelayKt.delay.1.1
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(1);
                    }

                    @Override // kotlin.jvm.functions.Function1
                    public /* bridge */ /* synthetic */ Unit invoke(Object obj) {
                        invoke((SingleEmitter) obj);
                        return Unit.INSTANCE;
                    }

                    public final void invoke(final SingleEmitter<T> emitter) {
                        Intrinsics.checkNotNullParameter(emitter, "emitter");
                        Ref.ObjectRef<Disposable> objectRef2 = objectRef;
                        Dispatcher dispatcher3 = dispatcher2;
                        long j3 = j2;
                        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
                        final T t2 = t;
                        objectRef2.element = (T) dispatcher3.executeDelayed(j3, timeUnit, new Function0<Unit>() { // from class: ru.rustore.sdk.reactive.single.SingleDelayKt.delay.1.1.1
                            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                            {
                                super(0);
                            }

                            @Override // kotlin.jvm.functions.Function0
                            public /* bridge */ /* synthetic */ Unit invoke() {
                                invoke2();
                                return Unit.INSTANCE;
                            }

                            /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                            public final void invoke2() {
                                emitter.success(t2);
                            }
                        });
                    }
                }), new Function0<Unit>() { // from class: ru.rustore.sdk.reactive.single.SingleDelayKt.delay.1.2
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    public /* bridge */ /* synthetic */ Unit invoke() {
                        invoke2();
                        return Unit.INSTANCE;
                    }

                    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
                    public final void invoke2() {
                        Disposable disposable = objectRef.element;
                        if (disposable != null) {
                            disposable.dispose();
                        }
                    }
                });
            }
        });
    }
}
