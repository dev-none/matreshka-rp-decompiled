package io.flutter.plugins.firebase.messaging;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Parcel;
import android.util.Log;
import com.google.firebase.messaging.RemoteMessage;
import java.util.HashMap;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes7.dex */
public class FlutterFirebaseMessagingReceiver extends BroadcastReceiver {
    private static final String TAG = "FLTFireMsgReceiver";
    static HashMap<String, RemoteMessage> notifications = new HashMap<>();
    private static final Executor backgroundExecutor = Executors.newSingleThreadExecutor();

    @Override // android.content.BroadcastReceiver
    public void onReceive(final Context context, Intent intent) {
        Log.d(TAG, "broadcast received for message");
        if (ContextHolder.getApplicationContext() == null) {
            ContextHolder.setApplicationContext(context.getApplicationContext() != null ? context.getApplicationContext() : context);
        }
        if (intent.getExtras() == null) {
            Log.d(TAG, "broadcast received but intent contained no extras to process RemoteMessage. Operation cancelled.");
            return;
        }
        final RemoteMessage remoteMessage = new RemoteMessage(intent.getExtras());
        if (remoteMessage.getNotification() != null) {
            notifications.put(remoteMessage.getMessageId(), remoteMessage);
        }
        final BroadcastReceiver.PendingResult pendingResultGoAsync = goAsync();
        backgroundExecutor.execute(new Runnable() { // from class: io.flutter.plugins.firebase.messaging.FlutterFirebaseMessagingReceiver$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                FlutterFirebaseMessagingReceiver.lambda$onReceive$0(remoteMessage, context, pendingResultGoAsync);
            }
        });
    }

    static /* synthetic */ void lambda$onReceive$0(RemoteMessage remoteMessage, Context context, BroadcastReceiver.PendingResult pendingResult) {
        try {
            if (remoteMessage.getNotification() != null) {
                FlutterFirebaseMessagingStore.getInstance().storeFirebaseMessage(remoteMessage);
            }
            if (FlutterFirebaseMessagingUtils.isApplicationForeground(context)) {
                FlutterFirebaseRemoteMessageLiveData.getInstance().postRemoteMessage(remoteMessage);
                return;
            }
            Intent intent = new Intent(context, (Class<?>) FlutterFirebaseMessagingBackgroundService.class);
            Parcel parcelObtain = Parcel.obtain();
            remoteMessage.writeToParcel(parcelObtain, 0);
            intent.putExtra("notification", parcelObtain.marshall());
            FlutterFirebaseMessagingBackgroundService.enqueueMessageProcessing(context, intent, remoteMessage.getOriginalPriority() == 1);
        } finally {
            pendingResult.finish();
        }
    }
}
