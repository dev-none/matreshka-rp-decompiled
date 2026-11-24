package com.my.tracker.obfuscated;

import android.util.Log;

/* JADX INFO: loaded from: classes6.dex */
public abstract class x2 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile boolean f5009a = false;

    public static boolean a() {
        return f5009a;
    }

    public static void b(String str) {
        if (f5009a) {
            if (str == null) {
                str = "null";
            }
            Log.e("[myTracker]", str);
        }
    }

    public static void c(String str) {
        if (Log.isLoggable("[myTracker]", 4)) {
            if (str == null) {
                str = "null";
            }
            Log.i("[myTracker]", str);
        }
    }

    public static void a(boolean z) {
        f5009a = z;
    }

    public static void a(String str) {
        if (f5009a) {
            if (str == null) {
                str = "null";
            }
            Log.d("[myTracker]", str);
        }
    }

    public static void b(String str, Throwable th) {
        if (f5009a) {
            if (str == null) {
                str = "null";
            }
            Log.e("[myTracker]", str, th);
        }
    }

    public static void a(String str, Throwable th) {
        if (f5009a) {
            if (str == null) {
                str = "null";
            }
            Log.d("[myTracker]", str, th);
        }
    }
}
