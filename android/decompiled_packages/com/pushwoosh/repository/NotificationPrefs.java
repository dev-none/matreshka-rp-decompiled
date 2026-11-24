package com.pushwoosh.repository;

import android.content.SharedPreferences;
import com.pushwoosh.e0.d;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaDismissAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaPresentAnimationType;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaViewPosition;
import com.pushwoosh.inapp.view.config.enums.ModalRichMediaWindowWidth;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.preference.PreferenceArrayListValue;
import com.pushwoosh.internal.preference.PreferenceBooleanValue;
import com.pushwoosh.internal.preference.PreferenceClassValue;
import com.pushwoosh.internal.preference.PreferenceIntValue;
import com.pushwoosh.internal.preference.PreferenceJsonObjectValue;
import com.pushwoosh.internal.preference.PreferenceSoundTypeValue;
import com.pushwoosh.internal.preference.PreferenceStringValue;
import com.pushwoosh.internal.preference.PreferenceVibrateTypeValue;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.notification.SoundType;
import com.pushwoosh.notification.VibrateType;
import com.pushwoosh.richmedia.RichMediaColorScheme;
import com.pushwoosh.richmedia.RichMediaType;

/* JADX INFO: loaded from: classes6.dex */
public class NotificationPrefs {
    public static final String DEFAULT_CHANNEL_NAME = "Push notification";
    public static final String DEFAULT_GROUP_CHANNEL_ID = "pw_push_notifications_summary_id";
    public static final String DEFAULT_GROUP_CHANNEL_NAME = "Push notifications summary";
    public static final String DEFAULT_NOTIFICATION_GROUP = "group_undefined";
    public static final String DEPRECATED_GROUP_CHANNEL_NAME = "Push notifications group";
    private final PreferenceBooleanValue A;
    private final PreferenceIntValue B;
    private final PreferenceIntValue C;
    private final PreferenceIntValue D;
    private final PreferenceIntValue E;
    private final PreferenceIntValue F;
    private final PreferenceIntValue G;
    private final PreferenceBooleanValue H;
    private final PreferenceBooleanValue I;
    private final PreferenceIntValue J;
    private final PreferenceStringValue K;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final PreferenceBooleanValue f5306a;
    private final PreferenceIntValue b;
    private final PreferenceBooleanValue c;
    private final PreferenceBooleanValue d;
    private final PreferenceIntValue e;
    private final PreferenceIntValue f;
    private final PreferenceIntValue g;
    private final PreferenceStringValue h;
    private final PreferenceBooleanValue i;
    private final PreferenceSoundTypeValue j;
    private final PreferenceVibrateTypeValue k;
    private final PreferenceStringValue l;
    private final PreferenceArrayListValue m;
    private final PreferenceArrayListValue n;
    private final PreferenceJsonObjectValue o;
    private final PreferenceClassValue p;
    private final PreferenceClassValue q;
    private final PreferenceBooleanValue r;
    private final PreferenceStringValue s;
    private final PreferenceStringValue t;
    private final PreferenceBooleanValue u;
    private final PreferenceBooleanValue v;
    private final PreferenceBooleanValue w;
    private final PreferenceBooleanValue x;
    private final PreferenceBooleanValue y;
    private final PreferenceBooleanValue z;

