package com.pushwoosh.internal.utils;

import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;

/* JADX INFO: loaded from: classes6.dex */
public class SdkStatusChecker {
    public static boolean isContextOk() {
        return AndroidPlatformModule.isInit();
    }

    public static boolean isDeviceProviderOk() {
        return DeviceSpecificProvider.isInited();
    }

    public static boolean isInitialized() {
        return isDeviceProviderOk() && isContextOk() && isPushwooshOk();
    }

    public static boolean isPushwooshOk() {
        return PushwooshPlatform.getInstance() != null;
    }
}
