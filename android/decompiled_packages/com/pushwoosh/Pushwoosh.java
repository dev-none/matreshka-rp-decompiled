package com.pushwoosh;

import android.os.Bundle;
import android.text.TextUtils;
import com.pushwoosh.e.b;
import com.pushwoosh.exception.GetTagsException;
import com.pushwoosh.exception.MergeUserException;
import com.pushwoosh.exception.PushwooshException;
import com.pushwoosh.exception.RegisterForPushNotificationsException;
import com.pushwoosh.exception.SetEmailException;
import com.pushwoosh.exception.SetUserException;
import com.pushwoosh.exception.SetUserIdException;
import com.pushwoosh.exception.UnregisterForPushNotificationException;
import com.pushwoosh.featureflags.PushwooshFeatureFlags;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.g0.g;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.event.ReverseProxyReadyEvent;
import com.pushwoosh.internal.event.ServerCommunicationStartedEvent;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.preference.PreferenceStringValue;
import com.pushwoosh.internal.utils.NotificationUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.j.d;
import com.pushwoosh.notification.LocalNotification;
import com.pushwoosh.notification.LocalNotificationReceiver;
import com.pushwoosh.notification.LocalNotificationRequest;
import com.pushwoosh.notification.PushMessage;
import com.pushwoosh.notification.PushwooshNotificationManager;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.PushwooshRepository;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;
import com.pushwoosh.s.c;
import com.pushwoosh.tags.TagsBundle;
import com.pushwoosh.v.j;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Map;
import java.util.Objects;

/* JADX INFO: loaded from: classes6.dex */
public class Pushwoosh {
    public static final int PUSH_HISTORY_CAPACITY = 16;
    public static final String PUSH_RECEIVE_EVENT = "PUSH_RECEIVE_EVENT";
    private static final Pushwoosh g = new Pushwoosh();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final PushwooshNotificationManager f5027a;
    private final PushwooshRepository b;
    private final d c;
    private final RegistrationPrefs d;
    private final j e;
    private volatile boolean f;

    private Pushwoosh() {
        this.f = false;
        PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
        if (pushwooshPlatform == null) {
            this.f5027a = null;
            this.b = null;
            this.c = null;
            this.d = null;
            this.e = null;
            return;
        }
        this.f5027a = pushwooshPlatform.notificationManager();
        this.b = pushwooshPlatform.pushwooshRepository();
        this.c = b.a();
        this.d = pushwooshPlatform.getRegistrationPrefs();
        this.e = pushwooshPlatform.getServerCommunicationManager();
        this.f = true;
    }

    private boolean a() {
        if (this.f) {
            return true;
        }
        PWLog.error("Pushwoosh", "SDK is not initialized.");
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(String str) {
        this.f5027a.b(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void c(final String str) {
        this.b.sendAdvertisingId(str, new Callback() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda16
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(str, result);
            }
        });
    }

    public static Pushwoosh getInstance() {
        return g;
    }

    private void sendMessageDelivery(final Bundle bundle) {
        PWLog.noise("Pushwoosh", "sendMessageDelivery()");
        try {
            if (a()) {
                if (bundle.containsKey("pw_msg")) {
                    c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda17
                        @Override // java.lang.Runnable
                        public final void run() {
                            PushwooshMessagingServiceHelper.sendMessageDeliveryEvent(bundle);
                        }
                    });
                } else {
                    PWLog.warn("/messageDeliveryEvent request was not sent, as the push was not received from Pushwoosh");
                }
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't send message delivery", e);
        }
    }

