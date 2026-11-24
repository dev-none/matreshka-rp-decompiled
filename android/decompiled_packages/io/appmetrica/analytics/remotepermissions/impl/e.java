package io.appmetrica.analytics.remotepermissions.impl;

import io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy;
import java.util.Set;
import kotlin.collections.SetsKt;

/* JADX INFO: loaded from: classes7.dex */
public final class e implements PermissionStrategy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Set f6529a = SetsKt.emptySet();

    public final synchronized void a(Set<String> set) {
        this.f6529a = set;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy
    public final synchronized boolean forbidUsePermission(String str) {
        return !this.f6529a.contains(str);
    }
}
