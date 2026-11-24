package com.pushwoosh;

import android.content.Context;
import android.text.TextUtils;
import androidx.work.Data;
import androidx.work.ListenableWorker;
import androidx.work.WorkerParameters;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.work.BasePushwooshWorker;
import com.pushwoosh.repository.PushwooshRepository;
import com.pushwoosh.s.c;

/* JADX INFO: loaded from: classes6.dex */
public class PushStatisticsWorker extends BasePushwooshWorker {
    public static final String DATA_BUTTON_ID = "DATA_BUTTON_ID";
    public static final String DATA_EVENT_TYPE = "DATA_EVENT_TYPE";
    public static final String DATA_METADATA = "DATA_METADATA";
    public static final String DATA_PUSH_HASH = "DATA_PUSH_HASH";
    public static final String EVENT_DELIVERY = "delivery";
    public static final String EVENT_OPEN = "open";
    public static final String TAG = "PushStatisticsWorker";

    public PushStatisticsWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    private static Result a(String str, String str2, String str3, String str4) {
        PushwooshRepository pushwooshRepository;
        PWLog.noise(TAG, "sendStatisticsEventSync(), eventType: " + str);
        try {
            try {
                PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
                pushwooshRepository = pushwooshPlatform != null ? pushwooshPlatform.pushwooshRepository() : null;
            } catch (Exception e) {
                PWLog.debug(TAG, "Failed to get repository", e);
            }
            if (pushwooshRepository != null) {
                return EVENT_DELIVERY.equals(str) ? pushwooshRepository.sendPushDeliveredSync(str2, str3) : pushwooshRepository.sendPushOpenedSync(str2, str3, str4);
            }
            PWLog.error(TAG, "Repository is null, " + str + " event not sent");
            return Result.fromException(new NetworkException("Repository not available"));
        } catch (Exception e2) {
            PWLog.error(TAG, "Failed to send " + str + " event", e2);
            return Result.fromException(new NetworkException(e2.getMessage()));
        }
    }

    public static Data createInputData(String str, String str2, String str3) {
        return createInputData(str, str2, str3, null);
    }

    @Override // androidx.work.Worker
    public ListenableWorker.Result doWork() {
        int i;
        PWLog.noise(TAG, "doWork(), " + getRunAttemptCount() + " attempt");
        String string = getInputData().getString(DATA_EVENT_TYPE);
        String string2 = getInputData().getString(DATA_PUSH_HASH);
        String string3 = getInputData().getString(DATA_METADATA);
        String string4 = getInputData().getString(DATA_BUTTON_ID);
        if (TextUtils.isEmpty(string) || TextUtils.isEmpty(string2)) {
            PWLog.error(TAG, "Cannot send statistics with null eventType or hash");
            return ListenableWorker.Result.failure();
        }
        if (getRunAttemptCount() >= 5) {
            PWLog.warn(TAG, "Max retry attempts reached for " + string + " event, giving up");
            return ListenableWorker.Result.failure();
        }
        if (c.d.f5311a != 2) {
            return ListenableWorker.Result.retry();
        }
        try {
            if (!EVENT_DELIVERY.equals(string) && !"open".equals(string)) {
                PWLog.warn(TAG, "Unknown event type: " + string);
                return ListenableWorker.Result.failure();
            }
            Result resultA = a(string, string2, string3, string4);
            if (resultA.isSuccess()) {
                return ListenableWorker.Result.success();
            }
            NetworkException networkException = (NetworkException) resultA.getException();
            if (networkException == null) {
                PWLog.error(TAG, "Failed to send " + string + " event due to null exception");
                return ListenableWorker.Result.failure();
            }
            if (networkException instanceof com.pushwoosh.v.a) {
                com.pushwoosh.v.a aVar = (com.pushwoosh.v.a) networkException;
                if ((aVar.b != 0 || aVar.f5317a != 0) && (i = aVar.f5317a) != 408 && i != 429 && i != 500) {
                    switch (i) {
                    }
                }
                PWLog.debug(TAG, "Will retry " + string + " event due to: " + networkException.getMessage());
                return ListenableWorker.Result.retry();
            }
            PWLog.warn(TAG, "Failed to send " + string + " event due to: " + networkException.getMessage());
            return ListenableWorker.Result.failure();
        } catch (Throwable th) {
            PWLog.error(TAG, "Failed to send statistics event: " + string, th);
            return ListenableWorker.Result.retry();
        }
    }

    @Override // com.pushwoosh.internal.work.BasePushwooshWorker
    protected String getLogTag() {
        return TAG;
    }

    public static Data createInputData(String str, String str2, String str3, String str4) {
        return new Data.Builder().putString(DATA_EVENT_TYPE, str).putString(DATA_PUSH_HASH, str2).putString(DATA_METADATA, str3).putString(DATA_BUTTON_ID, str4).build();
    }
}
