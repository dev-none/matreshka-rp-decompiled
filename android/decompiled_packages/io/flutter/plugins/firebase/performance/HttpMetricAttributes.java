package io.flutter.plugins.firebase.performance;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010$\n\u0002\b\f\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\n\b\u0086\b\u0018\u0000 $2\u00020\u0001:\u0001$BO\u0012\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0003\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007\u0012\u0016\b\u0002\u0010\b\u001a\u0010\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0007\u0018\u00010\t¢\u0006\u0004\b\n\u0010\u000bJ\u000e\u0010\u0015\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0016J\u0013\u0010\u0017\u001a\u00020\u00182\b\u0010\u0019\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u001a\u001a\u00020\u001bH\u0016J\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\rJ\u0010\u0010\u001d\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\rJ\u0010\u0010\u001e\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\rJ\u000b\u0010\u001f\u001a\u0004\u0018\u00010\u0007HÆ\u0003J\u0017\u0010 \u001a\u0010\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0007\u0018\u00010\tHÆ\u0003JV\u0010!\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00032\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u00072\u0016\b\u0002\u0010\b\u001a\u0010\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0007\u0018\u00010\tHÆ\u0001¢\u0006\u0002\u0010\"J\t\u0010#\u001a\u00020\u0007HÖ\u0001R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\f\u0010\rR\u0015\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\u000f\u0010\rR\u0015\u0010\u0005\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\u000e\u001a\u0004\b\u0010\u0010\rR\u0013\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u001f\u0010\b\u001a\u0010\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0007\u0018\u00010\t¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014¨\u0006%"}, d2 = {"Lio/flutter/plugins/firebase/performance/HttpMetricAttributes;", "", "httpResponseCode", "", "requestPayloadSize", "responsePayloadSize", "responseContentType", "", "attributes", "", "<init>", "(Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/String;Ljava/util/Map;)V", "getHttpResponseCode", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getRequestPayloadSize", "getResponsePayloadSize", "getResponseContentType", "()Ljava/lang/String;", "getAttributes", "()Ljava/util/Map;", "toList", "", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "component1", "component2", "component3", "component4", "component5", MenuActionType.COPY, "(Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/Long;Ljava/lang/String;Ljava/util/Map;)Lio/flutter/plugins/firebase/performance/HttpMetricAttributes;", "toString", "Companion", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class HttpMetricAttributes {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final Map<String, String> attributes;
    private final Long httpResponseCode;
    private final Long requestPayloadSize;
    private final String responseContentType;
    private final Long responsePayloadSize;

    public HttpMetricAttributes() {
        this(null, null, null, null, null, 31, null);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ HttpMetricAttributes copy$default(HttpMetricAttributes httpMetricAttributes, Long l, Long l2, Long l3, String str, Map map, int i, Object obj) {
        if ((i & 1) != 0) {
            l = httpMetricAttributes.httpResponseCode;
        }
        if ((i & 2) != 0) {
            l2 = httpMetricAttributes.requestPayloadSize;
        }
        if ((i & 4) != 0) {
            l3 = httpMetricAttributes.responsePayloadSize;
        }
        if ((i & 8) != 0) {
            str = httpMetricAttributes.responseContentType;
        }
        if ((i & 16) != 0) {
            map = httpMetricAttributes.attributes;
        }
        Map map2 = map;
        Long l4 = l3;
        return httpMetricAttributes.copy(l, l2, l4, str, map2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final Long getHttpResponseCode() {
        return this.httpResponseCode;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final Long getRequestPayloadSize() {
        return this.requestPayloadSize;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final Long getResponsePayloadSize() {
        return this.responsePayloadSize;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final String getResponseContentType() {
        return this.responseContentType;
    }

    public final Map<String, String> component5() {
        return this.attributes;
    }

    public final HttpMetricAttributes copy(Long httpResponseCode, Long requestPayloadSize, Long responsePayloadSize, String responseContentType, Map<String, String> attributes) {
        return new HttpMetricAttributes(httpResponseCode, requestPayloadSize, responsePayloadSize, responseContentType, attributes);
    }

    public String toString() {
        return "HttpMetricAttributes(httpResponseCode=" + this.httpResponseCode + ", requestPayloadSize=" + this.requestPayloadSize + ", responsePayloadSize=" + this.responsePayloadSize + ", responseContentType=" + this.responseContentType + ", attributes=" + this.attributes + ")";
    }

    public HttpMetricAttributes(Long l, Long l2, Long l3, String str, Map<String, String> map) {
        this.httpResponseCode = l;
        this.requestPayloadSize = l2;
        this.responsePayloadSize = l3;
        this.responseContentType = str;
        this.attributes = map;
    }

    public /* synthetic */ HttpMetricAttributes(Long l, Long l2, Long l3, String str, Map map, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : l, (i & 2) != 0 ? null : l2, (i & 4) != 0 ? null : l3, (i & 8) != 0 ? null : str, (i & 16) != 0 ? null : map);
    }

    public final Long getHttpResponseCode() {
        return this.httpResponseCode;
    }

    public final Long getRequestPayloadSize() {
        return this.requestPayloadSize;
    }

    public final Long getResponsePayloadSize() {
        return this.responsePayloadSize;
    }

    public final String getResponseContentType() {
        return this.responseContentType;
    }

    public final Map<String, String> getAttributes() {
        return this.attributes;
    }

    /* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\b"}, d2 = {"Lio/flutter/plugins/firebase/performance/HttpMetricAttributes$Companion;", "", "<init>", "()V", "fromList", "Lio/flutter/plugins/firebase/performance/HttpMetricAttributes;", "pigeonVar_list", "", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final HttpMetricAttributes fromList(List<? extends Object> pigeonVar_list) {
            Intrinsics.checkNotNullParameter(pigeonVar_list, "pigeonVar_list");
            return new HttpMetricAttributes((Long) pigeonVar_list.get(0), (Long) pigeonVar_list.get(1), (Long) pigeonVar_list.get(2), (String) pigeonVar_list.get(3), (Map) pigeonVar_list.get(4));
        }
    }

    public final List<Object> toList() {
        return CollectionsKt.listOf(this.httpResponseCode, this.requestPayloadSize, this.responsePayloadSize, this.responseContentType, this.attributes);
    }

    public boolean equals(Object other) {
        if (other != null && Intrinsics.areEqual(other.getClass(), getClass())) {
            if (this == other) {
                return true;
            }
            HttpMetricAttributes httpMetricAttributes = (HttpMetricAttributes) other;
            if (GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.httpResponseCode, httpMetricAttributes.httpResponseCode) && GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.requestPayloadSize, httpMetricAttributes.requestPayloadSize) && GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.responsePayloadSize, httpMetricAttributes.responsePayloadSize) && GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.responseContentType, httpMetricAttributes.responseContentType) && GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.attributes, httpMetricAttributes.attributes)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return (((((((((getClass().hashCode() * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.httpResponseCode)) * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.requestPayloadSize)) * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.responsePayloadSize)) * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.responseContentType)) * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.attributes);
    }
}
