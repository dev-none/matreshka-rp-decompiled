package com.pushwoosh;

import android.app.Application;
import android.content.Context;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.os.Build;
import com.pushwoosh.a.b;
import com.pushwoosh.a.d;
import com.pushwoosh.g0.e;
import com.pushwoosh.internal.platform.AndroidPlatformModule;
import com.pushwoosh.internal.platform.ApplicationOpenDetector;
import com.pushwoosh.internal.specific.DeviceSpecificProvider;
import com.pushwoosh.internal.utils.LockScreenReceiver;
import com.pushwoosh.internal.utils.PWLog;
import java.lang.reflect.InvocationTargetException;
import java.util.concurrent.atomic.AtomicReference;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshInitializer {
    /* JADX WARN: Code duplicated, block: B:47:0x00d7 A[Catch: all -> 0x0157, TryCatch #3 {, blocks: (B:25:0x0085, B:27:0x0089, B:29:0x008c, B:31:0x0096, B:37:0x00af, B:49:0x00dc, B:52:0x00eb, B:56:0x0102, B:60:0x0112, B:61:0x0114, B:55:0x00fb, B:59:0x010b, B:38:0x00b2, B:41:0x00bd, B:47:0x00d7, B:48:0x00da, B:44:0x00cd, B:34:0x00a5), top: B:78:0x0085, inners: #0, #2, #5 }] */
    /* JADX WARN: Code duplicated, block: B:48:0x00da A[Catch: all -> 0x0157, TRY_LEAVE, TryCatch #3 {, blocks: (B:25:0x0085, B:27:0x0089, B:29:0x008c, B:31:0x0096, B:37:0x00af, B:49:0x00dc, B:52:0x00eb, B:56:0x0102, B:60:0x0112, B:61:0x0114, B:55:0x00fb, B:59:0x010b, B:38:0x00b2, B:41:0x00bd, B:47:0x00d7, B:48:0x00da, B:44:0x00cd, B:34:0x00a5), top: B:78:0x0085, inners: #0, #2, #5 }] */
    public static void a(Context context, boolean z) {
        int i;
        if (DeviceSpecificProvider.isInited() && PushwooshPlatform.getInstance() != null && AndroidPlatformModule.getApplicationContext() != null && !z) {
            PWLog.noise("PushwooshInitializer", "already init");
            return;
        }
        DeviceSpecificProvider.isInited();
        AndroidPlatformModule.init(context);
        Integer numValueOf = null;
        try {
            Class.forName("com.pushwoosh.xamarin.internal.XamarinPluginProvider");
            Class.forName("com.pushwoosh.firebase.FirebaseInitializer").getMethod("init", Context.class).invoke(null, context);
        } catch (ClassNotFoundException | IllegalAccessException | NoSuchMethodException | InvocationTargetException unused) {
        }
        if (DeviceSpecificProvider.getInstance() == null) {
            b.b();
            return;
        }
        com.pushwoosh.a.a aVar = new com.pushwoosh.a.a();
        int i2 = 0;
        if (z) {
            aVar.l = false;
        }
        d dVar = new d();
        dVar.f5034a = aVar;
        dVar.b = DeviceSpecificProvider.getInstance().pushRegistrar();
        PushwooshPlatform.s = new PushwooshPlatform(dVar, i2);
        PushwooshPlatform pushwooshPlatform = PushwooshPlatform.s;
        if (aVar.l) {
            return;
        }
        pushwooshPlatform.onApplicationCreated();
        ApplicationOpenDetector applicationOpenDetector = AndroidPlatformModule.getApplicationOpenDetector();
        com.pushwoosh.e0.b bVarB = pushwooshPlatform.b();
        synchronized (bVarB.d) {
            if (!bVarB.c) {
                try {
                    if (bVarB.f5065a.contains("LastLaunchVersion")) {
                        numValueOf = Integer.valueOf(bVarB.f5065a.getInt("LastLaunchVersion", -1));
                    }
                } catch (Exception e) {
                    PWLog.error("AppVersionProvider", "Failed to read LastLaunchVersion from prefs", e);
                }
                if (numValueOf == null) {
                    bVarB.b = true;
                } else {
                    int iIntValue = numValueOf.intValue();
                    Context applicationContext = AndroidPlatformModule.getApplicationContext();
                    if (applicationContext != null) {
                        try {
                            i = applicationContext.getPackageManager().getPackageInfo(applicationContext.getPackageName(), 0).versionCode;
                        } catch (Exception e2) {
                            PWLog.error("AppVersionProvider", "Failed to read current package version", e2);
                            i = 0;
                        }
                        if (iIntValue != i) {
                            bVarB.b = false;
                        } else {
                            bVarB.b = false;
                        }
                    }
                    i = 0;
                    if (iIntValue != i) {
                        bVarB.b = false;
                    } else {
                        bVarB.b = false;
                    }
                }
                try {
                    SharedPreferences.Editor editorEdit = bVarB.f5065a.edit();
                    Context applicationContext2 = AndroidPlatformModule.getApplicationContext();
                    if (applicationContext2 != null) {
                        try {
                            i2 = applicationContext2.getPackageManager().getPackageInfo(applicationContext2.getPackageName(), 0).versionCode;
                        } catch (Exception e3) {
                            PWLog.error("AppVersionProvider", "Failed to read current package version", e3);
                        }
                    }
                    editorEdit.putInt("LastLaunchVersion", i2).apply();
                } catch (Exception e4) {
                    PWLog.error("AppVersionProvider", "Failed to write LastLaunchVersion to prefs", e4);
                }
                bVarB.c = true;
            }
        }
        applicationOpenDetector.onApplicationCreated(bVarB.b);
        AtomicReference atomicReference = e.f5085a;
        ((Application) context.getApplicationContext()).registerActivityLifecycleCallbacks(new com.pushwoosh.g0.d());
        LockScreenReceiver lockScreenReceiver = new LockScreenReceiver();
        IntentFilter intentFilter = new IntentFilter("android.intent.action.SCREEN_ON");
        intentFilter.addAction("android.intent.action.SCREEN_OFF");
        intentFilter.addAction("android.intent.action.ANSWER");
        intentFilter.addAction("android.intent.action.USER_PRESENT");
        if (Build.VERSION.SDK_INT >= 33) {
            context.registerReceiver(lockScreenReceiver, intentFilter, 4);
        } else {
            context.registerReceiver(lockScreenReceiver, intentFilter);
        }
        b.b();
    }

    public static void init(Context context) {
        a(context, false);
    }
}
