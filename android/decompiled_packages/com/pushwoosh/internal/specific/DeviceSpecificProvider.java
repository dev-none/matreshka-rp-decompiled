package com.pushwoosh.internal.specific;

import com.pushwoosh.internal.registrar.PushRegistrar;
import com.pushwoosh.internal.utils.PWLog;
import java.util.Objects;

/* JADX INFO: loaded from: classes6.dex */
public class DeviceSpecificProvider {
    public static final String FCM_ANDROID_TYPE = "Android FCM";
    public static final String HUAWEI_TYPE = "Huawei";
    private static DeviceSpecificProvider b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final DeviceSpecific f5215a;

    public static class Builder {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private DeviceSpecific f5216a;

        public DeviceSpecificProvider build(boolean z) {
            if (this.f5216a == null) {
                throw new IllegalArgumentException("You must setup deviceSpecific");
            }
            if (DeviceSpecificProvider.b == null || z) {
                DeviceSpecificProvider deviceSpecificProvider = DeviceSpecificProvider.b;
                DeviceSpecificProvider deviceSpecificProvider2 = new DeviceSpecificProvider(this.f5216a);
                DeviceSpecificProvider.b = deviceSpecificProvider2;
                DeviceSpecificProvider.a(deviceSpecificProvider, deviceSpecificProvider2);
            }
            return DeviceSpecificProvider.b;
        }

        public Builder setDeviceSpecific(DeviceSpecific deviceSpecific) {
            this.f5216a = deviceSpecific;
            return this;
        }
    }

    DeviceSpecificProvider(DeviceSpecific deviceSpecific) {
        this.f5215a = deviceSpecific;
    }

    public static DeviceSpecificProvider getInstance() {
        return b;
    }

    public static boolean isInited() {
        return b != null;
    }

    public String describeTransport() {
        return type() + " (device type " + deviceType() + ")";
    }

    public int deviceType() {
        return this.f5215a.deviceType();
    }

    public boolean isFirebase() {
        return type().equals(FCM_ANDROID_TYPE);
    }

    public boolean isHuawei() {
        return type().equals(HUAWEI_TYPE);
    }

    public String permission(String str) {
        return this.f5215a.permission(str);
    }

    public PushRegistrar pushRegistrar() {
        return this.f5215a.pushRegistrar();
    }

    public String type() {
        return this.f5215a.type();
    }

    static void a(DeviceSpecificProvider deviceSpecificProvider, DeviceSpecificProvider deviceSpecificProvider2) {
        try {
            if (deviceSpecificProvider == null) {
                PWLog.info("DeviceSpecificProvider", "PUSH TRANSPORT SET: " + deviceSpecificProvider2.describeTransport());
            } else {
                if (Objects.equals(deviceSpecificProvider.type(), deviceSpecificProvider2.type())) {
                    return;
                }
                PWLog.info("DeviceSpecificProvider", "PUSH TRANSPORT CHANGED: " + deviceSpecificProvider.describeTransport() + " -> " + deviceSpecificProvider2.describeTransport());
            }
        } catch (Throwable th) {
            PWLog.error("DeviceSpecificProvider", "can't log push transport slot write", th);
        }
    }
}
