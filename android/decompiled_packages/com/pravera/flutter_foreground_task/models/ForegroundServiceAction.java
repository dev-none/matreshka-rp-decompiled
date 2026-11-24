package com.pravera.flutter_foreground_task.models;

import kotlin.Metadata;

/* JADX INFO: compiled from: ForegroundServiceAction.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0007\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundServiceAction;", "", "<init>", "()V", "prefix", "", "API_START", "API_RESTART", "API_UPDATE", "API_STOP", "REBOOT", "RESTART", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class ForegroundServiceAction {
    public static final String API_RESTART = "com.pravera.flutter_foreground_task.action.api_restart";
    public static final String API_START = "com.pravera.flutter_foreground_task.action.api_start";
    public static final String API_STOP = "com.pravera.flutter_foreground_task.action.api_stop";
    public static final String API_UPDATE = "com.pravera.flutter_foreground_task.action.api_update";
    public static final ForegroundServiceAction INSTANCE = new ForegroundServiceAction();
    public static final String REBOOT = "com.pravera.flutter_foreground_task.action.reboot";
    public static final String RESTART = "com.pravera.flutter_foreground_task.action.restart";
    private static final String prefix = "com.pravera.flutter_foreground_task.action.";

    private ForegroundServiceAction() {
    }
}
