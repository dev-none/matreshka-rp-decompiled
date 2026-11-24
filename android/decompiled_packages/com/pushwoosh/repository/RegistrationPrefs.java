package com.pushwoosh.repository;

import android.content.SharedPreferences;
import android.text.TextUtils;
import com.pushwoosh.e0.d;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.prefs.PrefsProvider;
import com.pushwoosh.internal.platform.prefs.migration.MigrationScheme;
import com.pushwoosh.internal.platform.utils.GeneralUtils;
import com.pushwoosh.internal.preference.PreferenceBooleanValue;
import com.pushwoosh.internal.preference.PreferenceIntValue;
import com.pushwoosh.internal.preference.PreferenceLongValue;
import com.pushwoosh.internal.preference.PreferenceStringValue;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.m0.g;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.Locale;

/* JADX INFO: loaded from: classes6.dex */
public class RegistrationPrefs {
    private static final String API_TOKEN = "pw_api_token";
    private static final String BASE_API_URL_FORMAT = "https://%s.api.pushwoosh.com/json/1.3/";
    private static final String COMMUNICATION_ENABLE = "pw_communication_enable";
    private static final String DEFAULT_TRACKING_URL = "https://tracking.svc-nue.pushwoosh.com/api/v2/device-api/";
    private static final String HWID = "pw_hwid";
    private static final String PREFERENCE = "com.pushwoosh.registration";
    private static final String PROPERTY_ADVERTISING_ID = "pw_advertising_id";
    private static final String PROPERTY_APPLICATION_ID = "application_id";
    private static final String PROPERTY_APP_VERSION = "app_version";
    private static final String PROPERTY_BASE_URL = "pw_base_url";
    private static final String PROPERTY_DENIED_NOTIFICATIONS = "pw_user_denied_notification_permission";
    private static final String PROPERTY_DEVICE_ID = "device_id";
    private static final String PROPERTY_FCM_MESSAGE_RECEIVED = "pw_fcm_message_received_since_app_update";
    private static final String PROPERTY_FORCE_REGISTER = "force_register";
    private static final String PROPERTY_IS_REGISTERED_FOR_NOTIFICATION = "pw_registered_for_push";
    private static final String PROPERTY_LANGUAGE = "pw_language";
    private static final String PROPERTY_LAST_FIREBASE_TOKEN_REGISTRATION = "last_firebase_registration";
    private static final String PROPERTY_LAST_KNOCK_PATTERN_TIME = "last_knock_pattern_time";
    private static final String PROPERTY_LAST_REGISTRATION = "last_registration_change";
    private static final String PROPERTY_LOG_LEVEL = "log_level";
    private static final String PROPERTY_PROJECT_ID = "project_id";
    private static final String PROPERTY_PUSH_PERMISSION_EVER_GRANTED = "pw_push_permission_ever_granted";
    private static final String PROPERTY_PUSH_PERMISSION_FIRST_OBSERVED = "pw_push_permission_first_observed_granted";
    private static final String PROPERTY_PUSH_PERMISSION_LAST_SENT = "pw_push_permission_last_sent";
    private static final String PROPERTY_PUSH_PERMISSION_RATIONALE_SEEN = "pw_push_permission_rationale_seen";
    private static final String PROPERTY_PUSH_PERMISSION_VIA_SDK_PROMPT = "pw_push_permission_granted_via_sdk_prompt";
    private static final String PROPERTY_PUSH_TOKEN = "registration_id";
    private static final String PROPERTY_REGISTERED_ON_SERVER = "registered_on_server";
    private static final String PROPERTY_USER_ID = "user_id";
    private static final String REMOVE_ALL_DEVICE_DATA = "pw_remove_all_device_data";
    private static final String TAG = "RegistrationPrefs";
    private final PreferenceStringValue advertisingId;
    private final PreferenceStringValue apiToken;
    private final PreferenceStringValue applicationId;
    private final PreferenceStringValue baseUrl;
    private final PreferenceBooleanValue communicationEnable;
    private final d config;
    private final PreferenceStringValue deviceId;
    private final g deviceRegistrar;
    private PreferenceBooleanValue fcmMessageReceivedSinceInstallOrUpdate;
    private final PreferenceBooleanValue forceRegister;
    private final PreferenceStringValue hwid;
    private final PreferenceStringValue language;
    private final PreferenceLongValue lastKnockPatternTime;
    private final PreferenceLongValue lastPushRegistration;
    private final PreferenceStringValue logLevel;
    private PreferenceBooleanValue pushPermissionEverGranted;
    private PreferenceIntValue pushPermissionFirstObservedGranted;
    private PreferenceBooleanValue pushPermissionGrantedViaSdkPrompt;
    private PreferenceStringValue pushPermissionLastSent;
    private PreferenceBooleanValue pushPermissionRationaleSeen;
    private final PreferenceStringValue pushToken;
    private PreferenceBooleanValue registeredForPush;
    private final PreferenceBooleanValue registeredOnServer;
    private final PreferenceBooleanValue removeAllDeviceData;
    private PreferenceBooleanValue userDeniedNotificationPermission;
    private final PreferenceStringValue userId;

