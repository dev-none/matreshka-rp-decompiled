package com.pushwoosh;

import android.content.Context;
import android.os.Bundle;
import com.pushwoosh.internal.utils.NotificationRegistrarHelper;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.s.c;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshMessagingServiceHelper {
    static /* synthetic */ void lambda$onMessageReceived$0(Bundle bundle) {
        sendMessageDeliveryEvent(bundle);
        NotificationRegistrarHelper.handleMessage(bundle);
    }

    public static boolean onMessageReceived(Context context, final Bundle bundle) {
        PWLog.noise("PushwooshMessagingServiceHelper", "onMessageReceived()");
        PushwooshInitializer.init(context);
        c.d.a(new Runnable() { // from class: com.pushwoosh.PushwooshMessagingServiceHelper$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                PushwooshMessagingServiceHelper.lambda$onMessageReceived$0(bundle);
            }
        });
        return true;
    }

    public static void onTokenRefresh(String str) {
        PWLog.noise("PushwooshMessagingServiceHelper", "onTokenRefresh: " + str);
        NotificationRegistrarHelper.onRegisteredForRemoteNotifications(str, null);
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    public static void sendMessageDeliveryEvent(Bundle bundle) {
        PWLog.noise("PushwooshMessagingServiceHelper", "sendMessageDeliveryEvent()");
        try {
            PushStatisticsScheduler.scheduleDeliveryEvent(bundle);
        } catch (Throwable th) {
            PWLog.error("Failed to schedule delivery event", th);
        }
    }

    /* JADX INFO: Access modifiers changed from: package-private */
    public static void sendPushStat(Bundle bundle) {
        PWLog.noise("PushwooshMessagingServiceHelper", "sendPushStat()");
        try {
            PushStatisticsScheduler.scheduleOpenEvent(bundle);
        } catch (Throwable th) {
            PWLog.error("Failed to schedule open event", th);
        }
    }
}
