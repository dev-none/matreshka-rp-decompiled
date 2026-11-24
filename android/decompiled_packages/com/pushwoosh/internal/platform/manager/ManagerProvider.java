package com.pushwoosh.internal.platform.manager;

import android.app.ActivityManager;
import android.app.AlarmManager;
import android.app.KeyguardManager;
import android.app.NotificationManager;
import android.content.pm.PackageManager;
import android.content.res.AssetManager;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.os.PowerManager;
import android.telephony.TelephonyManager;
import android.view.WindowManager;

/* JADX INFO: loaded from: classes6.dex */
public interface ManagerProvider {
    ActivityManager getActivityManager();

    AlarmManager getAlarmManager();

    AssetManager getAssets();

    AudioManager getAudioManager();

    ConnectivityManager getConnectivityManager();

    KeyguardManager getKeyguardManager();

    NotificationManager getNotificationManager();

    PackageManager getPackageManager();

    PowerManager getPowerManager();

    TelephonyManager getTelephonyManager();

    WindowManager getWindowManager();
}
