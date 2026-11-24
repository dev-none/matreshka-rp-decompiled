package com.pushwoosh.a;

import android.content.pm.ApplicationInfo;
import android.os.Bundle;
import com.pushwoosh.internal.Plugin;
import com.pushwoosh.internal.PluginProvider;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.app.AppInfoProvider;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.NotificationFactory;
import com.pushwoosh.notification.NotificationServiceExtension;
import com.pushwoosh.notification.SummaryNotificationFactory;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public abstract class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final AtomicBoolean f5032a = new AtomicBoolean(false);

    public static void a(Executor executor) {
        if (f5032a.compareAndSet(false, true)) {
            executor.execute(new Runnable() { // from class: com.pushwoosh.a.b$$ExternalSyntheticLambda1
                @Override // java.lang.Runnable
                public final void run() {
                    b.a();
                }
            });
        }
    }

    public static void b() {
        a(new Executor() { // from class: com.pushwoosh.a.b$$ExternalSyntheticLambda0
            @Override // java.util.concurrent.Executor
            public final void execute(Runnable runnable) {
                BackgroundExecutor.executeOnPool(runnable);
            }
        });
    }

    public static void c() {
        Bundle bundle;
        Class clsA;
        AppInfoProvider appInfoProvider = AndroidPlatformModule.getAppInfoProvider();
        if (appInfoProvider == null) {
            if (DeviceSpecificProvider.getInstance() == null) {
                PWLog.warn("ManifestValidator", "No attached push notifications providers have been found.\nThis error can be seen when you use 'pushwoosh-huawei' module\nnot on Huawei device or you have not added any module attaching\npush notifications provider.\nPushwoosh supports Firebase, Amazon, Huawei push notification providers.\nSee the integration guide https://docs.pushwoosh.com/platform-docs/pushwoosh-sdk/android-push-notifications");
                return;
            }
            return;
        }
        ApplicationInfo applicationInfo = appInfoProvider.getApplicationInfo();
        if (applicationInfo == null || (bundle = applicationInfo.metaData) == null) {
            if (DeviceSpecificProvider.getInstance() == null) {
                PWLog.warn("ManifestValidator", "No attached push notifications providers have been found.\nThis error can be seen when you use 'pushwoosh-huawei' module\nnot on Huawei device or you have not added any module attaching\npush notifications provider.\nPushwoosh supports Firebase, Amazon, Huawei push notification providers.\nSee the integration guide https://docs.pushwoosh.com/platform-docs/pushwoosh-sdk/android-push-notifications");
                return;
            }
            return;
        }
        Class clsA2 = a(bundle, "com.pushwoosh.notification_service_extension");
        if (clsA2 != null) {
            a("com.pushwoosh.notification_service_extension", clsA2, NotificationServiceExtension.class, "NotificationServiceExtension", false);
        }
        Class clsA3 = a(bundle, "com.pushwoosh.notification_factory");
        if (clsA3 != null) {
            a("com.pushwoosh.notification_factory", clsA3, NotificationFactory.class, "NotificationFactory", false);
        }
        Class clsA4 = a(bundle, "com.pushwoosh.summary_notification_factory");
        if (clsA4 != null) {
            a("com.pushwoosh.summary_notification_factory", clsA4, SummaryNotificationFactory.class, "SummaryNotificationFactory", false);
        }
        Class clsA5 = a(bundle, "com.pushwoosh.CALL_EVENT_LISTENER");
        if (clsA5 != null) {
            try {
                a("com.pushwoosh.CALL_EVENT_LISTENER", clsA5, Class.forName("com.pushwoosh.calls.listener.CallEventListener"), "CallEventListener", true);
            } catch (ClassNotFoundException unused) {
                PWLog.warn("ManifestValidator", "'com.pushwoosh.CALL_EVENT_LISTENER' is declared but the pushwoosh-calls module is not on the classpath. Either add the pushwoosh-calls dependency or remove the <meta-data> entry.");
            }
        }
        Class clsA6 = a(bundle, "com.pushwoosh.LIVE_UPDATE_STYLE_PROVIDER");
        if (clsA6 != null) {
            try {
                a("com.pushwoosh.LIVE_UPDATE_STYLE_PROVIDER", clsA6, Class.forName("com.pushwoosh.liveupdates.LiveUpdateProgressStyleProvider"), "LiveUpdateProgressStyleProvider", true);
            } catch (ClassNotFoundException unused2) {
                PWLog.warn("ManifestValidator", "'com.pushwoosh.LIVE_UPDATE_STYLE_PROVIDER' is declared but the pushwoosh-liveupdates module is not on the classpath. Either add the pushwoosh-liveupdates dependency or remove the <meta-data> entry.");
            }
        }
        Class clsA7 = a(bundle, "com.pushwoosh.internal.plugin_provider");
        if (clsA7 != null) {
            a("com.pushwoosh.internal.plugin_provider", clsA7, PluginProvider.class, "PluginProvider", true);
        }
        for (String str : bundle.keySet()) {
            if (str.startsWith("com.pushwoosh.plugin.") && (clsA = a(bundle, str)) != null) {
                a(str, clsA, Plugin.class, "Plugin", true);
            }
        }
        if (DeviceSpecificProvider.getInstance() == null) {
            PWLog.warn("ManifestValidator", "No attached push notifications providers have been found.\nThis error can be seen when you use 'pushwoosh-huawei' module\nnot on Huawei device or you have not added any module attaching\npush notifications provider.\nPushwoosh supports Firebase, Amazon, Huawei push notification providers.\nSee the integration guide https://docs.pushwoosh.com/platform-docs/pushwoosh-sdk/android-push-notifications");
        }
    }

    public static void a() {
        try {
            c();
        } catch (Throwable th) {
            PWLog.exception(th);
        }
    }

    public static Class a(Bundle bundle, String str) {
        String strA = a.a(bundle.getString(str));
        if (strA == null) {
            return null;
        }
        try {
            return Class.forName(strA);
        } catch (ClassNotFoundException unused) {
            PWLog.warn("ManifestValidator", str + " points to '" + strA + "', but this class was not found on the classpath. Verify the class name in AndroidManifest.xml and that the class is included in the build.");
            return null;
        }
    }

    public static void a(String str, Class cls, Class cls2, String str2, boolean z) {
        if (!cls2.isAssignableFrom(cls)) {
            PWLog.warn("ManifestValidator", "Class '" + cls.getName() + "' declared by '" + str + "' does not " + (z ? "implement" : "extend") + " " + cls2.getName() + ". Make it: public class " + cls.getSimpleName() + " " + (z ? "implements " : "extends ") + str2 + " { ... }");
            return;
        }
        try {
            cls.getConstructor(null);
        } catch (NoSuchMethodException unused) {
            PWLog.warn("ManifestValidator", "Class '" + cls.getName() + "' declared by '" + str + "' has no public no-argument constructor. Pushwoosh SDK instantiates it via reflection. Add: public " + cls.getSimpleName() + "() { ... }");
        }
    }
}
