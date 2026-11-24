package ru.rustore.sdk.metrics.internal;

import kotlin.jvm.JvmInline;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
@JvmInline
public final class j1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6641a;

    public final boolean equals(Object obj) {
        return (obj instanceof j1) && Intrinsics.areEqual(this.f6641a, ((j1) obj).f6641a);
    }

    public final int hashCode() {
        return this.f6641a.hashCode();
    }

    public final String toString() {
        return "VersionName(value=" + this.f6641a + ')';
    }
}
