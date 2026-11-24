package com.pushwoosh.notification;

import android.app.Notification;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.Html;
import android.text.TextUtils;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public abstract class NotificationFactory {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f5279a;
    private final com.pushwoosh.i0.b b;

    public NotificationFactory() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        this.f5279a = applicationContext;
        this.b = new com.pushwoosh.i0.b(applicationContext);
    }

    protected final void addCancel(Notification notification) {
        notification.flags |= 16;
    }

    protected String addChannel(PushMessage pushMessage) {
        String str;
        String notificationChannel = PushBundleDataProvider.getNotificationChannel(pushMessage.toBundle());
        if (notificationChannel == null) {
            notificationChannel = RepositoryModule.getNotificationPreferences().channelName().get();
        }
        com.pushwoosh.i0.b bVar = this.b;
        String strChannelName = channelName(notificationChannel);
        String strChannelDescription = channelDescription(notificationChannel);
        bVar.getClass();
        String notificationChannel2 = PushBundleDataProvider.getNotificationChannel(pushMessage.toBundle());
        if (notificationChannel2 == null) {
            notificationChannel2 = RepositoryModule.getNotificationPreferences().channelName().get();
        }
        if (notificationChannel2.contains(" ") || !notificationChannel2.startsWith("pushwoosh_")) {
            str = "pushwoosh_" + notificationChannel2.trim().replaceAll("\\s+", "_").toLowerCase();
        } else {
            str = notificationChannel2;
        }
        if (TextUtils.isEmpty(strChannelName)) {
            strChannelName = notificationChannel2;
        }
        bVar.f5097a.a(str, strChannelName, strChannelDescription, pushMessage);
        return str;
    }

    protected final void addLED(Notification notification, Integer num, int i, int i2) {
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        boolean z = notificationPreferences.ledEnabled().get();
        int iIntValue = notificationPreferences.ledColor().get();
        if (z || num != null) {
            com.pushwoosh.i0.b bVar = this.b;
            if (num != null) {
                iIntValue = num.intValue();
            }
            bVar.f5097a.a(notification, iIntValue, i, i2);
        }
    }

    protected final void addSound(Notification notification, String str) {
        Uri soundUri = NotificationUtils.getSoundUri(str);
        if (soundUri != null) {
            this.b.f5097a.a(notification, soundUri, str == null);
        }
    }

    protected final void addVibration(Notification notification, boolean z) {
        this.b.f5097a.a(notification, RepositoryModule.getNotificationPreferences().vibrateType().get(), z);
    }

    public String channelDescription(String str) {
        return "";
    }

    public String channelName(String str) {
        return str;
    }

    protected final Context getApplicationContext() {
        return this.f5279a;
    }

    protected final CharSequence getContentFromHtml(String str) {
        return TextUtils.isEmpty(str) ? str : Html.fromHtml(str);
    }

    public Intent getNotificationIntent(PushMessage pushMessage) {
        Intent intent = new Intent(this.f5279a, (Class<?>) NotificationOpenActivity.class);
        intent.putExtra(NotificationIntentHelper.EXTRA_NOTIFICATION_BUNDLE, pushMessage.toBundle());
        intent.setAction(Long.toString(System.currentTimeMillis()));
        return intent;
    }

    public abstract Notification onGenerateNotification(PushMessage pushMessage);
}
