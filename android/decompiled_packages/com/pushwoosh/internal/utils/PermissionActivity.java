package com.pushwoosh.internal.utils;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.PermissionEvent;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public class PermissionActivity extends TranslucentActivity implements ActivityCompat.OnRequestPermissionsResultCallback {
    public static final String EXTRA_PERMISSIONS = "extra_permissions";
    public static final int REQUEST_CODE = 1;
    public static final String TAG = "PermissionActivity";
    public static List<String> deniedPermissions;
    public static List<String> grantedPermissions;

    public static void handlePermissionsResult(String[] strArr, int[] iArr) {
        grantedPermissions = new ArrayList();
        deniedPermissions = new ArrayList();
        for (int i = 0; i < strArr.length; i++) {
            if (iArr.length <= i || iArr[i] != 0) {
                deniedPermissions.add(strArr[i]);
            } else {
                grantedPermissions.add(strArr[i]);
            }
        }
    }

    /* JADX WARN: Code duplicated, block: B:20:0x0023  */
    /* JADX WARN: Code duplicated, block: B:29:? A[RETURN, SYNTHETIC] */
    public static void requestPermissions(Context context, String[] strArr) {
        boolean z;
        Exception e;
        try {
            z = false;
            for (String str : strArr) {
                try {
                    z = z || ContextCompat.checkSelfPermission(context, str) != 0;
                } catch (Exception e2) {
                    e = e2;
                    PWLog.error("an error occurred while trying to requestPermissions", e);
                    if (z) {
                        PWLog.info(TAG, "Requesting permissions");
                        Intent intent = new Intent(context, (Class<?>) PermissionActivity.class);
                        intent.addFlags(268435456);
                        intent.putExtra("extra_permissions", strArr);
                        context.startActivity(intent);
                    }
                }
            }
        } catch (Exception e3) {
            z = false;
            e = e3;
        }
        if (z) {
            PWLog.info(TAG, "Requesting permissions");
            Intent intent2 = new Intent(context, (Class<?>) PermissionActivity.class);
            intent2.addFlags(268435456);
            intent2.putExtra("extra_permissions", strArr);
            context.startActivity(intent2);
        }
    }

    @Override // com.pushwoosh.internal.utils.TranslucentActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Intent intent = getIntent();
        if (intent == null) {
            finish();
            return;
        }
        String[] strArr = (String[]) intent.getCharSequenceArrayExtra("extra_permissions");
        if (strArr == null) {
            finish();
        } else {
            ActivityCompat.requestPermissions(this, strArr, 1);
        }
    }

    @Override // android.app.Activity, androidx.core.app.ActivityCompat.OnRequestPermissionsResultCallback
    public void onRequestPermissionsResult(int i, String[] strArr, int[] iArr) {
        if (i != 1) {
            PWLog.warn(TAG, "Unrecognized request code " + i);
        } else {
            handlePermissionsResult(strArr, iArr);
            EventBus.sendEvent(new PermissionEvent(grantedPermissions, deniedPermissions));
        }
        finish();
    }
}
