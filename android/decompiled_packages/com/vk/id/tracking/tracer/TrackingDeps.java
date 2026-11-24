package com.vk.id.tracking.tracer;

import android.content.Context;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.tracking.core.AnalyticsTracking;
import com.vk.id.tracking.core.CrashReporter;
import com.vk.id.tracking.core.PerformanceTracker;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.lite.TracerLite;

/* JADX INFO: compiled from: TrackingDeps.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0011\u0010\f\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0010\u001a\u00020\u0011¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\u0014\u001a\u00020\u0015¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"Lcom/vk/id/tracking/tracer/TrackingDeps;", "", "context", "Landroid/content/Context;", "clientId", "", "<init>", "(Landroid/content/Context;Ljava/lang/String;)V", "tracer", "Lru/ok/tracer/lite/TracerLite;", "crashReporterInternal", "Lcom/vk/id/tracking/tracer/TracerCrashReporter;", "crashReporter", "Lcom/vk/id/tracking/core/CrashReporter;", "getCrashReporter", "()Lcom/vk/id/tracking/core/CrashReporter;", "performanceTracker", "Lcom/vk/id/tracking/core/PerformanceTracker;", "getPerformanceTracker", "()Lcom/vk/id/tracking/core/PerformanceTracker;", "analyticsTracking", "Lcom/vk/id/tracking/core/AnalyticsTracking;", "getAnalyticsTracking", "()Lcom/vk/id/tracking/core/AnalyticsTracking;", "tracking-tracer_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class TrackingDeps {
    private final AnalyticsTracking analyticsTracking;
    private final CrashReporter crashReporter;
    private final TracerCrashReporter crashReporterInternal;
    private final PerformanceTracker performanceTracker;
    private final TracerLite tracer;

    public TrackingDeps(Context context, String clientId) {
        TracerLite tracerLite;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        try {
            Context applicationContext = context.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
            tracerLite = new TracerLite(applicationContext, BuildConfig.LIBRARY_PACKAGE_NAME, TracerLite.Configuration.INSTANCE.build(new Function1() { // from class: com.vk.id.tracking.tracer.TrackingDeps$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return TrackingDeps.tracer$lambda$1((TracerLite.Configuration.Builder) obj);
                }
            }));
        } catch (Throwable unused) {
            tracerLite = null;
        }
        this.tracer = tracerLite;
        if (tracerLite != null) {
            try {
                tracerLite.setKey("ClientId", clientId);
                Unit unit = Unit.INSTANCE;
            } catch (Throwable unused2) {
                Unit unit2 = Unit.INSTANCE;
            }
        }
        TracerCrashReporter tracerCrashReporter = new TracerCrashReporter(this.tracer);
        this.crashReporterInternal = tracerCrashReporter;
        this.crashReporter = tracerCrashReporter;
        this.performanceTracker = new TracerPerformanceTracker(this.tracer);
        this.analyticsTracking = tracerCrashReporter;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit tracer$lambda$1(TracerLite.Configuration.Builder build) {
        Intrinsics.checkNotNullParameter(build, "$this$build");
        build.setIoExecutor(Executors.newCachedThreadPool(new ThreadFactory() { // from class: com.vk.id.tracking.tracer.TrackingDeps$$ExternalSyntheticLambda0
            @Override // java.util.concurrent.ThreadFactory
            public final Thread newThread(Runnable runnable) {
                return TrackingDeps.tracer$lambda$1$lambda$0(runnable);
            }
        }));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Thread tracer$lambda$1$lambda$0(final Runnable runnable) {
        return new Thread() { // from class: com.vk.id.tracking.tracer.TrackingDeps$tracer$1$1$1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                try {
                    runnable.run();
                } catch (Throwable unused) {
                }
            }
        };
    }

    public final CrashReporter getCrashReporter() {
        return this.crashReporter;
    }

    public final PerformanceTracker getPerformanceTracker() {
        return this.performanceTracker;
    }

    public final AnalyticsTracking getAnalyticsTracking() {
        return this.analyticsTracking;
    }
}