    private void sendPushStat(final Bundle bundle) {
        PWLog.noise("Pushwoosh", "sendPushStat()");
        try {
            if (a()) {
                if (bundle.containsKey("pw_msg")) {
                    c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda13
                        @Override // java.lang.Runnable
                        public final void run() {
                            PushwooshMessagingServiceHelper.sendPushStat(bundle);
                        }
                    });
                } else {
                    PWLog.warn("/pushStat request was not sent, as the push was not received from Pushwoosh");
                }
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't send push stat", e);
        }
    }

    public void clearLaunchNotification() {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().clearLaunchNotification()");
        try {
            if (a()) {
                this.f5027a.a();
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't clear launch notification", e);
        }
    }

    public void clearPushHistory() {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().clearPushHistory()");
        try {
            if (a()) {
                RepositoryModule.getNotificationPreferences().pushHistory().clear();
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't clear push history", e);
        }
    }

    @Deprecated
    public void enableHuaweiPushNotifications() {
        PWLog.warn("Pushwoosh", "enableHuaweiPushNotifications() is deprecated and has no effect: push transport is auto-detected");
    }

    @Deprecated
    public String getAppId() {
        return getApplicationCode();
    }

    public String getApplicationCode() {
        try {
            return a() ? this.d.applicationId().get() : "";
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get application code", e);
            return "";
        }
    }

    public String getBaseUrl() {
        try {
            if (a()) {
                String str = this.d.baseUrl().get();
                if (TextUtils.isEmpty(str)) {
                    return null;
                }
                return str;
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get base url", e);
        }
        return null;
    }

    public PushwooshFeatureFlags getFeatureFlags() {
        return com.pushwoosh.featureflags.a.E;
    }

    public String getHwid() {
        try {
            return a() ? this.b.getHwid() : "";
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get hwid", e);
            return "";
        }
    }

    public String getLanguage() {
        try {
            return a() ? this.d.language().get() : "";
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get language", e);
            return "";
        }
    }

    public PushMessage getLaunchNotification() {
        try {
            if (a()) {
                return this.f5027a.b();
            }
            return null;
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get launch notification", e);
            return null;
        }
    }

    public List<PushMessage> getPushHistory() {
        try {
            if (a()) {
                return this.b.getPushHistory();
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get push history", e);
        }
        return new ArrayList();
    }

    public String getPushToken() {
        try {
            return a() ? this.f5027a.c() : "";
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get push token", e);
            return "";
        }
    }

    @Deprecated
    public String getSenderId() {
        return "";
    }

    public String getSubscriptionAccountId() {
        String applicationCode = getApplicationCode();
        String hwid = getHwid();
        if (applicationCode.isEmpty() || hwid.isEmpty()) {
            return "";
        }
        String str = applicationCode + StringUtils.PROCESS_POSTFIX_DELIMITER + hwid;
        if (str.length() > 64) {
            PWLog.warn("Pushwoosh", "subscription account id exceeds Google's 64-character limit (" + str.length() + " chars)");
        }
        return str;
    }

    public void getTags(final Callback<TagsBundle, GetTagsException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().getTags()");
        try {
            if (a()) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda1
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(callback);
                    }
                });
                return;
            }
            Result<TagsBundle, E> resultFromException = Result.fromException(new GetTagsException("SDK is not initialized"));
            if (callback != null) {
                callback.process(resultFromException);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get tags", e);
        }
    }

    public String getUserId() {
        try {
            if (a()) {
                return this.d.userId().get();
            }
            return null;
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't get user id", e);
            return null;
        }
    }

    public boolean isServerCommunicationAllowed() {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().isServerCommunicationAllowed()");
        try {
            if (!a()) {
                return false;
            }
            this.e.getClass();
            return RepositoryModule.getNotificationPreferences().isServerCommunicationAllowed().get();
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't check server communication status", e);
            return false;
        }
    }

    public void mergeUserId(final String str, final String str2, final boolean z, final Callback<Void, MergeUserException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().mergeUserId()");
        try {
            if (a()) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda12
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(str, str2, z, callback);
                    }
                });
                return;
            }
            Result<Void, E> resultFromException = Result.fromException(new MergeUserException("SDK is not initialized."));
            if (callback != null) {
                callback.process(resultFromException);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't merge user id", e);
        }
    }

    public void registerExistingToken(String str, Callback<RegisterForPushNotificationsResultData, RegisterForPushNotificationsException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().registerExistingToken()");
        try {
            if (a()) {
                if (TextUtils.isEmpty(str)) {
                    PWLog.warn("Pushwoosh", "token is empty");
                    Result<RegisterForPushNotificationsResultData, E> resultFromException = Result.fromException(new RegisterForPushNotificationsException("token is empty"));
                    if (callback != null) {
                        callback.process(resultFromException);
                        return;
                    }
                    return;
                }
                if (str.equals(this.d.pushToken().get()) && this.d.registeredOnServer().get()) {
                    Result<RegisterForPushNotificationsResultData, E> resultFromData = Result.fromData(new RegisterForPushNotificationsResultData(str, NotificationUtils.areNotificationsEnabled()));
                    if (callback != null) {
                        callback.process(resultFromData);
                        return;
                    }
                    return;
                }
                PushwooshNotificationManager pushwooshNotificationManager = this.f5027a;
                pushwooshNotificationManager.getClass();
                PWLog.noise("NotificationManager", "RegisterExistingToken");
                if (callback != null) {
                    new g(callback).a();
                }
                pushwooshNotificationManager.a(str, (String) null);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't register device with existing token", e);
        }
    }

    public void registerForPushNotifications() {
        registerForPushNotifications(null);
    }

    public void registerForPushNotificationsWithTags(TagsBundle tagsBundle) {
        registerForPushNotificationsWithTags(null, tagsBundle);
    }

    public void registerForPushNotificationsWithTagsWithoutPermission(Callback<RegisterForPushNotificationsResultData, RegisterForPushNotificationsException> callback, TagsBundle tagsBundle) {
        b(callback, false, tagsBundle);
    }

    public void registerForPushNotificationsWithoutPermission(Callback<RegisterForPushNotificationsResultData, RegisterForPushNotificationsException> callback) {
        b(callback, false, null);
    }

    public void registerSMSNumber(final String str) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().registerSMSNumber()");
        try {
            if (a()) {
                if (str != null && !TextUtils.isEmpty(str)) {
                    c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda8
                        @Override // java.lang.Runnable
                        public final void run() {
                            this.f$0.a(str);
                        }
                    });
                    return;
                }
                PWLog.warn("Pushwoosh", "SMS number is empty");
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't register sms number", e);
        }
    }

    public void registerWhatsappNumber(final String str) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().registerWhatsappNumber()");
        try {
            if (a()) {
                if (str != null && !TextUtils.isEmpty(str)) {
                    c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda2
                        @Override // java.lang.Runnable
                        public final void run() {
                            this.f$0.b(str);
                        }
                    });
                    return;
                }
                PWLog.warn("Pushwoosh", "Whatsapp number is empty");
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't register whatsapp number", e);
        }
    }

    public void requestNotificationPermission() {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().requestNotificationPermission()");
        try {
            if (a()) {
                PushwooshNotificationManager.f();
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't request notification permission", e);
        }
    }

    public LocalNotificationRequest scheduleLocalNotification(LocalNotification localNotification) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().scheduleLocalNotification()");
        try {
            if (a()) {
                return LocalNotificationReceiver.scheduleNotification(localNotification);
            }
            return null;
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't schedule local notification", e);
            return null;
        }
    }

    public void sendAppOpen() {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().sendAppOpen()");
        try {
            if (a()) {
                c cVar = c.d;
                final PushwooshRepository pushwooshRepository = this.b;
                Objects.requireNonNull(pushwooshRepository);
                cVar.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda14
                    @Override // java.lang.Runnable
                    public final void run() {
                        pushwooshRepository.sendAppOpen();
                    }
                });
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't send app open", e);
        }
    }

    public void sendInappPurchase(final String str, final BigDecimal bigDecimal, final String str2) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().sendInappPurchase()");
        try {
            if (a()) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda9
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(str, bigDecimal, str2);
                    }
                });
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't send in-app purchase", e);
        }
    }

    @Deprecated
    public void sendTags(TagsBundle tagsBundle) {
        setTags(tagsBundle);
    }

    public void setAdvertisingId(final String str) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setAdvertisingId()");
        try {
            if (a()) {
                if (!isServerCommunicationAllowed()) {
                    PWLog.error("Pushwoosh", "Communication with Pushwoosh is disabled. See startServerCommunication method.");
                    return;
                }
                if ("00000000-0000-0000-0000-000000000000".equalsIgnoreCase(str) || TextUtils.isEmpty(str)) {
                    str = null;
                }
                String str2 = this.d.advertisingId().get();
                if (str == null && TextUtils.isEmpty(str2)) {
                    return;
                }
                if (str == null || !str.equals(str2)) {
                    c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda15
                        @Override // java.lang.Runnable
                        public final void run() {
                            this.f$0.c(str);
                        }
                    });
                }
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set advertising id", e);
        }
    }

    public void setAllowedExternalHosts(ArrayList<String> arrayList) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setAllowedExternalHosts()");
        try {
            if (a() && !arrayList.isEmpty()) {
                NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
                for (String str : arrayList) {
                    if (!TextUtils.isEmpty(str)) {
                        notificationPreferences.allowedExternalHosts().add(str);
                    }
                }
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set allowed external hosts", e);
        }
    }

    public void setApiToken(String str) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setApiToken()");
        try {
            if (a()) {
                String strTrim = str != null ? str.trim() : null;
                if (TextUtils.isEmpty(strTrim)) {
                    PWLog.warn("Pushwoosh", "setApiToken() ignored: empty or whitespace-only value");
                } else {
                    this.d.setApiToken(strTrim);
                }
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set api token", e);
        }
    }

    /* JADX WARN: Code duplicated, block: B:15:0x0032 A[Catch: Exception -> 0x0038, TRY_LEAVE, TryCatch #0 {Exception -> 0x0038, blocks: (B:3:0x0007, B:6:0x000e, B:8:0x0019, B:15:0x0032, B:9:0x0020, B:11:0x0028), top: B:20:0x0007 }] */
    /* JADX WARN: Code duplicated, block: B:22:? A[RETURN, SYNTHETIC] */
    public void setAppId(String str) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setAppId()");
        try {
            if (a()) {
                String strTrim = str.trim();
                if (!TextUtils.isEmpty(strTrim)) {
                    if (strTrim.contains(".")) {
                        PWLog.error("Pushwoosh", "setAppId() ignored: application id format with '.' is deprecated. Please contact Pushwoosh support.");
                    }
                    if (strTrim == null) {
                        return;
                    }
                    this.f5027a.b(strTrim, null);
                }
                PWLog.warn("Pushwoosh", "setAppId() ignored: empty or whitespace-only value");
                strTrim = null;
                if (strTrim == null) {
                    return;
                }
                this.f5027a.b(strTrim, null);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set application code", e);
        }
    }

    public void setEmail(List<String> list) {
        setEmail(list, (Callback<Boolean, SetEmailException>) null);
    }

    public void setEmailTags(TagsBundle tagsBundle, String str) {
        setEmailTags(tagsBundle, str, null);
    }

    public void setLanguage(String str) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setLanguage()");
        try {
            if (a()) {
                this.d.setLanguage(str);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set language", e);
        }
    }

    public void setReverseProxy(String str) {
        setReverseProxy(str, null);
    }

    @Deprecated
    public void setSenderId(String str) {
    }

    public void setShowPushnotificationAlert(boolean z) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setShowPushnotificationAlert()");
        try {
            if (a()) {
                RepositoryModule.getNotificationPreferences().showPushnotificationAlert().set(z);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set showPushNotificationAlert", e);
        }
    }

    public void setTags(TagsBundle tagsBundle) {
        setTags(tagsBundle, null);
    }

    public void setUser(String str, List<String> list) {
        setUser(str, list, null);
    }

    public void setUserId(String str) {
        setUserId(str, null);
    }

    public void startServerCommunication() {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().startServerCommunication()");
        try {
            if (a()) {
                this.e.getClass();
                if (RepositoryModule.getNotificationPreferences().isServerCommunicationAllowed().get()) {
                    return;
                }
                RepositoryModule.getNotificationPreferences().isServerCommunicationAllowed().set(true);
                EventBus.sendEvent(new ServerCommunicationStartedEvent());
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't start server communication", e);
        }
    }

    public void stopServerCommunication() {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().stopServerCommunication()");
        try {
            if (a()) {
                this.e.getClass();
                RepositoryModule.getNotificationPreferences().isServerCommunicationAllowed().set(false);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't stop server communication", e);
        }
    }

    public void unregisterForPushNotifications() {
        unregisterForPushNotifications(null);
    }

    private void b(final Callback callback, final boolean z, final TagsBundle tagsBundle) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().registerForPushNotifications()");
        try {
            if (!a()) {
                Result resultFromException = Result.fromException(new RegisterForPushNotificationsException("SDK is not initialized"));
                if (callback != null) {
                    callback.process(resultFromException);
                    return;
                }
                return;
            }
            if (isServerCommunicationAllowed()) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda18
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(callback, z, tagsBundle);
                    }
                });
                return;
            }
            PWLog.error("Pushwoosh", "Communication with Pushwoosh is disabled. See startServerCommunication method.");
            Result resultFromException2 = Result.fromException(new RegisterForPushNotificationsException("Communication with Pushwoosh is disabled"));
            if (callback != null) {
                callback.process(resultFromException2);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't register for push notifications", e);
        }
    }

    public void registerForPushNotifications(Callback<RegisterForPushNotificationsResultData, RegisterForPushNotificationsException> callback) {
        b(callback, true, null);
    }

    public void registerForPushNotificationsWithTags(Callback<RegisterForPushNotificationsResultData, RegisterForPushNotificationsException> callback, TagsBundle tagsBundle) {
        b(callback, true, tagsBundle);
    }

    @Deprecated
    public void sendTags(TagsBundle tagsBundle, Callback<Void, PushwooshException> callback) {
        setTags(tagsBundle, callback);
    }

    public void setEmail(final List<String> list, final Callback<Boolean, SetEmailException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setEmail()");
        try {
            if (a()) {
                if (list.isEmpty()) {
                    return;
                }
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda7
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(list, callback);
                    }
                });
            } else {
                Result<Boolean, E> resultFromException = Result.fromException(new SetEmailException("SDK is not initialized."));
                if (callback != null) {
                    callback.process(resultFromException);
                }
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set email", e);
        }
    }

    public void setEmailTags(final TagsBundle tagsBundle, final String str, final Callback<Void, PushwooshException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setEmailTags()");
        try {
            if (a()) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda0
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(tagsBundle, str, callback);
                    }
                });
                return;
            }
            Result<Void, E> resultFromException = Result.fromException(new PushwooshException("SDK is not initialized"));
            if (callback != null) {
                callback.process(resultFromException);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set email tags", e);
        }
    }

    public void setReverseProxy(String str, Map<String, String> map) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setReverseProxy()");
        try {
            PushwooshPlatform pushwooshPlatform = PushwooshPlatform.getInstance();
            if (pushwooshPlatform != null && !((com.pushwoosh.a.a) pushwooshPlatform.getConfig()).x) {
                PWLog.warn("Pushwoosh", "setReverseProxy() ignored. Set com.pushwoosh.allow_reverse_proxy to true in AndroidManifest.xml");
                return;
            }
            if (TextUtils.isEmpty(str)) {
                PWLog.error("Pushwoosh", "setReverseProxy() ignored: URL must not be null or empty");
            } else if (NetworkModule.getRequestManager().setReverseProxyUrl(str, map)) {
                EventBus.sendEvent(new ReverseProxyReadyEvent());
            } else {
                PWLog.error("Pushwoosh", "setReverseProxy() ignored, reverse proxy not applied");
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set reverse proxy", e);
        }
    }

    public void setTags(final TagsBundle tagsBundle, final Callback<Void, PushwooshException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setTags()");
        try {
            if (a()) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda20
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(tagsBundle, callback);
                    }
                });
                return;
            }
            Result<Void, E> resultFromException = Result.fromException(new PushwooshException("SDK is not initialized"));
            if (callback != null) {
                callback.process(resultFromException);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set tags", e);
        }
    }

    public void setUser(final String str, final List<String> list, final Callback<Boolean, SetUserException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setUser()");
        try {
            if (!a()) {
                Result<Boolean, E> resultFromException = Result.fromException(new SetUserException("SDK is not initialized."));
                if (callback != null) {
                    callback.process(resultFromException);
                    return;
                }
                return;
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            final String str2 = this.d.userId().get();
            if (TextUtils.equals(str, str2)) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda5
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.b(list, callback);
                    }
                });
            } else {
                this.d.userId().set(str);
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda6
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.a(str, str2, callback, list);
                    }
                });
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set user", e);
        }
    }

    public void setUserId(final String str, final Callback<Boolean, SetUserIdException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setUserId()");
        try {
            if (!a()) {
                Result<Boolean, E> resultFromException = Result.fromException(new SetUserIdException("SDK is not initialized."));
                if (callback != null) {
                    callback.process(resultFromException);
                    return;
                }
                return;
            }
            if (!isServerCommunicationAllowed()) {
                PWLog.error("Pushwoosh", "Communication with Pushwoosh is disabled. See startServerCommunication method.");
                Result<Boolean, E> resultFromException2 = Result.fromException(new SetUserIdException("Communication with Pushwoosh is disabled"));
                if (callback != null) {
                    callback.process(resultFromException2);
                    return;
                }
                return;
            }
            final String str2 = this.d.userId().get();
            if (TextUtils.equals(str, str2)) {
                Result<Boolean, E> resultFromData = Result.fromData(Boolean.TRUE);
                if (callback != null) {
                    callback.process(resultFromData);
                    return;
                }
                return;
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            this.d.userId().set(str);
            c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda3
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(str, str2, callback);
                }
            });
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set user id", e);
        }
    }

    public void unregisterForPushNotifications(final Callback<String, UnregisterForPushNotificationException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().unregisterForPushNotifications()");
        try {
            if (!a()) {
                Result<String, E> resultFromException = Result.fromException(new UnregisterForPushNotificationException("SDK is not initialized"));
                if (callback != null) {
                    callback.process(resultFromException);
                    return;
                }
                return;
            }
            if (isServerCommunicationAllowed()) {
                c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda19
                    @Override // java.lang.Runnable
                    public final void run() {
                        this.f$0.b(callback);
                    }
                });
                return;
            }
            PWLog.error("Pushwoosh", "Communication with Pushwoosh is disabled. See startServerCommunication method.");
            Result<String, E> resultFromException2 = Result.fromException(new UnregisterForPushNotificationException("Communication with Pushwoosh is disabled"));
            if (callback != null) {
                callback.process(resultFromException2);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't unregister for push notifications", e);
        }
    }

    private Callback a(final String str, final Callback callback) {
        return new Callback() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda11
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(str, callback, result);
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, Callback callback, Result result) {
        if (!result.isSuccess()) {
            this.d.userId().set(str);
        }
        if (callback != null) {
            callback.process(result);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str) {
        this.f5027a.a(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Callback callback, boolean z, TagsBundle tagsBundle) {
        this.f5027a.a(callback, z, tagsBundle);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(TagsBundle tagsBundle, Callback callback) {
        this.b.sendTags(tagsBundle, callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(TagsBundle tagsBundle, String str, Callback callback) {
        this.b.sendEmailTags(tagsBundle, str, callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(Callback callback) {
        this.b.getTags(callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, BigDecimal bigDecimal, String str2) {
        this.b.sendInappPurchase(str, bigDecimal, str2, new Date());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, String str2, Callback callback) {
        this.c.c(str, a(str2, callback));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, String str2, final Callback callback, final List list) {
        this.c.c(str, a(str2, new Callback() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda10
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                this.f$0.a(callback, list, result);
            }
        }));
    }

    /* JADX WARN: Code duplicated, block: B:18:0x003b A[Catch: Exception -> 0x0041, TRY_LEAVE, TryCatch #0 {Exception -> 0x0041, blocks: (B:6:0x0011, B:9:0x0018, B:11:0x0022, B:18:0x003b, B:12:0x0029, B:14:0x0031), top: B:23:0x0011 }] */
    /* JADX WARN: Code duplicated, block: B:25:? A[RETURN, SYNTHETIC] */
    public void setAppId(String str, String str2) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setAppId(appId, baseUrl)");
        if (TextUtils.isEmpty(str2)) {
            setAppId(str);
            return;
        }
        try {
            if (a()) {
                String strTrim = str.trim();
                if (TextUtils.isEmpty(strTrim)) {
                    PWLog.warn("Pushwoosh", "setAppId() ignored: empty or whitespace-only value");
                } else {
                    if (strTrim.contains(".")) {
                        PWLog.error("Pushwoosh", "setAppId() ignored: application id format with '.' is deprecated. Please contact Pushwoosh support.");
                    }
                    if (strTrim == null) {
                        return;
                    }
                    this.f5027a.b(strTrim, str2);
                }
                strTrim = null;
                if (strTrim == null) {
                    return;
                }
                this.f5027a.b(strTrim, str2);
            }
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set application code", e);
        }
    }

    public void setEmail(String str) {
        setEmail(str, (Callback<Boolean, SetEmailException>) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Callback callback, List list, Result result) {
        if (!result.isSuccess()) {
            Result resultFromException = Result.fromException(new SetUserException(((SetUserIdException) result.getException()).getMessage()));
            if (callback != null) {
                callback.process(resultFromException);
                return;
            }
            return;
        }
        this.c.b(list, callback);
    }

    public void setEmail(String str, final Callback<Boolean, SetEmailException> callback) {
        PWLog.noise("Pushwoosh", "Pushwoosh.getInstance().setEmail()");
        try {
            if (!a()) {
                Result<Boolean, E> resultFromException = Result.fromException(new SetEmailException("SDK is not initialized."));
                if (callback != null) {
                    callback.process(resultFromException);
                    return;
                }
                return;
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            final ArrayList arrayList = new ArrayList();
            arrayList.add(str);
            c.d.a(new Runnable() { // from class: com.pushwoosh.Pushwoosh$$ExternalSyntheticLambda4
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(arrayList, callback);
                }
            });
        } catch (Exception e) {
            PWLog.error("Pushwoosh", "can't set email", e);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(Callback callback) {
        this.f5027a.a(callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void b(List list, Callback callback) {
        this.c.b(list, callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(List list, Callback callback) {
        this.c.a(list, callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(ArrayList arrayList, Callback callback) {
        this.c.a(arrayList, callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, String str2, boolean z, Callback callback) {
        this.c.getClass();
        d.a(str, str2, z, callback);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public /* synthetic */ void a(String str, Result result) {
        if (result.isSuccess()) {
            PreferenceStringValue preferenceStringValueAdvertisingId = this.d.advertisingId();
            if (str == null) {
                str = "";
            }
            preferenceStringValueAdvertisingId.set(str);
        }
    }
}
