package io.appmetrica.analytics.screenshot.impl;

import java.util.List;
import kotlin.collections.ArraysKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.screenshot.impl.p, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2649p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final boolean f6574a;
    public final List b;
    public final long c;

    public C2649p(boolean z, List list, long j) {
        this.f6574a = z;
        this.b = list;
        this.c = j;
    }

    public final long a() {
        return this.c;
    }

    public final boolean b() {
        return this.f6574a;
    }

    public final List c() {
        return this.b;
    }

    public final String toString() {
        return "ContentObserverCaptorConfig(enabled=" + this.f6574a + ", mediaStoreColumnNames='" + this.b + "', detectWindowSeconds=" + this.c + ')';
    }

    public C2649p() {
        this(new O().f6544a, ArraysKt.toList(new O().c), new O().b);
    }
}
