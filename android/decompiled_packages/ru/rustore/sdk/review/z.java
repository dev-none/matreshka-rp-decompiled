package ru.rustore.sdk.review;

import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-381588c9714ce4cd7b266fd2cfd03df7665598235e0d80e8276ada3382f3292f */
/* JADX INFO: loaded from: classes8.dex */
public final class z {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final a0 f6718a;
    public final b0 b;
    public final c0 c;

    public z(a0 sdkNameDataSource, b0 sdkTypeDataSource, c0 sdkVersionDataSource) {
        Intrinsics.checkNotNullParameter(sdkNameDataSource, "sdkNameDataSource");
        Intrinsics.checkNotNullParameter(sdkTypeDataSource, "sdkTypeDataSource");
        Intrinsics.checkNotNullParameter(sdkVersionDataSource, "sdkVersionDataSource");
        this.f6718a = sdkNameDataSource;
        this.b = sdkTypeDataSource;
        this.c = sdkVersionDataSource;
    }
}
