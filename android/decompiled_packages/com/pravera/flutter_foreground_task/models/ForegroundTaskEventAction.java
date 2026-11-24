package com.pravera.flutter_foreground_task.models;

import com.my.target.common.menu.MenuActionType;
import com.pravera.flutter_foreground_task.PreferencesKey;
import io.sentry.protocol.Request;
import java.util.Objects;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONObject;

/* JADX INFO: compiled from: ForegroundTaskEventAction.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 \u00162\u00020\u0001:\u0001\u0016B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0013\u0010\f\u001a\u00020\r2\b\u0010\u000e\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u000f\u001a\u00020\u0010H\u0016J\t\u0010\u0011\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0012\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\u0013\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0017"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;", "", "type", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventType;", PreferencesKey.INTERVAL, "", "<init>", "(Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventType;J)V", "getType", "()Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventType;", "getInterval", "()J", "equals", "", Request.JsonKeys.OTHER, "hashCode", "", "component1", "component2", MenuActionType.COPY, "toString", "", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class ForegroundTaskEventAction {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String TASK_EVENT_INTERVAL_KEY = "taskEventInterval";
    private static final String TASK_EVENT_TYPE_KEY = "taskEventType";
    private final long interval;
    private final ForegroundTaskEventType type;

    public static /* synthetic */ ForegroundTaskEventAction copy$default(ForegroundTaskEventAction foregroundTaskEventAction, ForegroundTaskEventType foregroundTaskEventType, long j, int i, Object obj) {
        if ((i & 1) != 0) {
            foregroundTaskEventType = foregroundTaskEventAction.type;
        }
        if ((i & 2) != 0) {
            j = foregroundTaskEventAction.interval;
        }
        return foregroundTaskEventAction.copy(foregroundTaskEventType, j);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final ForegroundTaskEventType getType() {
        return this.type;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final long getInterval() {
        return this.interval;
    }

    public final ForegroundTaskEventAction copy(ForegroundTaskEventType type, long interval) {
        Intrinsics.checkNotNullParameter(type, "type");
        return new ForegroundTaskEventAction(type, interval);
    }

    public String toString() {
        return "ForegroundTaskEventAction(type=" + this.type + ", interval=" + this.interval + ")";
    }

    public ForegroundTaskEventAction(ForegroundTaskEventType type, long j) {
        Intrinsics.checkNotNullParameter(type, "type");
        this.type = type;
        this.interval = j;
    }

    public final ForegroundTaskEventType getType() {
        return this.type;
    }

    public final long getInterval() {
        return this.interval;
    }

    /* JADX INFO: compiled from: ForegroundTaskEventAction.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0005R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction$Companion;", "", "<init>", "()V", "TASK_EVENT_TYPE_KEY", "", "TASK_EVENT_INTERVAL_KEY", "fromJsonString", "Lcom/pravera/flutter_foreground_task/models/ForegroundTaskEventAction;", "jsonString", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final ForegroundTaskEventAction fromJsonString(String jsonString) {
            ForegroundTaskEventType foregroundTaskEventTypeFromValue;
            Intrinsics.checkNotNullParameter(jsonString, "jsonString");
            JSONObject jSONObject = new JSONObject(jsonString);
            if (jSONObject.isNull(ForegroundTaskEventAction.TASK_EVENT_TYPE_KEY)) {
                foregroundTaskEventTypeFromValue = ForegroundTaskEventType.NOTHING;
            } else {
                foregroundTaskEventTypeFromValue = ForegroundTaskEventType.INSTANCE.fromValue(jSONObject.getInt(ForegroundTaskEventAction.TASK_EVENT_TYPE_KEY));
            }
            return new ForegroundTaskEventAction(foregroundTaskEventTypeFromValue, jSONObject.isNull(ForegroundTaskEventAction.TASK_EVENT_INTERVAL_KEY) ? 5000L : jSONObject.getInt(ForegroundTaskEventAction.TASK_EVENT_INTERVAL_KEY));
        }
    }

    public boolean equals(Object other) {
        if (other != null && (other instanceof ForegroundTaskEventAction)) {
            ForegroundTaskEventAction foregroundTaskEventAction = (ForegroundTaskEventAction) other;
            if (this.type.getValue() == foregroundTaskEventAction.type.getValue() && this.interval == foregroundTaskEventAction.interval) {
                return true;
            }
        }
        return false;
    }

    public int hashCode() {
        return Objects.hash(Integer.valueOf(this.type.getValue()), Long.valueOf(this.interval));
    }
}
