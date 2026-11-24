package com.pushwoosh;

import android.content.Context;
import android.os.Bundle;
import androidx.work.ListenableWorker;
import androidx.work.WorkerParameters;
import com.pushwoosh.internal.utils.NotificationRegistrarHelper;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.work.BasePushwooshWorker;
import com.pushwoosh.m0.p;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public class HandleMessageWorker extends BasePushwooshWorker {
    public HandleMessageWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    @Override // androidx.work.Worker
    public final ListenableWorker.Result doWork() {
        long j = getInputData().getLong("data_push_bundle_id", -1L);
        if (j == -1) {
            return getRunAttemptCount() < 2 ? ListenableWorker.Result.retry() : ListenableWorker.Result.success();
        }
        try {
            Bundle bundleB = ((p) RepositoryModule.getPushBundleStorage()).b(j);
            if (bundleB == null) {
                return getRunAttemptCount() < 2 ? ListenableWorker.Result.retry() : ListenableWorker.Result.success();
            }
            ((p) RepositoryModule.getPushBundleStorage()).a("pushBundles", j);
            NotificationRegistrarHelper.handleMessageBundle(bundleB);
            return ListenableWorker.Result.success();
        } catch (Throwable th) {
            PWLog.error("HandleMessageWorker", "Failed to read push bundle id=" + j, th);
            return getRunAttemptCount() < 2 ? ListenableWorker.Result.retry() : ListenableWorker.Result.success();
        }
    }

    @Override // com.pushwoosh.internal.work.BasePushwooshWorker
    protected final String getLogTag() {
        return "HandleMessageWorker";
    }
}
