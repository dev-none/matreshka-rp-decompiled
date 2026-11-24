package ru.ok.tracer.lite.performance.metrics;

import android.util.Log;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.Executor;
import java.util.concurrent.TimeUnit;
import javax.inject.Inject;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.MapsKt;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import ru.ok.tracer.base.sessionuuuid.SessionUuidUtils;
import ru.ok.tracer.base.time.PrecisionClock;
import ru.ok.tracer.base.ucum.UcumUtils;
import ru.ok.tracer.lite.TracerLite;
import ru.ok.tracer.lite.limits.TracerLiteLimits;
import ru.ok.tracer.lite.performance.metrics.upload.PerfSampleUploaderLite;
import ru.ok.tracer.lite.performance.metrics.util.DelayedWork;
import ru.ok.tracer.lite.utils.TracerExecutorsHolder;

/* JADX INFO: compiled from: TracerPerformanceMetricsLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010$\n\u0000\u0018\u00002\u00020\u0001B\u000f\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u0014\u001a\u00020\u0015H\u0002JO\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001c2*\u0010\u001d\u001a\u0016\u0012\u0012\b\u0001\u0012\u000e\u0012\u0004\u0012\u00020\u0018\u0012\u0004\u0012\u00020\u00010\u001f0\u001e\"\u000e\u0012\u0004\u0012\u00020\u0018\u0012\u0004\u0012\u00020\u00010\u001f¢\u0006\u0002\u0010 JO\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u00182*\u0010\u001d\u001a\u0016\u0012\u0012\b\u0001\u0012\u000e\u0012\u0004\u0012\u00020\u0018\u0012\u0004\u0012\u00020\u00010\u001f0\u001e\"\u000e\u0012\u0004\u0012\u00020\u0018\u0012\u0004\u0012\u00020\u00010\u001f¢\u0006\u0002\u0010!J4\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u00182\u0012\u0010\u001d\u001a\u000e\u0012\u0004\u0012\u00020\u0018\u0012\u0004\u0012\u00020\u00010\"H\u0002R\u0014\u0010\u0005\u001a\u00020\u00068BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0007\u0010\bR\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\r0\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006#"}, d2 = {"Lru/ok/tracer/lite/performance/metrics/TracerPerformanceMetricsLite;", "", "tracer", "Lru/ok/tracer/lite/TracerLite;", "(Lru/ok/tracer/lite/TracerLite;)V", "ioExecutor", "Ljava/util/concurrent/Executor;", "getIoExecutor", "()Ljava/util/concurrent/Executor;", "limits", "Lru/ok/tracer/lite/limits/TracerLiteLimits;", "queue", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Lru/ok/tracer/lite/performance/metrics/PerfSampleLite;", "tracerIsDisabled", "", "uploader", "Lru/ok/tracer/lite/performance/metrics/upload/PerfSampleUploaderLite;", "work", "Lru/ok/tracer/lite/performance/metrics/util/DelayedWork;", "prepareUpload", "", "sample", "name", "", "value", "", "unit", "Ljava/util/concurrent/TimeUnit;", "attributes", "", "Lkotlin/Pair;", "(Ljava/lang/String;JLjava/util/concurrent/TimeUnit;[Lkotlin/Pair;)V", "(Ljava/lang/String;JLjava/lang/String;[Lkotlin/Pair;)V", "", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TracerPerformanceMetricsLite {
    private final TracerLiteLimits limits;
    private final ConcurrentLinkedQueue<PerfSampleLite> queue;
    private final TracerLite tracer;
    private volatile boolean tracerIsDisabled;
    private final PerfSampleUploaderLite uploader;
    private final DelayedWork work;

    @Inject
    public TracerPerformanceMetricsLite(TracerLite tracer) {
        Intrinsics.checkNotNullParameter(tracer, "tracer");
        this.tracer = tracer;
        this.limits = TracerLiteLimits.INSTANCE.get(tracer);
        this.uploader = new PerfSampleUploaderLite(tracer);
        this.queue = new ConcurrentLinkedQueue<>();
        this.work = new DelayedWork(null, 1000L, 0L, 0L, 0L, new TracerPerformanceMetricsLite$work$1(this), 29, null);
    }

    private final Executor getIoExecutor() {
        return TracerExecutorsHolder.INSTANCE.get(this.tracer).getIoExecutor();
    }

    public final void sample(String name, long value, TimeUnit unit, Pair<String, ? extends Object>... attributes) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(unit, "unit");
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        sample(name, value, UcumUtils.getToUcumString(unit), MapsKt.mapOf((Pair[]) Arrays.copyOf(attributes, attributes.length)));
    }

    public final void sample(String name, long value, String unit, Pair<String, ? extends Object>... attributes) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(unit, "unit");
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        sample(name, value, unit, MapsKt.mapOf((Pair[]) Arrays.copyOf(attributes, attributes.length)));
    }

    private final void sample(String name, long value, String unit, Map<String, ? extends Object> attributes) {
        if (this.tracerIsDisabled) {
            Log.d("Tracer", "Tracer is disabled");
        } else if (this.limits.isLimited(TracerPerformanceMetricsLiteKt.FEATURE_PERFORMANCE_METRICS, null)) {
            Log.e("Tracer", "Feature PERFORMANCE_METRICS limited");
        } else {
            this.queue.add(new PerfSampleLite(SessionUuidUtils.getCurrentSessionUuid(), PrecisionClock.currentTimeNanos(), name, value, unit, attributes));
            DelayedWork.schedule$default(this.work, 0, 1, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void prepareUpload() {
        getIoExecutor().execute(new Runnable() { // from class: ru.ok.tracer.lite.performance.metrics.TracerPerformanceMetricsLite$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() throws JSONException {
                TracerPerformanceMetricsLite.prepareUpload$lambda$1(this.f$0);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void prepareUpload$lambda$1(TracerPerformanceMetricsLite this$0) throws JSONException {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.limits.isLimited(TracerPerformanceMetricsLiteKt.FEATURE_PERFORMANCE_METRICS, null)) {
            Log.e("Tracer", "Feature PERFORMANCE_METRICS limited");
            return;
        }
        List listCreateListBuilder = CollectionsKt.createListBuilder();
        while (true) {
            List list = listCreateListBuilder;
            PerfSampleLite perfSampleLitePoll = this$0.queue.poll();
            if (perfSampleLitePoll == null) {
                break;
            }
            Intrinsics.checkNotNullExpressionValue(perfSampleLitePoll, "queue.poll() ?: break");
            list.add(perfSampleLitePoll);
        }
        List<PerfSampleLite> listBuild = CollectionsKt.build(listCreateListBuilder);
        if (this$0.tracer.isDisabled()) {
            Log.d("Tracer", "Tracer is disabled");
            this$0.tracerIsDisabled = true;
        } else {
            this$0.uploader.upload(listBuild);
        }
    }
}
