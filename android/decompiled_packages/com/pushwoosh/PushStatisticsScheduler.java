package com.pushwoosh;

import android.os.Bundle;
import android.text.TextUtils;
import androidx.work.BackoffPolicy;
import androidx.work.ExistingWorkPolicy;
import androidx.work.OneTimeWorkRequest;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.PushBundleDataProvider;
import java.util.Random;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes6.dex */
public class PushStatisticsScheduler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Random f5026a = new Random();

    public static void scheduleDeliveryEvent(Bundle bundle) {
        PWLog.noise("PushStatisticsScheduler", "scheduleDeliveryEvent()");
        String pushHash = PushBundleDataProvider.getPushHash(bundle);
        String pushMetadata = PushBundleDataProvider.getPushMetadata(bundle);
        if (TextUtils.isEmpty(pushHash)) {
            PWLog.warn("PushStatisticsScheduler", "Push hash is null, skipping delivery event");
            return;
        }
        PWLog.debug("PushStatisticsScheduler", "Scheduling delivery event for hash: " + pushHash);
        scheduleStatisticsEvent(PushStatisticsWorker.EVENT_DELIVERY, pushHash, pushMetadata);
    }

    public static void scheduleOpenEvent(Bundle bundle) {
        PWLog.noise("PushStatisticsScheduler", "scheduleOpenEvent()");
        String pushHash = PushBundleDataProvider.getPushHash(bundle);
        String pushMetadata = PushBundleDataProvider.getPushMetadata(bundle);
        String tappedButtonId = PushBundleDataProvider.getTappedButtonId(bundle);
        if (TextUtils.isEmpty(pushHash)) {
            PWLog.warn("PushStatisticsScheduler", "Push hash is null, skipping open event");
            return;
        }
        PWLog.debug("PushStatisticsScheduler", "Scheduling open event for hash: " + pushHash);
        scheduleStatisticsEvent("open", pushHash, pushMetadata, tappedButtonId);
    }

    public static void scheduleStatisticsEvent(String str, String str2, String str3) {
        scheduleStatisticsEvent(str, str2, str3, null);
    }

    public static void scheduleStatisticsEvent(String str, String str2, String str3, String str4) {
        String str5;
        PWLog.noise("PushStatisticsScheduler", "scheduleStatisticsEvent(), eventType: " + str + ", hash: " + str2 + ", metadata: " + str3 + ", buttonId: " + str4);
        try {
            OneTimeWorkRequest oneTimeWorkRequestBuild = new OneTimeWorkRequest.Builder(PushStatisticsWorker.class).setInputData(PushStatisticsWorker.createInputData(str, str2, str3, str4)).setConstraints(PushwooshWorkManagerHelper.getStatisticsConstraints()).setInitialDelay(f5026a.nextInt(2501), TimeUnit.MILLISECONDS).setBackoffCriteria(PushStatisticsWorker.EVENT_DELIVERY.equals(str) ? BackoffPolicy.LINEAR : BackoffPolicy.EXPONENTIAL, PushStatisticsWorker.EVENT_DELIVERY.equals(str) ? 10L : 30L, TimeUnit.SECONDS).build();
            if (TextUtils.isEmpty(str4)) {
                str5 = str + "_" + str2;
            } else {
                str5 = str + "_" + str2 + "|" + str4;
            }
            PushwooshWorkManagerHelper.enqueueOneTimeUniqueWork(oneTimeWorkRequestBuild, str5, ExistingWorkPolicy.KEEP);
            PWLog.debug("PushStatisticsScheduler", "Successfully scheduled " + str + " event for hash: " + str2);
        } catch (Exception e) {
            PWLog.error("PushStatisticsScheduler", "Failed to schedule " + str + " event", e);
        }
    }
}
