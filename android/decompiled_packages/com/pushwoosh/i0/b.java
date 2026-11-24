package com.pushwoosh.i0;

import android.app.NotificationManager;
import android.content.Context;

/* JADX INFO: loaded from: classes6.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final d f5097a;

    public b(Context context) {
        this.f5097a = new f((NotificationManager) context.getSystemService("notification"));
    }
}
