package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.PreloadInfo;
import io.appmetrica.analytics.logger.appmetrica.internal.PublicLogger;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.zf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2625zf {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final C2525vf f6431a;

    public C2625zf(PreloadInfo preloadInfo, PublicLogger publicLogger, boolean z) {
        if (preloadInfo != null) {
            if (TextUtils.isEmpty(preloadInfo.getTrackingId())) {
                publicLogger.error("Required field \"PreloadInfo.trackingId\" is empty!\nThis preload info will be skipped.", new Object[0]);
            } else {
                this.f6431a = new C2525vf(preloadInfo.getTrackingId(), new JSONObject(preloadInfo.getAdditionalParams()), true, z, Y7.c);
            }
        }
    }
}
