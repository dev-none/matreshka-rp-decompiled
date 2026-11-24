package com.pushwoosh.badge.e;

import android.content.ComponentName;
import android.content.Context;
import android.net.Uri;
import android.os.Bundle;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class n implements com.pushwoosh.badge.d.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Uri f5049a = Uri.parse("content://com.android.badge/badge");

    @Override // com.pushwoosh.badge.d.a
    public final void a(Context context, ComponentName componentName, int i) {
        Bundle bundle = new Bundle();
        bundle.putInt("app_badge_count", i);
        context.getContentResolver().call(this.f5049a, "setAppBadgeCount", (String) null, bundle);
    }

    @Override // com.pushwoosh.badge.d.a
    public final List a() {
        return Collections.singletonList("com.zui.launcher");
    }
}
