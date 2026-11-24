package io.flutter.plugins.firebase.performance;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0006\b\u0086\b\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u000e\u0010\f\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\rJ\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u0011\u001a\u00020\u0012H\u0016J\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u0015\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\t\u0010\u0016\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0018"}, d2 = {"Lio/flutter/plugins/firebase/performance/HttpMetricOptions;", "", "url", "", "httpMethod", "Lio/flutter/plugins/firebase/performance/HttpMethod;", "<init>", "(Ljava/lang/String;Lio/flutter/plugins/firebase/performance/HttpMethod;)V", "getUrl", "()Ljava/lang/String;", "getHttpMethod", "()Lio/flutter/plugins/firebase/performance/HttpMethod;", "toList", "", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "component1", "component2", MenuActionType.COPY, "toString", "Companion", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class HttpMetricOptions {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final HttpMethod httpMethod;
    private final String url;

    public static /* synthetic */ HttpMetricOptions copy$default(HttpMetricOptions httpMetricOptions, String str, HttpMethod httpMethod, int i, Object obj) {
        if ((i & 1) != 0) {
            str = httpMetricOptions.url;
        }
        if ((i & 2) != 0) {
            httpMethod = httpMetricOptions.httpMethod;
        }
        return httpMetricOptions.copy(str, httpMethod);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getUrl() {
        return this.url;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final HttpMethod getHttpMethod() {
        return this.httpMethod;
    }

    public final HttpMetricOptions copy(String url, HttpMethod httpMethod) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(httpMethod, "httpMethod");
        return new HttpMetricOptions(url, httpMethod);
    }

    public String toString() {
        return "HttpMetricOptions(url=" + this.url + ", httpMethod=" + this.httpMethod + ")";
    }

    /* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\b"}, d2 = {"Lio/flutter/plugins/firebase/performance/HttpMetricOptions$Companion;", "", "<init>", "()V", "fromList", "Lio/flutter/plugins/firebase/performance/HttpMetricOptions;", "pigeonVar_list", "", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final HttpMetricOptions fromList(List<? extends Object> pigeonVar_list) {
            Intrinsics.checkNotNullParameter(pigeonVar_list, "pigeonVar_list");
            Object obj = pigeonVar_list.get(0);
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.String");
            Object obj2 = pigeonVar_list.get(1);
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type io.flutter.plugins.firebase.performance.HttpMethod");
            return new HttpMetricOptions((String) obj, (HttpMethod) obj2);
        }
    }

    public HttpMetricOptions(String url, HttpMethod httpMethod) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(httpMethod, "httpMethod");
        this.url = url;
        this.httpMethod = httpMethod;
    }

    public final HttpMethod getHttpMethod() {
        return this.httpMethod;
    }

    public final String getUrl() {
        return this.url;
    }

    public final List<Object> toList() {
        return CollectionsKt.listOf(this.url, this.httpMethod);
    }

    public boolean equals(Object other) {
        if (other != null && Intrinsics.areEqual(other.getClass(), getClass())) {
            if (this == other) {
                return true;
            }
            HttpMetricOptions httpMetricOptions = (HttpMetricOptions) other;
            if (GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.url, httpMetricOptions.url) && GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.httpMethod, httpMetricOptions.httpMethod)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return (((getClass().hashCode() * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.url)) * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.httpMethod);
    }
}
