package com.vk.id.internal.auth.device;

import android.content.Context;
import android.os.Build;
import android.provider.Settings;
import android.text.TextUtils;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.internal.util.MD5;
import com.vk.id.logger.InternalVKIDLog;
import com.vk.id.logger.InternalVKIDLogger;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import io.sentry.SentryEvent;
import java.util.ArrayList;
import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: InternalVKIDDeviceIdProvider.kt */
/* JADX INFO: loaded from: classes6.dex */
@InternalVKIDApi
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0006\b\u0007\u0018\u0000 \u00142\u00020\u0001:\u0002\u0013\u0014B\u0019\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0015\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0000¢\u0006\u0002\b\u0010J\r\u0010\u0011\u001a\u00020\u000fH\u0000¢\u0006\u0002\b\u0012R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider;", "", "context", "Landroid/content/Context;", "deviceIdStorage", "Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "<init>", "(Landroid/content/Context;Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;)V", "mutex", "Ljava/util/concurrent/locks/ReentrantLock;", SentryEvent.JsonKeys.LOGGER, "Lcom/vk/id/logger/InternalVKIDLogger;", "setDeviceId", "", "deviceId", "", "setDeviceId$vkid_release", "getDeviceId", "getDeviceId$vkid_release", "DeviceIdStorage", "Companion", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class InternalVKIDDeviceIdProvider {
    private static final String DEFAULT_ID = "default";
    private final Context context;
    private final DeviceIdStorage deviceIdStorage;
    private final InternalVKIDLogger logger;
    private final ReentrantLock mutex;

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    /* JADX INFO: compiled from: InternalVKIDDeviceIdProvider.kt */
    @InternalVKIDApi
    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0006\n\u0002\u0010\t\n\u0002\b\u0004\bg\u0018\u00002\u00020\u0001J\b\u0010\u0002\u001a\u00020\u0003H&J\u0010\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0003H&J\b\u0010\u0007\u001a\u00020\u0003H&J\u0010\u0010\b\u001a\u00020\u00052\u0006\u0010\t\u001a\u00020\u0003H&J\u0010\u0010\n\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\fH&J\u0018\u0010\r\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u000e\u001a\u00020\u0003H&J\u0010\u0010\u000f\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\fH&¨\u0006\u0010"}, d2 = {"Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$DeviceIdStorage;", "", "getDeviceId", "", "setDeviceId", "", "deviceId", "getSystemDeviceId", "setSystemDeviceId", "systemDeviceId", "getDeviceToken", "memberId", "", "setDeviceToken", "deviceToken", "clearDeviceToken", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public interface DeviceIdStorage {
        void clearDeviceToken(long memberId);

        String getDeviceId();

        String getDeviceToken(long memberId);

        String getSystemDeviceId();

        void setDeviceId(String deviceId);

        void setDeviceToken(long memberId, String deviceToken);

        void setSystemDeviceId(String systemDeviceId);
    }

    public InternalVKIDDeviceIdProvider(Context context, DeviceIdStorage deviceIdStorage) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(deviceIdStorage, "deviceIdStorage");
        this.context = context;
        this.deviceIdStorage = deviceIdStorage;
        this.mutex = new ReentrantLock();
        InternalVKIDLog internalVKIDLog = InternalVKIDLog.INSTANCE;
        Intrinsics.checkNotNullExpressionValue("InternalVKIDDeviceIdProvider", "getSimpleName(...)");
        this.logger = internalVKIDLog.createLoggerForTag("InternalVKIDDeviceIdProvider");
    }

    public final void setDeviceId$vkid_release(String deviceId) {
        Intrinsics.checkNotNullParameter(deviceId, "deviceId");
        this.deviceIdStorage.setDeviceId(deviceId);
    }

    public final String getDeviceId$vkid_release() {
        ReentrantLock reentrantLock = this.mutex;
        reentrantLock.lock();
        try {
            String deviceId = this.deviceIdStorage.getDeviceId();
            if (TextUtils.isEmpty(deviceId)) {
                this.logger.debug("nextDeviceId is null or empty: " + deviceId);
                String strFindDeviceIdByAndroidId = INSTANCE.findDeviceIdByAndroidId(this.context);
                ArrayList arrayList = new ArrayList();
                if (TextUtils.isEmpty(strFindDeviceIdByAndroidId)) {
                    strFindDeviceIdByAndroidId = "default";
                }
                arrayList.add(strFindDeviceIdByAndroidId);
                StringBuilder sb = new StringBuilder();
                int size = arrayList.size();
                for (int i = 0; i < size; i++) {
                    sb.append((String) arrayList.get(i));
                    if (i < arrayList.size() - 1) {
                        sb.append(StringUtils.PROCESS_POSTFIX_DELIMITER);
                    }
                }
                deviceId = sb.toString();
                Intrinsics.checkNotNullExpressionValue(deviceId, "toString(...)");
                this.logger.debug("new nextDeviceId: " + deviceId);
                this.deviceIdStorage.setDeviceId(deviceId);
            }
            return deviceId;
        } finally {
            reentrantLock.unlock();
        }
    }

    /* JADX INFO: compiled from: InternalVKIDDeviceIdProvider.kt */
    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0080\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0012\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0003J\u0006\u0010\b\u001a\u00020\u0005R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/vk/id/internal/auth/device/InternalVKIDDeviceIdProvider$Companion;", "", "<init>", "()V", "findDeviceIdByAndroidId", "", "context", "Landroid/content/Context;", "getDeviceId", "DEFAULT_ID", "vkid_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final String findDeviceIdByAndroidId(Context context) {
            return Settings.Secure.getString(context.getContentResolver(), "android_id");
        }

        public final String getDeviceId() {
            String str = Build.PRODUCT + Build.BOARD + Build.BOOTLOADER + Build.BRAND + Build.DEVICE + Build.DISPLAY + Build.FINGERPRINT + Build.HARDWARE + Build.HOST + Build.ID + Build.MANUFACTURER + Build.MODEL + Build.PRODUCT + Build.TAGS;
            Intrinsics.checkNotNullExpressionValue(str, "toString(...)");
            return MD5.convert(str);
        }
    }
}
