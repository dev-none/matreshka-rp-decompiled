package com.pravera.flutter_foreground_task.service;

import android.content.Context;
import android.content.Intent;
import androidx.core.content.ContextCompat;
import androidx.media3.extractor.text.ttml.TtmlNode;
import com.pravera.flutter_foreground_task.errors.ServiceAlreadyStartedException;
import com.pravera.flutter_foreground_task.errors.ServiceNotStartedException;
import com.pravera.flutter_foreground_task.models.ForegroundServiceAction;
import com.pravera.flutter_foreground_task.models.ForegroundServiceStatus;
import com.pravera.flutter_foreground_task.models.ForegroundServiceTypes;
import com.pravera.flutter_foreground_task.models.ForegroundTaskData;
import com.pravera.flutter_foreground_task.models.ForegroundTaskOptions;
import com.pravera.flutter_foreground_task.models.NotificationContent;
import com.pravera.flutter_foreground_task.models.NotificationOptions;
import com.tekartik.sqflite.Constant;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ForegroundServiceManager.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\u0001J\u000e\u0010\t\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0018\u0010\n\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\u0001J\u000e\u0010\u000b\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0010\u0010\f\u001a\u00020\u00052\b\u0010\r\u001a\u0004\u0018\u00010\u0001J\u0006\u0010\u000e\u001a\u00020\u000f¨\u0006\u0010"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/ForegroundServiceManager;", "", "<init>", "()V", TtmlNode.START, "", "context", "Landroid/content/Context;", Constant.PARAM_SQL_ARGUMENTS, "restart", Constant.METHOD_UPDATE, "stop", "sendData", "data", "isRunningService", "", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class ForegroundServiceManager {
    public final void start(Context context, Object arguments) throws ServiceAlreadyStartedException {
        Intrinsics.checkNotNullParameter(context, "context");
        if (isRunningService()) {
            throw new ServiceAlreadyStartedException();
        }
        Intent intent = new Intent(context, (Class<?>) ForegroundService.class);
        Map<?, ?> map = arguments instanceof Map ? (Map) arguments : null;
        ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.API_START);
        ForegroundServiceTypes.INSTANCE.setData(context, map);
        NotificationOptions.INSTANCE.setData(context, map);
        ForegroundTaskOptions.INSTANCE.setData(context, map);
        ForegroundTaskData.INSTANCE.setData(context, map);
        NotificationContent.INSTANCE.setData(context, map);
        ContextCompat.startForegroundService(context, intent);
    }

    public final void restart(Context context) throws ServiceNotStartedException {
        Intrinsics.checkNotNullParameter(context, "context");
        if (!isRunningService()) {
            throw new ServiceNotStartedException();
        }
        Intent intent = new Intent(context, (Class<?>) ForegroundService.class);
        ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.API_RESTART);
        ContextCompat.startForegroundService(context, intent);
    }

    public final void update(Context context, Object arguments) throws ServiceNotStartedException {
        Intrinsics.checkNotNullParameter(context, "context");
        if (!isRunningService()) {
            throw new ServiceNotStartedException();
        }
        Intent intent = new Intent(context, (Class<?>) ForegroundService.class);
        Map<?, ?> map = arguments instanceof Map ? (Map) arguments : null;
        ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.API_UPDATE);
        ForegroundTaskOptions.INSTANCE.updateData(context, map);
        ForegroundTaskData.INSTANCE.updateData(context, map);
        NotificationContent.INSTANCE.updateData(context, map);
        context.startService(intent);
    }

    public final void stop(Context context) throws ServiceNotStartedException {
        Intrinsics.checkNotNullParameter(context, "context");
        if (!isRunningService()) {
            throw new ServiceNotStartedException();
        }
        Intent intent = new Intent(context, (Class<?>) ForegroundService.class);
        ForegroundServiceStatus.INSTANCE.setData(context, ForegroundServiceAction.API_STOP);
        ForegroundServiceTypes.INSTANCE.clearData(context);
        NotificationOptions.INSTANCE.clearData(context);
        ForegroundTaskOptions.INSTANCE.clearData(context);
        ForegroundTaskData.INSTANCE.clearData(context);
        NotificationContent.INSTANCE.clearData(context);
        context.startService(intent);
    }

    public final void sendData(Object data) {
        if (data != null) {
            ForegroundService.INSTANCE.sendData(data);
        }
    }

    public final boolean isRunningService() {
        return ForegroundService.INSTANCE.isRunningServiceState().getValue().booleanValue();
    }
}
