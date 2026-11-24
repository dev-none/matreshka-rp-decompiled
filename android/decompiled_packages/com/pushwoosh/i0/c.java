package com.pushwoosh.i0;

import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.text.TextUtils;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public abstract class c {
    public static int a(NotificationManager notificationManager) {
        NotificationChannel notificationChannel;
        String str = RepositoryModule.getNotificationPreferences().channelName().get();
        if (str.contains(" ") || !str.startsWith("pushwoosh_")) {
            str = "pushwoosh_" + str.trim().replaceAll("\\s+", "_").toLowerCase();
        }
        if (TextUtils.isEmpty(str) || (notificationChannel = notificationManager.getNotificationChannel(str)) == null) {
            return 6;
        }
        if (notificationChannel.getImportance() == 0) {
            return 0;
        }
        return (notificationChannel.getImportance() <= 2 || notificationChannel.getSound() == null) ? 4 : 6;
    }
}
