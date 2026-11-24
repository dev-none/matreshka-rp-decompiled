package com.pushwoosh.internal.utils;

import android.content.Context;
import android.content.Intent;
import androidx.core.content.ContextCompat;

/* JADX INFO: loaded from: classes6.dex */
public class RequestPermissionHelper {
    public static final String EXTRA_PERMISSIONS = "extra_permissions";
    public static final String TAG = "RequestPermissionHelper";

    /* JADX WARN: Code duplicated, block: B:20:0x002b  */
    /* JADX WARN: Code duplicated, block: B:29:? A[RETURN, SYNTHETIC] */
    public static void requestPermissionsForClass(Class<? extends PermissionActivity> cls, Context context, String[] strArr) {
        boolean z;
        Exception e;
        PWLog.noise(TAG, "requestPermissionsForClass()");
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
                        Intent intent = new Intent(context, cls);
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
            Intent intent2 = new Intent(context, cls);
            intent2.addFlags(268435456);
            intent2.putExtra("extra_permissions", strArr);
            context.startActivity(intent2);
        }
    }
}
