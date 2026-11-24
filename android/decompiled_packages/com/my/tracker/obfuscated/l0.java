package com.my.tracker.obfuscated;

import android.content.Context;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;

/* JADX INFO: loaded from: classes6.dex */
public final class l0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private k0 f4963a;
    protected boolean b = false;

    private static k0 b(Context context) {
        x2.a("GoogleAdInfoDataProvider: get google AId");
        try {
            AdvertisingIdClient.Info advertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(context);
            String id = advertisingIdInfo.getId();
            x2.a("GoogleAdInfoDataProvider: AId: " + id);
            boolean zIsLimitAdTrackingEnabled = advertisingIdInfo.isLimitAdTrackingEnabled() ^ true;
            x2.a("GoogleAdInfoDataProvider: AId ad tracking enabled: " + zIsLimitAdTrackingEnabled);
            return new k0(id, zIsLimitAdTrackingEnabled);
        } catch (Throwable th) {
            x2.b("GoogleAdInfoDataProvider: failed to get google AId", th);
            return null;
        }
    }

    public k0 a(Context context) {
        if (!this.b) {
            this.f4963a = b(context);
            this.b = true;
        }
        return this.f4963a;
    }
}
