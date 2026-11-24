package com.pushwoosh.badge;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import com.pushwoosh.badge.c.a;
import com.pushwoosh.badge.d.b;
import com.pushwoosh.badge.d.c;
import com.pushwoosh.internal.platform.AndroidPlatformModule;

/* JADX INFO: loaded from: classes6.dex */
public class PushwooshBadge {
    /* JADX INFO: Access modifiers changed from: private */
    public static void a(int i) {
        Context applicationContext = AndroidPlatformModule.getApplicationContext();
        if (applicationContext == null) {
            return;
        }
        try {
            c.a(applicationContext, i);
        } catch (b e) {
            if (Log.isLoggable("ShortcutBadger", 3)) {
                Log.d("ShortcutBadger", "Unable to execute badge", e);
            }
        }
        a aVar = com.pushwoosh.badge.a.a.f5045a;
        if (aVar == null) {
            return;
        }
        aVar.f5046a.set(i);
    }

    public static void addBadgeNumber(int i) {
        int badgeNumber = getBadgeNumber() + i;
        if (badgeNumber < 0) {
            badgeNumber = 0;
        }
        setBadgeNumber(badgeNumber);
    }

    public static int getBadgeNumber() {
        a aVar = com.pushwoosh.badge.a.a.f5045a;
        if (aVar == null) {
            return 0;
        }
        return aVar.f5046a.get();
    }

    public static void setBadgeNumber(final int i) {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.pushwoosh.badge.PushwooshBadge$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                PushwooshBadge.a(i);
            }
        });
    }
}
