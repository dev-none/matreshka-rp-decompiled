package com.pushwoosh.inapp.ui;

import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.inapp.view.InAppViewEvent;
import com.pushwoosh.internal.event.EventBus;
import com.pushwoosh.internal.utils.PWLog;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class y1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final y1 f5178a = new y1();
    public static final x1 b = new x1();

    public static void a(w1 w1Var, int i) {
        String str;
        try {
            String code = w1Var.f5176a.getCode();
            if (w1Var.f5176a.isInApp()) {
                str = "";
            } else {
                Intrinsics.checkNotNullExpressionValue(code, "code");
                String strSubstring = code.substring(2);
                Intrinsics.checkNotNullExpressionValue(strSubstring, "this as java.lang.String).substring(startIndex)");
                str = strSubstring;
            }
            PushwooshPlatform.getInstance().pushwooshInApp().sendRichMediaAction(str, w1Var.f5176a.isInApp() ? code : "", w1Var.b, null, i, null);
        } catch (Throwable th) {
            PWLog.error("NativeInAppAnalytics", "failed to send /richMediaAction request", th);
        }
    }

    public final void b(String str) {
        w1 w1Var;
        synchronized (this) {
            w1Var = str != null ? (w1) b.get(str) : null;
        }
        if (w1Var == null) {
            return;
        }
        try {
            EventBus.sendEvent(new InAppViewEvent(w1Var.f5176a, w1Var.b));
        } catch (Throwable th) {
            PWLog.error("NativeInAppAnalytics", "failed to send in-app show event", th);
        }
    }

    public final void a(String str) {
        w1 w1Var;
        synchronized (this) {
            w1Var = str != null ? (w1) b.remove(str) : null;
        }
        if (w1Var == null) {
            return;
        }
        a(w1Var, 4);
    }
}
