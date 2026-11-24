package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.permission.PermissionResolutionStrategy;
import io.appmetrica.analytics.coreutils.internal.AndroidUtils;
import io.appmetrica.analytics.coreutils.internal.cache.CachedDataProvider;
import io.appmetrica.analytics.coreutils.internal.permission.AlwaysAllowPermissionStrategy;
import io.appmetrica.analytics.coreutils.internal.permission.SinglePermissionStrategy;
import io.appmetrica.analytics.coreutils.internal.services.telephony.CellularNetworkTypeExtractor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes7.dex */
public final class Sc implements InterfaceC2483tn {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f5882a;
    public final PermissionResolutionStrategy b;
    public final CellularNetworkTypeExtractor c;
    public final CachedDataProvider.CachedData d;

    public Sc(Context context) {
        this.f5882a = context;
        this.b = AndroidUtils.isApiAchieved(29) ? new SinglePermissionStrategy(C2495ua.k().j(), "android.permission.READ_PHONE_STATE") : new AlwaysAllowPermissionStrategy();
        this.c = new CellularNetworkTypeExtractor(context);
        long millis = TimeUnit.SECONDS.toMillis(20L);
        this.d = new CachedDataProvider.CachedData(millis, millis * ((long) 2), "mobile-connection");
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2483tn
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public final synchronized Rc a() {
        Rc rc;
        rc = (Rc) this.d.getData();
        if (rc == null || this.d.shouldUpdateData()) {
            rc = new Rc(this.b.hasNecessaryPermissions(this.f5882a) ? this.c.getNetworkType() : "unknown");
            this.d.setData(rc);
        }
        return rc;
    }
}
