package com.iab.omid.library.unity3d.utils;

import android.os.Build;
import io.sentry.protocol.OperatingSystem;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class b {
    public static String a() {
        return Build.MANUFACTURER + "; " + Build.MODEL;
    }

    public static String b() {
        return "Android";
    }

    public static String c() {
        return Integer.toString(Build.VERSION.SDK_INT);
    }

    public static JSONObject d() {
        JSONObject jSONObject = new JSONObject();
        c.a(jSONObject, "deviceType", a());
        c.a(jSONObject, "osVersion", c());
        c.a(jSONObject, OperatingSystem.TYPE, b());
        return jSONObject;
    }
}
