package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.content.Intent;
import com.pushwoosh.inapp.ui.activity.InAppOverlayActivity;
import com.pushwoosh.internal.utils.PWLog;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class h1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final z f5128a;
    public final a1 b;

    public h1(z activityChannel, a1 overlayChannel) {
        Intrinsics.checkNotNullParameter(activityChannel, "activityChannel");
        Intrinsics.checkNotNullParameter(overlayChannel, "overlayChannel");
        this.f5128a = activityChannel;
        this.b = overlayChannel;
    }

    public final void a(s0 message) {
        Intrinsics.checkNotNullParameter(message, "message");
        r0 r0Var = message.b;
        if (!(r0Var instanceof k0) && (!(r0Var instanceof n0) ? !(!(r0Var instanceof o0) || ((o0) r0Var).f5149a.g) : !((n0) r0Var).f5147a.g)) {
            z zVar = this.f5128a;
            zVar.getClass();
            Intrinsics.checkNotNullParameter(message, "message");
            try {
                Context context = zVar.f5179a;
                int i = InAppOverlayActivity.f;
                String rawJson = message.f;
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(rawJson, "rawJson");
                Intent intentAddFlags = new Intent(context, (Class<?>) InAppOverlayActivity.class).putExtra("pw_inapp_raw_json", rawJson).addFlags(268435456);
                Intrinsics.checkNotNullExpressionValue(intentAddFlags, "Intent(context, InAppOve…t.FLAG_ACTIVITY_NEW_TASK)");
                context.startActivity(intentAddFlags);
                return;
            } catch (Throwable th) {
                PWLog.error("InAppActivityChannel", "Failed to present in-app overlay activity", th);
                v0.f5172a.b(zVar.f5179a).a(message.f5162a);
                return;
            }
        }
        a1 a1Var = this.b;
        a1Var.getClass();
        Intrinsics.checkNotNullParameter(message, "message");
        try {
            if (!((Boolean) a1Var.b.invoke(message, new z0(a1Var.f5105a))).booleanValue()) {
                g1 g1Var = a1Var.f5105a;
                g1Var.getClass();
                Intrinsics.checkNotNullParameter(message, "message");
                g1Var.h = null;
                g1Var.i = false;
                g1Var.g.addFirst(message);
                return;
            }
            g1 g1Var2 = a1Var.f5105a;
            s0 s0Var = g1Var2.h;
            if (s0Var == null || g1Var2.i) {
                return;
            }
            g1Var2.i = true;
            j0.b(g1Var2.f5125a, s0Var);
        } catch (Throwable th2) {
            PWLog.error("InAppOverlayChannel", "Failed to present in-app overlay", th2);
            a1Var.f5105a.a(message.f5162a);
        }
    }
}
