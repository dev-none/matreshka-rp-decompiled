package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import com.pushwoosh.internal.utils.PWLog;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public abstract class y {
    public static void a(Context context, w action) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(action, "action");
        try {
            Intent intentAddFlags = new Intent("android.intent.action.VIEW", Uri.parse(action.f5174a)).addFlags(268435456);
            Intrinsics.checkNotNullExpressionValue(intentAddFlags, "Intent(Intent.ACTION_VIE…t.FLAG_ACTIVITY_NEW_TASK)");
            context.startActivity(intentAddFlags);
        } catch (Exception e) {
            PWLog.error("InAppActionDispatcher", "Failed to open in-app action url: ".concat(action.f5174a), e);
        }
    }
}
