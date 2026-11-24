package com.pushwoosh.plugin;

import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import com.pushwoosh.internal.utils.JsonUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.NotificationServiceExtension;
import com.pushwoosh.notification.PushMessage;
import org.json.JSONException;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshNotificationServiceExtension extends NotificationServiceExtension {
    private String TAG = "PushwooshNotificationServiceExtension";
    private boolean showForegroundPush;

    public PushwooshNotificationServiceExtension() {
        this.showForegroundPush = false;
        try {
            ApplicationInfo applicationInfo = getApplicationContext().getPackageManager().getApplicationInfo(getApplicationContext().getPackageName(), 128);
            if (applicationInfo != null && applicationInfo.metaData != null) {
                this.showForegroundPush = applicationInfo.metaData.getBoolean("PW_BROADCAST_PUSH", false) || applicationInfo.metaData.getBoolean("com.pushwoosh.foreground_push", false);
            }
        } catch (PackageManager.NameNotFoundException e) {
            PWLog.error(this.TAG, "Failed to read AndroidManifest metaData", e);
        }
        PWLog.debug(this.TAG, "showForegroundPush = " + this.showForegroundPush);
    }

    @Override // com.pushwoosh.notification.NotificationServiceExtension
    protected boolean onMessageReceived(PushMessage pushMessage) {
        boolean zIsAppOnForeground = isAppOnForeground();
        try {
            PushwooshPlugin.onMessageReceived(JsonUtils.jsonToMap(pushMessage.toJson()), !zIsAppOnForeground);
        } catch (JSONException e) {
            PWLog.error(this.TAG, "Failed to parse PushMessage from JSON", e);
        }
        return (!PushwooshPlugin.showForegroundPush && zIsAppOnForeground) || super.onMessageReceived(pushMessage);
    }

    @Override // com.pushwoosh.notification.NotificationServiceExtension
    protected void onMessageOpened(PushMessage pushMessage) {
        try {
            PushwooshPlugin.onMessageAccepted(JsonUtils.jsonToMap(pushMessage.toJson()), !isAppOnForeground());
        } catch (JSONException e) {
            PWLog.error(this.TAG, "Failed to parse PushMessage from JSON", e);
        }
    }
}
