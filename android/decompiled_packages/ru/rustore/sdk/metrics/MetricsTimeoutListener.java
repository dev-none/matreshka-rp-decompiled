package ru.rustore.sdk.metrics;

import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0010\u0002\n\u0002\b\u0007\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001d\u0010\u0007\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u00052\u0006\u0010\t\u001a\u00020\u0005H\u0000¢\u0006\u0002\b\nJ \u0010\u000b\u001a\u00020\u00062\u0018\u0010\f\u001a\u0014\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0004R\"\u0010\u0003\u001a\u0016\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lru/rustore/sdk/metrics/MetricsTimeoutListener;", "", "()V", "timeoutListener", "Lkotlin/Function2;", "", "", "onHandleTimeout", "stopReason", "jobsCount", "onHandleTimeout$sdk_public_metrics_release", "setTimeoutListener", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class MetricsTimeoutListener {
    public static final MetricsTimeoutListener INSTANCE = new MetricsTimeoutListener();
    private static Function2<? super Integer, ? super Integer, Unit> timeoutListener;

    private MetricsTimeoutListener() {
    }

    public final void onHandleTimeout$sdk_public_metrics_release(int stopReason, int jobsCount) {
        Function2<? super Integer, ? super Integer, Unit> function2 = timeoutListener;
        if (function2 != null) {
            function2.invoke(Integer.valueOf(stopReason), Integer.valueOf(jobsCount));
        }
    }

    public final void setTimeoutListener(Function2<? super Integer, ? super Integer, Unit> listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        if (timeoutListener != null) {
            return;
        }
        timeoutListener = listener;
    }
}
