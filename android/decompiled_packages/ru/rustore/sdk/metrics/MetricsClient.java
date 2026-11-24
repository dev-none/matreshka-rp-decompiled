package ru.rustore.sdk.metrics;

import android.content.Context;
import com.unity3d.services.core.fid.Constants;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import ru.rustore.sdk.metrics.internal.b1;
import ru.rustore.sdk.metrics.internal.s;
import ru.rustore.sdk.metrics.internal.t;
import ru.rustore.sdk.reactive.single.Single;
import ru.rustore.sdk.reactive.single.SingleSubscribeOnKt;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0005\u0018\u0000 \r2\u00020\u0001:\u0001\rB\u0011\b\u0000\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005J\u001b\u0010\n\u001a\b\u0012\u0004\u0012\u00020\t0\b2\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\n\u0010\u000bR\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010\f¨\u0006\u000e"}, d2 = {"Lru/rustore/sdk/metrics/MetricsClient;", "", "Lru/rustore/sdk/metrics/internal/t;", "metricsClientController", "<init>", "(Lru/rustore/sdk/metrics/internal/t;)V", "Lru/rustore/sdk/metrics/MetricsEvent;", "metricsEvent", "Lru/rustore/sdk/reactive/single/Single;", "", "send", "(Lru/rustore/sdk/metrics/MetricsEvent;)Lru/rustore/sdk/reactive/single/Single;", "Lru/rustore/sdk/metrics/internal/t;", "Companion", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class MetricsClient {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final t metricsClientController;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lru/rustore/sdk/metrics/MetricsClient$Companion;", "", "()V", Constants.GET_INSTANCE, "Lru/rustore/sdk/metrics/MetricsClient;", "context", "Landroid/content/Context;", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public final MetricsClient getInstance(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            return (MetricsClient) b1.y.a(context).w.getValue();
        }

        private Companion() {
        }
    }

    public MetricsClient(t metricsClientController) {
        Intrinsics.checkNotNullParameter(metricsClientController, "metricsClientController");
        this.metricsClientController = metricsClientController;
    }

    public final Single<Unit> send(MetricsEvent metricsEvent) {
        Intrinsics.checkNotNullParameter(metricsEvent, "metricsEvent");
        t tVar = this.metricsClientController;
        tVar.getClass();
        Intrinsics.checkNotNullParameter(metricsEvent, "metricsEvent");
        return SingleSubscribeOnKt.subscribeOn(Single.INSTANCE.from(new s(tVar, metricsEvent)), tVar.d);
    }
}
