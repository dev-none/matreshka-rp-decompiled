package ru.rustore.sdk.review;

import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.metrics.MetricsEvent;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class i extends Lambda implements Function0<MetricsEvent> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ l f6701a;
    public final /* synthetic */ g b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(l lVar, g gVar) {
        super(0);
        this.f6701a = lVar;
        this.b = gVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final MetricsEvent invoke() {
        h hVar = this.f6701a.f6704a;
        g model = this.b;
        hVar.getClass();
        Intrinsics.checkNotNullParameter(model, "model");
        return new MetricsEvent("sdkInfo", model.f6700a);
    }
}
