package ru.rustore.sdk.metrics.internal;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.metrics.MetricsEvent;
import ru.rustore.sdk.metrics.MetricsException;
import ru.rustore.sdk.reactive.core.Dispatchers;
import ru.rustore.sdk.reactive.single.Single;
import ru.rustore.sdk.reactive.single.SingleSubscribeKt;
import ru.rustore.sdk.reactive.single.SingleSubscribeOnKt;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class s extends Lambda implements Function0<Unit> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ t f6668a;
    public final /* synthetic */ MetricsEvent b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s(t tVar, MetricsEvent metricsEvent) {
        super(0);
        this.f6668a = tVar;
        this.b = metricsEvent;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Unit invoke() throws MetricsException.SaveMetricsEventError {
        this.f6668a.e.a(new r(this.b));
        f fVar = this.f6668a.b;
        MetricsEvent metricsEvent = this.b;
        Intrinsics.checkNotNullParameter(metricsEvent, "metricsEvent");
        s0 s0Var = fVar.f6629a;
        s0Var.getClass();
        Intrinsics.checkNotNullParameter(metricsEvent, "metricsEvent");
        s0Var.d.a(new r0(metricsEvent));
        s0Var.f6669a.a(s0Var.b.a(metricsEvent));
        t tVar = this.f6668a;
        if (!tVar.f) {
            SingleSubscribeKt.subscribe(SingleSubscribeOnKt.subscribeOn(Single.INSTANCE.from(new m(tVar)), Dispatchers.INSTANCE.getIo()), new o(tVar), new q(tVar));
            tVar.c.a();
            tVar.f = true;
        }
        return Unit.INSTANCE;
    }
}
