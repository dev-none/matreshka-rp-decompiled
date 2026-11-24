package com.pushwoosh.badge.e;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class l implements com.pushwoosh.badge.d.a {
    @Override // com.pushwoosh.badge.d.a
    public final void a(Context context, ComponentName componentName, int i) {
        Intent intent = new Intent("launcher.action.CHANGE_APPLICATION_NOTIFICATION_NUM");
        intent.putExtra("packageName", context.getPackageName());
        intent.putExtra("className", componentName.getClassName());
        intent.putExtra("notificationNum", i);
        context.sendBroadcast(intent);
    }

    @Override // com.pushwoosh.badge.d.a
    public final List a() {
        return Arrays.asList("com.vivo.launcher");
    }
}
