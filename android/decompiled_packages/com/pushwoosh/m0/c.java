package com.pushwoosh.m0;

import android.content.Context;
import android.os.Build;
import androidx.webkit.UserAgentMetadata;
import com.pushwoosh.internal.network.PushRequest;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.repository.RepositoryModule;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.sentry.ProfilingTraceData;
import io.sentry.protocol.App;
import java.util.Date;
import java.util.TimeZone;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicReference;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class c extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f5245a;

    public boolean a() {
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:24:0x00b2  */
    @Override // com.pushwoosh.internal.network.PushRequest
    public void buildParams(JSONObject jSONObject) throws JSONException {
        String strA;
        jSONObject.put("language", RepositoryModule.getRegistrationPreferences().language().get());
        jSONObject.put("timezone", TimeUnit.SECONDS.convert(TimeZone.getDefault().getOffset(new Date().getTime()), TimeUnit.MILLISECONDS));
        jSONObject.put("android_package", AndroidPlatformModule.getAppInfoProvider().getPackageName());
        if (RepositoryModule.getNotificationPreferences().isCollectingDeviceModelAllowed().get()) {
            jSONObject.put(ProfilingTraceData.JsonKeys.DEVICE_MODEL, com.pushwoosh.d0.g.a());
            jSONObject.put("device_name", com.pushwoosh.d0.g.c() ? UserAgentMetadata.FORM_FACTOR_TABLET : "Phone");
        }
        if (RepositoryModule.getNotificationPreferences().isCollectingDeviceOsVersionAllowed().get()) {
            jSONObject.put(CommonUrlParts.OS_VERSION, Build.VERSION.RELEASE);
        }
        Object versionName = AndroidPlatformModule.getAppInfoProvider().getVersionName();
        if (versionName != null) {
            jSONObject.put(App.JsonKeys.APP_VERSION, versionName);
        }
        com.pushwoosh.a.c permissionController = AndroidPlatformModule.getInstance().getPermissionController();
        if (permissionController != null) {
            jSONObject.put("notificationTypes", permissionController.a());
        }
        if (a()) {
            AtomicReference atomicReference = com.pushwoosh.g0.e.f5085a;
            Context applicationContext = AndroidPlatformModule.getApplicationContext();
            if (applicationContext == null) {
                strA = null;
            } else {
                strA = com.pushwoosh.g0.e.a(applicationContext, false);
            }
        } else {
            strA = null;
        }
        this.f5245a = strA;
        if (strA != null) {
            jSONObject.put("push_permission_status", strA);
        }
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public String getMethod() {
        return "applicationOpen";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) {
        return (Void) super.parseResponse(jSONObject);
    }
}
