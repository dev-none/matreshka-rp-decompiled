package com.pushwoosh;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.NotificationIntentHelper;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationUpdateReceiver extends BroadcastReceiver {
    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a() {
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        try {
            NotificationIntentHelper.processIntent(context, intent, new Runnable() { // from class: com.pushwoosh.NotificationUpdateReceiver$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    NotificationUpdateReceiver.a();
                }
            });
        } catch (Exception e) {
            PWLog.error("NotificationUpdateReceiver", "Failed to process intent", e);
        }
    }
}
