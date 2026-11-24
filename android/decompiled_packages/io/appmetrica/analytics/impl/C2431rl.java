package io.appmetrica.analytics.impl;

import android.content.Context;
import io.appmetrica.analytics.coreapi.internal.system.PermissionExtractor;
import io.appmetrica.analytics.coreutils.internal.AndroidUtils;
import io.appmetrica.analytics.coreutils.internal.cache.CachedDataProvider;
import io.appmetrica.analytics.coreutils.internal.system.SystemServiceUtils;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.rl, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2431rl implements InterfaceC2483tn {
    public static final long d = TimeUnit.SECONDS.toMillis(20);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Context f6300a;
    public final PermissionExtractor b;
    public final CachedDataProvider.CachedData c;

    public C2431rl(Context context) {
        long j = d;
        this.c = new CachedDataProvider.CachedData(j, j, "sim-info");
        this.f6300a = context;
        this.b = C2495ua.k().j();
    }

    public final C2307ml b() {
        return new C2307ml((Integer) SystemServiceUtils.accessSystemServiceByNameSafely(this.f6300a, "phone", "getting SimMcc", "TelephonyManager", new C2332nl()), (Integer) SystemServiceUtils.accessSystemServiceByNameSafely(this.f6300a, "phone", "getting SimMnc", "TelephonyManager", new C2357ol()), ((Boolean) SystemServiceUtils.accessSystemServiceByNameSafelyOrDefault(this.f6300a, "phone", "getting NetworkRoaming", "TelephonyManager", Boolean.FALSE, new C2407ql(this))).booleanValue(), (String) SystemServiceUtils.accessSystemServiceByNameSafely(this.f6300a, "phone", "getting SimOperatorName", "TelephonyManager", new C2382pl()));
    }

    @Override // io.appmetrica.analytics.impl.InterfaceC2483tn
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public final synchronized List<C2307ml> a() {
        List<C2307ml> list;
        List<C2307ml> list2 = (List) this.c.getData();
        if (list2 == null || (list2.isEmpty() && this.c.shouldUpdateData())) {
            list = list2;
            list = list2;
            ArrayList arrayList = new ArrayList();
            if (C2495ua.H.u.b().n.d) {
                if (AndroidUtils.isApiAchieved(23)) {
                    if (this.b.hasPermission(this.f6300a, "android.permission.READ_PHONE_STATE")) {
                        arrayList.addAll(C2456sl.a(this.f6300a));
                    }
                    if (arrayList.size() == 0) {
                        arrayList.add(b());
                    }
                } else {
                    arrayList.add(b());
                }
            }
            this.c.setData(arrayList);
            list = arrayList;
        }
        return list;
    }
}
