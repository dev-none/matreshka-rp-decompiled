package com.pushwoosh.a;

import android.app.NotificationManager;
import android.content.Context;
import androidx.core.app.NotificationManagerCompat;
import com.pushwoosh.internal.utils.PWLog;

/* JADX INFO: loaded from: classes6.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5033a = "c";
    public final Context b;
    public final NotificationManager c;

    public c(Context context, NotificationManager notificationManager) {
        this.b = context;
        this.c = notificationManager;
    }

    public final int a() {
        if (!NotificationManagerCompat.from(this.b).areNotificationsEnabled()) {
            return 0;
        }
        NotificationManager notificationManager = this.c;
        if (notificationManager != null) {
            return com.pushwoosh.i0.c.a(notificationManager);
        }
        PWLog.error(this.f5033a, "notificationManager is null");
        return 6;
    }
}
