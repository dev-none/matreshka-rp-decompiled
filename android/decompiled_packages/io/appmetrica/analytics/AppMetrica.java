package io.appmetrica.analytics;

import android.app.Activity;
import android.app.Application;
import android.content.Context;
import android.content.Intent;
import android.location.Location;
import android.webkit.WebView;
import io.appmetrica.analytics.ecommerce.ECommerceEvent;
import io.appmetrica.analytics.impl.AbstractC2461t1;
import io.appmetrica.analytics.impl.C2436s1;
import io.appmetrica.analytics.impl.I0;
import io.appmetrica.analytics.plugins.AppMetricaPlugins;
import io.appmetrica.analytics.profile.UserProfile;
import java.util.Arrays;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public final class AppMetrica {
    public static void activate(Context context, AppMetricaConfig appMetricaConfig) {
        AbstractC2461t1.f6322a.a(context, appMetricaConfig);
    }

    public static void activateReporter(Context context, ReporterConfig reporterConfig) {
        AbstractC2461t1.f6322a.a(context, reporterConfig);
    }

    public static void clearAppEnvironment() {
        AbstractC2461t1.f6322a.a();
    }

    public static void enableActivityAutoTracking(Application application) {
        AbstractC2461t1.f6322a.a(application);
    }

    public static String getDeviceId(Context context) {
        return AbstractC2461t1.f6322a.b();
    }

    public static int getLibraryApiLevel() {
        return 116;
    }

    public static String getLibraryVersion() {
        return "7.13.0";
    }

    public static AppMetricaPlugins getPluginExtension() {
        return I0.f5716a;
    }

    public static IReporter getReporter(Context context, String str) {
        return AbstractC2461t1.f6322a.a(context, str);
    }

    public static String getUuid(Context context) {
        return AbstractC2461t1.f6322a.a(context).id;
    }

    public static void initWebViewReporting(WebView webView) {
        AbstractC2461t1.f6322a.a(webView);
    }

    public static void pauseSession(Activity activity) {
        AbstractC2461t1.f6322a.a(activity);
    }

    public static void putAppEnvironmentValue(String str, String str2) {
        AbstractC2461t1.f6322a.a(str, str2);
    }

    public static void putErrorEnvironmentValue(String str, String str2) {
        AbstractC2461t1.f6322a.b(str, str2);
    }

    public static void registerAnrListener(AnrListener anrListener) {
        AbstractC2461t1.f6322a.a(anrListener);
    }

    public static void reportAdRevenue(AdRevenue adRevenue) {
        AbstractC2461t1.f6322a.a(adRevenue);
    }

    public static void reportAnr(Map<Thread, StackTraceElement[]> map) {
        AbstractC2461t1.f6322a.a(map);
    }

    public static void reportAppOpen(Activity activity) {
        AbstractC2461t1.f6322a.b(activity);
    }

    public static void reportECommerce(ECommerceEvent eCommerceEvent) {
        AbstractC2461t1.f6322a.a(eCommerceEvent);
    }

    public static void reportError(String str, String str2) {
        AbstractC2461t1.f6322a.a(str, str2, (Throwable) null);
    }

    public static void reportEvent(String str) {
        AbstractC2461t1.f6322a.b(str);
    }

    public static void reportExternalAdRevenue(Object... objArr) {
        AbstractC2461t1.f6322a.b(objArr);
    }

    public static void reportExternalAttribution(ExternalAttribution externalAttribution) {
        AbstractC2461t1.f6322a.a(externalAttribution);
    }

    public static void reportReferralUrl(String str) {
        AbstractC2461t1.f6322a.d(str);
    }

    public static void reportRevenue(Revenue revenue) {
        AbstractC2461t1.f6322a.a(revenue);
    }

    public static void reportUnhandledException(Throwable th) {
        AbstractC2461t1.f6322a.a(th);
    }

    public static void reportUserProfile(UserProfile userProfile) {
        AbstractC2461t1.f6322a.a(userProfile);
    }

    public static void requestDeferredDeeplink(DeferredDeeplinkListener deferredDeeplinkListener) {
        AbstractC2461t1.f6322a.a(deferredDeeplinkListener);
    }

    public static void requestDeferredDeeplinkParameters(DeferredDeeplinkParametersListener deferredDeeplinkParametersListener) {
        AbstractC2461t1.f6322a.a(deferredDeeplinkParametersListener);
    }

    public static void requestStartupParams(Context context, StartupParamsCallback startupParamsCallback, List<String> list) {
        C2436s1 c2436s1 = AbstractC2461t1.f6322a;
        if (list.isEmpty()) {
            list = Arrays.asList(StartupParamsCallback.APPMETRICA_UUID, StartupParamsCallback.APPMETRICA_DEVICE_ID, StartupParamsCallback.APPMETRICA_DEVICE_ID_HASH);
        }
        c2436s1.a(context, startupParamsCallback, list);
    }

    public static void resumeSession(Activity activity) {
        AbstractC2461t1.f6322a.c(activity);
    }

    public static void sendEventsBuffer() {
        AbstractC2461t1.f6322a.f();
    }

    public static void setAdvIdentifiersTracking(boolean z) {
        AbstractC2461t1.f6322a.a(z);
    }

    public static void setDataSendingEnabled(boolean z) {
        AbstractC2461t1.f6322a.b(z);
    }

    public static void setLocation(Location location) {
        AbstractC2461t1.f6322a.a(location);
    }

    public static void setLocationTracking(boolean z) {
        AbstractC2461t1.f6322a.c(z);
    }

    public static void setUserProfileID(String str) {
        AbstractC2461t1.f6322a.e(str);
    }

    public static void reportAppOpen(Intent intent) {
        AbstractC2461t1.f6322a.a(intent);
    }

    public static void reportError(String str, String str2, Throwable th) {
        AbstractC2461t1.f6322a.a(str, str2, th);
    }

    public static void reportEvent(String str, String str2) {
        AbstractC2461t1.f6322a.c(str, str2);
    }

    public static void reportAppOpen(String str) {
        AbstractC2461t1.f6322a.a(str);
    }

    public static void reportError(String str, Throwable th) {
        AbstractC2461t1.f6322a.a(str, th);
    }

    public static void reportEvent(String str, Map<String, Object> map) {
        AbstractC2461t1.f6322a.a(str, map);
    }
}
