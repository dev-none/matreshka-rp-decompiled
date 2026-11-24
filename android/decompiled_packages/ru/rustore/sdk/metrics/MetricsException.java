package ru.rustore.sdk.metrics;

import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b6\u0018\u00002\u00060\u0001j\u0002`\u0002:\u0003\b\t\nB\u001b\b\u0004\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\u0002\u0010\u0007\u0082\u0001\u0003\u000b\f\r¨\u0006\u000e"}, d2 = {"Lru/rustore/sdk/metrics/MetricsException;", "Ljava/lang/Exception;", "Lkotlin/Exception;", "message", "", "cause", "", "(Ljava/lang/String;Ljava/lang/Throwable;)V", "MetricsDbError", "NetworkError", "SaveMetricsEventError", "Lru/rustore/sdk/metrics/MetricsException$MetricsDbError;", "Lru/rustore/sdk/metrics/MetricsException$NetworkError;", "Lru/rustore/sdk/metrics/MetricsException$SaveMetricsEventError;", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public abstract class MetricsException extends Exception {

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006¨\u0006\u0007"}, d2 = {"Lru/rustore/sdk/metrics/MetricsException$MetricsDbError;", "Lru/rustore/sdk/metrics/MetricsException;", "message", "", "cause", "", "(Ljava/lang/String;Ljava/lang/Throwable;)V", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class MetricsDbError extends MetricsException {
        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public MetricsDbError(String message, Throwable cause) {
            super(message, cause, null);
            Intrinsics.checkNotNullParameter(message, "message");
            Intrinsics.checkNotNullParameter(cause, "cause");
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0002\u0010\u0006¨\u0006\u0007"}, d2 = {"Lru/rustore/sdk/metrics/MetricsException$NetworkError;", "Lru/rustore/sdk/metrics/MetricsException;", "message", "", "cause", "", "(Ljava/lang/String;Ljava/lang/Throwable;)V", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class NetworkError extends MetricsException {
        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public NetworkError(String message, Throwable th) {
            super(message, th, null);
            Intrinsics.checkNotNullParameter(message, "message");
        }

        public /* synthetic */ NetworkError(String str, Throwable th, int i, DefaultConstructorMarker defaultConstructorMarker) {
            this(str, (i & 2) != 0 ? null : th);
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004¨\u0006\u0005"}, d2 = {"Lru/rustore/sdk/metrics/MetricsException$SaveMetricsEventError;", "Lru/rustore/sdk/metrics/MetricsException;", "message", "", "(Ljava/lang/String;)V", "sdk-public-metrics_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
    public static final class SaveMetricsEventError extends MetricsException {
        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        public SaveMetricsEventError(String message) {
            super(message, null, 2, 0 == true ? 1 : 0);
            Intrinsics.checkNotNullParameter(message, "message");
        }
    }

    public /* synthetic */ MetricsException(String str, Throwable th, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, th);
    }

    private MetricsException(String str, Throwable th) {
        super(str, th);
    }

    public /* synthetic */ MetricsException(String str, Throwable th, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, (i & 2) != 0 ? null : th, null);
    }
}
