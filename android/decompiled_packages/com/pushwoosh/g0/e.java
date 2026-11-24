package com.pushwoosh.g0;

import android.app.Activity;
import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import androidx.compose.animation.core.MutatorMutex$$ExternalSyntheticBackportWithForwarding0;
import androidx.core.app.ActivityCompat;
import androidx.core.app.NotificationManagerCompat;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.NotificationPermissionActivity;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: classes6.dex */
public abstract class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final AtomicReference f5085a = new AtomicReference();

    public static void a() {
        com.pushwoosh.s.c.d.a(new Runnable() { // from class: com.pushwoosh.g0.e$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                e.b();
            }
        });
    }

    public static void b() {
        PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
        if (pushwooshPlatform == null) {
            return;
        }
        com.pushwoosh.m0.g gVarDeviceRegistrar = pushwooshPlatform.deviceRegistrar();
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        if (registrationPreferences == null) {
            return;
        }
        String str = registrationPreferences.pushPermissionLastSent().get();
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        final String strA = applicationContext == null ? null : a(applicationContext, false);
        if (TextUtils.isEmpty(str) || strA == null || strA.equals(str) || strA.equals(f5085a.getAndSet(strA))) {
            return;
        }
        PWLog.debug("PushPermissionStatusTracker", "Push permission status changed to " + strA + ", updating registration");
        gVarDeviceRegistrar.b(new Runnable() { // from class: com.pushwoosh.g0.e$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                MutatorMutex$$ExternalSyntheticBackportWithForwarding0.m(e.f5085a, strA, null);
            }
        });
    }

    public static void a(NotificationPermissionActivity notificationPermissionActivity, boolean z) {
        boolean zA = a(notificationPermissionActivity);
        synchronized (e.class) {
            RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
            if (registrationPreferences == null) {
                return;
            }
            int i = Build.VERSION.SDK_INT;
            int i2 = notificationPermissionActivity.getApplicationInfo().targetSdkVersion;
            boolean z2 = false;
            if (registrationPreferences.pushPermissionFirstObservedGranted().get() == -1) {
                registrationPreferences.pushPermissionFirstObservedGranted().set(0);
            }
            boolean z3 = !z && (i < 33 || i2 < 33 || zA || registrationPreferences.pushPermissionRationaleSeen().get());
            if (z3) {
                registrationPreferences.hasUserDeniedNotificationPermission().set(true);
            }
            boolean z4 = registrationPreferences.pushPermissionFirstObservedGranted().get() == 1;
            if (z && !z4 && i >= 33 && i2 >= 33) {
                registrationPreferences.pushPermissionGrantedViaSdkPrompt().set(true);
            }
            if (i2 >= 33 && zA) {
                z2 = true;
            }
            PWLog.debug("PushPermissionStatusTracker", "Permission prompt result: " + a((Context) notificationPermissionActivity, z2) + ", denied by user: " + z3);
            a();
        }
    }

    public static synchronized String a(Context context, boolean z) {
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        if (registrationPreferences == null) {
            return null;
        }
        try {
            boolean zAreNotificationsEnabled = NotificationManagerCompat.from(context).areNotificationsEnabled();
            if (registrationPreferences.pushPermissionFirstObservedGranted().get() == -1) {
                registrationPreferences.pushPermissionFirstObservedGranted().set(zAreNotificationsEnabled ? 1 : 0);
            }
            if (zAreNotificationsEnabled && !registrationPreferences.pushPermissionEverGranted().get()) {
                registrationPreferences.pushPermissionEverGranted().set(true);
            }
            if (z && !registrationPreferences.pushPermissionRationaleSeen().get()) {
                registrationPreferences.pushPermissionRationaleSeen().set(true);
            }
            int i = Build.VERSION.SDK_INT;
            int i2 = context.getApplicationInfo().targetSdkVersion;
            boolean z2 = registrationPreferences.pushPermissionGrantedViaSdkPrompt().get();
            boolean z3 = registrationPreferences.pushPermissionEverGranted().get();
            boolean z4 = registrationPreferences.pushPermissionRationaleSeen().get();
            if (zAreNotificationsEnabled) {
                return (!z2 || i < 33 || i2 < 33) ? "granted_default" : "granted_explicit";
            }
            if (i < 33) {
                return "denied";
            }
            return (z3 || z4 || z) ? "denied" : "not_determined";
        } catch (Exception e) {
            PWLog.error("PushPermissionStatusTracker", "Failed to read notification permission", e);
            return null;
        }
    }

    public static boolean a(Activity activity) {
        if (Build.VERSION.SDK_INT < 33) {
            return false;
        }
        try {
            return ActivityCompat.shouldShowRequestPermissionRationale(activity, "android.permission.POST_NOTIFICATIONS");
        } catch (Exception e) {
            PWLog.error("PushPermissionStatusTracker", "Failed to read permission rationale", e);
            return false;
        }
    }
}
