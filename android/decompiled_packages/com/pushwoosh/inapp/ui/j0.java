package com.pushwoosh.inapp.ui;

import android.content.Context;
import android.content.SharedPreferences;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: loaded from: classes6.dex */
public final class j0 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final SharedPreferences f5132a;
    public volatile boolean b;

    public j0(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.f5132a = context.getApplicationContext().getSharedPreferences("pw_inapp_freq", 0);
    }

    public static boolean a(j0 j0Var, s0 message) {
        String str;
        j0Var.getClass();
        long jCurrentTimeMillis = System.currentTimeMillis() / ((long) 1000);
        j0Var.getClass();
        Intrinsics.checkNotNullParameter(message, "message");
        Long l = message.e;
        if (l != null && jCurrentTimeMillis > l.longValue()) {
            return false;
        }
        if (!j0Var.b || (str = message.f5162a) == null) {
            return true;
        }
        Integer num = message.c;
        if (num != null) {
            if (j0Var.f5132a.getInt("count_".concat(str), 0) >= num.intValue()) {
                return false;
            }
        }
        Long l2 = message.d;
        if (l2 != null) {
            long jLongValue = l2.longValue();
            long j = j0Var.f5132a.getLong("last_".concat(str), 0L);
            if (j > 0 && jCurrentTimeMillis - j < jLongValue) {
                return false;
            }
        }
        return true;
    }

    public static void b(j0 j0Var, s0 message) {
        j0Var.getClass();
        long jCurrentTimeMillis = System.currentTimeMillis() / ((long) 1000);
        j0Var.getClass();
        Intrinsics.checkNotNullParameter(message, "message");
        String str = message.f5162a;
        if (str == null) {
            return;
        }
        SharedPreferences prefs = j0Var.f5132a;
        Intrinsics.checkNotNullExpressionValue(prefs, "prefs");
        SharedPreferences.Editor editorEdit = prefs.edit();
        editorEdit.putInt("count_".concat(str), j0Var.f5132a.getInt("count_".concat(str), 0) + 1);
        editorEdit.putLong("last_".concat(str), jCurrentTimeMillis);
        editorEdit.apply();
    }
}
