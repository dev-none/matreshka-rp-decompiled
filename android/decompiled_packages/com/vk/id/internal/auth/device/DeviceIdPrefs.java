package com.vk.id.internal.auth.device;

import android.content.Context;
import android.content.SharedPreferences;
import androidx.preference.PreferenceManager;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: DeviceIdPrefs.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0006\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0001\u0018\u0000 \u00172\u00020\u0001:\u0001\u0017B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0006\u001a\u00020\u0007H\u0016J\u0010\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u0007H\u0016J\b\u0010\u000b\u001a\u00020\u0007H\u0016J\u0010\u0010\f\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\u0007H\u0016J\u0010\u0010\u000e\u001a\u00020\u00072\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\u0018\u0010\u0011\u001a\u00020\t2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u0007H\u0016J\u0010\u0010\u0013\u001a\u00020\t2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\u0010\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0002\u001a\u00020\u0003H\u0002J\u0010\u0010\u0016\u001a\u00020\u00072\u0006\u0010\u000f\u001a\u00020\u0010H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lcom/vk/id/internal/auth/device/DeviceIdPrefs;", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "getDeviceId", "", "setDeviceId", "", "deviceId", "getSystemDeviceId", "setSystemDeviceId", "systemDeviceId", "getDeviceToken", "memberId", "", "setDeviceToken", "deviceToken", "clearDeviceToken", "getPrefs", "Landroid/content/SharedPreferences;", "deviceTokenPreferenceKey", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class DeviceIdPrefs implements InternalVKIDDeviceIdProvider.DeviceIdStorage {
    private static final String DEVICE_ID = "__vk_device_id__";
    private static final String DEVICE_TOKEN_PREFIX = "__vk__device_token__";
    private static final String SYSTEM_DEVICE_ID = "__vk_system_device_id__";
    private final Context context;
    private static final Companion Companion = new Companion(null);
    public static final int $stable = 8;

    public DeviceIdPrefs(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
    }

    @Override // com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider.DeviceIdStorage
    public String getDeviceId() {
        String string = getPrefs(this.context).getString(DEVICE_ID, "");
        return string == null ? "" : string;
    }

    @Override // com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider.DeviceIdStorage
    public void setDeviceId(String deviceId) {
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        getPrefs(this.context).edit().putString(DEVICE_ID, deviceId).apply();
    }

    @Override // com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider.DeviceIdStorage
    public String getSystemDeviceId() {
        String string = getPrefs(this.context).getString(SYSTEM_DEVICE_ID, "");
        return string == null ? "" : string;
    }

    @Override // com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider.DeviceIdStorage
    public void setSystemDeviceId(String systemDeviceId) {
        Intrinsics.checkNotNullParameter(systemDeviceId, "systemDeviceId");
        getPrefs(this.context).edit().putString(SYSTEM_DEVICE_ID, systemDeviceId).apply();
    }

    @Override // com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider.DeviceIdStorage
    public String getDeviceToken(long memberId) {
        String string = getPrefs(this.context).getString(deviceTokenPreferenceKey(memberId), "");
        return string == null ? "" : string;
    }

    @Override // com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider.DeviceIdStorage
    public void setDeviceToken(long memberId, String deviceToken) {
        Intrinsics.checkNotNullParameter(deviceToken, "deviceToken");
        getPrefs(this.context).edit().putString(deviceTokenPreferenceKey(memberId), deviceToken).apply();
    }

    @Override // com.vk.id.internal.auth.device.InternalVKIDDeviceIdProvider.DeviceIdStorage
    public void clearDeviceToken(long memberId) {
        getPrefs(this.context).edit().remove(deviceTokenPreferenceKey(memberId)).apply();
    }

    private final SharedPreferences getPrefs(Context context) {
        SharedPreferences defaultSharedPreferences = PreferenceManager.getDefaultSharedPreferences(context);
        Intrinsics.checkNotNullExpressionValue(defaultSharedPreferences, "getDefaultSharedPreferences(...)");
        return defaultSharedPreferences;
    }

    private final String deviceTokenPreferenceKey(long memberId) {
        return DEVICE_TOKEN_PREFIX + memberId;
    }

    /* JADX INFO: compiled from: DeviceIdPrefs.kt */
    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"Lcom/vk/id/internal/auth/device/DeviceIdPrefs$Companion;", "", "<init>", "()V", "DEVICE_ID", "", "SYSTEM_DEVICE_ID", "DEVICE_TOKEN_PREFIX", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    private static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }
}
