package com.pushwoosh.firebase.internal.registrar;

import android.content.Context;
import android.text.TextUtils;
import androidx.work.ListenableWorker;
import androidx.work.WorkerParameters;
import com.pushwoosh.firebase.d.a;
import com.pushwoosh.internal.utils.NotificationRegistrarHelper;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.work.BasePushwooshWorker;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public class FcmRegistrarWorker extends BasePushwooshWorker {
    public FcmRegistrarWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    @Override // androidx.work.Worker
    public final ListenableWorker.Result doWork() {
        boolean z = getInputData().getBoolean("DATA_REGISTER", false);
        boolean z2 = getInputData().getBoolean("DATA_UNREGISTER", false);
        String string = getInputData().getString("DATA_TAGS");
        if (!z) {
            if (z2) {
                try {
                    NotificationRegistrarHelper.onUnregisteredFromRemoteNotifications(RepositoryModule.getRegistrationPreferences().pushToken().get());
                } catch (Exception e) {
                    PWLog.error("FcmRegistrarWorker", "Fcm deregistration error", e);
                    NotificationRegistrarHelper.onFailedToUnregisterFromRemoteNotifications(e.getMessage());
                }
            }
            return ListenableWorker.Result.success();
        }
        boolean z3 = getRunAttemptCount() == 0;
        try {
            String str = RepositoryModule.getRegistrationPreferences().pushToken().get();
            if (z3 && !TextUtils.isEmpty(str)) {
                a.a();
            }
            String strB = a.b();
            if (TextUtils.isEmpty(strB)) {
                PWLog.info("FcmRegistrarWorker", "FCM token is empty");
                NotificationRegistrarHelper.onFailedToRegisterForRemoteNotifications("FCM token is empty");
                return ListenableWorker.Result.retry();
            }
            PWLog.debug("FcmRegistrarWorker", "FCM token is " + strB);
            NotificationRegistrarHelper.onRegisteredForRemoteNotifications(strB, string);
            return ListenableWorker.Result.success();
        } catch (IllegalStateException unused) {
            PWLog.error("FcmRegistrarWorker", "FCM registration error: Failed to retrieve token. Is firebase configured correctly?");
            NotificationRegistrarHelper.onFailedToRegisterForRemoteNotifications("Failed to retrieve token. Is firebase configured correctly?");
            return ListenableWorker.Result.success();
        } catch (Exception e2) {
            PWLog.error("FcmRegistrarWorker", "FCM registration error", e2);
            NotificationRegistrarHelper.onFailedToRegisterForRemoteNotifications(e2.getMessage());
            return ListenableWorker.Result.retry();
        }
    }

    @Override // com.pushwoosh.internal.work.BasePushwooshWorker
    protected final String getLogTag() {
        return "FcmRegistrarWorker";
    }
}
