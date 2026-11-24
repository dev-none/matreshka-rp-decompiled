package com.pravera.flutter_foreground_task.service;

import kotlin.Metadata;

/* JADX INFO: compiled from: ServiceProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H&J\b\u0010\u0004\u001a\u00020\u0005H&¨\u0006\u0006À\u0006\u0003"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/ServiceProvider;", "", "getNotificationPermissionManager", "Lcom/pravera/flutter_foreground_task/service/NotificationPermissionManager;", "getForegroundServiceManager", "Lcom/pravera/flutter_foreground_task/service/ForegroundServiceManager;", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public interface ServiceProvider {
    ForegroundServiceManager getForegroundServiceManager();

    NotificationPermissionManager getNotificationPermissionManager();
}
