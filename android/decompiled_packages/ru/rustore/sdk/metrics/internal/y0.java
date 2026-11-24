package ru.rustore.sdk.metrics.internal;

import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class y0 {
    public static final Object d = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final s0 f6680a;
    public final x0 b;
    public final h c;

    public y0(s0 persistentMetricsEventRepository, x0 sendMetricsEventBatchUseCase, h isolatePoisonMetricsEventUseCase) {
        Intrinsics.checkNotNullParameter(persistentMetricsEventRepository, "persistentMetricsEventRepository");
        Intrinsics.checkNotNullParameter(sendMetricsEventBatchUseCase, "sendMetricsEventBatchUseCase");
        Intrinsics.checkNotNullParameter(isolatePoisonMetricsEventUseCase, "isolatePoisonMetricsEventUseCase");
        this.f6680a = persistentMetricsEventRepository;
        this.b = sendMetricsEventBatchUseCase;
        this.c = isolatePoisonMetricsEventUseCase;
    }

    public final void a() {
        a1 a1VarA;
        synchronized (d) {
            while (true) {
                a1VarA = this.b.a();
                if (!(a1VarA instanceof a1.d)) {
                    if (!(a1VarA instanceof a1.c)) {
                        break;
                    } else {
                        this.c.a(((a1.c) a1VarA).f6595a);
                    }
                } else {
                    this.f6680a.a(((a1.d) a1VarA).f6596a);
                }
            }
            if (!(Intrinsics.areEqual(a1VarA, a1.b.f6594a) ? true : Intrinsics.areEqual(a1VarA, a1.a.f6593a))) {
                throw new NoWhenBranchMatchedException();
            }
            Unit unit = Unit.INSTANCE;
        }
    }
}
