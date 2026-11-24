package com.pushwoosh.a;

import android.content.pm.ApplicationInfo;
import android.os.Bundle;
import android.text.TextUtils;
import com.pushwoosh.internal.Plugin;
import com.pushwoosh.internal.PluginProvider;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.app.AppInfoProvider;
import com.pushwoosh.internal.utils.PWLog;
import io.appmetrica.analytics.coreutils.internal.StringUtils;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class a implements com.pushwoosh.e0.d {
    public final int A;
    public final int B;
    public final int C;
    public final ArrayList D = new ArrayList();
    public final PluginProvider E;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5031a;
    public final String b;
    public final String c;
    public final String d;
    public final String e;
    public final String f;
    public final String g;
    public final String[] h;
    public final Class i;
    public final Class j;
    public final Class k;
    public boolean l;
    public final boolean m;
    public final boolean n;
    public final boolean o;
    public final boolean p;
    public final boolean q;
    public final boolean r;
    public final boolean s;
    public final boolean t;
    public final boolean u;
    public final boolean v;
    public final boolean w;
    public final boolean x;
    public final boolean y;
    public final int z;

    public a() {
        Bundle bundle;
        this.f5031a = null;
        this.b = null;
        this.c = null;
        this.d = null;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = new String[0];
        this.l = false;
        this.m = false;
        this.n = false;
        this.o = false;
        this.p = true;
        this.q = false;
        this.r = false;
        this.s = true;
        this.t = true;
        this.u = true;
        this.v = true;
        this.w = false;
        this.x = false;
        this.y = false;
        this.z = 0;
        this.A = 0;
        this.B = 0;
        this.C = 0;
        ApplicationInfo applicationInfo = AndroidPlatformModule.getAppInfoProvider().getApplicationInfo();
        if (applicationInfo == null || (bundle = applicationInfo.metaData) == null) {
            PWLog.warn("AndroidManifestConfig", "no metadata found");
            return;
        }
        String strA = a(bundle, "com.pushwoosh.appid", "PW_APPID");
        this.f5031a = strA;
        if (strA != null && strA.contains(".")) {
            throw new IllegalStateException("Application id format with '.' is deprecated. Please contact Pushwoosh support.");
        }
        this.b = a(applicationInfo.metaData, "com.pushwoosh.apitoken", "PW_API_TOKEN");
        String strA2 = a(applicationInfo.metaData, "com.pushwoosh.trusted_package_names", null);
        if (!TextUtils.isEmpty(strA2)) {
            this.h = strA2.split(StringUtils.COMMA);
        }
        if (this.h.length > 0) {
            int i = 0;
            while (true) {
                String[] strArr = this.h;
                if (i >= strArr.length) {
                    break;
                }
                strArr[i] = strArr[i].trim();
                i++;
            }
        }
        this.c = a(applicationInfo.metaData, "com.pushwoosh.log_level", "PW_LOG_LEVEL");
        this.d = a(applicationInfo.metaData, "com.pushwoosh.base_url", "PushwooshUrl");
        this.e = a(applicationInfo.metaData, "com.pushwoosh.tracking_url", null);
        this.f = a(applicationInfo.metaData, "com.pushwoosh.rich_media_type", "RichMediaType");
        this.g = a(applicationInfo.metaData, "com.pushwoosh.rich_media_color_scheme", null);
        this.i = a(applicationInfo.metaData, "com.pushwoosh.notification_service_extension");
        this.j = a(applicationInfo.metaData, "com.pushwoosh.notification_factory");
        this.k = a(applicationInfo.metaData, "com.pushwoosh.summary_notification_factory");
        this.l = applicationInfo.metaData.getBoolean("com.pushwoosh.lazy_initialization", false);
        this.m = applicationInfo.metaData.getBoolean("com.pushwoosh.multi_notification_mode", false);
        this.n = applicationInfo.metaData.getBoolean("com.pushwoosh.light_screen_notification", false);
        this.o = applicationInfo.metaData.getBoolean("com.pushwoosh.send_push_stats_if_alert_disabled", false);
        this.p = applicationInfo.metaData.getBoolean("com.pushwoosh.allow_server_communication", true);
        this.q = applicationInfo.metaData.getBoolean("com.pushwoosh.foreground_push", false);
        this.r = applicationInfo.metaData.getBoolean("com.pushwoosh.handle_notifications_using_workmanager", false);
        this.w = applicationInfo.metaData.getBoolean("com.pushwoosh.show_fullscreen_richmedia", true);
        this.x = applicationInfo.metaData.getBoolean("com.pushwoosh.allow_reverse_proxy", false);
        this.y = applicationInfo.metaData.getBoolean("com.pushwoosh.feature_flags.disable_throttle", false);
        String string = applicationInfo.metaData.getString("com.pushwoosh.notification_icon");
        if (string != null) {
            String[] strArrSplit = string.trim().split("/");
            String str = strArrSplit[strArrSplit.length - 1];
            int iLastIndexOf = str.lastIndexOf(".");
            this.B = AndroidPlatformModule.getResourceProvider().getIdentifier(iLastIndexOf >= 0 ? str.substring(0, iLastIndexOf) : str, "drawable");
        }
        this.C = applicationInfo.metaData.getInt("com.pushwoosh.notification_icon_color", 0);
        for (String str2 : applicationInfo.metaData.keySet()) {
            if (str2.startsWith("com.pushwoosh.plugin.")) {
                try {
                    Class clsA = a(applicationInfo.metaData, str2);
                    if (clsA != null) {
                        this.D.add((Plugin) clsA.newInstance());
                    }
                } catch (Exception e) {
                    PWLog.warn("AndroidManifestConfig", "Failed to load plugin ".concat(str2), e);
                }
            }
        }
        try {
            Class clsA2 = a(applicationInfo.metaData, "com.pushwoosh.internal.plugin_provider");
            if (clsA2 != null) {
                this.E = (PluginProvider) clsA2.newInstance();
            }
        } catch (Exception e2) {
            PWLog.warn("AndroidManifestConfig", "Failed to load plugin provider", e2);
        }
        if (this.E == null) {
            this.E = new com.pushwoosh.s.a();
        }
        this.z = applicationInfo.metaData.getInt("com.pushwoosh.idle_timeout_seconds", 0);
        this.A = applicationInfo.metaData.getInt("com.pushwoosh.exit_intent_timeout_seconds", 0);
        if (!applicationInfo.metaData.getBoolean("com.pushwoosh.allow_collecting_device_data", true)) {
            this.s = false;
            this.t = false;
            this.u = false;
            this.v = false;
            this.z = 0;
            this.A = 0;
            return;
        }
        this.s = applicationInfo.metaData.getBoolean("com.pushwoosh.allow_collecting_device_os_version", true);
        this.t = applicationInfo.metaData.getBoolean("com.pushwoosh.allow_collecting_device_locale", true);
        this.u = applicationInfo.metaData.getBoolean("com.pushwoosh.allow_collecting_device_model", true);
        boolean z = applicationInfo.metaData.getBoolean("com.pushwoosh.allow_collecting_events", true);
        this.v = z;
        if (z) {
            return;
        }
        this.z = 0;
        this.A = 0;
    }

    public static String a(Bundle bundle, String str, String str2) {
        String string = bundle.getString(str);
        if (string == null) {
            Object obj = bundle.get(str);
            string = obj != null ? String.valueOf(obj) : bundle.getString(str2);
            if (string != null) {
                PWLog.warn("AndroidManifestConfig", "'" + str2 + "' is deprecated, consider using '" + str + "'");
            }
        }
        if (string != null) {
            return string.trim();
        }
        return null;
    }

    public static String a(String str) {
        AppInfoProvider appInfoProvider;
        if (str == null) {
            return null;
        }
        String strTrim = str.trim();
        if (strTrim.isEmpty()) {
            return null;
        }
        if (!strTrim.startsWith(".") || (appInfoProvider = AndroidPlatformModule.getAppInfoProvider()) == null) {
            return strTrim;
        }
        return appInfoProvider.getPackageName() + strTrim;
    }

    public static Class a(Bundle bundle, String str) {
        String strA = a(bundle.getString(str));
        if (strA == null) {
            return null;
        }
        try {
            Class<?> cls = Class.forName(strA);
            cls.getConstructor(null);
            return cls;
        } catch (ClassNotFoundException | LinkageError | NoSuchMethodException e) {
            PWLog.debug("AndroidManifestConfig", "Failed to resolve class '" + strA + "' for manifest key '" + str + "'", e);
            return null;
        }
    }
}
