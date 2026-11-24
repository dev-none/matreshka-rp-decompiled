package ru.ok.tracer.lite.performance.metrics;

import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.Request;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PerfSampleLite.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010$\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0080\b\u0018\u00002\u00020\u0001BA\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\u0005\u0012\u0006\u0010\b\u001a\u00020\u0003\u0012\u0012\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00010\n¢\u0006\u0002\u0010\u000bJ\t\u0010\u0015\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0016\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0017\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0018\u001a\u00020\u0005HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\u0015\u0010\u001a\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00010\nHÆ\u0003JQ\u0010\u001b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\u00052\b\b\u0002\u0010\b\u001a\u00020\u00032\u0014\b\u0002\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00010\nHÆ\u0001J\u0013\u0010\u001c\u001a\u00020\u001d2\b\u0010\u001e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u001f\u001a\u00020 HÖ\u0001J\t\u0010!\u001a\u00020\u0003HÖ\u0001R\u001d\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00010\n¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u0011\u0010\b\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0012¨\u0006\""}, d2 = {"Lru/ok/tracer/lite/performance/metrics/PerfSampleLite;", "", "sessionUuid", "", "timeUnixNano", "", "name", "value", "unit", "attributes", "", "(Ljava/lang/String;JLjava/lang/String;JLjava/lang/String;Ljava/util/Map;)V", "getAttributes", "()Ljava/util/Map;", "getName", "()Ljava/lang/String;", "getSessionUuid", "getTimeUnixNano", "()J", "getUnit", "getValue", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "tracer-lite-performance-metrics_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final /* data */ class PerfSampleLite {
    private final Map<String, Object> attributes;
    private final String name;
    private final String sessionUuid;
    private final long timeUnixNano;
    private final String unit;
    private final long value;

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ PerfSampleLite copy$default(PerfSampleLite perfSampleLite, String str, long j, String str2, long j2, String str3, Map map, int i, Object obj) {
        if ((i & 1) != 0) {
            str = perfSampleLite.sessionUuid;
        }
        if ((i & 2) != 0) {
            j = perfSampleLite.timeUnixNano;
        }
        if ((i & 4) != 0) {
            str2 = perfSampleLite.name;
        }
        if ((i & 8) != 0) {
            j2 = perfSampleLite.value;
        }
        if ((i & 16) != 0) {
            str3 = perfSampleLite.unit;
        }
        if ((i & 32) != 0) {
            map = perfSampleLite.attributes;
        }
        String str4 = str2;
        return perfSampleLite.copy(str, j, str4, j2, str3, map);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getSessionUuid() {
        return this.sessionUuid;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final long getTimeUnixNano() {
        return this.timeUnixNano;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final String getName() {
        return this.name;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final long getValue() {
        return this.value;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final String getUnit() {
        return this.unit;
    }

    public final Map<String, Object> component6() {
        return this.attributes;
    }

    public final PerfSampleLite copy(String sessionUuid, long timeUnixNano, String name, long value, String unit, Map<String, ? extends Object> attributes) {
        Intrinsics.checkNotNullParameter(sessionUuid, "sessionUuid");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(unit, "unit");
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        return new PerfSampleLite(sessionUuid, timeUnixNano, name, value, unit, attributes);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof PerfSampleLite)) {
            return false;
        }
        PerfSampleLite perfSampleLite = (PerfSampleLite) other;
        return Intrinsics.areEqual(this.sessionUuid, perfSampleLite.sessionUuid) && this.timeUnixNano == perfSampleLite.timeUnixNano && Intrinsics.areEqual(this.name, perfSampleLite.name) && this.value == perfSampleLite.value && Intrinsics.areEqual(this.unit, perfSampleLite.unit) && Intrinsics.areEqual(this.attributes, perfSampleLite.attributes);
    }

    public int hashCode() {
        return (((((((((this.sessionUuid.hashCode() * 31) + Long.hashCode(this.timeUnixNano)) * 31) + this.name.hashCode()) * 31) + Long.hashCode(this.value)) * 31) + this.unit.hashCode()) * 31) + this.attributes.hashCode();
    }

    public String toString() {
        return "PerfSampleLite(sessionUuid=" + this.sessionUuid + ", timeUnixNano=" + this.timeUnixNano + ", name=" + this.name + ", value=" + this.value + ", unit=" + this.unit + ", attributes=" + this.attributes + ')';
    }

    public PerfSampleLite(String sessionUuid, long j, String name, long j2, String unit, Map<String, ? extends Object> attributes) {
        Intrinsics.checkNotNullParameter(sessionUuid, "sessionUuid");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(unit, "unit");
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        this.sessionUuid = sessionUuid;
        this.timeUnixNano = j;
        this.name = name;
        this.value = j2;
        this.unit = unit;
        this.attributes = attributes;
    }

    public final String getSessionUuid() {
        return this.sessionUuid;
    }

    public final long getTimeUnixNano() {
        return this.timeUnixNano;
    }

    public final String getName() {
        return this.name;
    }

    public final long getValue() {
        return this.value;
    }

    public final String getUnit() {
        return this.unit;
    }

    public final Map<String, Object> getAttributes() {
        return this.attributes;
    }
}
