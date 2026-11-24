package ru.rustore.sdk.metrics.internal;

import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.reactive.core.Dispatcher;
import ru.rustore.sdk.reactive.core.Disposable;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class f1 implements Dispatcher {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final ScheduledThreadPoolExecutor f6630a = new ScheduledThreadPoolExecutor(1);

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a implements Disposable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final AtomicBoolean f6631a = new AtomicBoolean();
        public final /* synthetic */ ScheduledFuture<?> b;

        public a(ScheduledFuture<?> scheduledFuture) {
            this.b = scheduledFuture;
        }

        @Override // ru.rustore.sdk.reactive.core.Disposable
        public final void dispose() {
            if (this.f6631a.compareAndSet(false, true)) {
                this.b.cancel(false);
            }
        }

        @Override // ru.rustore.sdk.reactive.core.Disposable
        /* JADX INFO: renamed from: isDisposed */
        public final boolean getDisposed() {
            return this.f6631a.get();
        }
    }

    public static final void a(Function0 function0) {
        function0.invoke();
    }

    public static final void b(Function0 function0) {
        function0.invoke();
    }

    @Override // ru.rustore.sdk.reactive.core.Dispatcher
    public final void execute(final Function0<Unit> block) {
        Intrinsics.checkNotNullParameter(block, "block");
        this.f6630a.submit(new Runnable() { // from class: ru.rustore.sdk.metrics.internal.f1$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                f1.a(block);
            }
        });
    }

    @Override // ru.rustore.sdk.reactive.core.Dispatcher
    public final Disposable executeDelayed(long j, TimeUnit timeUnit, final Function0<Unit> block) {
        Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
        Intrinsics.checkNotNullParameter(block, "block");
        return new a(this.f6630a.schedule(new Runnable() { // from class: ru.rustore.sdk.metrics.internal.f1$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                f1.b(block);
            }
        }, j, timeUnit));
    }
}
