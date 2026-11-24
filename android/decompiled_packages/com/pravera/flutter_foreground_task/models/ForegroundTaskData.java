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
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: ForegroundTaskData.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 \u00132\u00020\u0001:\u0001\u0013B\u0011\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\t\u001a\u0004\u0018\u00010\u0003HÆ\u0003¢\u0006\u0002\u0010\u0007J\u001a\u0010\n\u001a\u00020\u00002\n\b\u0002\u0010\u0002\u001a\u0004\u0018\u00010\u0003HÆ\u0001¢\u0006\u0002\u0010\u000bJ\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u000f\u001a\u00020\u0010HÖ\u0001J\t\u0010\u0011\u001a\u00020\u0012HÖ\u0001R\u0015\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\n\n\u0002\u0010\b\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0014"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskData;", "", PreferencesKey.CALLBACK_HANDLE, "", "<init>", "(Ljava/lang/Long;)V", "getCallbackHandle", "()Ljava/lang/Long;", "Ljava/lang/Long;", "component1", MenuActionType.COPY, "(Ljava/lang/Long;)Lcom/pravera/flutter_foreground_task/models/ForegroundTaskData;", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "toString", "", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class ForegroundTaskData {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final Long callbackHandle;

    public static /* synthetic */ ForegroundTaskData copy$default(ForegroundTaskData foregroundTaskData, Long l, int i, Object obj) {
        if ((i & 1) != 0) {
            l = foregroundTaskData.callbackHandle;
        }
        return foregroundTaskData.copy(l);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final Long getCallbackHandle() {
        return this.callbackHandle;
    }

    public final ForegroundTaskData copy(Long callbackHandle) {
        return new ForegroundTaskData(callbackHandle);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof ForegroundTaskData) && Intrinsics.areEqual(this.callbackHandle, ((ForegroundTaskData) other).callbackHandle);
    }

    public int hashCode() {
        Long l = this.callbackHandle;
        if (l == null) {
            return 0;
        }
        return l.hashCode();
    }

    public String toString() {
        return "ForegroundTaskData(callbackHandle=" + this.callbackHandle + ")";
    }

    /* JADX INFO: compiled from: ForegroundTaskData.kt */
    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J \u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ \u0010\f\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ\u000e\u0010\r\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\u000e"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskData$Companion;", "", "<init>", "()V", "getData", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskData;", "context", "Landroid/content/Context;", "setData", "", "map", "", "updateData", "clearData", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final ForegroundTaskData getData(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
            return new ForegroundTaskData(sharedPreferences.contains(PreferencesKey.CALLBACK_HANDLE) ? Long.valueOf(sharedPreferences.getLong(PreferencesKey.CALLBACK_HANDLE, 0L)) : null);
        }

        public final void setData(Context context, Map<?, ?> map) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
            Long longOrNull = StringsKt.toLongOrNull(String.valueOf(map != null ? map.get(PreferencesKey.CALLBACK_HANDLE) : null));
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            editorEdit.remove(PreferencesKey.CALLBACK_HANDLE);
            if (longOrNull != null) {
                editorEdit.putLong(PreferencesKey.CALLBACK_HANDLE, longOrNull.longValue());
            }
            editorEdit.commit();
        }

        public final void updateData(Context context, Map<?, ?> map) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
            Long longOrNull = StringsKt.toLongOrNull(String.valueOf(map != null ? map.get(PreferencesKey.CALLBACK_HANDLE) : null));
            SharedPreferences.Editor editorEdit = sharedPreferences.edit();
            if (longOrNull != null) {
                editorEdit.putLong(PreferencesKey.CALLBACK_HANDLE, longOrNull.longValue());
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

    public ForegroundTaskData(Long l) {
        this.callbackHandle = l;
    }

    public final Long getCallbackHandle() {
        return this.callbackHandle;
    }
}
