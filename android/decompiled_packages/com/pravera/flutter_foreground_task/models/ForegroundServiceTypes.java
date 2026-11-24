package com.pravera.flutter_foreground_task.models;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import com.my.target.common.menu.MenuActionType;
import com.pravera.flutter_foreground_task.PreferencesKey;
import io.sentry.protocol.Request;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ForegroundServiceTypes.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\b\u0018\u0000 \u00102\u00020\u0001:\u0001\u0010B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\t\u0010\b\u001a\u00020\u0003HÆ\u0003J\u0013\u0010\t\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\r\u001a\u00020\u0003HÖ\u0001J\t\u0010\u000e\u001a\u00020\u000fHÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0011"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundServiceTypes;", "", "value", "", "<init>", "(I)V", "getValue", "()I", "component1", MenuActionType.COPY, "equals", "", Request.JsonKeys.OTHER, "hashCode", "toString", "", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class ForegroundServiceTypes {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private final int value;

    public static /* synthetic */ ForegroundServiceTypes copy$default(ForegroundServiceTypes foregroundServiceTypes, int i, int i2, Object obj) {
        if ((i2 & 1) != 0) {
            i = foregroundServiceTypes.value;
        }
        return foregroundServiceTypes.copy(i);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final int getValue() {
        return this.value;
    }

    public final ForegroundServiceTypes copy(int value) {
        return new ForegroundServiceTypes(value);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        return (other instanceof ForegroundServiceTypes) && this.value == ((ForegroundServiceTypes) other).value;
    }

    public int hashCode() {
        return Integer.hashCode(this.value);
    }

    public String toString() {
        return "ForegroundServiceTypes(value=" + this.value + ")";
    }

    /* JADX INFO: compiled from: ForegroundServiceTypes.kt */
    @Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010$\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J \u0010\b\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u00072\u0010\u0010\n\u001a\f\u0012\u0002\b\u0003\u0012\u0002\b\u0003\u0018\u00010\u000bJ\u000e\u0010\f\u001a\u00020\t2\u0006\u0010\u0006\u001a\u00020\u0007J\u0019\u0010\r\u001a\u0004\u0018\u00010\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001H\u0002¢\u0006\u0002\u0010\u0010¨\u0006\u0011"}, d2 = {"Lcom/pravera/flutter_foreground_task/models/ForegroundServiceTypes$Companion;", "", "<init>", "()V", "getData", "Lcom/pravera/flutter_foreground_task/models/ForegroundServiceTypes;", "context", "Landroid/content/Context;", "setData", "", "map", "", "clearData", "getForegroundServiceTypeFlag", "", "type", "(Ljava/lang/Object;)Ljava/lang/Integer;", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final ForegroundServiceTypes getData(Context context) {
            int i;
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_SERVICE_TYPES_PREFS, 0);
            if (Build.VERSION.SDK_INT >= 29) {
                i = sharedPreferences.getInt(PreferencesKey.FOREGROUND_SERVICE_TYPES, -1);
            } else {
                i = sharedPreferences.getInt(PreferencesKey.FOREGROUND_SERVICE_TYPES, 0);
            }
            return new ForegroundServiceTypes(i);
        }

        public final void setData(Context context, Map<?, ?> map) {
            Intrinsics.checkNotNullParameter(context, "context");
            int iIntValue = 0;
            SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_SERVICE_TYPES_PREFS, 0);
            if (Build.VERSION.SDK_INT >= 29) {
                Object obj = map != null ? map.get(PreferencesKey.FOREGROUND_SERVICE_TYPES) : null;
                List list = obj instanceof List ? (List) obj : null;
                if (list != null) {
                    Iterator it = list.iterator();
                    while (it.hasNext()) {
                        Integer foregroundServiceTypeFlag = getForegroundServiceTypeFlag(it.next());
                        if (foregroundServiceTypeFlag != null) {
                            iIntValue |= foregroundServiceTypeFlag.intValue();
                        }
                    }
                }
            }
            if (iIntValue > 0) {
                SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                editorEdit.putInt(PreferencesKey.FOREGROUND_SERVICE_TYPES, iIntValue);
                editorEdit.commit();
            }
        }

        public final void clearData(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            SharedPreferences.Editor editorEdit = context.getSharedPreferences(PreferencesKey.FOREGROUND_SERVICE_TYPES_PREFS, 0).edit();
            editorEdit.clear();
            editorEdit.commit();
        }

        private final Integer getForegroundServiceTypeFlag(Object type) {
            if (Intrinsics.areEqual(type, (Object) 0)) {
                return Build.VERSION.SDK_INT >= 30 ? 64 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 1)) {
                return Build.VERSION.SDK_INT >= 29 ? 16 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 2)) {
                return Build.VERSION.SDK_INT >= 29 ? 1 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 3)) {
                return Build.VERSION.SDK_INT >= 34 ? 256 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 4)) {
                return Build.VERSION.SDK_INT >= 29 ? 8 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 5)) {
                return Build.VERSION.SDK_INT >= 29 ? 2 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 6)) {
                return Build.VERSION.SDK_INT >= 29 ? 32 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 7)) {
                return Build.VERSION.SDK_INT >= 30 ? 128 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 8)) {
                return Build.VERSION.SDK_INT >= 29 ? 4 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 9)) {
                return Build.VERSION.SDK_INT >= 34 ? 512 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 10)) {
                return Build.VERSION.SDK_INT >= 34 ? 2048 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 11)) {
                return Build.VERSION.SDK_INT >= 34 ? 1073741824 : null;
            }
            if (Intrinsics.areEqual(type, (Object) 12)) {
                return Build.VERSION.SDK_INT >= 34 ? 1024 : null;
            }
            return (!Intrinsics.areEqual(type, (Object) 13) || Build.VERSION.SDK_INT < 35) ? null : 8192;
        }
    }

    public ForegroundServiceTypes(int i) {
        this.value = i;
    }

    public final int getValue() {
        return this.value;
    }
}
