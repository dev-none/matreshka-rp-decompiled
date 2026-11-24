package ru.rustore.sdk.metrics.internal;

import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.reactive.core.Dispatcher;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final y0 f6670a;
    public final f b;
    public final z0 c;
    public final Dispatcher d;
    public final k e;
    public boolean f;

    public t(y0 sendMetricsEventInteractor, f enqueueMetricsEventUseCase, z0 sendMetricsEventJobScheduler, Dispatcher singleThreadDispatcher, k logger) {
        Intrinsics.checkNotNullParameter(sendMetricsEventInteractor, "sendMetricsEventInteractor");
        Intrinsics.checkNotNullParameter(enqueueMetricsEventUseCase, "enqueueMetricsEventUseCase");
        Intrinsics.checkNotNullParameter(sendMetricsEventJobScheduler, "sendMetricsEventJobScheduler");
        Intrinsics.checkNotNullParameter(singleThreadDispatcher, "singleThreadDispatcher");
        Intrinsics.checkNotNullParameter(logger, "logger");
        this.f6670a = sendMetricsEventInteractor;
        this.b = enqueueMetricsEventUseCase;
        this.c = sendMetricsEventJobScheduler;
        this.d = singleThreadDispatcher;
        this.e = logger;
    }
}
