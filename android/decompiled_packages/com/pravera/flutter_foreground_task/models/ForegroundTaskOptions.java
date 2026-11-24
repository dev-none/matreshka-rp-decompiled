package com.pravera.flutter_foreground_task.models;

import android.content.Context;
import android.content.SharedPreferences;
import com.my.target.common.menu.MenuActionType;
import com.pravera.flutter_foreground_task.PreferencesKey;
import io.sentry.protocol.Request;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* JADX INFO: compiled from: ForegroundTaskOptions.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u001e\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 '2\u00020\u0001:\u0001'BA\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\u0006\u0010\u0007\u001a\u00020\u0005\u0012\u0006\u0010\b\u001a\u00020\u0005\u0012\u0006\u0010\t\u001a\u00020\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u000b\u0010\fJ\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001c\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001d\u001a\u00020\u0005HÆ\u0003J\u0010\u0010\u001e\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010\u0016JV\u0010\u001f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\u00052\b\b\u0002\u0010\b\u001a\u00020\u00052\b\b\u0002\u0010\t\u001a\u00020\u00052\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\u0005HÆ\u0001¢\u0006\u0002\u0010 J\u0013\u0010!\u001a\u00020\u00052\b\u0010\"\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010#\u001a\u00020$HÖ\u0001J\t\u0010%\u001a\u00020&HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0006\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0007\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0010R\u0011\u0010\b\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0010R\u0011\u0010\t\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0010R\u0015\u0010\n\u001a\u0004\u0018\u00010\u0005¢\u0006\n\n\u0002\u0010\u0017\u001a\u0004\b\u0015\u0010\u0016¨\u0006("}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskOptions;", "", "eventAction", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;", PreferencesKey.AUTO_RUN_ON_BOOT, "", PreferencesKey.AUTO_RUN_ON_MY_PACKAGE_REPLACED, PreferencesKey.ALLOW_WAKE_LOCK, PreferencesKey.ALLOW_WIFI_LOCK, PreferencesKey.ALLOW_AUTO_RESTART, PreferencesKey.STOP_WITH_TASK, "<init>", "(Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;ZZZZZLjava/lang/Boolean;)V", "getEventAction", "()Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;", "getAutoRunOnBoot", "()Z", "getAutoRunOnMyPackageReplaced", "getAllowWakeLock", "getAllowWifiLock", "getAllowAutoRestart", "getStopWithTask", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "component1", "component2", "component3", "component4", "component5", "component6", "component7", MenuActionType.COPY, "(Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;ZZZZZLjava/lang/Boolean;)Lcom/pravera/flutter_foreground_task/models/ForegroundTaskOptions;", "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class ForegroundTaskOptions {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final boolean allowAutoRestart;
    private final boolean allowWakeLock;
    private final boolean allowWifiLock;
    private final boolean autoRunOnBoot;
    private final boolean autoRunOnMyPackageReplaced;
    private final ForegroundTaskEventAction eventAction;
    private final Boolean stopWithTask;

    public static /* synthetic */ ForegroundTaskOptions copy$default(ForegroundTaskOptions foregroundTaskOptions, ForegroundTaskEventAction foregroundTaskEventAction, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, Boolean bool, int i, Object obj) {
        if ((i & 1) != 0) {
            foregroundTaskEventAction = foregroundTaskOptions.eventAction;
        }
        if ((i & 2) != 0) {
            z = foregroundTaskOptions.autoRunOnBoot;
        }
        if ((i & 4) != 0) {
            z2 = foregroundTaskOptions.autoRunOnMyPackageReplaced;
        }
        if ((i & 8) != 0) {
            z3 = foregroundTaskOptions.allowWakeLock;
        }
        if ((i & 16) != 0) {
            z4 = foregroundTaskOptions.allowWifiLock;
        }
        if ((i & 32) != 0) {
            z5 = foregroundTaskOptions.allowAutoRestart;
        }
        if ((i & 64) != 0) {
            bool = foregroundTaskOptions.stopWithTask;
        }
        boolean z6 = z5;
        Boolean bool2 = bool;
        boolean z7 = z4;
        boolean z8 = z2;
        return foregroundTaskOptions.copy(foregroundTaskEventAction, z, z8, z3, z7, z6, bool2);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final ForegroundTaskEventAction getEventAction() {
        return this.eventAction;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final boolean getAutoRunOnBoot() {
        return this.autoRunOnBoot;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final boolean getAutoRunOnMyPackageReplaced() {
        return this.autoRunOnMyPackageReplaced;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final boolean getAllowWakeLock() {
        return this.allowWakeLock;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final boolean getAllowWifiLock() {
        return this.allowWifiLock;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final boolean getAllowAutoRestart() {
        return this.allowAutoRestart;
    }

    /* JADX INFO: renamed from: component7, reason: from getter */
    public final Boolean getStopWithTask() {
        return this.stopWithTask;
    }

    public final ForegroundTaskOptions copy(ForegroundTaskEventAction eventAction, boolean autoRunOnBoot, boolean autoRunOnMyPackageReplaced, boolean allowWakeLock, boolean allowWifiLock, boolean allowAutoRestart, Boolean stopWithTask) {
        Intrinsics.checkNotNullParameter(eventAction, "eventAction");
        return new ForegroundTaskOptions(eventAction, autoRunOnBoot, autoRunOnMyPackageReplaced, allowWakeLock, allowWifiLock, allowAutoRestart, stopWithTask);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof ForegroundTaskOptions)) {
            return false;
        }
        ForegroundTaskOptions foregroundTaskOptions = (ForegroundTaskOptions) other;
        return Intrinsics.areEqual(this.eventAction, foregroundTaskOptions.eventAction) && this.autoRunOnBoot == foregroundTaskOptions.autoRunOnBoot && this.autoRunOnMyPackageReplaced == foregroundTaskOptions.autoRunOnMyPackageReplaced && this.allowWakeLock == foregroundTaskOptions.allowWakeLock && this.allowWifiLock == foregroundTaskOptions.allowWifiLock && this.allowAutoRestart == foregroundTaskOptions.allowAutoRestart && Intrinsics.areEqual(this.stopWithTask, foregroundTaskOptions.stopWithTask);
    }

    public int hashCode() {
        int iHashCode = ((((((((((this.eventAction.hashCode() * 31) + Boolean.hashCode(this.autoRunOnBoot)) * 31) + Boolean.hashCode(this.autoRunOnMyPackageReplaced)) * 31) + Boolean.hashCode(this.allowWakeLock)) * 31) + Boolean.hashCode(this.allowWifiLock)) * 31) + Boolean.hashCode(this.allowAutoRestart)) * 31;
        Boolean bool = this.stopWithTask;
        return iHashCode + (bool == null ? 0 : bool.hashCode());
    }

    public String toString() {
        return "ForegroundTaskOptions(eventAction=" + this.eventAction + ", autoRunOnBoot=" + this.autoRunOnBoot + ", autoRunOnMyPackageReplaced=" + this.autoRunOnMyPackageReplaced + ", allowWakeLock=" + this.allowWakeLock + ", allowWifiLock=" + this.allowWifiLock + ", allowAutoRestart=" + this.allowAutoRestart + ", stopWithTask=" + this.stopWithTask + ")";
    }

    public ForegroundTaskOptions(ForegroundTaskEventAction eventAction, boolean z, boolean z2, boolean z3, boolean z4, boolean z5, Boolean bool) {
        Intrinsics.checkNotNullParameter(eventAction, "eventAction");
        this.eventAction = eventAction;
        this.autoRunOnBoot = z;
        this.autoRunOnMyPackageReplaced = z2;
        this.allowWakeLock = z3;
        this.allowWifiLock = z4;
        this.allowAutoRestart = z5;
        this.stopWithTask = bool;
    }

    public final ForegroundTaskEventAction getEventAction() {
        return this.eventAction;
    }

    public final boolean getAutoRunOnBoot() {
        return this.autoRunOnBoot;
    }

    public final boolean getAutoRunOnMyPackageReplaced() {
        return this.autoRunOnMyPackageReplaced;
    }

    public final boolean getAllowWakeLock() {
        return this.allowWakeLock;
    }

    public final boolean getAllowWifiLock() {
        return this.allowWifiLock;
    }

    public final boolean getAllowAutoRestart() {
        return this.allowAutoRestart;
    }

    public final Boolean getStopWithTask() {
        return this.stopWithTask;
    }

    /* JADX INFO: compiled from: ForegroundTaskOptions.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J \u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ \u0010\f\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ\u000e\u0010\r\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\u000e"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskOptions$Companion;", "", "<init>", "()V", "getData", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskOptions;", "context", "Landroid/content/Context;", "setData", "", "map", "", "updateData", "clearData", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final ForegroundTaskOptions getData(Context context) {
            ForegroundTaskEventAction foregroundTaskEventAction;
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
            String string = sharedPreferences.getString(PreferencesKey.TASK_EVENT_ACTION, null);
            if (string != null) {
                foregroundTaskEventAction = ForegroundTaskEventAction.INSTANCE.fromJsonString(string);
            } else {
                boolean z = sharedPreferences.getBoolean(PreferencesKey.IS_ONCE_EVENT, false);
                long j = sharedPreferences.getLong(PreferencesKey.INTERVAL, 5000L);
                if (z) {
                    foregroundTaskEventAction = new ForegroundTaskEventAction(ForegroundTaskEventType.ONCE, j);
                } else {
                    foregroundTaskEventAction = new ForegroundTaskEventAction(ForegroundTaskEventType.REPEAT, j);
                }
            }
            return new ForegroundTaskOptions(foregroundTaskEventAction, sharedPreferences.getBoolean(PreferencesKey.AUTO_RUN_ON_BOOT, false), sharedPreferences.getBoolean(PreferencesKey.AUTO_RUN_ON_MY_PACKAGE_REPLACED, false), sharedPreferences.getBoolean(PreferencesKey.ALLOW_WAKE_LOCK, true), sharedPreferences.getBoolean(PreferencesKey.ALLOW_WIFI_LOCK, false), sharedPreferences.getBoolean(PreferencesKey.ALLOW_AUTO_RESTART, false), sharedPreferences.contains(PreferencesKey.STOP_WITH_TASK) ? Boolean.valueOf(sharedPreferences.getBoolean(PreferencesKey.STOP_WITH_TASK, false)) : null);
        }

        public final void setData(Context context, Map<?, ?> map) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
            Object obj = map != null ? map.get(PreferencesKey.TASK_EVENT_ACTION) : null;
            Map map2 = obj instanceof Map ? (Map) obj : null;
            String string = map2 != null ? new JSONObject(map2).toString() : null;
            Object obj2 = map != null ? map.get(PreferencesKey.AUTO_RUN_ON_BOOT) : null;
            Boolean bool = obj2 instanceof Boolean ? (Boolean) obj2 : null;
            boolean zBooleanValue = bool != null ? bool.booleanValue() : false;
            Object obj3 = map != null ? map.get(PreferencesKey.AUTO_RUN_ON_MY_PACKAGE_REPLACED) : null;
            Boolean bool2 = obj3 instanceof Boolean ? (Boolean) obj3 : null;
            boolean zBooleanValue2 = bool2 != null ? bool2.booleanValue() : false;
            Object obj4 = map != null ? map.get(PreferencesKey.ALLOW_WAKE_LOCK) : null;
            Boolean bool3 = obj4 instanceof Boolean ? (Boolean) obj4 : null;
            boolean zBooleanValue3 = bool3 != null ? bool3.booleanValue() : true;
            Object obj5 = map != null ? map.get(PreferencesKey.ALLOW_WIFI_LOCK) : null;
            Boolean bool4 = obj5 instanceof Boolean ? (Boolean) obj5 : null;
            boolean zBooleanValue4 = bool4 != null ? bool4.booleanValue() : false;
            Object obj6 = map != null ? map.get(PreferencesKey.ALLOW_AUTO_RESTART) : null;
            Boolean bool5 = obj6 instanceof Boolean ? (Boolean) obj6 : null;
            boolean zBooleanValue5 = bool5 != null ? bool5.booleanValue() : false;
            Object obj7 = map != null ? map.get(PreferencesKey.STOP_WITH_TASK) : null;
            Boolean bool6 = obj7 instanceof Boolean ? (Boolean) obj7 : null;
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            editorEdit.putString(PreferencesKey.TASK_EVENT_ACTION, string);
            editorEdit.putBoolean(PreferencesKey.AUTO_RUN_ON_BOOT, zBooleanValue);
            editorEdit.putBoolean(PreferencesKey.AUTO_RUN_ON_MY_PACKAGE_REPLACED, zBooleanValue2);
            editorEdit.putBoolean(PreferencesKey.ALLOW_WAKE_LOCK, zBooleanValue3);
            editorEdit.putBoolean(PreferencesKey.ALLOW_WIFI_LOCK, zBooleanValue4);
            editorEdit.putBoolean(PreferencesKey.ALLOW_AUTO_RESTART, zBooleanValue5);
            if (bool6 == null || editorEdit.putBoolean(PreferencesKey.STOP_WITH_TASK, bool6.booleanValue()) == null) {
                editorEdit.remove(PreferencesKey.STOP_WITH_TASK);
            }
            editorEdit.commit();
        }

        public final void updateData(Context context, Map<?, ?> map) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
            Object obj = map != null ? map.get(PreferencesKey.TASK_EVENT_ACTION) : null;
            Map map2 = obj instanceof Map ? (Map) obj : null;
            String string = map2 != null ? new JSONObject(map2).toString() : null;
            Object obj2 = map != null ? map.get(PreferencesKey.AUTO_RUN_ON_BOOT) : null;
            Boolean bool = obj2 instanceof Boolean ? (Boolean) obj2 : null;
            Object obj3 = map != null ? map.get(PreferencesKey.AUTO_RUN_ON_MY_PACKAGE_REPLACED) : null;
            Boolean bool2 = obj3 instanceof Boolean ? (Boolean) obj3 : null;
            Object obj4 = map != null ? map.get(PreferencesKey.ALLOW_WAKE_LOCK) : null;
            Boolean bool3 = obj4 instanceof Boolean ? (Boolean) obj4 : null;
            Object obj5 = map != null ? map.get(PreferencesKey.ALLOW_WIFI_LOCK) : null;
            Boolean bool4 = obj5 instanceof Boolean ? (Boolean) obj5 : null;
            Object obj6 = map != null ? map.get(PreferencesKey.ALLOW_AUTO_RESTART) : null;
            Boolean bool5 = obj6 instanceof Boolean ? (Boolean) obj6 : null;
            Object obj7 = map != null ? map.get(PreferencesKey.STOP_WITH_TASK) : null;
            Boolean bool6 = obj7 instanceof Boolean ? (Boolean) obj7 : null;
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            if (string != null) {
                editorEdit.putString(PreferencesKey.TASK_EVENT_ACTION, string);
            }
            if (bool != null) {
                editorEdit.putBoolean(PreferencesKey.AUTO_RUN_ON_BOOT, bool.booleanValue());
            }
            if (bool2 != null) {
                editorEdit.putBoolean(PreferencesKey.AUTO_RUN_ON_MY_PACKAGE_REPLACED, bool2.booleanValue());
            }
            if (bool3 != null) {
                editorEdit.putBoolean(PreferencesKey.ALLOW_WAKE_LOCK, bool3.booleanValue());
            }
            if (bool4 != null) {
                editorEdit.putBoolean(PreferencesKey.ALLOW_WIFI_LOCK, bool4.booleanValue());
            }
            if (bool5 != null) {
                editorEdit.putBoolean(PreferencesKey.ALLOW_AUTO_RESTART, bool5.booleanValue());
            }
            if (bool6 == null || editorEdit.putBoolean(PreferencesKey.STOP_WITH_TASK, bool6.booleanValue()) == null) {
                editorEdit.remove(PreferencesKey.STOP_WITH_TASK);
            }
            editorEdit.commit();
        }

        public final void clearData(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0).edit();
            editorEdit.clear();
            editorEdit.commit();
        }
    }
}
