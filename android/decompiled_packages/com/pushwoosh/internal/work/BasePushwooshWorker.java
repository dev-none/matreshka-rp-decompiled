package com.pushwoosh.internal.work;

import android.content.Context;
import android.os.Build;
import androidx.work.Worker;
import androidx.work.WorkerParameters;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public abstract class BasePushwooshWorker extends Worker {
    public BasePushwooshWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
    }

    static String stopReasonToString(int i) {
        if (i == -512) {
            return "UNKNOWN";
        }
        if (i == -256) {
            return "NOT_STOPPED";
        }
        switch (i) {
            case 1:
                return "CANCELLED_BY_APP";
            case 2:
                return "PREEMPT";
            case 3:
                return "TIMEOUT";
            case 4:
                return "DEVICE_STATE";
            case 5:
                return "CONSTRAINT_BATTERY_NOT_LOW";
            case 6:
                return "CONSTRAINT_CHARGING";
            case 7:
                return "CONSTRAINT_CONNECTIVITY";
            case 8:
                return "CONSTRAINT_DEVICE_IDLE";
            case 9:
                return "CONSTRAINT_STORAGE_NOT_LOW";
            case 10:
                return "QUOTA";
            case 11:
                return "BACKGROUND_RESTRICTION";
            case 12:
                return "APP_STANDBY";
            case 13:
                return "USER";
            case 14:
                return "SYSTEM_PROCESSING";
            case 15:
                return "ESTIMATED_APP_LAUNCH_TIME_CHANGED";
            default:
                return "CODE_" + i;
        }
    }

    int fetchStopReason() {
        return getStopReason();
    }

    protected abstract String getLogTag();

    @Override // androidx.work.ListenableWorker
    public void onStopped() {
        super.onStopped();
        String logTag = getLogTag();
        int runAttemptCount = getRunAttemptCount();
        if (Build.VERSION.SDK_INT >= 31) {
            try {
                PWLog.warn(logTag, "Worker stopped, reason=" + stopReasonToString(fetchStopReason()) + ", attempt=" + runAttemptCount);
                return;
            } catch (NoSuchMethodError unused) {
            }
        }
        PWLog.warn(logTag, "Worker stopped, attempt=" + runAttemptCount);
    }
}
