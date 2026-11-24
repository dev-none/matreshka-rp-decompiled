package com.google.firebase.perf.metrics;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Build;

/* JADX INFO: loaded from: classes5.dex */
final class AppStartCause {
    final int apiLevel;
    final Cause cause;
    final int importance;

    enum Cause {
        FOREGROUND,
        UNKNOWN
    }

    AppStartCause(Cause cause, int i, int i2) {
        this.cause = cause;
        this.importance = i;
        this.apiLevel = i2;
    }

    static AppStartCause capture(Context context) {
        Cause cause;
        int i = Build.VERSION.SDK_INT;
        if (context == null) {
            return new AppStartCause(Cause.UNKNOWN, -1, i);
        }
        if (((ActivityManager) context.getSystemService("activity")) == null) {
            return new AppStartCause(Cause.UNKNOWN, -1, i);
        }
        int importance = readImportance();
        if (i >= 34) {
            if (importance == 100) {
                cause = Cause.FOREGROUND;
            } else {
                cause = Cause.UNKNOWN;
            }
            return new AppStartCause(cause, importance, i);
        }
        return new AppStartCause(Cause.UNKNOWN, importance, i);
    }

    private static int readImportance() {
        try {
            ActivityManager.RunningAppProcessInfo runningAppProcessInfo = new ActivityManager.RunningAppProcessInfo();
            ActivityManager.getMyMemoryState(runningAppProcessInfo);
            return runningAppProcessInfo.importance;
        } catch (Throwable unused) {
            return -1;
        }
    }
}