    NotificationPrefs(d dVar) {
        PWLog.noise("NotificationPrefs()...");
        SharedPreferences sharedPreferencesProvidePrefs = AndroidPlatformModule.getPrefsProvider().providePrefs("com.pushwoosh.pushnotifications");
        com.pushwoosh.a.a aVar = (com.pushwoosh.a.a) dVar;
        this.f5306a = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "dm_multimode", aVar.m);
        this.b = new PreferenceIntValue(sharedPreferencesProvidePrefs, "dm_messageid", 1001);
        this.c = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "dm_lightson", aVar.n);
        this.d = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "dm_ledon", false);
        this.e = new PreferenceIntValue(sharedPreferencesProvidePrefs, "dm_led_color", -1);
        this.p = new PreferenceClassValue(sharedPreferencesProvidePrefs, "pw_notification_factory", aVar.j);
        this.q = new PreferenceClassValue(sharedPreferencesProvidePrefs, "pw_notification_factory", aVar.k);
        this.f = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_notification_background_color", aVar.C);
        this.g = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_delay", aVar.E.richMediaStartDelay());
        this.h = new PreferenceStringValue(sharedPreferencesProvidePrefs, "pw_notification_stat_hash", null);
        this.i = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_notifications_enabled", true);
        this.j = new PreferenceSoundTypeValue(sharedPreferencesProvidePrefs, "dm_soundtype", SoundType.DEFAULT_MODE);
        this.k = new PreferenceVibrateTypeValue(sharedPreferencesProvidePrefs, "dm_vibratetype", VibrateType.DEFAULT_MODE);
        this.l = new PreferenceStringValue(sharedPreferencesProvidePrefs, "channel_name", DEFAULT_CHANNEL_NAME);
        this.m = new PreferenceArrayListValue(sharedPreferencesProvidePrefs, "pushHistoryArray", 16, String.class);
        this.n = new PreferenceArrayListValue(sharedPreferencesProvidePrefs, "pw_allowed_external_hosts", 256, String.class);
        this.o = new PreferenceJsonObjectValue(sharedPreferencesProvidePrefs, "cached_tags_string");
        this.r = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_tags_migration_done", false);
        this.s = new PreferenceStringValue(sharedPreferencesProvidePrefs, "pw_custom_data", null);
        this.t = new PreferenceStringValue(sharedPreferencesProvidePrefs, "pw_message_hash", null);
        this.u = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_is_server_communication_allowed", aVar.p);
        this.v = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_is_show_notification_alert", aVar.q);
        this.z = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_handle_notifications_using_work_manager", aVar.r);
        this.w = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_is_collecting_device_os_version_allowed", aVar.s);
        this.x = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_is_collecting_device_locale_allowed", aVar.t);
        this.y = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_is_collecting_device_model_allowed", aVar.u);
        this.A = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_show_fullscreen_richmedia", aVar.w);
        this.B = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_dissmiss_animation", ModalRichMediaDismissAnimationType.FADE_OUT.getCode());
        this.C = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_present_animation", ModalRichMediaPresentAnimationType.FADE_IN.getCode());
        this.D = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_swipe_gesture_bitmask", 0);
        this.E = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_view_position", ModalRichMediaViewPosition.FULLSCREEN.getCode());
        this.F = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_window_width", ModalRichMediaWindowWidth.FULL_SCREEN.getCode());
        this.G = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_animation_duration", 1000);
        this.H = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_richmedia_status_bar_covered", false);
        this.I = new PreferenceBooleanValue(sharedPreferencesProvidePrefs, "pw_richmedia_respect_edge_to_edge_layout", true);
        this.J = new PreferenceIntValue(sharedPreferencesProvidePrefs, "pw_richmedia_type", RichMediaType.fromString(aVar.f).ordinal());
        RichMediaColorScheme richMediaColorSchemeFromString = RichMediaColorScheme.fromString(aVar.g);
        if (aVar.g != null && !richMediaColorSchemeFromString.name().equalsIgnoreCase(aVar.g)) {
            PWLog.warn("AndroidManifestConfig", "Invalid com.pushwoosh.rich_media_color_scheme value '" + aVar.g + "', falling back to APP");
        }
        this.K = new PreferenceStringValue(sharedPreferencesProvidePrefs, "pw_richmedia_color_scheme", richMediaColorSchemeFromString.name());
        PWLog.noise("NotificationPrefs() done");
    }

    public PreferenceArrayListValue<String> allowedExternalHosts() {
        return this.n;
    }

    public PreferenceStringValue channelName() {
        return this.l;
    }

    public PreferenceStringValue customData() {
        return this.s;
    }

    public PreferenceBooleanValue handleNotificationsUsingWorkManager() {
        return this.z;
    }

    public PreferenceIntValue iconBackgroundColor() {
        return this.f;
    }

    public PreferenceBooleanValue isCollectingDeviceLocaleAllowed() {
        return this.x;
    }

    public PreferenceBooleanValue isCollectingDeviceModelAllowed() {
        return this.y;
    }

    public PreferenceBooleanValue isCollectingDeviceOsVersionAllowed() {
        return this.w;
    }

    public PreferenceBooleanValue isServerCommunicationAllowed() {
        return this.u;
    }

    public PreferenceStringValue lastNotificationHash() {
        return this.h;
    }

    public PreferenceIntValue ledColor() {
        return this.e;
    }

    public PreferenceBooleanValue ledEnabled() {
        return this.d;
    }

    public PreferenceBooleanValue lightScreenOn() {
        return this.c;
    }

    public PreferenceStringValue messageHash() {
        return this.t;
    }

    public PreferenceIntValue messageId() {
        return this.b;
    }

    public PreferenceBooleanValue multiMode() {
        return this.f5306a;
    }

    public PreferenceBooleanValue notificationEnabled() {
        return this.i;
    }

    public PreferenceClassValue notificationFactoryClass() {
        return this.p;
    }

    public PreferenceArrayListValue<String> pushHistory() {
        return this.m;
    }

    public PreferenceIntValue richMediaAnimationDuration() {
        return this.G;
    }

    public PreferenceStringValue richMediaColorScheme() {
        return this.K;
    }

    public PreferenceIntValue richMediaDelayMs() {
        return this.g;
    }

    public PreferenceIntValue richMediaDismissAnimation() {
        return this.B;
    }

    public PreferenceIntValue richMediaPresentAnimation() {
        return this.C;
    }

    public PreferenceBooleanValue richMediaRespectEdgeToEdgeLayout() {
        return this.I;
    }

    public PreferenceBooleanValue richMediaStatusBarCovered() {
        return this.H;
    }

    public PreferenceIntValue richMediaSwipeGestureBitMask() {
        return this.D;
    }

    public PreferenceIntValue richMediaType() {
        return this.J;
    }

    public PreferenceIntValue richMediaViewPosition() {
        return this.E;
    }

    public PreferenceIntValue richMediaWindowWidth() {
        return this.F;
    }

    public PreferenceBooleanValue showFullscreenRichMedia() {
        return this.A;
    }

    public PreferenceBooleanValue showPushnotificationAlert() {
        return this.v;
    }

    public PreferenceSoundTypeValue soundType() {
        return this.j;
    }

    public PreferenceClassValue summaryNotificationFactoryClass() {
        return this.q;
    }

    public PreferenceJsonObjectValue tags() {
        return this.o;
    }

    public PreferenceBooleanValue tagsMigrationDone() {
        return this.r;
    }

    public PreferenceVibrateTypeValue vibrateType() {
        return this.k;
    }
}
