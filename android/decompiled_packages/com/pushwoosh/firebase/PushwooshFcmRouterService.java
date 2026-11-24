package com.pushwoosh.firebase;

import android.content.Intent;
import com.google.firebase.messaging.FirebaseMessagingService;
import com.google.firebase.messaging.RemoteMessage;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public abstract class PushwooshFcmRouterService extends FirebaseMessagingService {
    private static final String TAG = "PushwooshFcmRouterService";

    @Override // com.google.firebase.messaging.FirebaseMessagingService, com.google.firebase.messaging.EnhancedIntentService
    public final void handleIntent(Intent intent) {
        super.handleIntent(intent);
    }

    protected abstract void onAppMessageReceived(RemoteMessage remoteMessage);

    protected void onAppTokenRefresh(String str) {
    }

    @Override // com.google.firebase.messaging.FirebaseMessagingService
    public final void onMessageReceived(RemoteMessage remoteMessage) {
        super.onMessageReceived(remoteMessage);
        if (!PushwooshFcmHelper.isPushwooshMessage(remoteMessage)) {
            onAppMessageReceived(remoteMessage);
            return;
        }
        try {
            PushwooshFcmHelper.onMessageReceived(getApplicationContext(), remoteMessage);
        } catch (Exception e) {
            PWLog.error(TAG, "Failed to handle Pushwoosh message", e);
        }
    }

    @Override // com.google.firebase.messaging.FirebaseMessagingService
    public final void onNewToken(String str) {
        super.onNewToken(str);
        try {
            PushwooshFcmHelper.onTokenRefresh(str);
        } catch (Exception e) {
            PWLog.error(TAG, "Failed to handle new token", e);
        }
        onAppTokenRefresh(str);
    }
}
