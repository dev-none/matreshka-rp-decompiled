package com.pravera.flutter_foreground_task;

import io.flutter.embedding.engine.FlutterEngine;
import kotlin.Metadata;

/* JADX INFO: compiled from: FlutterForegroundTaskLifecycleListener.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\bf\u0018\u00002\u00020\u0001J\u0012\u0010\u0002\u001a\u00020\u00032\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005H&J\u0010\u0010\u0006\u001a\u00020\u00032\u0006\u0010\u0007\u001a\u00020\bH&J\b\u0010\t\u001a\u00020\u0003H&J\b\u0010\n\u001a\u00020\u0003H&J\b\u0010\u000b\u001a\u00020\u0003H&¨\u0006\fÀ\u0006\u0003"}, d2 = {"Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskLifecycleListener;", "", "onEngineCreate", "", "flutterEngine", "Lio/flutter/embedding/engine/FlutterEngine;", "onTaskStart", "starter", "Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskStarter;", "onTaskRepeatEvent", "onTaskDestroy", "onEngineWillDestroy", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public interface FlutterForegroundTaskLifecycleListener {
    void onEngineCreate(FlutterEngine flutterEngine);

    void onEngineWillDestroy();

    void onTaskDestroy();

    void onTaskRepeatEvent();

    void onTaskStart(FlutterForegroundTaskStarter starter);
}
