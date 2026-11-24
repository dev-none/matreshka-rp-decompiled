package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy;
import java.util.Arrays;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.q5, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2391q5 implements PermissionStrategy {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final PermissionStrategy[] f6266a;

    public C2391q5(PermissionStrategy... permissionStrategyArr) {
        this.f6266a = permissionStrategyArr;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy
    public final boolean forbidUsePermission(String str) {
        for (PermissionStrategy permissionStrategy : this.f6266a) {
            if (permissionStrategy.forbidUsePermission(str)) {
                return true;
            }
        }
        return false;
    }

    public final String toString() {
        return "CompositePermissionStrategy(strategies=" + Arrays.toString(this.f6266a) + ')';
    }
}
