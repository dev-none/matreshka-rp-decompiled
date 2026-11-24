package com.pravera.flutter_foreground_task.service;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.pravera.flutter_foreground_task.errors.PermissionRequestCancelledException;
import com.pravera.flutter_foreground_task.models.NotificationPermission;
import io.flutter.plugin.common.PluginRegistry;
import io.sentry.protocol.App;
import kotlin.Metadata;
import kotlin.collections.ArraysKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: NotificationPermissionManager.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\b\u001a\u00020\t2\u0006\u0010\u0004\u001a\u00020\u0005J\u0016\u0010\n\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0014\u0010\f\u001a\u00020\r*\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\u001c\u0010\u0011\u001a\u00020\u000b*\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\tH\u0002J\u0016\u0010\u0013\u001a\u0004\u0018\u00010\t*\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0002J\b\u0010\u0014\u001a\u00020\u000bH\u0002J-\u0010\u0015\u001a\u00020\r2\u0006\u0010\u0016\u001a\u00020\u00172\u000e\u0010\u0018\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00100\u00192\u0006\u0010\u001a\u001a\u00020\u001bH\u0017¢\u0006\u0002\u0010\u001cR\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lcom/pravera/flutter_foreground_task/service/NotificationPermissionManager;", "Lio/flutter/plugin/common/PluginRegistry$RequestPermissionsResultListener;", "<init>", "()V", "activity", "Landroid/app/Activity;", "callback", "Lcom/pravera/flutter_foreground_task/service/NotificationPermissionCallback;", "checkPermission", "Lcom/pravera/flutter_foreground_task/models/NotificationPermission;", "requestPermission", "", "isPermissionGranted", "", "Landroid/content/Context;", "permission", "", "setPrevPermissionStatus", "status", "getPrevPermissionStatus", "disposeReference", "onRequestPermissionsResult", "requestCode", "", App.JsonKeys.APP_PERMISSIONS, "", "grantResults", "", "(I[Ljava/lang/String;[I)Z", "flutter_foreground_task_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class NotificationPermissionManager implements PluginRegistry.RequestPermissionsResultListener {
    private Activity activity;
    private NotificationPermissionCallback callback;

    public final NotificationPermission checkPermission(Activity activity) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        if (Build.VERSION.SDK_INT < 33) {
            return NotificationPermission.GRANTED;
        }
        Activity activity2 = activity;
        if (isPermissionGranted(activity2, "android.permission.POST_NOTIFICATIONS")) {
            return NotificationPermission.GRANTED;
        }
        NotificationPermission prevPermissionStatus = getPrevPermissionStatus(activity2, "android.permission.POST_NOTIFICATIONS");
        if (prevPermissionStatus != null && prevPermissionStatus == NotificationPermission.PERMANENTLY_DENIED && !activity.shouldShowRequestPermissionRationale("android.permission.POST_NOTIFICATIONS")) {
            return NotificationPermission.PERMANENTLY_DENIED;
        }
        return NotificationPermission.DENIED;
    }

    public final void requestPermission(Activity activity, NotificationPermissionCallback callback) {
        Intrinsics.checkNotNullParameter(activity, "activity");
        Intrinsics.checkNotNullParameter(callback, "callback");
        if (Build.VERSION.SDK_INT < 33) {
            callback.onResult(NotificationPermission.GRANTED);
            return;
        }
        this.activity = activity;
        this.callback = callback;
        ActivityCompat.requestPermissions(activity, new String[]{"android.permission.POST_NOTIFICATIONS"}, 100);
    }

    private final boolean isPermissionGranted(Context context, String str) {
        return ContextCompat.checkSelfPermission(context, str) == 0;
    }

    private final void setPrevPermissionStatus(Context context, String str, NotificationPermission notificationPermission) {
        SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.NOTIFICATION_PERMISSION_STATUS_PREFS, 0);
        if (sharedPreferences == null) {
            return;
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        editorEdit.putString(str, notificationPermission.toString());
        editorEdit.commit();
    }

    private final NotificationPermission getPrevPermissionStatus(Context context, String str) {
        String string;
        SharedPreferences sharedPreferences = context.getSharedPreferences(PreferencesKey.NOTIFICATION_PERMISSION_STATUS_PREFS, 0);
        if (sharedPreferences == null || (string = sharedPreferences.getString(str, null)) == null) {
            return null;
        }
        return NotificationPermission.valueOf(string);
    }

    private final void disposeReference() {
        this.activity = null;
        this.callback = null;
    }

    @Override // io.flutter.plugin.common.PluginRegistry.RequestPermissionsResultListener
    public boolean onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
        Intrinsics.checkNotNullParameter(permissions, "permissions");
        Intrinsics.checkNotNullParameter(grantResults, "grantResults");
        if (grantResults.length == 0) {
            NotificationPermissionCallback notificationPermissionCallback = this.callback;
            if (notificationPermissionCallback != null) {
                notificationPermissionCallback.onError(new PermissionRequestCancelledException());
            }
            disposeReference();
            return false;
        }
        NotificationPermission notificationPermission = NotificationPermission.DENIED;
        if (requestCode != 100) {
            return false;
        }
        int iIndexOf = ArraysKt.indexOf(permissions, "android.permission.POST_NOTIFICATIONS");
        if (iIndexOf >= 0 && grantResults[iIndexOf] == 0) {
            notificationPermission = NotificationPermission.GRANTED;
        } else {
            Activity activity = this.activity;
            if (activity != null && !activity.shouldShowRequestPermissionRationale("android.permission.POST_NOTIFICATIONS")) {
                notificationPermission = NotificationPermission.PERMANENTLY_DENIED;
            }
        }
        Activity activity2 = this.activity;
        if (activity2 != null) {
            setPrevPermissionStatus(activity2, "android.permission.POST_NOTIFICATIONS", notificationPermission);
        }
        NotificationPermissionCallback notificationPermissionCallback2 = this.callback;
        if (notificationPermissionCallback2 != null) {
            notificationPermissionCallback2.onResult(notificationPermission);
        }
        disposeReference();
        return true;
    }
}
