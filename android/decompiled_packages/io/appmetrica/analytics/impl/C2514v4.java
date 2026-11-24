package io.appmetrica.analytics.impl;

import android.location.Location;
import io.appmetrica.analytics.coreutils.internal.WrapUtils;
import io.appmetrica.analytics.coreutils.internal.collection.CollectionUtils;
import io.appmetrica.analytics.internal.CounterConfiguration;
import io.appmetrica.analytics.networktasks.internal.ArgumentsMerger;
import java.util.HashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.v4, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2514v4 implements ArgumentsMerger {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6362a;
    public final Boolean b;
    public final Location c;
    public final Boolean d;
    public final Integer e;
    public final Integer f;
    public final Integer g;
    public final Boolean h;
    public final Boolean i;
    public final Map<String, String> j;
    public final Integer k;
    public final Boolean l;
    public final Boolean m;
    public final Boolean n;
    public final Set<String> o;

    public C2514v4(String str, Boolean bool, Location location, Boolean bool2, Integer num, Integer num2, Integer num3, Boolean bool3, Boolean bool4, Map map, Integer num4, Boolean bool5, Boolean bool6, Boolean bool7, Set set) {
        this.f6362a = str;
        this.b = bool;
        this.c = location;
        this.d = bool2;
        this.e = num;
        this.f = num2;
        this.g = num3;
        this.h = bool3;
        this.i = bool4;
        this.j = map;
        this.k = num4;
        this.l = bool5;
        this.m = bool6;
        this.n = bool7;
        this.o = set;
    }

    public final boolean a(C2514v4 c2514v4) {
        return equals(c2514v4);
    }

    @Override // io.appmetrica.analytics.networktasks.internal.ArgumentsMerger
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final C2514v4 mergeFrom(C2514v4 c2514v4) {
        return new C2514v4((String) WrapUtils.getOrDefaultNullable(this.f6362a, c2514v4.f6362a), (Boolean) WrapUtils.getOrDefaultNullable(this.b, c2514v4.b), (Location) WrapUtils.getOrDefaultNullable(this.c, c2514v4.c), (Boolean) WrapUtils.getOrDefaultNullable(this.d, c2514v4.d), (Integer) WrapUtils.getOrDefaultNullable(this.e, c2514v4.e), (Integer) WrapUtils.getOrDefaultNullable(this.f, c2514v4.f), (Integer) WrapUtils.getOrDefaultNullable(this.g, c2514v4.g), (Boolean) WrapUtils.getOrDefaultNullable(this.h, c2514v4.h), (Boolean) WrapUtils.getOrDefaultNullable(this.i, c2514v4.i), (Map) WrapUtils.getOrDefaultNullable(this.j, c2514v4.j), (Integer) WrapUtils.getOrDefaultNullable(this.k, c2514v4.k), (Boolean) WrapUtils.getOrDefaultNullable(this.l, c2514v4.l), (Boolean) WrapUtils.getOrDefaultNullable(this.m, c2514v4.m), (Boolean) WrapUtils.getOrDefaultNullable(this.n, c2514v4.n), CollectionUtils.merge(this.o, c2514v4.o));
    }

    @Override // io.appmetrica.analytics.networktasks.internal.ArgumentsMerger
    public final boolean compareWithOtherArguments(Object obj) {
        return equals((C2514v4) obj);
    }

    public final boolean equals(Object obj) {
        if (obj != null && C2514v4.class == obj.getClass()) {
            C2514v4 c2514v4 = (C2514v4) obj;
            if (Objects.equals(this.f6362a, c2514v4.f6362a) && Objects.equals(this.b, c2514v4.b) && Objects.equals(this.c, c2514v4.c) && Objects.equals(this.d, c2514v4.d) && Objects.equals(this.e, c2514v4.e) && Objects.equals(this.f, c2514v4.f) && Objects.equals(this.g, c2514v4.g) && Objects.equals(this.h, c2514v4.h) && Objects.equals(this.i, c2514v4.i) && Objects.equals(this.j, c2514v4.j) && Objects.equals(this.k, c2514v4.k) && Objects.equals(this.l, c2514v4.l) && Objects.equals(this.m, c2514v4.m) && Objects.equals(this.n, c2514v4.n) && Objects.equals(this.o, c2514v4.o)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Objects.hash(this.f6362a, this.b, this.c, this.d, this.e, this.f, this.g, this.h, this.i, this.j, this.k, this.l, this.m, this.n, this.o);
    }

    public final String toString() {
        return "ReporterArguments{apiKey='" + this.f6362a + "', locationTracking=" + this.b + ", manualLocation=" + this.c + ", firstActivationAsUpdate=" + this.d + ", sessionTimeout=" + this.e + ", maxReportsCount=" + this.f + ", dispatchPeriod=" + this.g + ", logEnabled=" + this.h + ", dataSendingEnabled=" + this.i + ", clidsFromClient=" + this.j + ", maxReportsInDbCount=" + this.k + ", nativeCrashesEnabled=" + this.l + ", revenueAutoTrackingEnabled=" + this.m + ", advIdentifiersTrackingEnabled=" + this.n + ", autoCollectedDataSubscribers=" + this.o + '}';
    }

    public C2514v4(CounterConfiguration counterConfiguration, Map<String, String> map) {
        this(counterConfiguration.getApiKey(), counterConfiguration.isLocationTrackingEnabled(), counterConfiguration.getManualLocation(), counterConfiguration.isFirstActivationAsUpdate(), counterConfiguration.getSessionTimeout(), counterConfiguration.getMaxReportsCount(), counterConfiguration.getDispatchPeriod(), counterConfiguration.isLogEnabled(), counterConfiguration.getDataSendingEnabled(), map, counterConfiguration.getMaxReportsInDbCount(), counterConfiguration.getReportNativeCrashesEnabled(), counterConfiguration.isRevenueAutoTrackingEnabled(), counterConfiguration.isAdvIdentifiersTrackingEnabled(), new HashSet(counterConfiguration.getAutoCollectedDataSubscribers()));
    }

    public C2514v4() {
        this(null, null, null, null, null, null, null, null, null, null, null, null, null, null, new HashSet());
    }
}
