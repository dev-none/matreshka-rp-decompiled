package com.pushwoosh.firebase;

import android.content.Context;
import android.os.Bundle;
import com.google.firebase.messaging.RemoteMessage;
import com.pushwoosh.PushwooshMessagingServiceHelper;
import com.pushwoosh.firebase.c.a;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshFcmHelper {
    private static final String TAG = "PushwooshFcmHelper";

    private static boolean ensureDeviceSpecificProviderInitialized() {
        try {
            if (DeviceSpecificProvider.getInstance() != null) {
                return true;
            }
            new DeviceSpecificProvider.Builder().setDeviceSpecific(new a()).build(true);
            return DeviceSpecificProvider.getInstance() != null;
        } catch (Exception e) {
            PWLog.error(TAG, "can't initialize DeviceSpecificProvider", e);
            return false;
        }
    }

    private static boolean isDeviceSpecificOk() {
        if (!ensureDeviceSpecificProviderInitialized()) {
            PWLog.error(TAG, "DeviceSpecificProvider not initialized");
            return false;
        }
        if (DeviceSpecificProvider.getInstance().isFirebase()) {
            return true;
        }
        PWLog.error(TAG, "Device specific is not Firebase");
        return false;
    }

    public static boolean isPushwooshMessage(RemoteMessage remoteMessage) {
        Map<String, String> data;
        return (remoteMessage == null || (data = remoteMessage.getData()) == null || !data.containsKey("pw_msg")) ? false : true;
    }

    private static void markPushwooshMessageReceived() {
        try {
            RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
            if (registrationPreferences != null && !registrationPreferences.fcmMessageReceivedSinceInstallOrUpdate().get()) {
                registrationPreferences.fcmMessageReceivedSinceInstallOrUpdate().set(true);
            }
        } catch (Exception e) {
            PWLog.error(TAG, "can't mark received flag", e);
        }
    }

    public static Bundle messageToBundle(RemoteMessage remoteMessage) {
        return com.pushwoosh.firebase.b.a.a(remoteMessage);
    }

    public static boolean onMessageReceived(Context context, RemoteMessage remoteMessage) {
        PWLog.noise(TAG, "onMessageReceived()");
        if (!isDeviceSpecificOk()) {
            PWLog.error(TAG, "Device specific provider not ready for Firebase");
            return false;
        }
        if (!isPushwooshMessage(remoteMessage)) {
            PWLog.warn(TAG, "skip onMessageReceived: message is not belongs to Pushwoosh");
            return false;
        }
        markPushwooshMessageReceived();
        try {
            PWLog.info(TAG, String.format("Received message: %s from: %s", remoteMessage.getData(), remoteMessage.getFrom()));
            return PushwooshMessagingServiceHelper.onMessageReceived(context, com.pushwoosh.firebase.b.a.a(remoteMessage));
        } catch (Exception e) {
            PWLog.error(TAG, "can't handle onMessageReceived", e);
            return false;
        }
    }

    public static void onTokenRefresh(String str) {
        PWLog.noise(TAG, "onTokenRefresh: " + str);
        if (!isDeviceSpecificOk()) {
            PWLog.error(TAG, "Device specific provider not ready for Firebase");
            return;
        }
        try {
            String str2 = RepositoryModule.getRegistrationPreferences().pushToken().get();
            if (str != null && !str.equals(str2)) {
                PushwooshMessagingServiceHelper.onTokenRefresh(str);
                return;
            }
            PWLog.debug(TAG, "token is null or equals previous token");
        } catch (Exception e) {
            PWLog.error(TAG, "can't refresh token", e);
        }
    }
}
