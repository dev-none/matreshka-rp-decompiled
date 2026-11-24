package ru.rustore.sdk.review;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.metrics.MetricsEvent;
import ru.rustore.sdk.reactive.single.Single;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class j extends Lambda implements Function1<MetricsEvent, Single<Unit>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ l f6702a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(l lVar) {
        super(1);
        this.f6702a = lVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Single<Unit> invoke(MetricsEvent metricsEvent) {
        MetricsEvent dto = metricsEvent;
        Intrinsics.checkNotNullParameter(dto, "dto");
        return this.f6702a.b.send(dto);
    }
}
