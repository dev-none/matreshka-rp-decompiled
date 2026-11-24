package com.pushwoosh.w;

import android.content.ClipData;
import android.content.ClipboardManager;
import android.content.Context;
import com.pushwoosh.d0.g;
import com.pushwoosh.function.Callback;
import com.pushwoosh.function.Result;
import com.pushwoosh.internal.network.NetworkModule;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.app.AppInfoProvider;
import com.pushwoosh.internal.utils.BackgroundExecutor;
import com.pushwoosh.internal.utils.PWLog;
import com.pushwoosh.repository.NotificationPrefs;
import com.pushwoosh.repository.RegistrationPrefs;
import com.pushwoosh.repository.RepositoryModule;

/* JADX INFO: loaded from: classes6.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final long[] f5323a;
    public final c b;
    public int c;
    public int d;

    public d() {
        c cVar = new c() { // from class: com.pushwoosh.w.d$$ExternalSyntheticLambda3
            @Override // com.pushwoosh.w.c
            public final long a() {
                return System.currentTimeMillis();
            }
        };
        this.f5323a = new long[6];
        this.c = 0;
        this.d = 0;
        this.b = cVar;
    }

    public final void a(Context context, String str) {
        try {
            ClipboardManager clipboardManager = (ClipboardManager) context.getSystemService("clipboard");
            if (clipboardManager != null) {
                clipboardManager.setPrimaryClip(ClipData.newPlainText("Pushwoosh HWID", str));
            }
        } catch (Exception e) {
            PWLog.error("KnockPatternDetector", "Failed to copy HWID to clipboard", e);
        }
        a();
    }

    public final /* synthetic */ void b() {
        final String str = RepositoryModule.getRegistrationPreferences().hwid().get();
        if (str == null || str.isEmpty()) {
            PWLog.warn("KnockPatternDetector", "HWID is not available");
            return;
        }
        final Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            PWLog.warn("KnockPatternDetector", "Context is null");
        } else {
            BackgroundExecutor.main(new Runnable() { // from class: com.pushwoosh.w.d$$ExternalSyntheticLambda2
                @Override // java.lang.Runnable
                public final void run() {
                    this.f$0.a(applicationContext, str);
                }
            });
        }
    }

    public final void c() {
        RegistrationPrefs registrationPreferences = RepositoryModule.getRegistrationPreferences();
        if (registrationPreferences != null) {
            long jA = this.b.a();
            long j = registrationPreferences.lastKnockPatternTime().get();
            if (j != 0 && jA - j < 3600000) {
                PWLog.debug("KnockPatternDetector", "Knock pattern action skipped (cooldown)");
                return;
            }
            registrationPreferences.lastKnockPatternTime().set(jA);
        }
        String strName = PWLog.Level.NOISE.name();
        RegistrationPrefs registrationPreferences2 = RepositoryModule.getRegistrationPreferences();
        if (registrationPreferences2 != null && registrationPreferences2.logLevel() != null) {
            registrationPreferences2.logLevel().set(strName);
        }
        PWLog.updateLogLevel(strName);
        PWLog.info("KnockPatternDetector", "Log level set to NOISE via knock pattern");
        com.pushwoosh.s.c.d.a(new Runnable() { // from class: com.pushwoosh.w.d$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.b();
            }
        });
    }

    public static void a() {
        String strA;
        String packageName;
        NotificationPrefs notificationPreferences = RepositoryModule.getNotificationPreferences();
        if (notificationPreferences != null && notificationPreferences.isCollectingDeviceModelAllowed().get()) {
            strA = g.a();
        } else {
            strA = "Android Device";
        }
        AppInfoProvider appInfoProvider = AndroidPlatformModule.getAppInfoProvider();
        if (appInfoProvider != null && appInfoProvider.getPackageName() != null) {
            packageName = appInfoProvider.getPackageName();
            if (packageName.length() > 64) {
                packageName = packageName.substring(0, 64);
            }
        } else {
            packageName = "";
        }
        NetworkModule.getRequestManager().sendRequest(new com.pushwoosh.v.b(strA, packageName, true), new Callback() { // from class: com.pushwoosh.w.d$$ExternalSyntheticLambda1
            @Override // com.pushwoosh.function.Callback
            public final void process(Result result) {
                d.a(result);
            }
        });
    }

    public static /* synthetic */ void a(Result result) {
        if (result.isSuccess()) {
            return;
        }
        PWLog.warn("KnockPatternDetector", "createTestDevice failed: " + result.getException());
    }
}
