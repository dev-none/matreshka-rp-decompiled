package com.pushwoosh.badge.e;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ResolveInfo;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class d implements com.pushwoosh.badge.d.a {
    @Override // com.pushwoosh.badge.d.a
    public final void a(Context context, ComponentName componentName, int i) throws com.pushwoosh.badge.d.b {
        Intent intent = new Intent("android.intent.action.BADGE_COUNT_UPDATE");
        intent.putExtra("badge_count", i);
        intent.putExtra("badge_count_package_name", componentName.getPackageName());
        intent.putExtra("badge_count_class_name", componentName.getClassName());
        List<ResolveInfo> listQueryBroadcastReceivers = context.getPackageManager().queryBroadcastReceivers(intent, 0);
        if (listQueryBroadcastReceivers != null && listQueryBroadcastReceivers.size() > 0) {
            context.sendBroadcast(intent);
        } else {
            throw new com.pushwoosh.badge.d.b("unable to resolve intent: " + intent.toString());
        }
    }

    @Override // com.pushwoosh.badge.d.a
    public final List a() {
        return new ArrayList(0);
    }
}
