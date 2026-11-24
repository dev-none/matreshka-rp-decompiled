package com.pushwoosh.firebase.a;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import com.google.firebase.messaging.FirebaseMessagingService;
import com.pushwoosh.firebase.PushFcmIntentService;
import com.pushwoosh.firebase.PushwooshFcmRouterService;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public abstract class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5079a = FirebaseMessagingService.class.getName();
    public static final AtomicBoolean b = new AtomicBoolean(false);

    public static void a(Executor executor) {
        if (b.compareAndSet(false, true)) {
            executor.execute(new Runnable() { // from class: com.pushwoosh.firebase.a.a$$ExternalSyntheticLambda0
                @Override // java.lang.Runnable
                public final void run() {
                    a.a();
                }
            });
        }
    }

    public static void b() {
        a(new Executor() { // from class: com.pushwoosh.firebase.a.a$$ExternalSyntheticLambda1
            @Override // java.util.concurrent.Executor
            public final void execute(Runnable runnable) {
                BackgroundExecutor.executeOnPool(runnable);
            }
        });
    }

    public static void c() {
        PackageManager packageManager;
        Intent intent;
        ResolveInfo resolveInfoResolveService;
        ServiceInfo serviceInfo;
        String str;
        ServiceInfo serviceInfo2;
        String str2;
        boolean zIsAssignableFrom;
        RegistrationPrefs registrationPreferences;
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null || (resolveInfoResolveService = (packageManager = applicationContext.getPackageManager()).resolveService((intent = new Intent("com.google.firebase.MESSAGING_EVENT").setPackage(applicationContext.getPackageName())), 0)) == null || (serviceInfo = resolveInfoResolveService.serviceInfo) == null || (str = serviceInfo.name) == null) {
            return;
        }
        if (!PushFcmIntentService.class.getName().equals(str)) {
            String str3 = f5079a;
            if (str3.equals(str)) {
                PWLog.warn("FcmServiceValidator", "No service in this app receives FCM messages for Pushwoosh: com.google.firebase.MESSAGING_EVENT resolves to the firebase-messaging fallback " + str3 + ". Keep com.pushwoosh.firebase.PushFcmIntentService in the merged manifest, or declare a service that extends com.pushwoosh.firebase.PushwooshFcmRouterService.");
            } else {
                try {
                    zIsAssignableFrom = PushwooshFcmRouterService.class.isAssignableFrom(Class.forName(str, false, PushwooshFcmRouterService.class.getClassLoader()));
                } catch (Throwable unused) {
                    zIsAssignableFrom = false;
                }
                if (!zIsAssignableFrom && (registrationPreferences = RepositoryModule.getRegistrationPreferences()) != null && !registrationPreferences.fcmMessageReceivedSinceInstallOrUpdate().get()) {
                    PWLog.info("FcmServiceValidator", "No Pushwoosh message has reached PushwooshFcmHelper since the app was installed or last updated. FCM messages in this app are delivered to " + str + ". If it already calls PushwooshFcmHelper.onMessageReceived() and PushwooshFcmHelper.onTokenRefresh() from its callbacks, nothing is wrong: this notice clears after the first Pushwoosh message arrives. Otherwise Pushwoosh delivery and open statistics are not collected: make " + str + " extend com.pushwoosh.firebase.PushwooshFcmRouterService, or add those calls.");
                }
            }
        }
        List<ResolveInfo> listQueryIntentServices = packageManager.queryIntentServices(intent, 0);
        if (listQueryIntentServices == null) {
            return;
        }
        for (ResolveInfo resolveInfo : listQueryIntentServices) {
            if (resolveInfo != null && (serviceInfo2 = resolveInfo.serviceInfo) != null && (str2 = serviceInfo2.name) != null && !str2.equals(str) && !str2.equals(f5079a) && !str2.equals(PushFcmIntentService.class.getName())) {
                PWLog.warn("FcmServiceValidator", "FCM will not deliver messages to " + str2 + ": " + str + " wins the resolution of com.google.firebase.MESSAGING_EVENT for this package. Remove the leftover service or give the intended one a higher android:priority on its intent-filter.");
            }
        }
    }

    public static void a() {
        try {
            c();
        } catch (Throwable th) {
            PWLog.exception(th);
        }
    }
}
