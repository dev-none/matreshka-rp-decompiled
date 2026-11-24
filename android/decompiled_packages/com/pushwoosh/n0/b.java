package com.pushwoosh.n0;

import android.app.NotificationManager;
import android.service.notification.StatusBarNotification;
import android.util.Pair;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.NotificationIntentHelper;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {
    public static ArrayList a() {
        StatusBarNotification[] activeNotifications;
        ArrayList arrayList = new ArrayList();
        NotificationManager notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager();
        if (notificationManager != null) {
            try {
                activeNotifications = notificationManager.getActiveNotifications();
            } catch (Exception e) {
                PWLog.error("StatusBarNotificationHelper", "Failed to get list of active notifications", e);
                activeNotifications = new StatusBarNotification[0];
            }
        } else {
            activeNotifications = new StatusBarNotification[0];
        }
        for (StatusBarNotification statusBarNotification : activeNotifications) {
            if (statusBarNotification.getNotification().extras.getBoolean(NotificationIntentHelper.EXTRA_IS_SUMMARY_NOTIFICATION)) {
                arrayList.add(Pair.create(statusBarNotification.getNotification().getGroup(), Integer.valueOf(statusBarNotification.getId())));
            }
        }
        return arrayList;
    }
}
