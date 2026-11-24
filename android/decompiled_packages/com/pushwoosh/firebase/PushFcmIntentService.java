package com.pushwoosh.firebase;

import com.google.firebase.messaging.FirebaseMessagingService;
import com.google.firebase.messaging.RemoteMessage;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public class PushFcmIntentService extends FirebaseMessagingService {
    @Override // com.google.firebase.messaging.FirebaseMessagingService
    public final void onMessageReceived(RemoteMessage remoteMessage) {
        PWLog.noise("PushFcmIntentService", "onMessageReceived()");
        try {
            super.onMessageReceived(remoteMessage);
            PushwooshFcmHelper.onMessageReceived(getApplicationContext(), remoteMessage);
        } catch (Exception e) {
            PWLog.error("PushFcmIntentService", "Failed to handle message", e);
        }
    }

    @Override // com.google.firebase.messaging.FirebaseMessagingService
    public final void onNewToken(String str) {
        PWLog.noise("PushFcmIntentService", "onNewToken: " + str);
        try {
            super.onNewToken(str);
            PushwooshFcmHelper.onTokenRefresh(str);
        } catch (Exception e) {
            PWLog.error("PushFcmIntentService", "Failed to handle new token", e);
        }
    }
}
