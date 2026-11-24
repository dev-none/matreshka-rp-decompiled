package com.pushwoosh.inapp;

import android.content.Context;
import androidx.work.ListenableWorker;
import androidx.work.WorkerParameters;
import com.pushwoosh.e.b;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.work.BasePushwooshWorker;
import com.pushwoosh.j.d;

/* JADX INFO: loaded from: classes6.dex */
public class InAppRetrieverWorker extends BasePushwooshWorker {
    public InAppRetrieverWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    @Override // androidx.work.Worker
    public final ListenableWorker.Result doWork() {
        try {
            d dVarA = b.a();
            if (dVarA != null) {
                dVarA.a();
            }
        } catch (Exception e) {
            PWLog.error("InAppRetrieverWorker", "Failed to load in-apps", e);
        }
        return ListenableWorker.Result.success();
    }

    @Override // com.pushwoosh.internal.work.BasePushwooshWorker
    protected final String getLogTag() {
        return "InAppRetrieverWorker";
    }
}
