package com.pushwoosh.repository;

import android.text.TextUtils;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.m0.b;

/* JADX INFO: loaded from: classes6.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final RegistrationPrefs f5308a;

    public a(RegistrationPrefs registrationPrefs) {
        this.f5308a = registrationPrefs;
    }

    public final b a(String str, String str2) {
        String strNormalizeBaseUrl;
        if (TextUtils.isEmpty(str)) {
            PWLog.error("AppCodeApplier", "apply() rejected: empty application code");
            return b.d;
        }
        com.pushwoosh.m0.a aVar = null;
        if (str2 != null) {
            strNormalizeBaseUrl = RegistrationPrefs.normalizeBaseUrl(str2);
            if (strNormalizeBaseUrl == null) {
                PWLog.error("AppCodeApplier", "apply() rejected: invalid base URL: ".concat(str2));
                return b.d;
            }
        } else {
            strNormalizeBaseUrl = null;
        }
        String str3 = this.f5308a.applicationId().get();
        String str4 = this.f5308a.baseUrl().get();
        if ((TextUtils.isEmpty(str3) || TextUtils.equals(str3, str)) ? false : true) {
            aVar = new com.pushwoosh.m0.a(str3, this.f5308a.pushToken().get(), str4, this.f5308a.registeredOnServer().get());
            this.f5308a.removeAppId();
            this.f5308a.forceRegister().set(this.f5308a.isRegisteredForPush().get());
        }
        this.f5308a.applicationId().set(str);
        if (strNormalizeBaseUrl != null) {
            this.f5308a.updateBaseUrl(strNormalizeBaseUrl);
        } else if (!TextUtils.equals(str3, str) || TextUtils.isEmpty(str4)) {
            String defaultBaseUrl = this.f5308a.getDefaultBaseUrl(str);
            if (this.f5308a.updateBaseUrl(defaultBaseUrl) == null) {
                PWLog.error("AppCodeApplier", "Default base URL rejected: " + defaultBaseUrl + ". Check com.pushwoosh.base_url in AndroidManifest.xml.");
            }
        }
        return new b(false, this.f5308a.baseUrl().get(), aVar);
    }
}
