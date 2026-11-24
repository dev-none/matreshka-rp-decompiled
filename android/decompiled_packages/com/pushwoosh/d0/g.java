package com.pushwoosh.d0;

import android.app.ActivityManager;
import android.app.KeyguardManager;
import android.content.res.Configuration;
import android.os.Build;
import android.os.PowerManager;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public abstract class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final a f5059a;
    public static final d b;

    static {
        f5059a = new a();
        b = new d();
        a aVar = new a();
        f5059a = aVar;
        d dVar = new d();
        b = dVar;
        dVar.b = aVar;
    }

    public static void a(i iVar) {
        b.a(iVar);
    }

    public static boolean b() {
        PowerManager powerManager;
        KeyguardManager keyguardManager = AndroidPlatformModule.getManagerProvider().getKeyguardManager();
        if (keyguardManager == null || keyguardManager.inKeyguardRestrictedInputMode() || (powerManager = AndroidPlatformModule.getManagerProvider().getPowerManager()) == null || !powerManager.isInteractive()) {
            return false;
        }
        ActivityManager activityManager = AndroidPlatformModule.getManagerProvider().getActivityManager();
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = activityManager == null ? null : activityManager.getRunningAppProcesses();
        if (runningAppProcesses == null) {
            return false;
        }
        String packageName = AndroidPlatformModule.getAppInfoProvider().getPackageName();
        for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
            if (runningAppProcessInfo.importance == 100 && runningAppProcessInfo.processName.equals(packageName)) {
                return true;
            }
        }
        return false;
    }

    public static boolean c() {
        Configuration configuration = AndroidPlatformModule.getResourceProvider().getConfiguration();
        return configuration != null && (configuration.screenLayout & 4) == 4;
    }

    public static String a() {
        String str = Build.MANUFACTURER;
        String str2 = Build.MODEL;
        if (str2.startsWith(str)) {
            if (str2.length() == 0) {
                return "";
            }
            char cCharAt = str2.charAt(0);
            if (Character.isUpperCase(cCharAt)) {
                return str2;
            }
            return Character.toUpperCase(cCharAt) + str2.substring(1);
        }
        StringBuilder sb = new StringBuilder();
        if (str == null || str.length() == 0) {
            str = "";
        } else {
            char cCharAt2 = str.charAt(0);
            if (!Character.isUpperCase(cCharAt2)) {
                str = Character.toUpperCase(cCharAt2) + str.substring(1);
            }
        }
        sb.append(str);
        sb.append(" ");
        sb.append(str2);
        return sb.toString();
    }
}
