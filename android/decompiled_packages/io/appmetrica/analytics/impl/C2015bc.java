package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy;
import io.appmetrica.analytics.locationapi.internal.LocationControllerObserver;
import java.util.List;
import kotlin.collections.CollectionsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2015bc implements PermissionStrategy, LocationControllerObserver {
    public static final C1989ac b = new C1989ac();
    public static final List c = CollectionsKt.listOf((Object[]) new String[]{"android.permission.ACCESS_FINE_LOCATION", "android.permission.ACCESS_COARSE_LOCATION"});

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public volatile boolean f6015a;

    @Override // io.appmetrica.analytics.coreapi.internal.permission.PermissionStrategy
    public final boolean forbidUsePermission(String str) {
        if (c.contains(str)) {
            return !this.f6015a;
        }
        return false;
    }

    @Override // io.appmetrica.analytics.locationapi.internal.LocationControllerObserver
    public final void startLocationTracking() {
        this.f6015a = true;
    }

    @Override // io.appmetrica.analytics.locationapi.internal.LocationControllerObserver
    public final void stopLocationTracking() {
        this.f6015a = false;
    }

    public final String toString() {
        return "LocationFlagStrategy(enabled=" + this.f6015a + ", locationPermissions=" + c + ')';
    }
}
