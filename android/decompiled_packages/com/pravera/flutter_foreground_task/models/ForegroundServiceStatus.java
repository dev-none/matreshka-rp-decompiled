package com.pravera.flutter_foreground_task.models;

import android.content.Context;
import android.content.SharedPreferences;
import com.my.target.common.menu.MenuActionType;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import io.sentry.protocol.Request;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ForegroundServiceStatus.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\b\u0018\u0000 \u00112\u00020\u0001:\u0001\u0011B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0006\u0010\b\u001a\u00020\tJ\t\u0010\n\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\u000b\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\f\u001a\u00020\t2\b\u0010\r\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u000e\u001a\u00020\u000fHÖ\u0001J\t\u0010\u0010\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0012"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundServiceStatus;", "", HandleInvocationsFromAdViewer.KEY_ACTION, "", "<init>", "(Ljava/lang/String;)V", "getAction", "()Ljava/lang/String;", "isCorrectlyStopped", "", "component1", MenuActionType.COPY, "equals", Request.JsonKeys.OTHER, "hashCode", "", "toString", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class ForegroundServiceStatus {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final String action;

    public static /* synthetic */ ForegroundServiceStatus copy$default(ForegroundServiceStatus foregroundServiceStatus, String str, int i, Object obj) {
        if ((i & 1) != 0) {
            str = foregroundServiceStatus.action;
        }
        return foregroundServiceStatus.copy(str);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final String getAction() {
        return this.action;
    }

    public final ForegroundServiceStatus copy(String action) {
        Intrinsics.checkNotNullParameter(action, "action");
        return new ForegroundServiceStatus(action);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof ForegroundServiceStatus) && Intrinsics.areEqual(this.action, ((ForegroundServiceStatus) other).action);
    }

    public int hashCode() {
        return this.action.hashCode();
    }

    public String toString() {
        return "ForegroundServiceStatus(action=" + this.action + ")";
    }

    /* JADX INFO: compiled from: ForegroundServiceStatus.kt */
    @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0016\u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\n\u001a\u00020\u000b¨\u0006\f"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundServiceStatus$Companion;", "", "<init>", "()V", "getData", "Lcom/pravera/flutter_foreground_task/models/ForegroundServiceStatus;", "context", "Landroid/content/Context;", "setData", "", HandleInvocationsFromAdViewer.KEY_ACTION, "", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final ForegroundServiceStatus getData(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            String string = context.getSharedPreferences(PreferencesKey.FOREGROUND_SERVICE_STATUS_PREFS, 0).getString(PreferencesKey.FOREGROUND_SERVICE_ACTION, null);
            if (string == null) {
                string = ForegroundServiceAction.API_STOP;
            }
            return new ForegroundServiceStatus(string);
        }

        public final void setData(Context context, String action) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(action, "action");
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(PreferencesKey.FOREGROUND_SERVICE_STATUS_PREFS, 0).edit();
            editorEdit.putString(PreferencesKey.FOREGROUND_SERVICE_ACTION, action);
            editorEdit.commit();
        }
    }

    public ForegroundServiceStatus(String action) {
        Intrinsics.checkNotNullParameter(action, "action");
        this.action = action;
    }

    public final String getAction() {
        return this.action;
    }

    public final boolean isCorrectlyStopped() {
        return Intrinsics.areEqual(this.action, ForegroundServiceAction.API_STOP);
    }
}
