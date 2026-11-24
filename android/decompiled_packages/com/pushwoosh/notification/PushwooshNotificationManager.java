package com.pushwoosh.notification;

import android.os.Build;
import android.text.TextUtils;
import androidx.core.content.ContextCompat;
import com.pushwoosh.PushwooshWorkManagerHelper;
import com.pushwoosh.RegisterForPushNotificationsResultData;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.g0.f;
import com.pushwoosh.g0.h;
import com.pushwoosh.internal.event.AppIdChangedEvent;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.NotificationPermissionEvent;
import com.pushwoosh.internal.network.NetworkException;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.registrar.PushRegistrar;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.NotificationPermissionActivity;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.internal.utils.RequestPermissionHelper;
import com.pushwoosh.m0.b0;
import com.pushwoosh.m0.g;
import com.pushwoosh.notification.event.DeregistrationErrorEvent;
import com.pushwoosh.notification.event.RegistrationErrorEvent;
import com.pushwoosh.notification.event.RegistrationSuccessEvent;
import com.pushwoosh.notification.handlers.message.system.MessageSystemHandleChainProvider;
import com.pushwoosh.notification.handlers.message.user.MessageHandleChainProvider;
import com.pushwoosh.notification.handlers.notification.NotificationOpenHandlerChainProvider;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.tags.TagsBundle;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshNotificationManager {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final RegistrationPrefs f5283a;
    private final com.pushwoosh.repository.a b;
    private final g c;
    private final PushRegistrar d;
    private PushMessage e;
    private final com.pushwoosh.a.a f;
    private final AtomicBoolean g = new AtomicBoolean(false);

    public PushwooshNotificationManager(com.pushwoosh.a.a aVar, PushRegistrar pushRegistrar, RegistrationPrefs registrationPrefs, g gVar) {
        this.f = aVar;
        this.d = pushRegistrar;
        this.f5283a = registrationPrefs;
        this.b = new com.pushwoosh.repository.a(registrationPrefs);
        this.c = gVar;
    }

    public static void f() {
        if (Build.VERSION.SDK_INT < 33) {
            return;
        }
        RequestPermissionHelper.requestPermissionsForClass(NotificationPermissionActivity.class, AndroidPlatformModule.getApplicationContext(), new String[]{"android.permission.POST_NOTIFICATIONS"});
    }

    public final void b(String str, String str2) {
        PWLog.noise("NotificationManager", "setAppId()");
        com.pushwoosh.m0.b bVarA = this.b.a(str, str2);
        if (bVarA.f5243a) {
            return;
        }
        NetworkModule.getRequestManager().updateBaseUrl(bVarA.b);
        com.pushwoosh.m0.a aVar = bVarA.c;
        if (aVar != null) {
            this.g.set(false);
            if (aVar.d) {
                g gVar = this.c;
                String str3 = aVar.b;
                String str4 = aVar.c;
                String str5 = aVar.f5241a;
                gVar.getClass();
                g.a(str3, str4, str5);
            }
            EventBus.sendEvent(new AppIdChangedEvent(str, aVar.f5241a));
        }
        if (this.g.get()) {
            return;
        }
        EventBus.sendEvent(new f());
        this.g.set(true);
    }

    public final String c() {
        String str = this.f5283a.pushToken().get();
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return str;
    }

    public final void d() {
        this.d.init();
    }

    public final void e() {
        String str;
        PWLog.noise("NotificationManager", "initialize()");
        MessageHandleChainProvider.init();
        MessageSystemHandleChainProvider.init();
        NotificationOpenHandlerChainProvider.init();
        com.pushwoosh.a.a aVar = this.f;
        if (TextUtils.isEmpty(TextUtils.isEmpty(aVar.f5031a) ? null : aVar.f5031a)) {
            str = this.f5283a.applicationId().get();
        } else {
            com.pushwoosh.a.a aVar2 = this.f;
            str = TextUtils.isEmpty(aVar2.f5031a) ? null : aVar2.f5031a;
        }
        PWLog.debug("NotificationManager", "initialized with app id: " + str);
        if (TextUtils.isEmpty(str)) {
            return;
        }
        b(str, null);
    }

    public void onFailedToRegisterForRemoteNotifications(String str) {
        EventBus.sendEvent(new RegistrationErrorEvent(str));
    }

    public void onFailedToUnregisterFromRemoteNotifications(String str) {
        EventBus.sendEvent(new DeregistrationErrorEvent(str));
    }

    public void onUnregisteredFromRemoteNotifications(String str) {
        this.f5283a.clearPushRegistrationInfo();
        this.c.getClass();
        PWLog.debug("DeviceRegistrar", "Unregistering for pushes...");
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        b0 b0Var = new b0(registrationPreferences.applicationId().get());
        g.f5248a.lock();
        try {
            registrationPreferences.registeredOnServer().set(false);
            g.b(str, registrationPreferences, NetworkModule.getRequestManager().sendRequestSync(b0Var));
        } finally {
            g.f5248a.unlock();
        }
    }

    public final void a(Callback callback) {
        if (callback != null && h.d == null) {
            h hVar = new h(callback);
            h.d = hVar;
            hVar.a();
        }
        this.f5283a.isRegisteredForPush().set(false);
        this.c.getClass();
        PushwooshWorkManagerHelper.cancelUniqueWork("RegisterDeviceWorker");
        this.d.unregisterPW();
    }

    public final void a(String str) {
        a(str, 18);
    }

    private void a(String str, int i) {
        g gVar = this.c;
        Callback callback = new Callback() { // from class: com.pushwoosh.notification.PushwooshNotificationManager$$ExternalSyntheticLambda0
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                PushwooshNotificationManager.a(result);
            }
        };
        gVar.getClass();
        g.a(str, i, callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void a(Result result) {
        if (result.isSuccess()) {
            PWLog.info("NotificationManager", "Registered phone number");
            return;
        }
        String message = result.getException() == null ? "" : ((NetworkException) result.getException()).getMessage();
        if (TextUtils.isEmpty(message)) {
            message = "Pushwoosh registration error";
        }
        PWLog.error("NotificationManager", "Phone number registration error: " + message);
    }

    public final void b(String str) {
        a(str, 21);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(Callback callback, boolean z, TagsBundle tagsBundle) {
        PWLog.noise("NotificationManager", "registerForPushesInternal()");
        try {
            this.f5283a.isRegisteredForPush().set(true);
            if (callback != null) {
                new com.pushwoosh.g0.g(callback).a();
            }
            this.d.checkDevice(this.f5283a.applicationId().get());
            String str = this.f5283a.pushToken().get();
            long j = this.f5283a.lastPushRegistration().get();
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (!TextUtils.isEmpty(str) && jCurrentTimeMillis - j <= 1209600000) {
                EventBus.sendEvent(new RegistrationSuccessEvent(new RegisterForPushNotificationsResultData(str, z)));
                return;
            }
            this.d.registerPW(tagsBundle);
        } catch (Exception e) {
            PWLog.exception(e);
            EventBus.sendEvent(new RegistrationErrorEvent(e.getMessage()));
        }
    }

    public final void a(Callback callback, boolean z, TagsBundle tagsBundle) {
        PWLog.noise("NotificationManager", "registerForPushNotifications()");
        EventBus.subscribe(NotificationPermissionEvent.class, new b(this, callback, tagsBundle));
        try {
            if (Build.VERSION.SDK_INT < 33) {
                b(callback, true, tagsBundle);
                return;
            }
            if (ContextCompat.checkSelfPermission(AndroidPlatformModule.getApplicationContext(), "android.permission.POST_NOTIFICATIONS") != 0) {
                if (!this.f5283a.hasUserDeniedNotificationPermission().get() && z) {
                    f();
                    return;
                } else {
                    b(callback, false, tagsBundle);
                    return;
                }
            }
            this.f5283a.hasUserDeniedNotificationPermission().set(false);
            b(callback, true, tagsBundle);
        } catch (Exception e) {
            PWLog.exception(e);
            EventBus.sendEvent(new RegistrationErrorEvent(e.getMessage()));
        }
    }

    public final PushMessage b() {
        return this.e;
    }

    public final void a() {
        this.e = null;
    }

    public final void a(PushMessage pushMessage) {
        this.e = pushMessage;
    }

    public final void a(String str, String str2) {
        PWLog.noise("NotificationManager", "onTokenReceived: " + str);
        if (DeviceSpecificProvider.getInstance() == null) {
            PWLog.error("NotificationManager", "can't register device: no push transport module");
            EventBus.sendEvent(new RegistrationErrorEvent("can't register device: no push transport module"));
        } else {
            this.f5283a.pushToken().set(str);
            this.c.getClass();
            g.b(str2);
        }
    }
}
