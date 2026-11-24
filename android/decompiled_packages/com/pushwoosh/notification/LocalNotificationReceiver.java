package com.pushwoosh.notification;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import androidx.core.app.NotificationCompat;
import androidx.media3.common.C;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.PendingIntentUtils;
import com.pushwoosh.m0.d;
import com.pushwoosh.m0.k;
import com.pushwoosh.repository.RepositoryModule;
import java.util.Iterator;

/* JADX INFO: loaded from: classes6.dex */
public class LocalNotificationReceiver extends BroadcastReceiver {
    public static final String EXTRA_NOTIFICATION_ID = "local_push_id";
    public static final String TAG = "LocalNotificationReceiver";
    public static final int WEEK = 604800000;

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(Bundle bundle) {
        PushwooshPlatform.getInstance().notificationService().handleMessage(bundle);
    }

    public static void cancelAll() {
        Iterator it = RepositoryModule.getLocalNotificationStorage().f5250a.a().iterator();
        while (it.hasNext()) {
            try {
                cancelNotification(((Integer) it.next()).intValue());
            } catch (Exception e) {
                PWLog.exception(e);
            }
        }
    }

    public static void cancelNotification(int i) {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error(TAG, AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            return;
        }
        k localNotificationStorage = RepositoryModule.getLocalNotificationStorage();
        if (localNotificationStorage == null) {
            PWLog.error(TAG, "Local notification storage is not initialized, skipping cancel");
            return;
        }
        localNotificationStorage.a(i);
        PendingIntent broadcast = PendingIntent.getBroadcast(applicationContext, i, new Intent(applicationContext, (Class<?>) LocalNotificationReceiver.class), PendingIntentUtils.addImmutableFlag(C.BUFFER_FLAG_FIRST_SAMPLE));
        AlarmManager alarmManager = (AlarmManager) applicationContext.getSystemService(NotificationCompat.CATEGORY_ALARM);
        if (alarmManager != null) {
            alarmManager.cancel(broadcast);
        }
    }

    public static void rescheduleNotification(d dVar, long j) {
        try {
            Context applicationContext = AndroidPlatformModule.getApplicationContext();
            if (applicationContext == null) {
                PWLog.error(TAG, AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
                return;
            }
            long j2 = dVar.d;
            if (j - j2 >= 604800000) {
                RepositoryModule.getLocalNotificationStorage().a(dVar.f5246a);
                return;
            }
            int i = dVar.f5246a;
            long jMax = Math.max(5000L, j2 - j) + j;
            Bundle bundle = dVar.e;
            Intent intent = new Intent(applicationContext, (Class<?>) LocalNotificationReceiver.class);
            intent.putExtras(bundle);
            intent.putExtra(EXTRA_NOTIFICATION_ID, String.valueOf(i));
            PendingIntent broadcast = PendingIntent.getBroadcast(applicationContext, i, intent, PendingIntentUtils.addImmutableFlag(C.BUFFER_FLAG_FIRST_SAMPLE));
            try {
                AlarmManager alarmManager = AndroidPlatformModule.getManagerProvider().getAlarmManager();
                if (alarmManager == null) {
                    return;
                }
                alarmManager.set(0, jMax, broadcast);
            } catch (SecurityException unused) {
                PWLog.error(TAG, "Too many alarms. Please clear all local alarm to continue use AlarmManager. Local notification will be skipped");
            }
        } catch (Exception e) {
            PWLog.error(TAG, "Creation of local notification failed.", e);
        }
    }

    public static int scheduleNotification(Bundle bundle, int i) {
        try {
            Context applicationContext = AndroidPlatformModule.getApplicationContext();
            if (applicationContext == null) {
                PWLog.error(TAG, AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
                return -1;
            }
            k localNotificationStorage = RepositoryModule.getLocalNotificationStorage();
            long jCurrentTimeMillis = System.currentTimeMillis() + (((long) i) * 1000);
            int iB = localNotificationStorage.f5250a.b();
            Intent intent = new Intent(applicationContext, (Class<?>) LocalNotificationReceiver.class);
            intent.putExtras(bundle);
            intent.putExtra(EXTRA_NOTIFICATION_ID, String.valueOf(iB));
            PendingIntent broadcast = PendingIntent.getBroadcast(applicationContext, iB, intent, PendingIntentUtils.addImmutableFlag(C.BUFFER_FLAG_FIRST_SAMPLE));
            Bundle extras = intent.getExtras();
            PWLog.noise("LocalNotificationStorage", "Saved local push: " + extras.toString());
            try {
                localNotificationStorage.f5250a.c(new d(iB, 0, "", jCurrentTimeMillis, extras));
            } catch (Exception e) {
                PWLog.exception(e);
            }
            try {
                AlarmManager alarmManager = AndroidPlatformModule.getManagerProvider().getAlarmManager();
                if (alarmManager != null) {
                    alarmManager.set(0, jCurrentTimeMillis, broadcast);
                    return iB;
                }
            } catch (SecurityException unused) {
                PWLog.error(TAG, "Too many alarms. Please clear all local alarm to continue use AlarmManager. Local notification will be skipped");
            }
            return -1;
        } catch (Exception e2) {
            PWLog.error(TAG, "Creation of local notification failed.", e2);
            return -1;
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (intent == null) {
            return;
        }
        try {
            final Bundle extras = intent.getExtras();
            if (extras == null) {
                return;
            }
            k localNotificationStorage = RepositoryModule.getLocalNotificationStorage();
            String string = extras.getString(EXTRA_NOTIFICATION_ID);
            if (string == null) {
                PWLog.warn(TAG, "local notification without local_push_id");
            } else {
                localNotificationStorage.a(Integer.parseInt(string));
                BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.notification.LocalNotificationReceiver$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        LocalNotificationReceiver.a(extras);
                    }
                });
            }
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }

    public static LocalNotificationRequest scheduleNotification(LocalNotification localNotification) {
        return new LocalNotificationRequest(scheduleNotification(localNotification.b(), localNotification.a()));
    }
}
