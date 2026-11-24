package com.pravera.flutter_foreground_task.service;

import com.pravera.flutter_foreground_task.models.NotificationPermission;
import io.sentry.SentryEvent;
import kotlin.Metadata;

/* JADX INFO: compiled from: NotificationPermissionCallback.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0010\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H&J\u0014\u0010\u0006\u001a\u00020\u00032\n\u0010\u0007\u001a\u00060\bj\u0002`\tH&¨\u0006\nÀ\u0006\u0003"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/NotificationPermissionCallback;", "", "onResult", "", "permissionStatus", "Lcom/pravera/flutter_foreground_task/models/NotificationPermission;", "onError", SentryEvent.JsonKeys.EXCEPTION, "Ljava/lang/Exception;", "Lkotlin/Exception;", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public interface NotificationPermissionCallback {
    void onError(Exception exception);

    void onResult(NotificationPermission permissionStatus);
}
