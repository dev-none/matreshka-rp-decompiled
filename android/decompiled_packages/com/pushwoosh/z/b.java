package com.pushwoosh.z;

import android.content.Context;
import android.content.SharedPreferences;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class b {
    public static volatile b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final int f5327a;

    public b() {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        SharedPreferences sharedPreferences = applicationContext == null ? null : applicationContext.getSharedPreferences("com.pushwoosh.migration", 0);
        int i = sharedPreferences == null ? 3 : sharedPreferences.getInt("lastVersion", 1);
        this.f5327a = i;
        if (sharedPreferences != null) {
            sharedPreferences.edit().putInt("lastVersion", 3).apply();
        }
        PWLog.noise("PrefsFactory created. LastVersion: " + i + "; CurrentVersion: 3");
    }

    public static void a() {
        synchronized (b.class) {
            if (b == null) {
                b = new b();
            }
        }
    }

    public static a a(int i) {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (i != 1 && i != 3) {
            PWLog.noise("PrefsFactory", "Unknown version: " + i);
            return null;
        }
        return new a(applicationContext);
    }
}
