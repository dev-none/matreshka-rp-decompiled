package ru.rustore.sdk.metrics.internal;

import java.util.UUID;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import ru.rustore.sdk.metrics.MetricsEvent;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class p0 {
    public p0(z metricsEventSerializer, i1 uuidFactory) {
        Intrinsics.checkNotNullParameter(metricsEventSerializer, "metricsEventSerializer");
        Intrinsics.checkNotNullParameter(uuidFactory, "uuidFactory");
    }

    public final o0 a(MetricsEvent metricsEvent) {
        Intrinsics.checkNotNullParameter(metricsEvent, "metricsEvent");
        String value = UUID.randomUUID().toString();
        Intrinsics.checkNotNullExpressionValue(value, "randomUUID().toString()");
        Intrinsics.checkNotNullParameter(value, "value");
        byte[] bytes = z.a(metricsEvent).getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        return new o0(value, bytes);
    }
}
