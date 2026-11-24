package ru.rustore.sdk.metrics.internal;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.metrics.MetricsEvent;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class r0 extends Lambda implements Function0<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ MetricsEvent f6667a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public r0(MetricsEvent metricsEvent) {
        super(0);
        this.f6667a = metricsEvent;
    }

    @Override // kotlin.jvm.functions.Function0
    public final String invoke() {
        return "Insert new event with name: " + this.f6667a.getEventName();
    }
}
