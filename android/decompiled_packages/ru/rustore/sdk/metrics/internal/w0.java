package ru.rustore.sdk.metrics.internal;

import java.util.ArrayList;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class w0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final h1 f6676a;
    public final i0 b;
    public final t0 c;
    public final k1 d;

    public w0(h1 userIdDataSource, i0 packageNameDataSource, t0 remoteMetricsEventDataSource, k1 versionNameDataSource) {
        Intrinsics.checkNotNullParameter(userIdDataSource, "userIdDataSource");
        Intrinsics.checkNotNullParameter(packageNameDataSource, "packageNameDataSource");
        Intrinsics.checkNotNullParameter(remoteMetricsEventDataSource, "remoteMetricsEventDataSource");
        Intrinsics.checkNotNullParameter(versionNameDataSource, "versionNameDataSource");
        this.f6676a = userIdDataSource;
        this.b = packageNameDataSource;
        this.c = remoteMetricsEventDataSource;
        this.d = versionNameDataSource;
    }

    public final void a(List<j0> values) {
        Intrinsics.checkNotNullParameter(values, "values");
        String value = this.b.f6638a.getPackageName();
        Intrinsics.checkNotNullExpressionValue(value, "context.packageName");
        Intrinsics.checkNotNullParameter(value, "value");
        String strA = this.f6676a.a();
        j1 j1Var = (j1) this.d.b.getValue();
        String str = j1Var != null ? j1Var.f6641a : null;
        ArrayList values2 = new ArrayList(CollectionsKt.collectionSizeOrDefault(values, 10));
        for (j0 j0Var : values) {
            values2.add(new u0(value, j0Var.f6640a, strA, str, j0Var.b));
        }
        t0 t0Var = this.c;
        t0Var.getClass();
        Intrinsics.checkNotNullParameter(values2, "values");
        t0Var.f6671a.b(values2);
    }
}
