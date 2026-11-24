package com.pushwoosh.e0;

import android.content.Context;
import android.provider.Settings;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public abstract class k {
    public static boolean a() {
        try {
            Context applicationContext = AndroidPlatformModule.getApplicationContext();
            return applicationContext != null && Settings.Global.getFloat(applicationContext.getContentResolver(), "animator_duration_scale", 1.0f) == 0.0f;
        } catch (Exception e) {
            PWLog.warn("ReduceMotionUtil", "Failed to read ANIMATOR_DURATION_SCALE, assuming animations on", e);
            return false;
        }
    }
}
