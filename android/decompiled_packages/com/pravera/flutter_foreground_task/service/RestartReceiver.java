package com.pravera.flutter_foreground_task.service;

import android.app.ActivityManager;
import android.app.AlarmManager;
import android.app.ForegroundServiceStartNotAllowedException;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.util.Log;
import androidx.core.app.NotificationCompat;
import androidx.core.content.ContextCompat;
import androidx.media3.common.C;
import com.pravera.flutter_foreground_task.models.ForegroundServiceAction;
import com.pravera.flutter_foreground_task.models.ForegroundServiceStatus;
import com.pravera.flutter_foreground_task.utils.PluginUtils;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RestartReceiver.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \n2\u00020\u0001:\u0001\nB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH\u0016¨\u0006\u000b"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/RestartReceiver;", "Landroid/content/BroadcastReceiver;", "<init>", "()V", "onReceive", "", "context", "Landroid/content/Context;", "intent", "Landroid/content/Intent;", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class RestartReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String TAG = "RestartReceiver";

    /* JADX INFO: compiled from: RestartReceiver.kt */
    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\fJ\u000e\u0010\r\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nR\u0016\u0010\u0004\u001a\n \u0006*\u0004\u0018\u00010\u00050\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/RestartReceiver$Companion;", "", "<init>", "()V", "TAG", "", "kotlin.jvm.PlatformType", "setRestartAlarm", "", "context", "Landroid/content/Context;", "millis", "", "cancelRestartAlarm", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final void setRestartAlarm(Context context, int millis) {
            Intrinsics.checkNotNullParameter(context, "context");
            long jCurrentTimeMillis = System.currentTimeMillis() + ((long) millis);
            PendingIntent broadcast = PendingIntent.getBroadcast(context, 300, new Intent(context, (Class<?>) RestartReceiver.class), Build.VERSION.SDK_INT >= 31 ? 167772160 : C.BUFFER_FLAG_FIRST_SAMPLE);
            Object systemService = context.getSystemService(NotificationCompat.CATEGORY_ALARM);
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.AlarmManager");
            AlarmManager alarmManager = (AlarmManager) systemService;
            if (Build.VERSION.SDK_INT >= 31 && PluginUtils.INSTANCE.canScheduleExactAlarms(context)) {
                alarmManager.setAlarmClock(new AlarmManager.AlarmClockInfo(jCurrentTimeMillis, broadcast), broadcast);
            } else {
                alarmManager.set(0, jCurrentTimeMillis, broadcast);
            }
        }

        public final void cancelRestartAlarm(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            PendingIntent broadcast = PendingIntent.getBroadcast(context, 300, new Intent(context, (Class<?>) RestartReceiver.class), Build.VERSION.SDK_INT >= 31 ? 301989888 : 268435456);
            Object systemService = context.getSystemService(NotificationCompat.CATEGORY_ALARM);
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.AlarmManager");
            ((AlarmManager) systemService).cancel(broadcast);
        }
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (context == null || ForegroundServiceStatus.INSTANCE.getData(context).isCorrectlyStopped()) {
            return;
        }
        Object systemService = context.getSystemService("activity");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.ActivityManager");
        List<ActivityManager.RunningServiceInfo> runningServices = ((ActivityManager) systemService).getRunningServices(Integer.MAX_VALUE);
        Intrinsics.checkNotNullExpressionValue(runningServices, "getRunningServices(...)");
        List<ActivityManager.RunningServiceInfo> list = runningServices;
        if (!(list instanceof Collection) || !list.isEmpty()) {
            Iterator<T> it = list.iterator();
            while (it.hasNext()) {
                if (Intrinsics.areEqual(((ActivityManager.RunningServiceInfo) it.next()).service.getClassName(), ForegroundService.class.getName())) {
                    return;
                }
            }
        }
        boolean zIsIgnoringBatteryOptimizations = PluginUtils.INSTANCE.isIgnoringBatteryOptimizations(context);
        if (Build.VERSION.SDK_INT >= 31 && !zIsIgnoringBatteryOptimizations) {
            Log.w(TAG, "Turn off battery optimization to restart service in the background.");
        }
        if (Build.VERSION.SDK_INT >= 31) {
            try {
                Intent intent2 = new Intent(context, (Class<?>) ForegroundService.class);
                ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.RESTART);
                ContextCompat.startForegroundService(context, intent2);
                Unit unit = Unit.INSTANCE;
                return;
            } catch (ForegroundServiceStartNotAllowedException e) {
                Integer.valueOf(Log.e(TAG, "Foreground service start not allowed exception: " + e.getMessage()));
                return;
            } catch (Exception e2) {
                Integer.valueOf(Log.e(TAG, e2.getMessage(), e2));
                return;
            }
        }
        try {
            Intent intent3 = new Intent(context, (Class<?>) ForegroundService.class);
            ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.RESTART);
            ContextCompat.startForegroundService(context, intent3);
            Unit unit2 = Unit.INSTANCE;
        } catch (Exception e3) {
            Integer.valueOf(Log.e(TAG, e3.getMessage(), e3));
        }
    }
}
