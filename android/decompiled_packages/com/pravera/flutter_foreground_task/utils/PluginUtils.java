package com.pravera.flutter_foreground_task.utils;

import android.app.Activity;
import android.app.ActivityManager;
import android.app.ActivityOptions;
import android.app.AlarmManager;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.PowerManager;
import android.provider.Settings;
import android.view.Window;
import androidx.core.app.NotificationCompat;
import com.pravera.flutter_foreground_task.errors.NotSupportedException;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: PluginUtils.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\u0018\u0000 \u00042\u00020\u0001:\u0001\u0004B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0005"}, d2 = {"Lcom/pravera/flutter_foreground_task/utils/PluginUtils;", "", "<init>", "()V", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class PluginUtils {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    /* JADX INFO: compiled from: PluginUtils.kt */
    @Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\b\n\u0002\b\u0006\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bJ\u0018\u0010\f\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\b\u0010\r\u001a\u0004\u0018\u00010\u000eJ\u0016\u0010\u000f\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\u0010\u001a\u00020\u0005J\u000e\u0010\u0011\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\u0012\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0016\u0010\u0013\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u0015J\u0016\u0010\u0016\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u0015J\u000e\u0010\u0017\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0016\u0010\u0018\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u0015J\u000e\u0010\u0019\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0016\u0010\u001a\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\u0014\u001a\u00020\u0015¨\u0006\u001b"}, d2 = {"Lcom/pravera/flutter_foreground_task/utils/PluginUtils$Companion;", "", "<init>", "()V", "isAppOnForeground", "", "context", "Landroid/content/Context;", "minimizeApp", "", "activity", "Landroid/app/Activity;", "launchApp", "route", "", "setOnLockScreenVisibility", "isVisible", "wakeUpScreen", "isIgnoringBatteryOptimizations", "openIgnoreBatteryOptimizationSettings", "requestCode", "", "requestIgnoreBatteryOptimization", "canDrawOverlays", "openSystemAlertWindowSettings", "canScheduleExactAlarms", "openAlarmsAndRemindersSettings", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final boolean isAppOnForeground(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            Object systemService = context.getSystemService("activity");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.ActivityManager");
            List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) systemService).getRunningAppProcesses();
            if (runningAppProcesses == null) {
                return false;
            }
            String packageName = context.getPackageName();
            for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
                if (runningAppProcessInfo.importance == 100 && runningAppProcessInfo.processName.equals(packageName)) {
                    return true;
                }
            }
            return false;
        }

        public final void minimizeApp(Activity activity) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            activity.moveTaskToBack(true);
        }

        public final void launchApp(Context context, String route) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intent launchIntentForPackage = context.getPackageManager().getLaunchIntentForPackage(context.getPackageName());
            if (launchIntentForPackage != null) {
                launchIntentForPackage.setFlags(268435456);
                if (route != null) {
                    launchIntentForPackage.putExtra("route", route);
                }
                if (Build.VERSION.SDK_INT >= 34) {
                    ActivityOptions activityOptionsMakeBasic = ActivityOptions.makeBasic();
                    activityOptionsMakeBasic.setPendingIntentBackgroundActivityStartMode(1);
                    context.startActivity(launchIntentForPackage, activityOptionsMakeBasic.toBundle());
                    return;
                }
                context.startActivity(launchIntentForPackage);
            }
        }

        public final void setOnLockScreenVisibility(Activity activity, boolean isVisible) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            if (Build.VERSION.SDK_INT >= 27) {
                activity.setShowWhenLocked(isVisible);
                return;
            }
            if (isVisible) {
                Window window = activity.getWindow();
                if (window != null) {
                    window.addFlags(524288);
                    return;
                }
                return;
            }
            Window window2 = activity.getWindow();
            if (window2 != null) {
                window2.clearFlags(524288);
            }
        }

        public final void wakeUpScreen(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            Object systemService = context.getSystemService("power");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.os.PowerManager");
            PowerManager.WakeLock wakeLockNewWakeLock = ((PowerManager) systemService).newWakeLock(805306378, "PluginUtils:WakeLock");
            wakeLockNewWakeLock.acquire(1000L);
            wakeLockNewWakeLock.release();
        }

        public final boolean isIgnoringBatteryOptimizations(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            Object systemService = context.getSystemService("power");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.os.PowerManager");
            return ((PowerManager) systemService).isIgnoringBatteryOptimizations(context.getPackageName());
        }

        public final void openIgnoreBatteryOptimizationSettings(Activity activity, int requestCode) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            activity.startActivityForResult(new Intent("android.settings.IGNORE_BATTERY_OPTIMIZATION_SETTINGS"), requestCode);
        }

        public final void requestIgnoreBatteryOptimization(Activity activity, int requestCode) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            activity.startActivityForResult(new Intent("android.settings.REQUEST_IGNORE_BATTERY_OPTIMIZATIONS", Uri.parse("package:" + activity.getPackageName())), requestCode);
        }

        public final boolean canDrawOverlays(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            return Settings.canDrawOverlays(context);
        }

        public final void openSystemAlertWindowSettings(Activity activity, int requestCode) {
            Intrinsics.checkNotNullParameter(activity, "activity");
            activity.startActivityForResult(new Intent("android.settings.action.MANAGE_OVERLAY_PERMISSION", Uri.parse("package:" + activity.getPackageName())), requestCode);
        }

        public final boolean canScheduleExactAlarms(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            if (Build.VERSION.SDK_INT < 31) {
                return true;
            }
            Object systemService = context.getSystemService(NotificationCompat.CATEGORY_ALARM);
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.AlarmManager");
            return ((AlarmManager) systemService).canScheduleExactAlarms();
        }

        public final void openAlarmsAndRemindersSettings(Activity activity, int requestCode) throws NotSupportedException {
            Intrinsics.checkNotNullParameter(activity, "activity");
            if (Build.VERSION.SDK_INT >= 31) {
                activity.startActivityForResult(new Intent("android.settings.REQUEST_SCHEDULE_EXACT_ALARM", Uri.parse("package:" + activity.getPackageName())), requestCode);
                return;
            }
            throw new NotSupportedException("only supports Android 12.0+");
        }
    }
}
