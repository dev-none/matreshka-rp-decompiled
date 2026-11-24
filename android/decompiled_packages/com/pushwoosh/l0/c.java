package com.pushwoosh.l0;

import android.os.Bundle;
import com.pushwoosh.PushStatisticsScheduler;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.handlers.notification.PushNotificationOpenHandler;

/* JADX INFO: loaded from: classes6.dex */
public final class c implements PushNotificationOpenHandler {
    @Override // com.pushwoosh.notification.handlers.notification.PushNotificationOpenHandler
    public final void postHandleNotification(Bundle bundle) {
        if (PushBundleDataProvider.isLocal(bundle) || PushBundleDataProvider.isSilent(bundle)) {
            return;
        }
        String pushHash = PushBundleDataProvider.getPushHash(bundle);
        PWLog.debug("PushStatNotificationOpenHandler", "postHandleNotification, pushHash: " + pushHash + ", metadata: " + PushBundleDataProvider.getPushMetadata(bundle));
        try {
            PushwooshPlatform.getInstance().pushwooshRepository().setCurrentSessionHash(pushHash);
        } catch (Exception e) {
            PWLog.error("PushStatNotificationOpenHandler", "Failed to set session hash", e);
        }
        try {
            PWLog.debug("PushStatNotificationOpenHandler", "Scheduling open event for notification click");
            PushStatisticsScheduler.scheduleOpenEvent(bundle);
        } catch (Exception e2) {
            PWLog.error("PushStatNotificationOpenHandler", "Failed to schedule open event", e2);
        }
    }
}
