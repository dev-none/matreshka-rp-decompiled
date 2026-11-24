package com.pravera.flutter_foreground_task;

import kotlin.Metadata;

/* JADX INFO: compiled from: RequestCode.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\b\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lcom/pravera/flutter_foreground_task/RequestCode;", "", "<init>", "()V", "REQUEST_NOTIFICATION_PERMISSION", "", "REQUEST_IGNORE_BATTERY_OPTIMIZATION", "OPEN_IGNORE_BATTERY_OPTIMIZATION_SETTINGS", "OPEN_SYSTEM_ALERT_WINDOW_SETTINGS", "OPEN_ALARMS_AND_REMINDER_SETTINGS", "SET_RESTART_SERVICE_ALARM", "NOTIFICATION_PRESSED", "NOTIFICATION_DISMISSED", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class RequestCode {
    public static final RequestCode INSTANCE = new RequestCode();
    public static final int NOTIFICATION_DISMISSED = 302;
    public static final int NOTIFICATION_PRESSED = 301;
    public static final int OPEN_ALARMS_AND_REMINDER_SETTINGS = 203;
    public static final int OPEN_IGNORE_BATTERY_OPTIMIZATION_SETTINGS = 201;
    public static final int OPEN_SYSTEM_ALERT_WINDOW_SETTINGS = 202;
    public static final int REQUEST_IGNORE_BATTERY_OPTIMIZATION = 200;
    public static final int REQUEST_NOTIFICATION_PERMISSION = 100;
    public static final int SET_RESTART_SERVICE_ALARM = 300;

    private RequestCode() {
    }
}
