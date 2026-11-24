package com.pravera.flutter_foreground_task.service;

import android.app.ForegroundServiceStartNotAllowedException;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.util.Log;
import androidx.core.content.ContextCompat;
import com.pravera.flutter_foreground_task.models.ForegroundServiceAction;
import com.pravera.flutter_foreground_task.models.ForegroundServiceStatus;
import com.pravera.flutter_foreground_task.models.ForegroundTaskOptions;
import com.pravera.flutter_foreground_task.utils.ForegroundServiceUtils;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: RebootReceiver.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u0000 \u000b2\u00020\u0001:\u0001\u000bB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u001c\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH\u0016J\u0010\u0010\n\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0002¨\u0006\f"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/RebootReceiver;", "Landroid/content/BroadcastReceiver;", "<init>", "()V", "onReceive", "", "context", "Landroid/content/Context;", "intent", "Landroid/content/Intent;", "startForegroundService", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class RebootReceiver extends BroadcastReceiver {
    private static final String TAG = "RebootReceiver";

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (context == null || intent == null || ForegroundServiceUtils.INSTANCE.isSetStopWithTaskFlag(context) || ForegroundServiceStatus.INSTANCE.getData(context).isCorrectlyStopped()) {
            return;
        }
        ForegroundTaskOptions data = ForegroundTaskOptions.INSTANCE.getData(context);
        if ((Intrinsics.areEqual(intent.getAction(), "android.intent.action.BOOT_COMPLETED") || Intrinsics.areEqual(intent.getAction(), "android.intent.action.QUICKBOOT_POWERON")) && data.getAutoRunOnBoot()) {
            startForegroundService(context);
        } else if (Intrinsics.areEqual(intent.getAction(), "android.intent.action.MY_PACKAGE_REPLACED") && data.getAutoRunOnMyPackageReplaced()) {
            startForegroundService(context);
        }
    }

    private final void startForegroundService(Context context) {
        if (Build.VERSION.SDK_INT >= 31) {
            try {
                Intent intent = new Intent(context, (Class<?>) ForegroundService.class);
                ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.REBOOT);
                ContextCompat.startForegroundService(context, intent);
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
            Intent intent2 = new Intent(context, (Class<?>) ForegroundService.class);
            ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.REBOOT);
            ContextCompat.startForegroundService(context, intent2);
            Unit unit2 = Unit.INSTANCE;
        } catch (Exception e3) {
            Integer.valueOf(Log.e(TAG, e3.getMessage(), e3));
        }
    }
}
