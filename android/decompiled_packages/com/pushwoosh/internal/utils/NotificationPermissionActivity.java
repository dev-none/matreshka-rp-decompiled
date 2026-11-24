package com.pushwoosh.internal.utils;

import com.pushwoosh.g0.e;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.NotificationPermissionEvent;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationPermissionActivity extends PermissionActivity {
    @Override // com.pushwoosh.internal.utils.PermissionActivity, android.app.Activity, androidx.core.app.ActivityCompat.OnRequestPermissionsResultCallback
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        PWLog.debug(PermissionActivity.TAG, "onRequestPermissionsResult");
        if (i != 1) {
            PWLog.warn(PermissionActivity.TAG, "Unrecognized request code " + i);
        } else {
            PermissionActivity.handlePermissionsResult(strArr, iArr);
            e.a(this, PermissionActivity.grantedPermissions.contains("android.permission.POST_NOTIFICATIONS"));
            EventBus.sendEvent(new NotificationPermissionEvent(PermissionActivity.grantedPermissions, PermissionActivity.deniedPermissions));
        }
        finish();
    }
}
