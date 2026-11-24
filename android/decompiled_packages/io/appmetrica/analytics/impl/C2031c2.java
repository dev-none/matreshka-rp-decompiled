package io.appmetrica.analytics.impl;

import java.util.List;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.c2, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2031c2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List f6023a;
    public final F2 b;
    public final List c;

    public C2031c2(List list, F2 f2, List list2) {
        this.f6023a = list;
        this.b = f2;
        this.c = list2;
    }

    public final String toString() {
        return "AppPermissionsState{mPermissionStateList=" + this.f6023a + ", mBackgroundRestrictionsState=" + this.b + ", mAvailableProviders=" + this.c + '}';
    }
}
