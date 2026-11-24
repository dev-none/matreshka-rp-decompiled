package com.pushwoosh.internal.platform;

import android.content.Context;
import com.pushwoosh.a.c;
import com.pushwoosh.e0.l;
import com.pushwoosh.internal.platform.app.AppInfoProvider;
import com.pushwoosh.internal.platform.manager.ManagerProvider;
import com.pushwoosh.internal.platform.prefs.PrefsProvider;
import com.pushwoosh.internal.platform.resource.ResourceProvider;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes6.dex */
public final class AndroidPlatformModule {
    private static final AndroidPlatformModule ANDROID_PLATFORM_MODULE = new AndroidPlatformModule();
    public static final String NULL_CONTEXT_MESSAGE = "Incorrect state of app. Context is null";
    private AppInfoProvider appInfoProvider;
    private ApplicationOpenDetector applicationOpenDetector;
    private b applicationState;
    private WeakReference<Context> context;
    private ManagerProvider managerProvider;
    private c permissionController;
    private com.pushwoosh.a0.a prefsMigration;
    private PrefsProvider prefsProvider;
    private com.pushwoosh.b0.b receiverProvider;
    private ResourceProvider resourceProvider;
    private l timeProvider;

    private AndroidPlatformModule() {
    }

    public static AppInfoProvider getAppInfoProvider() {
        return ANDROID_PLATFORM_MODULE.appInfoProvider;
    }

    public static Context getApplicationContext() {
        WeakReference<Context> weakReference = ANDROID_PLATFORM_MODULE.context;
        if (weakReference == null) {
            return null;
        }
        return weakReference.get();
    }

    public static ApplicationOpenDetector getApplicationOpenDetector() {
        return ANDROID_PLATFORM_MODULE.applicationOpenDetector;
    }

    public static AndroidPlatformModule getInstance() {
        return ANDROID_PLATFORM_MODULE;
    }

    public static ManagerProvider getManagerProvider() {
        return ANDROID_PLATFORM_MODULE.managerProvider;
    }

    public static com.pushwoosh.a0.a getPrefsMigration() {
        return ANDROID_PLATFORM_MODULE.prefsMigration;
    }

    public static PrefsProvider getPrefsProvider() {
        return ANDROID_PLATFORM_MODULE.prefsProvider;
    }

    public static com.pushwoosh.b0.b getReceiverProvider() {
        return ANDROID_PLATFORM_MODULE.receiverProvider;
    }

    public static ResourceProvider getResourceProvider() {
        return ANDROID_PLATFORM_MODULE.resourceProvider;
    }

    public static l getTimeProvide() {
        return ANDROID_PLATFORM_MODULE.timeProvider;
    }

    public static void init(Context context, boolean z) {
        if (context == null) {
            return;
        }
        if (!isInit() || z) {
            ANDROID_PLATFORM_MODULE.initProviders(context);
        }
    }

    private void initProviders(Context context) {
        this.timeProvider = new l();
        this.context = new WeakReference<>(context.getApplicationContext());
        if (com.pushwoosh.z.b.b == null) {
            com.pushwoosh.z.b.a();
        }
        com.pushwoosh.z.b.b.getClass();
        this.prefsProvider = com.pushwoosh.z.b.a(3);
        if (com.pushwoosh.z.b.b == null) {
            com.pushwoosh.z.b.a();
        }
        this.prefsMigration = com.pushwoosh.z.b.b.f5327a == 2 ? new com.pushwoosh.internal.platform.prefs.migration.a(com.pushwoosh.z.b.a(3)) : null;
        this.managerProvider = new com.pushwoosh.y.a(context);
        this.appInfoProvider = new com.pushwoosh.x.a(context);
        this.resourceProvider = new com.pushwoosh.c0.a(context);
        this.receiverProvider = new com.pushwoosh.b0.a(context);
        this.applicationOpenDetector = new ApplicationOpenDetector(context);
        this.permissionController = new c(context, this.managerProvider.getNotificationManager());
        this.applicationState = new b();
    }

    public static boolean isApplicationInForeground() {
        return ANDROID_PLATFORM_MODULE.applicationState.f5200a.get();
    }

    public static boolean isInit() {
        WeakReference<Context> weakReference = ANDROID_PLATFORM_MODULE.context;
        return (weakReference == null || weakReference.get() == null) ? false : true;
    }

    public c getPermissionController() {
        return this.permissionController;
    }

    public l getTimeProvider() {
        return this.timeProvider;
    }

    public static void init(Context context) {
        init(context, false);
    }
}