    RegistrationPrefs(d dVar, g gVar) {
        PWLog.noise("RegistrationPrefs()...");
        this.config = dVar;
        this.deviceRegistrar = gVar;
        SharedPreferences sharedPreferencesProvidePrefs = AndroidPlatformModule.getPrefsProvider().providePrefs(PREFERENCE);
        PreferenceStringValue preferenceStringValue = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_APPLICATION_ID, "");
        this.applicationId = preferenceStringValue;
        com.pushwoosh.a.a aVar = (com.pushwoosh.a.a) dVar;
        String str = TextUtils.isEmpty(aVar.f5031a) ? null : aVar.f5031a;
        if (preferenceStringValue.get().isEmpty() && !TextUtils.isEmpty(str)) {
            preferenceStringValue.set(str);
        }
        PreferenceStringValue preferenceStringValue2 = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_PUSH_TOKEN, "");
        this.pushToken = preferenceStringValue2;
        PreferenceIntValue preferenceIntValue = new PreferenceIntValue(sharedPreferencesProvidePrefs, "app_version", 0);
        String str2 = preferenceStringValue2.get();
        this.registeredForPush = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_IS_REGISTERED_FOR_NOTIFICATION, (str2 == null || str2.isEmpty()) ? false : true);
        this.forceRegister = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_FORCE_REGISTER, false);
        this.userDeniedNotificationPermission = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_DENIED_NOTIFICATIONS, false);
        this.fcmMessageReceivedSinceInstallOrUpdate = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_FCM_MESSAGE_RECEIVED, false);
        this.pushPermissionFirstObservedGranted = new PreferenceIntValue(sharedPreferencesProvidePrefs, PROPERTY_PUSH_PERMISSION_FIRST_OBSERVED, -1);
        this.pushPermissionEverGranted = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_PUSH_PERMISSION_EVER_GRANTED, false);
        this.pushPermissionGrantedViaSdkPrompt = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_PUSH_PERMISSION_VIA_SDK_PROMPT, false);
        this.pushPermissionRationaleSeen = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_PUSH_PERMISSION_RATIONALE_SEEN, false);
        this.pushPermissionLastSent = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_PUSH_PERMISSION_LAST_SENT, "");
        int appVersion = GeneralUtils.getAppVersion();
        if (preferenceIntValue.get() != appVersion) {
            PWLog.noise(TAG, "App version changed from " + preferenceIntValue.get() + " to " + appVersion + "; resetting registration id");
            preferenceStringValue2.set("");
            this.fcmMessageReceivedSinceInstallOrUpdate.set(false);
            preferenceIntValue.set(appVersion);
        }
        this.registeredOnServer = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, PROPERTY_REGISTERED_ON_SERVER, false);
        this.lastPushRegistration = new PreferenceLongValue(sharedPreferencesProvidePrefs, PROPERTY_LAST_REGISTRATION, 0L);
        this.lastKnockPatternTime = new PreferenceLongValue(sharedPreferencesProvidePrefs, PROPERTY_LAST_KNOCK_PATTERN_TIME, 0L);
        this.userId = new PreferenceStringValue(sharedPreferencesProvidePrefs, "user_id", "");
        this.deviceId = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_DEVICE_ID, "");
        this.logLevel = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_LOG_LEVEL, aVar.c);
        this.communicationEnable = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, COMMUNICATION_ENABLE, true);
        this.removeAllDeviceData = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, REMOVE_ALL_DEVICE_DATA, false);
        this.baseUrl = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_BASE_URL, "");
        this.hwid = new PreferenceStringValue(sharedPreferencesProvidePrefs, HWID, "");
        this.advertisingId = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_ADVERTISING_ID, "");
        this.apiToken = new PreferenceStringValue(sharedPreferencesProvidePrefs, API_TOKEN, aVar.b);
        this.language = new PreferenceStringValue(sharedPreferencesProvidePrefs, PROPERTY_LANGUAGE, aVar.t ? languageCode() : "en");
        PWLog.noise("RegistrationPrefs() done");
    }

    public static String canonicalBaseUrl(String str) {
        return "https://" + str + ".api.pushwoosh.com/json/1.3/";
    }

    private static boolean containsWhitespace(String str) {
        for (int i = 0; i < str.length(); i++) {
            if (Character.isWhitespace(str.charAt(i))) {
                return true;
            }
        }
        return false;
    }

    private String languageCode() {
        return Locale.getDefault().getLanguage().equals("zh") ? Locale.getDefault().toLanguageTag() : Locale.getDefault().getLanguage();
    }

    public static String normalizeBaseUrl(String str) {
        if (TextUtils.isEmpty(str)) {
            PWLog.warn(TAG, "Reject URL: empty value");
            return null;
        }
        String strTrim = str.trim();
        if (TextUtils.isEmpty(strTrim)) {
            PWLog.warn(TAG, "Reject URL: whitespace-only value");
            return null;
        }
        if (containsWhitespace(strTrim)) {
            PWLog.warn(TAG, "Reject URL: contains whitespace: ".concat(str));
            return null;
        }
        if (!strTrim.startsWith("https://") && !strTrim.startsWith("http://")) {
            PWLog.warn(TAG, "Reject URL: scheme must be http(s)://: ".concat(str));
            return null;
        }
        try {
            new URL(strTrim);
            return strTrim.endsWith("/") ? strTrim : strTrim.concat("/");
        } catch (MalformedURLException unused) {
            PWLog.warn(TAG, "Reject URL: malformed URL: ".concat(str));
            return null;
        }
    }

    static MigrationScheme provideMigrationScheme(PrefsProvider prefsProvider) {
        MigrationScheme migrationScheme = new MigrationScheme(PREFERENCE);
        MigrationScheme.AvailableType availableType = MigrationScheme.AvailableType.STRING;
        migrationScheme.put(prefsProvider, availableType, PROPERTY_APPLICATION_ID);
        migrationScheme.put(prefsProvider, availableType, PROPERTY_PROJECT_ID);
        migrationScheme.put(prefsProvider, availableType, PROPERTY_PUSH_TOKEN);
        migrationScheme.put(prefsProvider, MigrationScheme.AvailableType.INT, "app_version");
        MigrationScheme.AvailableType availableType2 = MigrationScheme.AvailableType.BOOLEAN;
        migrationScheme.put(prefsProvider, availableType2, PROPERTY_REGISTERED_ON_SERVER);
        MigrationScheme.AvailableType availableType3 = MigrationScheme.AvailableType.LONG;
        migrationScheme.put(prefsProvider, availableType3, PROPERTY_LAST_REGISTRATION);
        migrationScheme.put(prefsProvider, availableType3, PROPERTY_LAST_FIREBASE_TOKEN_REGISTRATION);
        migrationScheme.put(prefsProvider, availableType3, PROPERTY_LAST_KNOCK_PATTERN_TIME);
        migrationScheme.put(prefsProvider, availableType, "user_id");
        migrationScheme.put(prefsProvider, availableType, PROPERTY_DEVICE_ID);
        migrationScheme.put(prefsProvider, availableType, PROPERTY_LOG_LEVEL);
        migrationScheme.put(prefsProvider, availableType, PROPERTY_BASE_URL);
        migrationScheme.put(prefsProvider, availableType2, PROPERTY_FCM_MESSAGE_RECEIVED);
        SharedPreferences sharedPreferencesProvidePrefs = prefsProvider.providePrefs(PREFERENCE);
        if (sharedPreferencesProvidePrefs == null) {
            return migrationScheme;
        }
        if (sharedPreferencesProvidePrefs.contains(PROPERTY_IS_REGISTERED_FOR_NOTIFICATION)) {
            migrationScheme.putBoolean(PROPERTY_IS_REGISTERED_FOR_NOTIFICATION, sharedPreferencesProvidePrefs.getBoolean(PROPERTY_IS_REGISTERED_FOR_NOTIFICATION, false));
            return migrationScheme;
        }
        migrationScheme.putBoolean(PROPERTY_IS_REGISTERED_FOR_NOTIFICATION, !TextUtils.isEmpty(sharedPreferencesProvidePrefs.getString(PROPERTY_PUSH_TOKEN, "")));
        return migrationScheme;
    }

    public PreferenceStringValue advertisingId() {
        return this.advertisingId;
    }

    public PreferenceStringValue apiToken() {
        return this.apiToken;
    }

    public PreferenceStringValue applicationId() {
        return this.applicationId;
    }

    public PreferenceStringValue baseUrl() {
        return this.baseUrl;
    }

    public void clearPushRegistrationInfo() {
        pushToken().set("");
        lastPushRegistration().set(0L);
    }

    public PreferenceBooleanValue communicationEnable() {
        return this.communicationEnable;
    }

    public PreferenceStringValue deviceId() {
        return this.deviceId;
    }

    public PreferenceBooleanValue fcmMessageReceivedSinceInstallOrUpdate() {
        return this.fcmMessageReceivedSinceInstallOrUpdate;
    }

    public PreferenceBooleanValue forceRegister() {
        return this.forceRegister;
    }

    public String getDefaultBaseUrl(String str) {
        String str2 = ((com.pushwoosh.a.a) this.config).d;
        if (TextUtils.isEmpty(str2)) {
            str2 = "https://" + str + ".api.pushwoosh.com/json/1.3/";
        }
        return !str2.endsWith("/") ? str2.concat("/") : str2;
    }

    public String getTrackingUrl() {
        String strNormalizeBaseUrl = normalizeBaseUrl(((com.pushwoosh.a.a) this.config).e);
        return strNormalizeBaseUrl != null ? strNormalizeBaseUrl : DEFAULT_TRACKING_URL;
    }

    public PreferenceBooleanValue hasUserDeniedNotificationPermission() {
        return this.userDeniedNotificationPermission;
    }

    public PreferenceStringValue hwid() {
        return this.hwid;
    }

    public PreferenceBooleanValue isRegisteredForPush() {
        return this.registeredForPush;
    }

    public PreferenceStringValue language() {
        return this.language;
    }

    public PreferenceLongValue lastKnockPatternTime() {
        return this.lastKnockPatternTime;
    }

    public PreferenceLongValue lastPushRegistration() {
        return this.lastPushRegistration;
    }

    public PreferenceStringValue logLevel() {
        return this.logLevel;
    }

    public PreferenceBooleanValue pushPermissionEverGranted() {
        return this.pushPermissionEverGranted;
    }

    public PreferenceIntValue pushPermissionFirstObservedGranted() {
        return this.pushPermissionFirstObservedGranted;
    }

    public PreferenceBooleanValue pushPermissionGrantedViaSdkPrompt() {
        return this.pushPermissionGrantedViaSdkPrompt;
    }

    public PreferenceStringValue pushPermissionLastSent() {
        return this.pushPermissionLastSent;
    }

    public PreferenceBooleanValue pushPermissionRationaleSeen() {
        return this.pushPermissionRationaleSeen;
    }

    public PreferenceStringValue pushToken() {
        return this.pushToken;
    }

    public PreferenceBooleanValue registeredOnServer() {
        return this.registeredOnServer;
    }

    public PreferenceBooleanValue removeAllDeviceData() {
        return this.removeAllDeviceData;
    }

    void removeAppId() {
        applicationId().set("");
        baseUrl().set("");
        lastPushRegistration().set(0L);
        this.registeredOnServer.set(false);
    }

    public void setApiToken(String str) {
        if (str == null) {
            return;
        }
        apiToken().set(str);
    }

    public void setLanguage(String str) {
        if (str == null) {
            return;
        }
        language().set(str);
        lastPushRegistration().set(0L);
        this.deviceRegistrar.b();
    }

    public String updateBaseUrl(String str) {
        String strNormalizeBaseUrl = normalizeBaseUrl(str);
        if (strNormalizeBaseUrl == null) {
            return null;
        }
        if (TextUtils.equals(this.baseUrl.get(), strNormalizeBaseUrl)) {
            return strNormalizeBaseUrl;
        }
        PWLog.info(TAG, "Update base URL: ".concat(strNormalizeBaseUrl));
        this.baseUrl.set(strNormalizeBaseUrl);
        return strNormalizeBaseUrl;
    }

    public PreferenceStringValue userId() {
        return this.userId;
    }
}
