package com.pushwoosh.badge.e;

import android.content.ComponentName;
import android.content.Context;
import android.net.Uri;
import android.os.Bundle;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class m implements com.pushwoosh.badge.d.a {
    @Override // com.pushwoosh.badge.d.a
    public final void a(Context context, ComponentName componentName, int i) {
        Bundle bundle = new Bundle();
        bundle.putInt("app_badge_count", i);
        bundle.putString("app_badge_component_name", componentName.flattenToString());
        context.getContentResolver().call(Uri.parse("content://com.android.launcher3.cornermark.unreadbadge"), "setAppUnreadCount", (String) null, bundle);
    }

    @Override // com.pushwoosh.badge.d.a
    public final List a() {
        return new ArrayList(0);
    }
}
