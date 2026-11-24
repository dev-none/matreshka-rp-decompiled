package com.pushwoosh.notification;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import com.pushwoosh.NotificationUpdateReceiver;
import com.pushwoosh.i0.f;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.PendingIntentUtils;
import com.pushwoosh.m0.a0;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public class SummaryNotificationUtils {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f5288a = new Object();

    private static int a(String str) {
        int i;
        int notificationIdForGroup = getNotificationIdForGroup(str);
        if (notificationIdForGroup != -1) {
            return notificationIdForGroup;
        }
        synchronized (f5288a) {
            NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
            i = notificationPreferences.messageId().get();
            if (notificationPreferences.multiMode().get()) {
                i++;
                notificationPreferences.messageId().set(i);
                ((a0) RepositoryModule.getSummaryNotificationStorage()).a(str, i);
            }
        }
        return i;
    }

    public static void fireSummaryNotification(Notification notification) {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            return;
        }
        NotificationManager notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager();
        if (notificationManager == null || notification == null) {
            return;
        }
        Notification notificationBuild = Notification.Builder.recoverBuilder(applicationContext, notification).setChannelId(new f((NotificationManager) applicationContext.getSystemService("notification")).a()).build();
        notificationManager.notify(a(notificationBuild.getGroup()), notificationBuild);
    }

    public static int getNotificationIdForGroup(String str) {
        try {
            return ((a0) RepositoryModule.getSummaryNotificationStorage()).a(str);
        } catch (com.pushwoosh.c.a unused) {
            return -1;
        }
    }

    public static Notification getSummaryNotification(int i, String str, String str2) {
        SummaryNotificationFactory pushwooshSummaryNotificationFactory;
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            return null;
        }
        try {
            Class<?> cls = RepositoryModule.getNotificationPreferences().summaryNotificationFactoryClass().get();
            pushwooshSummaryNotificationFactory = cls != null ? (SummaryNotificationFactory) cls.newInstance() : new PushwooshSummaryNotificationFactory();
        } catch (Exception e) {
            PWLog.exception(e);
        }
        Notification notificationOnGenerateSummaryNotification = pushwooshSummaryNotificationFactory.onGenerateSummaryNotification(i, str, str2);
        if (notificationOnGenerateSummaryNotification == null) {
            return null;
        }
        int iA = a(str2);
        Intent notificationIntent = SummaryNotificationFactory.getNotificationIntent();
        notificationIntent.putExtra("group_id", iA);
        notificationIntent.putExtra(NotificationIntentHelper.EXTRA_IS_SUMMARY_NOTIFICATION, true);
        notificationOnGenerateSummaryNotification.extras.putBoolean(NotificationIntentHelper.EXTRA_IS_SUMMARY_NOTIFICATION, true);
        notificationOnGenerateSummaryNotification.contentIntent = PendingIntent.getActivity(applicationContext, iA, notificationIntent, PendingIntentUtils.addImmutableFlag(268435456));
        Intent intent = new Intent(AndroidPlatformModule.getApplicationContext(), (Class<?>) NotificationUpdateReceiver.class);
        intent.putExtra(NotificationIntentHelper.EXTRA_IS_SUMMARY_NOTIFICATION, true);
        intent.putExtra(NotificationIntentHelper.EXTRA_IS_DELETE_INTENT, true);
        intent.setAction(Long.toString(System.currentTimeMillis()));
        notificationOnGenerateSummaryNotification.deleteIntent = PendingIntent.getBroadcast(applicationContext, iA, intent, PendingIntentUtils.addImmutableFlag(268435456));
        return notificationOnGenerateSummaryNotification;
    }
}
