package com.pushwoosh.notification;

import android.content.Context;
import com.pushwoosh.PushwooshInitializer;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshNotificationSettings {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final NotificationPrefs f5284a = RepositoryModule.getNotificationPreferences();

    private static boolean a() {
        if (f5284a != null) {
            return true;
        }
        PushwooshPlatform.notifyNotInitialized();
        return false;
    }

    public static boolean areNotificationsEnabled() {
        return a() && NotificationUtils.areNotificationsEnabled() && f5284a.notificationEnabled().get();
    }

    public static void enableNotifications(boolean z) {
        if (a()) {
            f5284a.notificationEnabled().set(z);
        }
    }

    public static void lazyInitPushwoosh(Context context) {
        PushwooshInitializer.a(context, true);
    }

    public static void setColorLED(int i) {
        if (a()) {
            f5284a.ledColor().set(i);
        }
    }

    public static void setEnableLED(boolean z) {
        if (a()) {
            f5284a.ledEnabled().set(z);
        }
    }

    public static void setLightScreenOnNotification(boolean z) {
        if (a()) {
            f5284a.lightScreenOn().set(z);
        }
    }

    public static void setMultiNotificationMode(boolean z) {
        if (a()) {
            f5284a.multiMode().set(z);
        }
    }

    public static void setNotificationChannelName(String str) {
        if (a()) {
            f5284a.channelName().set(str);
        }
    }

    public static void setNotificationIconBackgroundColor(int i) {
        if (a()) {
            f5284a.iconBackgroundColor().set(i);
        }
    }

    public static void setSoundNotificationType(SoundType soundType) {
        if (a()) {
            f5284a.soundType().set(soundType);
        }
    }

    public static void setVibrateNotificationType(VibrateType vibrateType) {
        if (a()) {
            f5284a.vibrateType().set(vibrateType);
        }
    }
}
