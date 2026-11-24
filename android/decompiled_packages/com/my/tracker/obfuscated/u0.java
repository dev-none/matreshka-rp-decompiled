package com.my.tracker.obfuscated;

import android.content.Context;
import com.huawei.hms.ads.identifier.AdvertisingIdClient;

/* JADX INFO: loaded from: classes6.dex */
public final class u0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private t0 f4999a = null;
    protected boolean b = false;

    private static t0 b(Context context) {
        try {
            AdvertisingIdClient.Info advertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(context);
            String id = advertisingIdInfo.getId();
            x2.a("HuaweiAdInfoDataProvider: oaid: " + id);
            boolean zIsLimitAdTrackingEnabled = advertisingIdInfo.isLimitAdTrackingEnabled() ^ true;
            x2.a("HuaweiAdInfoDataProvider: oaid tracking enabled: " + zIsLimitAdTrackingEnabled);
            return new t0(id, zIsLimitAdTrackingEnabled);
        } catch (Throwable th) {
            x2.b("HuaweiAdInfoDataProvider: failed to get huawei AId", th);
            return null;
        }
    }

    public t0 a(Context context) {
        if (!this.b) {
            this.f4999a = b(context);
            this.b = true;
        }
        return this.f4999a;
    }
}
