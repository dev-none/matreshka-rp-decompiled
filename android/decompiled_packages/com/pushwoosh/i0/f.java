package com.pushwoosh.i0;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.media.AudioAttributes;
import android.net.Uri;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.VibrateType;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public final class f implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final NotificationManager f5098a;

    public f(NotificationManager notificationManager) {
        this.f5098a = notificationManager;
    }

    @Override // com.pushwoosh.i0.d
    public final void a(Notification notification, int i, int i2, int i3) {
    }

    @Override // com.pushwoosh.i0.d
    public final void a(Notification notification, Uri uri, boolean z) {
    }

    @Override // com.pushwoosh.i0.d
    public final void a(Notification notification, VibrateType vibrateType, boolean z) {
    }

    @Override // com.pushwoosh.i0.d
    public final void a(String str, String str2, String str3, PushMessage pushMessage) {
        Uri soundUri;
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        int iIntValue = notificationPreferences.ledColor().get();
        notificationPreferences.vibrateType().get().equals(VibrateType.NO_VIBRATE);
        boolean z = notificationPreferences.lightScreenOn().get();
        if (pushMessage.getLed() != null) {
            iIntValue = pushMessage.getLed().intValue();
            z = true;
        }
        if (pushMessage.getSound() == null || (soundUri = NotificationUtils.getSoundUri(pushMessage.getSound())) == null) {
            soundUri = null;
        }
        int priority = pushMessage.getPriority();
        int i = 2;
        if (priority != -2 && priority != -1) {
            if (priority != 0) {
                i = (priority == 1 || priority == 2) ? 4 : -1000;
            } else {
                i = 3;
            }
        }
        boolean vibration = pushMessage.getVibration();
        NotificationManager notificationManager = this.f5098a;
        NotificationChannel notificationChannel = new NotificationChannel(str, str2, i);
        if (vibration) {
            if (NotificationUtils.phoneHaveVibratePermission()) {
                notificationChannel.enableVibration(true);
                notificationChannel.setVibrationPattern(a.f5096a);
            }
        } else {
            notificationChannel.enableVibration(false);
            notificationChannel.setVibrationPattern(null);
        }
        notificationChannel.enableLights(z);
        notificationChannel.setLightColor(iIntValue);
        if (soundUri != null) {
            notificationChannel.setSound(soundUri, new AudioAttributes.Builder().setUsage(5).setContentType(4).build());
        }
        notificationChannel.setDescription(str3);
        notificationManager.createNotificationChannel(notificationChannel);
    }

    @Override // com.pushwoosh.i0.d
    public final String a() {
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        int i = notificationPreferences.ledColor().get();
        boolean zEquals = notificationPreferences.vibrateType().get().equals(VibrateType.NO_VIBRATE);
        boolean z = notificationPreferences.lightScreenOn().get();
        NotificationChannel notificationChannel = new NotificationChannel(NotificationPrefs.DEFAULT_GROUP_CHANNEL_ID, NotificationPrefs.DEFAULT_GROUP_CHANNEL_NAME, 3);
        if (!zEquals) {
            if (NotificationUtils.phoneHaveVibratePermission()) {
                notificationChannel.enableVibration(true);
                notificationChannel.setVibrationPattern(a.f5096a);
            }
        } else {
            notificationChannel.enableVibration(false);
            notificationChannel.setVibrationPattern(null);
        }
        notificationChannel.enableLights(z);
        notificationChannel.setLightColor(i);
        notificationChannel.setDescription("");
        notificationChannel.setSound(null, null);
        notificationChannel.enableVibration(false);
        this.f5098a.createNotificationChannel(notificationChannel);
        return NotificationPrefs.DEFAULT_GROUP_CHANNEL_ID;
    }
}
