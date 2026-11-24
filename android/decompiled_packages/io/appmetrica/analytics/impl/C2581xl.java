package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy;
import io.appmetrica.analytics.coreapi.internal.system.PermissionExtractor;
import io.appmetrica.analytics.coreutils.internal.services.ContextPermissionChecker;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.xl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2581xl implements PermissionExtractor {
    public static final String b = "[SimplePermissionExtractor]";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final PermissionStrategy f6403a;

    public C2581xl(PermissionStrategy permissionStrategy) {
        this.f6403a = permissionStrategy;
    }

    public final PermissionStrategy a() {
        return this.f6403a;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.system.PermissionExtractor
    public final boolean hasPermission(Context context, String str) {
        if (this.f6403a.forbidUsePermission(str)) {
            return false;
        }
        return ContextPermissionChecker.hasPermission(context, str);
    }
}
