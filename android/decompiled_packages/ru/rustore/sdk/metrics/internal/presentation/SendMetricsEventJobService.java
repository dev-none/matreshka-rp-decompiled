package ru.rustore.sdk.metrics.internal.presentation;

import android.app.job.JobParameters;
import android.app.job.JobService;
import android.os.Build;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import ru.rustore.sdk.metrics.MetricsTimeoutListener;
import ru.rustore.sdk.metrics.internal.b1;
import ru.rustore.sdk.metrics.internal.y0;
import ru.rustore.sdk.reactive.core.Dispatchers;
import ru.rustore.sdk.reactive.core.Disposable;
import ru.rustore.sdk.reactive.single.Single;
import ru.rustore.sdk.reactive.single.SingleDoOnDisposeKt;
import ru.rustore.sdk.reactive.single.SingleSubscribeKt;
import ru.rustore.sdk.reactive.single.SingleSubscribeOnKt;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Lru/rustore/sdk/metrics/internal/presentation/SendMetricsEventJobService;", "Landroid/app/job/JobService;", "<init>", "()V", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class SendMetricsEventJobService extends JobService {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Lazy f6659a = LazyKt.lazy(new a());
    public Disposable b;
    public volatile boolean c;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a extends Lambda implements Function0<b1> {
        public a() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final b1 invoke() {
            return b1.y.a(SendMetricsEventJobService.this);
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class b extends Lambda implements Function0<Unit> {
        public b() {
            super(0);
        }

        @Override // kotlin.jvm.functions.Function0
        public final Unit invoke() {
            ((y0) ((b1) SendMetricsEventJobService.this.f6659a.getValue()).t.getValue()).a();
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class c extends Lambda implements Function0<Unit> {
        public final /* synthetic */ JobParameters b;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public c(JobParameters jobParameters) {
            super(0);
            this.b = jobParameters;
        }

        @Override // kotlin.jvm.functions.Function0
        public final Unit invoke() {
            SendMetricsEventJobService.a(SendMetricsEventJobService.this, this.b);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class d extends Lambda implements Function1<Throwable, Unit> {
        public final /* synthetic */ JobParameters b;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public d(JobParameters jobParameters) {
            super(1);
            this.b = jobParameters;
        }

        @Override // kotlin.jvm.functions.Function1
        public final Unit invoke(Throwable th) {
            Intrinsics.checkNotNullParameter(th, "<anonymous parameter 0>");
            SendMetricsEventJobService.a(SendMetricsEventJobService.this, this.b);
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class e extends Lambda implements Function1<Unit, Unit> {
        public final /* synthetic */ JobParameters b;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public e(JobParameters jobParameters) {
            super(1);
            this.b = jobParameters;
        }

        @Override // kotlin.jvm.functions.Function1
        public final Unit invoke(Unit unit) {
            Unit it = unit;
            Intrinsics.checkNotNullParameter(it, "it");
            SendMetricsEventJobService.a(SendMetricsEventJobService.this, this.b);
            return Unit.INSTANCE;
        }
    }

    public static final void a(SendMetricsEventJobService sendMetricsEventJobService, JobParameters jobParameters) {
        if (sendMetricsEventJobService.c) {
            return;
        }
        sendMetricsEventJobService.jobFinished(jobParameters, false);
    }

    @Override // android.app.job.JobService
    public final boolean onStartJob(JobParameters params) {
        Intrinsics.checkNotNullParameter(params, "params");
        this.b = SingleSubscribeKt.subscribe(SingleDoOnDisposeKt.doOnDispose(SingleSubscribeOnKt.subscribeOn(Single.INSTANCE.from(new b()), Dispatchers.INSTANCE.getIo()), new c(params)), new d(params), new e(params));
        return true;
    }

    @Override // android.app.job.JobService
    public final boolean onStopJob(JobParameters jobParameters) {
        this.c = true;
        Disposable disposable = this.b;
        if (disposable != null) {
            disposable.dispose();
        }
        if (Build.VERSION.SDK_INT >= 31 && jobParameters != null) {
            int stopReason = jobParameters.getStopReason();
            Integer numValueOf = Integer.valueOf(stopReason);
            if (stopReason != 3) {
                numValueOf = null;
            }
            if (numValueOf != null) {
                MetricsTimeoutListener.INSTANCE.onHandleTimeout$sdk_public_metrics_release(numValueOf.intValue(), jobParameters.getExtras().getInt("pending_jobs_count"));
            }
        }
        return true;
    }
}
