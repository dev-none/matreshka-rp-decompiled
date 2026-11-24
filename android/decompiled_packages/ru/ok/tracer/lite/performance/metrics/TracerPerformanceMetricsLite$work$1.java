package ru.ok.tracer.lite.performance.metrics;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.FunctionReferenceImpl;

/* JADX INFO: compiled from: TracerPerformanceMetricsLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(k = 3, mv = {1, 7, 1}, xi = 48)
/* synthetic */ class TracerPerformanceMetricsLite$work$1 extends FunctionReferenceImpl implements Function0<Unit> {
    TracerPerformanceMetricsLite$work$1(Object obj) {
        super(0, obj, TracerPerformanceMetricsLite.class, "prepareUpload", "prepareUpload()V", 0);
    }

    @Override // kotlin.jvm.functions.Function0
    public /* bridge */ /* synthetic */ Unit invoke() {
        invoke2();
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: invoke, reason: avoid collision after fix types in other method */
    public final void invoke2() {
        ((TracerPerformanceMetricsLite) this.receiver).prepareUpload();
    }
}
