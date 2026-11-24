package com.pushwoosh;

import android.content.Context;
import androidx.work.Constraints;
import androidx.work.ExistingPeriodicWorkPolicy;
import androidx.work.ExistingWorkPolicy;
import androidx.work.NetworkType;
import androidx.work.OneTimeWorkRequest;
import androidx.work.PeriodicWorkRequest;
import androidx.work.WorkManager;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;
import com.unity3d.services.core.fid.Constants;

/* JADX INFO: loaded from: classes6.dex */
public final class PushwooshWorkManagerHelper {
    private static WorkManager a() {
        try {
            return (WorkManager) WorkManager.class.getMethod(Constants.GET_INSTANCE, Context.class).invoke(null, AndroidPlatformModule.getApplicationContext());
        } catch (NoSuchMethodException | NullPointerException e) {
            if (e instanceof NullPointerException) {
                PWLog.error(AndroidPlatformModule.NULL_CONTEXT_MESSAGE);
            }
            return WorkManager.getInstance();
        }
    }

    public static void cancelPeriodicUniqueWork(String str) {
        cancelUniqueWork(str);
    }

    public static void cancelUniqueWork(String str) {
        try {
            a().cancelUniqueWork(str);
        } catch (Exception e) {
            PWLog.error("Failed to cancel unique work.", e);
        }
    }

    public static void enqueueOneTimeUniqueWork(OneTimeWorkRequest oneTimeWorkRequest, String str, ExistingWorkPolicy existingWorkPolicy) {
        tryEnqueueOneTimeUniqueWork(oneTimeWorkRequest, str, existingWorkPolicy);
    }

    public static void enqueuePeriodicUniqueWork(PeriodicWorkRequest periodicWorkRequest, String str, ExistingPeriodicWorkPolicy existingPeriodicWorkPolicy) {
        try {
            a().enqueueUniquePeriodicWork(str, existingPeriodicWorkPolicy, periodicWorkRequest);
        } catch (Exception e) {
            PWLog.error("Failed to enqueue periodic work.", e);
        }
    }

    public static Constraints getNetworkAvailableConstraints() {
        return new Constraints.Builder().setRequiredNetworkType(NetworkType.CONNECTED).build();
    }

    public static Constraints getStatisticsConstraints() {
        return new Constraints.Builder().setRequiredNetworkType(NetworkType.CONNECTED).setRequiresBatteryNotLow(false).setRequiresDeviceIdle(false).setRequiresStorageNotLow(false).setRequiresCharging(false).build();
    }

    public static boolean tryEnqueueOneTimeUniqueWork(OneTimeWorkRequest oneTimeWorkRequest, String str, ExistingWorkPolicy existingWorkPolicy) {
        try {
            a().enqueueUniqueWork(str, existingWorkPolicy, oneTimeWorkRequest);
            return true;
        } catch (Exception e) {
            PWLog.error("Failed to enqueue work.", e);
            return false;
        }
    }
}
