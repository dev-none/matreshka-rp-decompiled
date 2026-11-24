package com.pravera.flutter_foreground_task.service;

import com.google.android.gms.common.internal.ServiceSpecificExtraArgs;
import com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener;
import com.pravera.flutter_foreground_task.FlutterForegroundTaskStarter;
import io.flutter.embedding.engine.FlutterEngine;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ForegroundTaskLifecycleListeners.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010!\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0001J\u000e\u0010\t\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\u0001J\u0012\u0010\n\u001a\u00020\u00072\b\u0010\u000b\u001a\u0004\u0018\u00010\fH\u0016J\u0010\u0010\r\u001a\u00020\u00072\u0006\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u0007H\u0016J\b\u0010\u0011\u001a\u00020\u0007H\u0016J\b\u0010\u0012\u001a\u00020\u0007H\u0016R\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00010\u0005X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/ForegroundTaskLifecycleListeners;", "Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskLifecycleListener;", "<init>", "()V", "listeners", "", "addListener", "", ServiceSpecificExtraArgs.CastExtraArgs.LISTENER, "removeListener", "onEngineCreate", "flutterEngine", "Lio/flutter/embedding/engine/FlutterEngine;", "onTaskStart", "starter", "Lcom/pravera/flutter_foreground_task/FlutterForegroundTaskStarter;", "onTaskRepeatEvent", "onTaskDestroy", "onEngineWillDestroy", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class ForegroundTaskLifecycleListeners implements FlutterForegroundTaskLifecycleListener {
    private List<FlutterForegroundTaskLifecycleListener> listeners = new ArrayList();

    public final void addListener(FlutterForegroundTaskLifecycleListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        if (this.listeners.contains(listener)) {
            return;
        }
        this.listeners.add(listener);
    }

    public final void removeListener(FlutterForegroundTaskLifecycleListener listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        this.listeners.remove(listener);
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener
    public void onEngineCreate(FlutterEngine flutterEngine) {
        Iterator<FlutterForegroundTaskLifecycleListener> it = this.listeners.iterator();
        while (it.hasNext()) {
            it.next().onEngineCreate(flutterEngine);
        }
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener
    public void onTaskStart(FlutterForegroundTaskStarter starter) {
        Intrinsics.checkNotNullParameter(starter, "starter");
        Iterator<FlutterForegroundTaskLifecycleListener> it = this.listeners.iterator();
        while (it.hasNext()) {
            it.next().onTaskStart(starter);
        }
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener
    public void onTaskRepeatEvent() {
        Iterator<FlutterForegroundTaskLifecycleListener> it = this.listeners.iterator();
        while (it.hasNext()) {
            it.next().onTaskRepeatEvent();
        }
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener
    public void onTaskDestroy() {
        Iterator<FlutterForegroundTaskLifecycleListener> it = this.listeners.iterator();
        while (it.hasNext()) {
            it.next().onTaskDestroy();
        }
    }

    @Override // com.pravera.flutter_foreground_task.FlutterForegroundTaskLifecycleListener
    public void onEngineWillDestroy() {
        Iterator<FlutterForegroundTaskLifecycleListener> it = this.listeners.iterator();
        while (it.hasNext()) {
            it.next().onEngineWillDestroy();
        }
    }
}
