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
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0006\b\u0086\b\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B7\u0012\u0016\b\u0002\u0010\u0002\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0005\u0018\u00010\u0003\u0012\u0016\b\u0002\u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0007\u0010\bJ\u000e\u0010\f\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\rJ\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u0011\u001a\u00020\u0012H\u0016J\u0017\u0010\u0013\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0005\u0018\u00010\u0003HÆ\u0003J\u0017\u0010\u0014\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003HÆ\u0003J9\u0010\u0015\u001a\u00020\u00002\u0016\b\u0002\u0010\u0002\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0005\u0018\u00010\u00032\u0016\b\u0002\u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003HÆ\u0001J\t\u0010\u0016\u001a\u00020\u0004HÖ\u0001R\u001f\u0010\u0002\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0005\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u001f\u0010\u0006\u001a\u0010\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\n¨\u0006\u0018"}, d2 = {"Lio/flutter/plugins/firebase/performance/TraceAttributes;", "", "metrics", "", "", "", "attributes", "<init>", "(Ljava/util/Map;Ljava/util/Map;)V", "getMetrics", "()Ljava/util/Map;", "getAttributes", "toList", "", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "component1", "component2", MenuActionType.COPY, "toString", "Companion", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class TraceAttributes {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final Map<String, String> attributes;
    private final Map<String, Long> metrics;

    /* JADX WARN: Multi-variable type inference failed */
    public TraceAttributes() {
        this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ TraceAttributes copy$default(TraceAttributes traceAttributes, Map map, Map map2, int i, Object obj) {
        if ((i & 1) != 0) {
            map = traceAttributes.metrics;
        }
        if ((i & 2) != 0) {
            map2 = traceAttributes.attributes;
        }
        return traceAttributes.copy(map, map2);
    }

    public final Map<String, Long> component1() {
        return this.metrics;
    }

    public final Map<String, String> component2() {
        return this.attributes;
    }

    public final TraceAttributes copy(Map<String, Long> metrics, Map<String, String> attributes) {
        return new TraceAttributes(metrics, attributes);
    }

    public String toString() {
        return "TraceAttributes(metrics=" + this.metrics + ", attributes=" + this.attributes + ")";
    }

    public TraceAttributes(Map<String, Long> map, Map<String, String> map2) {
        this.metrics = map;
        this.attributes = map2;
    }

    public /* synthetic */ TraceAttributes(Map map, Map map2, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? null : map, (i & 2) != 0 ? null : map2);
    }

    public final Map<String, Long> getMetrics() {
        return this.metrics;
    }

    public final Map<String, String> getAttributes() {
        return this.attributes;
    }

    /* JADX INFO: compiled from: GeneratedAndroidFirebasePerformance.g.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u00052\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00010\u0007¨\u0006\b"}, d2 = {"Lio/flutter/plugins/firebase/performance/TraceAttributes$Companion;", "", "<init>", "()V", "fromList", "Lio/flutter/plugins/firebase/performance/TraceAttributes;", "pigeonVar_list", "", "firebase_performance_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final TraceAttributes fromList(List<? extends Object> pigeonVar_list) {
            Intrinsics.checkNotNullParameter(pigeonVar_list, "pigeonVar_list");
            return new TraceAttributes((Map) pigeonVar_list.get(0), (Map) pigeonVar_list.get(1));
        }
    }

    public final List<Object> toList() {
        return CollectionsKt.listOf((Object[]) new Map[]{this.metrics, this.attributes});
    }

    public boolean equals(Object other) {
        if (other != null && Intrinsics.areEqual(other.getClass(), getClass())) {
            if (this == other) {
                return true;
            }
            TraceAttributes traceAttributes = (TraceAttributes) other;
            if (GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.metrics, traceAttributes.metrics) && GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepEquals(this.attributes, traceAttributes.attributes)) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return (((getClass().hashCode() * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.metrics)) * 31) + GeneratedAndroidFirebasePerformancePigeonUtils.INSTANCE.deepHash(this.attributes);
    }
}
