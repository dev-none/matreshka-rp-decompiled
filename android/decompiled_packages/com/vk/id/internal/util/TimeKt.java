package com.vk.id.internal.util;

import android.os.Build;
import android.os.SystemClock;
import com.vk.id.logger.InternalVKIDLog;
import kotlin.Metadata;

/* JADX INFO: compiled from: Time.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\b\n\u0000\n\u0002\u0010\t\n\u0000\u001a\b\u0010\u0000\u001a\u00020\u0001H\u0000¨\u0006\u0002"}, d2 = {"currentTime", "", "vkid_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class TimeKt {
    public static final long currentTime() {
        if (Build.VERSION.SDK_INT >= 33) {
            try {
                return SystemClock.currentNetworkTimeClock().millis();
            } catch (RuntimeException e) {
                InternalVKIDLog.INSTANCE.createLoggerForTag("com.vk.id.internal.util.currentTime").error("Most likely device was started without access to internet", e);
                return System.currentTimeMillis();
            }
        }
        return System.currentTimeMillis();
    }
}
