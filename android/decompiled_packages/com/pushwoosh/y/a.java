package com.pushwoosh.y;

import android.app.ActivityManager;
import android.app.AlarmManager;
import android.app.KeyguardManager;
import android.app.NotificationManager;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.res.AssetManager;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.os.PowerManager;
import android.telephony.TelephonyManager;
import android.view.WindowManager;
import androidx.core.app.NotificationCompat;
import com.pushwoosh.internal.platform.manager.ManagerProvider;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements ManagerProvider {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final WeakReference f5325a;

    public a(Context context) {
        this.f5325a = new WeakReference(context);
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final ActivityManager getActivityManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (ActivityManager) ((Context) this.f5325a.get()).getSystemService("activity");
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final AlarmManager getAlarmManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (AlarmManager) ((Context) this.f5325a.get()).getSystemService(NotificationCompat.CATEGORY_ALARM);
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final AssetManager getAssets() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return ((Context) this.f5325a.get()).getAssets();
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final AudioManager getAudioManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (AudioManager) ((Context) this.f5325a.get()).getSystemService("audio");
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final ConnectivityManager getConnectivityManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (ConnectivityManager) ((Context) this.f5325a.get()).getSystemService("connectivity");
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final KeyguardManager getKeyguardManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (KeyguardManager) ((Context) this.f5325a.get()).getSystemService("keyguard");
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final NotificationManager getNotificationManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (NotificationManager) ((Context) this.f5325a.get()).getSystemService("notification");
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final PackageManager getPackageManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return ((Context) this.f5325a.get()).getPackageManager();
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final PowerManager getPowerManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (PowerManager) ((Context) this.f5325a.get()).getSystemService("power");
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final TelephonyManager getTelephonyManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (TelephonyManager) ((Context) this.f5325a.get()).getSystemService("phone");
    }

    @Override // com.pushwoosh.internal.platform.manager.ManagerProvider
    public final WindowManager getWindowManager() {
        if (((Context) this.f5325a.get()) == null) {
            return null;
        }
        return (WindowManager) ((Context) this.f5325a.get()).getSystemService("window");
    }
}
