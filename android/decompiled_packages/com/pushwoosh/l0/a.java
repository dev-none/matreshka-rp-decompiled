package com.pushwoosh.l0;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Bundle;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import com.pushwoosh.notification.handlers.notification.PushNotificationOpenHandler;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements PushNotificationOpenHandler {
    @Override // com.pushwoosh.notification.handlers.notification.PushNotificationOpenHandler
    public final void postHandleNotification(Bundle bundle) {
        String str;
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            return;
        }
        if (PushBundleDataProvider.getTappedButtonId(bundle) == null && (str = (String) bundle.get("launch")) != null) {
            Intent launchIntentForPackage = null;
            try {
                PackageManager packageManager = AndroidPlatformModule.getManagerProvider().getPackageManager();
                if (packageManager != null) {
                    launchIntentForPackage = packageManager.getLaunchIntentForPackage(str);
                }
            } catch (Exception e) {
                PWLog.error("Application not found", e);
            }
            if (launchIntentForPackage != null) {
                launchIntentForPackage.addFlags(268435456);
                applicationContext.startActivity(launchIntentForPackage);
            }
        }
    }
}
