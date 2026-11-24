package com.pushwoosh.internal.utils;

import android.content.ContentValues;
import android.os.Bundle;
import androidx.work.BackoffPolicy;
import androidx.work.Data;
import androidx.work.ExistingWorkPolicy;
import androidx.work.OneTimeWorkRequest;
import com.pushwoosh.HandleMessageWorker;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.PushwooshWorkManagerHelper;
import com.pushwoosh.m0.o;
import com.pushwoosh.m0.p;
import com.pushwoosh.repository.RepositoryModule;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes6.dex */
public final class NotificationRegistrarHelper {
    private static void a(final Bundle bundle) {
        PWLog.noise("NotificationRegistrarHelper", "handleMessageUsingWorkManager");
        BackgroundExecutor.executeOnPool(new Runnable() { // from class: com.pushwoosh.internal.utils.NotificationRegistrarHelper$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() throws Throwable {
                NotificationRegistrarHelper.b(bundle);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(Bundle bundle) throws Throwable {
        o pushBundleStorage = RepositoryModule.getPushBundleStorage();
        if (pushBundleStorage == null) {
            PWLog.error("NotificationRegistrarHelper", "PushBundleStorage is null");
        } else {
            try {
                ContentValues contentValues = new ContentValues();
                contentValues.put("push_bundle_json", JsonUtils.bundleToJson(bundle).toString());
                a(((p) pushBundleStorage).a(contentValues, "pushBundles"));
                return;
            } catch (Exception e) {
                PWLog.error("NotificationRegistrarHelper", "Failed to schedule worker", e);
            }
        }
        handleMessageBundle(bundle);
    }

    public static void clearToken() {
        RepositoryModule.getRegistrationPreferences().pushToken().set("");
    }

    public static void handleMessage(Bundle bundle) {
        if (RepositoryModule.getNotificationPreferences() == null || !RepositoryModule.getNotificationPreferences().handleNotificationsUsingWorkManager().get()) {
            handleMessageBundle(bundle);
        } else {
            a(bundle);
        }
    }

    public static void handleMessageBundle(Bundle bundle) {
        PWLog.noise("NotificationRegistrarHelper", "handleMessageBundle");
        try {
            PushwooshPlatform.getInstance().notificationService().handleMessage(bundle);
        } catch (Exception e) {
            PWLog.exception(e);
        }
    }

    public static boolean isRegisteredForRemoteNotifications() {
        return RepositoryModule.getRegistrationPreferences().isRegisteredForPush().get();
    }

    public static void onFailedToRegisterForRemoteNotifications(String str) {
        PushwooshPlatform.getInstance().notificationManager().onFailedToRegisterForRemoteNotifications(str);
    }

    public static void onFailedToUnregisterFromRemoteNotifications(String str) {
        PushwooshPlatform.getInstance().notificationManager().onFailedToUnregisterFromRemoteNotifications(str);
    }

    public static void onRegisteredForRemoteNotifications(String str, String str2) {
        PWLog.noise("NotificationRegistrarHelper", "onRegisteredForRemoteNotifications: " + str);
        if (isRegisteredForRemoteNotifications()) {
            PushwooshPlatform.getInstance().notificationManager().a(str, str2);
        } else {
            PWLog.warn("NotificationRegistrarHelper", "Device should be registered directly to continue registration, token change ignored");
        }
    }

    public static void onUnregisteredFromRemoteNotifications(String str) {
        PushwooshPlatform.getInstance().notificationManager().onUnregisteredFromRemoteNotifications(str);
    }

    private static void a(long j) throws Throwable {
        PushwooshWorkManagerHelper.enqueueOneTimeUniqueWork(new OneTimeWorkRequest.Builder(HandleMessageWorker.class).setInputData(new Data.Builder().putLong("data_push_bundle_id", j).build()).setConstraints(PushwooshWorkManagerHelper.getNetworkAvailableConstraints()).setBackoffCriteria(BackoffPolicy.LINEAR, 5L, TimeUnit.SECONDS).build(), "HandleMessageWorker", ExistingWorkPolicy.APPEND);
    }
}
