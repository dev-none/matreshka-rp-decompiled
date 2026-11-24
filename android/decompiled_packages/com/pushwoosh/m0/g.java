package com.pushwoosh.m0;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import androidx.core.app.ActivityCompat;
import androidx.core.app.NotificationManagerCompat;
import androidx.work.BackoffPolicy;
import androidx.work.Data;
import androidx.work.ExistingWorkPolicy;
import androidx.work.OneTimeWorkRequest;
import com.pushwoosh.PushwooshWorkManagerHelper;
import com.pushwoosh.RegisterForPushNotificationsResultData;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.registrar.RegisterDeviceWorker;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.event.DeregistrationErrorEvent;
import com.pushwoosh.notification.event.DeregistrationSuccessEvent;
import com.pushwoosh.notification.event.RegistrationErrorEvent;
import com.pushwoosh.notification.event.RegistrationSuccessEvent;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import java.util.Calendar;
import java.util.Date;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicReference;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: loaded from: classes6.dex */
public final class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final ReentrantLock f5248a = new ReentrantLock();

    public static void a(String str, int i, final Callback callback) {
        PWLog.noise("DeviceRegistrar", "registerWithServer");
        final r rVar = new r(i, str, null);
        NetworkModule.getRequestManager().sendRequest(rVar, new Callback() { // from class: com.pushwoosh.m0.g$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                g.a(rVar, callback, result);
            }
        });
    }

    public static void b(String str) {
        try {
            Data.Builder builder = new Data.Builder();
            if (str != null) {
                builder.putString("tags", str);
            }
            if (PushwooshWorkManagerHelper.tryEnqueueOneTimeUniqueWork(new OneTimeWorkRequest.Builder(RegisterDeviceWorker.class).setInputData(builder.build()).setConstraints(PushwooshWorkManagerHelper.getNetworkAvailableConstraints()).setBackoffCriteria(BackoffPolicy.EXPONENTIAL, 30L, TimeUnit.SECONDS).build(), "RegisterDeviceWorker", ExistingWorkPolicy.REPLACE)) {
                return;
            }
            EventBus.sendEvent(new RegistrationErrorEvent("can't schedule device registration"));
        } catch (Exception e) {
            PWLog.error("DeviceRegistrar", "can't schedule device registration", e);
            EventBus.sendEvent(new RegistrationErrorEvent("can't schedule device registration"));
        }
    }

    public static void a(r rVar, Callback callback, Result result) {
        RegistrationPrefs registrationPreferences;
        if (result.isSuccess()) {
            String str = rVar.f5245a;
            AtomicReference atomicReference = com.pushwoosh.g0.e.f5085a;
            if (str != null && (registrationPreferences = RepositoryModule.getRegistrationPreferences()) != null) {
                registrationPreferences.pushPermissionLastSent().set(str);
            }
        }
        if (callback != null) {
            callback.process(result);
        }
    }

    public static void b(String str, RegistrationPrefs registrationPrefs, Result result) {
        if (result.isSuccess()) {
            PWLog.info("DeviceRegistrar", "Unregistered for pushes: " + str);
            EventBus.sendEvent(new DeregistrationSuccessEvent(str));
            registrationPrefs.lastPushRegistration().set(0L);
            return;
        }
        String message = result.getException() == null ? "" : ((NetworkException) result.getException()).getMessage();
        if (TextUtils.isEmpty(message)) {
            message = "Pushwoosh unregistration error";
        }
        PWLog.error("DeviceRegistrar", "Unregistration error: " + message);
        EventBus.sendEvent(new DeregistrationErrorEvent(message));
    }

    public final void a() {
        if (!f5248a.tryLock()) {
            PWLog.debug("DeviceRegistrar", "device registration is already in flight, skipping this one");
            b((String) null);
        } else {
            try {
                a((String) null);
            } finally {
                f5248a.unlock();
            }
        }
    }

    public final void b() {
        PWLog.noise("DeviceRegistrar", "updateRegistration()");
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        String str = registrationPreferences.pushToken().get();
        if (str == null || str.isEmpty()) {
            return;
        }
        boolean z = registrationPreferences.forceRegister().get();
        registrationPreferences.forceRegister().set(false);
        if (!z) {
            RegistrationPrefs registrationPreferences2 = RepositoryModule.getRegistrationPreferences();
            Calendar calendar = Calendar.getInstance();
            Calendar calendar2 = Calendar.getInstance();
            calendar2.add(12, -10);
            Calendar calendar3 = Calendar.getInstance();
            calendar3.setTime(new Date(registrationPreferences2.lastPushRegistration().get()));
            if (calendar2.before(calendar3) && calendar3.before(calendar)) {
                return;
            }
        }
        BackgroundExecutor.network(new Runnable() { // from class: com.pushwoosh.m0.g$$ExternalSyntheticLambda1
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a();
            }
        });
    }

    public final void a(Runnable runnable) {
        ReentrantLock reentrantLock = f5248a;
        if (!reentrantLock.tryLock()) {
            PWLog.debug("DeviceRegistrar", "device registration is already in flight, skipping this one");
            b((String) null);
        } else {
            try {
                a((String) null);
                reentrantLock.unlock();
            } catch (Throwable th) {
                f5248a.unlock();
                throw th;
            }
        }
        runnable.run();
    }

    public static Result a(String str) {
        RegistrationPrefs registrationPreferences;
        RegistrationPrefs registrationPreferences2 = RepositoryModule.getRegistrationPreferences();
        if (registrationPreferences2 == null) {
            return Result.fromException(new NetworkException("SDK is not initialized"));
        }
        String str2 = registrationPreferences2.pushToken().get();
        if (TextUtils.isEmpty(str2)) {
            return Result.fromException(new NetworkException("push token is empty"));
        }
        DeviceSpecificProvider deviceSpecificProvider = DeviceSpecificProvider.getInstance();
        if (deviceSpecificProvider == null) {
            PWLog.error("DeviceRegistrar", "can't register device: no push transport module");
            EventBus.sendEvent(new RegistrationErrorEvent("can't register device: no push transport module"));
            return Result.fromException(new NetworkException("can't register device: no push transport module"));
        }
        r rVar = new r(deviceSpecificProvider.deviceType(), str2, str);
        Result resultSendRequestSync = NetworkModule.getRequestManager().sendRequestSync(rVar);
        if (!str2.equals(registrationPreferences2.pushToken().get())) {
            return Result.fromData(null);
        }
        if (resultSendRequestSync.isSuccess()) {
            String str3 = rVar.f5245a;
            AtomicReference atomicReference = com.pushwoosh.g0.e.f5085a;
            if (str3 != null && (registrationPreferences = RepositoryModule.getRegistrationPreferences()) != null) {
                registrationPreferences.pushPermissionLastSent().set(str3);
            }
            boolean zAreNotificationsEnabled = true;
            registrationPreferences2.registeredOnServer().set(true);
            registrationPreferences2.lastPushRegistration().set(new Date().getTime());
            try {
                Context applicationContext = AndroidPlatformModule.getApplicationContext();
                if (applicationContext == null) {
                    PWLog.warn("DeviceRegistrar", "areNotificationsEnabled: context is null");
                } else if (Build.VERSION.SDK_INT >= 33) {
                    if (ActivityCompat.checkSelfPermission(applicationContext, "android.permission.POST_NOTIFICATIONS") != 0) {
                        zAreNotificationsEnabled = false;
                    }
                } else {
                    zAreNotificationsEnabled = NotificationManagerCompat.from(applicationContext).areNotificationsEnabled();
                }
            } catch (Exception e) {
                PWLog.exception(e);
            }
            EventBus.sendEvent(new RegistrationSuccessEvent(new RegisterForPushNotificationsResultData(str2, zAreNotificationsEnabled)));
            PWLog.info("DeviceRegistrar", "Registered for push notifications: ".concat(str2));
            return resultSendRequestSync;
        }
        PWLog.error("DeviceRegistrar", "can't register device", resultSendRequestSync.getException());
        EventBus.sendEvent(new RegistrationErrorEvent("can't register device"));
        return resultSendRequestSync;
    }

    public final void b(final Runnable runnable) {
        PWLog.noise("DeviceRegistrar", "updateRegistrationNow()");
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        if (TextUtils.isEmpty(registrationPreferences == null ? null : registrationPreferences.pushToken().get())) {
            runnable.run();
        } else {
            BackgroundExecutor.network(new Runnable() { // from class: com.pushwoosh.m0.g$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(runnable);
                }
            });
        }
    }

    public static void a(final String str, String str2, String str3) {
        PWLog.debug("DeviceRegistrar", "Unregistering for pushes...");
        final RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        NetworkModule.getRequestManager().sendRequest(new b0(str3), str2, new Callback() { // from class: com.pushwoosh.m0.g$$ExternalSyntheticLambda2
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                g.b(str, registrationPreferences, result);
            }
        });
    }
}
