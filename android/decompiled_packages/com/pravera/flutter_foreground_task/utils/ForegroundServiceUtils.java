package com.pravera.flutter_foreground_task.utils;

import android.content.ComponentName;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.util.Log;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.pravera.flutter_foreground_task.service.ForegroundService;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: ForegroundServiceUtils.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\u0018\u0000 \u00042\u00020\u0001:\u0001\u0004B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0005"}, d2 = {"Lcom/pravera/flutter_foreground_task/utils/ForegroundServiceUtils;", "", "<init>", "()V", "Companion", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class ForegroundServiceUtils {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    private static final String TAG = "ForegroundServiceUtils";

    /* JADX INFO: compiled from: ForegroundServiceUtils.kt */
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nR\u0016\u0010\u0004\u001a\n \u0006*\u0004\u0018\u00010\u00050\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/pravera/flutter_foreground_task/utils/ForegroundServiceUtils$Companion;", "", "<init>", "()V", "TAG", "", "kotlin.jvm.PlatformType", "isSetStopWithTaskFlag", "", "context", "Landroid/content/Context;", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final boolean isSetStopWithTaskFlag(Context context) {
            Intrinsics.checkNotNullParameter(context, "context");
            try {
                SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.FOREGROUND_TASK_OPTIONS_PREFS, 0);
                if (sharedPreferences.contains(PreferencesKey.STOP_WITH_TASK)) {
                    return sharedPreferences.getBoolean(PreferencesKey.STOP_WITH_TASK, false);
                }
                return (context.getPackageManager().getServiceInfo(new ComponentName(context, (Class<?>) ForegroundService.class), 128).flags & 1) != 0;
            } catch (PackageManager.NameNotFoundException unused) {
                Log.e(ForegroundServiceUtils.TAG, "isSetStopWithTaskFlag >> The service component cannot be found on the system.");
                return true;
            } catch (Exception e) {
                Log.e(ForegroundServiceUtils.TAG, "isSetStopWithTaskFlag >> " + e);
                return true;
            }
        }
    }
}
