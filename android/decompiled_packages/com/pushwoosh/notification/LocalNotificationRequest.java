package com.pushwoosh.notification;

import android.app.NotificationManager;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.m0.d;
import com.pushwoosh.m0.k;
import com.pushwoosh.repository.RepositoryModule;
import java.io.Serializable;

/* JADX INFO: loaded from: classes6.dex */
public class LocalNotificationRequest implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5278a;

    public LocalNotificationRequest(int i) {
        this.f5278a = i;
    }

    public void cancel() {
        unschedule();
        k localNotificationStorage = RepositoryModule.getLocalNotificationStorage();
        if (localNotificationStorage == null) {
            return;
        }
        int i = this.f5278a;
        d dVarA = localNotificationStorage.f5250a.a(Integer.toString(i));
        if (dVarA == null) {
            PWLog.noise("local notification not found");
            dVarA = null;
        } else {
            localNotificationStorage.f5250a.b("localNotificationShown", i);
        }
        if (dVarA != null) {
            int i2 = dVarA.b;
            String str = dVarA.c;
            NotificationManager notificationManager = AndroidPlatformModule.getManagerProvider().getNotificationManager();
            if (notificationManager == null) {
                return;
            }
            notificationManager.cancel(str, i2);
        }
    }

    public int getRequestId() {
        return this.f5278a;
    }

    public void unschedule() {
        LocalNotificationReceiver.cancelNotification(this.f5278a);
    }
}
