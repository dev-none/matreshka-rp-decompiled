package com.ironsource.adqualitysdk.sdk.i;

import android.app.Activity;
import android.app.ActivityManager;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Rect;
import android.net.TrafficStats;
import android.net.wifi.SupplicantState;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.SystemClock;
import android.util.DisplayMetrics;
import android.view.WindowManager;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｺ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC1148 {

    /* JADX INFO: renamed from: く, reason: contains not printable characters */
    public static volatile long f4020;

    /* JADX INFO: renamed from: っ, reason: contains not printable characters */
    public static volatile JSONObject f4021;

    /* JADX INFO: renamed from: へ, reason: contains not printable characters */
    public static JSONObject f4022;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String f4049 = StringFog.decrypt("Px+yXl+qitsSFrc=\n", "e3rENzzP368=\n");

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static final String f4048 = StringFog.decrypt("3EPhDw==\n", "sjSSf0agPR0=\n");

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f4047 = StringFog.decrypt("h4G4pA==\n", "6fbK3OQq0ro=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f4046 = StringFog.decrypt("gZIL3A==\n", "7P9qqrYWv2c=\n");

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f4045 = StringFog.decrypt("IvgpgQ==\n", "T5Vd6UAIV8I=\n");

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final String f4044 = StringFog.decrypt("lNo1fw==\n", "+bdZCDuj9Io=\n");

    /* JADX INFO: renamed from: ﺙ, reason: contains not printable characters */
    public static final String f4043 = StringFog.decrypt("CVT/Zw==\n", "ZDmLE+b2ycU=\n");

    /* JADX INFO: renamed from: ﱡ, reason: contains not printable characters */
    public static final String f4042 = StringFog.decrypt("2Q==\n", "rhAfQy2rKc4=\n");

    /* JADX INFO: renamed from: ﱟ, reason: contains not printable characters */
    public static final String f4041 = StringFog.decrypt("+w==\n", "kxJcAQmBPho=\n");

    /* JADX INFO: renamed from: ﮐ, reason: contains not printable characters */
    public static final String f4040 = StringFog.decrypt("tHW8Gg==\n", "xxzGfx4gns4=\n");

    /* JADX INFO: renamed from: ﮌ, reason: contains not printable characters */
    public static final String f4039 = StringFog.decrypt("wo+/3Q==\n", "tenMqSx3sFg=\n");

    /* JADX INFO: renamed from: ﮉ, reason: contains not printable characters */
    public static final String f4038 = StringFog.decrypt("k2vHHg==\n", "5A21bdUU0yY=\n");

    /* JADX INFO: renamed from: ﭸ, reason: contains not printable characters */
    public static final String f4037 = StringFog.decrypt("FsHrMQ==\n", "YaeYQTaCIhA=\n");

    /* JADX INFO: renamed from: ﭴ, reason: contains not printable characters */
    public static final String f4036 = StringFog.decrypt("bOiYuQ==\n", "G47sylaAC9M=\n");

    /* JADX INFO: renamed from: ﭖ, reason: contains not printable characters */
    public static final String f4035 = StringFog.decrypt("vjA9nw==\n", "01JO652Asbs=\n");

    /* JADX INFO: renamed from: ףּ, reason: contains not printable characters */
    public static final String f4034 = StringFog.decrypt("IT91ps4=\n", "TF0B1qf9L00=\n");

    /* JADX INFO: renamed from: סּ, reason: contains not printable characters */
    public static final String f4033 = StringFog.decrypt("nwehpg==\n", "8mXV1vkg2Zo=\n");

    /* JADX INFO: renamed from: טּ, reason: contains not printable characters */
    public static final String f4032 = StringFog.decrypt("acGprlo=\n", "BKPa3jNm/kw=\n");

    /* JADX INFO: renamed from: ﬤ, reason: contains not printable characters */
    public static final String f4031 = StringFog.decrypt("g+DIJw==\n", "7oK7V99gxiA=\n");

    /* JADX INFO: renamed from: 爫, reason: contains not printable characters */
    public static final String f4030 = StringFog.decrypt("qHOyOA==\n", "xRHcVyqI4bE=\n");

    /* JADX INFO: renamed from: 乁, reason: contains not printable characters */
    public static final String f4029 = StringFog.decrypt("ow0YqQ==\n", "zm93x5uNzg0=\n");

    /* JADX INFO: renamed from: 丫, reason: contains not printable characters */
    public static final String f4028 = StringFog.decrypt("h7XmTw==\n", "6teFLEY41V4=\n");

    /* JADX INFO: renamed from: ヶ, reason: contains not printable characters */
    public static final String f4027 = StringFog.decrypt("RFgZwg==\n", "KTpqrXIvf94=\n");

    /* JADX INFO: renamed from: ヮ, reason: contains not printable characters */
    public static final String f4026 = StringFog.decrypt("kRJKtQ==\n", "/HA52/KvbGU=\n");

    /* JADX INFO: renamed from: リ, reason: contains not printable characters */
    public static final String f4025 = StringFog.decrypt("9F/DUg==\n", "liuzPnSkVHw=\n");

    /* JADX INFO: renamed from: ト, reason: contains not printable characters */
    public static final String f4024 = StringFog.decrypt("aS3/iA==\n", "C1mT/lX/HzA=\n");

    /* JADX INFO: renamed from: ゥ, reason: contains not printable characters */
    public static JSONObject f4023 = null;

    /* JADX WARN: Code duplicated, block: B:18:0x0045 A[Catch: all -> 0x0059, TryCatch #1 {all -> 0x0059, blocks: (B:5:0x0005, B:7:0x0016, B:17:0x0035, B:18:0x0045, B:20:0x004b, B:22:0x0051, B:10:0x001c, B:12:0x0026), top: B:35:0x0005, inners: #0 }] */
    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static synchronized void m8948(Context context) {
        Resources resources;
        DisplayMetrics displayMetrics;
        if (context != null) {
            try {
                WindowManager windowManager = (WindowManager) context.getSystemService(StringFog.decrypt("3hkm45aB\n", "qXBIh/n2tno=\n"));
                if (windowManager == null || Build.VERSION.SDK_INT < 30) {
                    resources = context.getResources();
                    if (resources != null && (displayMetrics = resources.getDisplayMetrics()) != null) {
                        m8953(displayMetrics.heightPixels, displayMetrics.widthPixels);
                    }
                } else {
                    try {
                        Rect bounds = windowManager.getCurrentWindowMetrics().getBounds();
                        if (bounds != null) {
                            m8953(bounds.height(), bounds.width());
                            return;
                        } else {
                            resources = context.getResources();
                            if (resources != null) {
                                m8953(displayMetrics.heightPixels, displayMetrics.widthPixels);
                            }
                        }
                    } catch (Throwable th) {
                        String str = f4049;
                        AbstractC0323.m8479(str, str, StringFog.decrypt("XdEEw2YSLqs4xBPYYFspojjUH8JwXTCIfdcExXdBZ6NqzBuMY1spoXfUO816VSK3\n", "GKN2rBQyR8U=\n"), th, null, false);
                    }
                    String str2 = f4049;
                    AbstractC0323.m8479(str2, str2, StringFog.decrypt("aHdxYSU2BLANYmZ6I38DuQ1Ban0negynYGB3fD51Hv5Ld2xjd3UCsFlge3o=\n", "LQUDDlcWbd4=\n"), th, null, false);
                }
            } catch (Throwable th2) {
                String str3 = f4049;
                AbstractC0323.m8479(str3, str3, StringFog.decrypt("aHdxYSU2BLANYmZ6I38DuQ1Ban0negynYGB3fD51Hv5Ld2xjd3UCsFlge3o=\n", "LQUDDlcWbd4=\n"), th2, null, false);
            }
        }
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static void m8950(JSONObject jSONObject) {
        try {
            long totalRxBytes = TrafficStats.getTotalRxBytes();
            long jCurrentTimeMillis = System.currentTimeMillis();
            long jCurrentTimeMillis2 = System.currentTimeMillis();
            if (totalRxBytes != -1) {
                long totalRxBytes2 = TrafficStats.getTotalRxBytes();
                jSONObject.put(f4048, Math.round((1000.0f / (jCurrentTimeMillis2 - jCurrentTimeMillis)) * (totalRxBytes2 - totalRxBytes)));
                jSONObject.put(f4047, totalRxBytes2);
            }
        } catch (Throwable th) {
            String str = f4049;
            AbstractC0323.m8479(str, str, StringFog.decrypt("7JWAdffgrmjdk5t04uCqfdzHk3Th4Kdo3ZCdaO7gvH7IgJc=\n", "qefyGoXAyQ0=\n"), th, null, false);
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static synchronized JSONObject m8952() {
        if (f4023 == null) {
            JSONObject jSONObject = new JSONObject();
            f4023 = jSONObject;
            try {
                jSONObject.put(f4042, -1);
                f4023.put(f4041, -1);
            } catch (JSONException unused) {
            }
        }
        return f4023;
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static synchronized void m8954(Activity activity) {
        if (activity != null) {
            m8948(activity.getApplicationContext());
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8953(int i, int i2) {
        if (i <= 0 || i2 <= 0) {
            return;
        }
        try {
            JSONObject jSONObjectM8952 = m8952();
            jSONObjectM8952.put(f4042, i2);
            jSONObjectM8952.put(f4041, i);
        } catch (Throwable th) {
            String str = f4049;
            AbstractC0323.m8479(str, str, StringFog.decrypt("Quyj/Auzlxlz6rj9HrOXH3X7tP1Z4I0GYg==\n", "B57Rk3mT5Hw=\n"), th, null, false);
        }
    }

    /* JADX WARN: Code duplicated, block: B:14:0x002a  */
    /* JADX WARN: Code duplicated, block: B:16:0x004c  */
    /* JADX WARN: Code duplicated, block: B:18:0x005d  */
    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public static JSONObject m8949(Context context) throws JSONException {
        WifiInfo connectionInfo;
        JSONObject jSONObject;
        JSONObject jSONObject2;
        if (f4021 != null) {
            C0896 c0896 = (C0896) AbstractC0895.m8747();
            synchronized (c0896) {
                jSONObject2 = c0896.f2592;
            }
            if (SystemClock.elapsedRealtime() - f4020 >= (jSONObject2 == null ? 0 : Math.max(0, jSONObject2.optInt(c0896.f3195, 0)))) {
                connectionInfo = ((WifiManager) context.getSystemService(StringFog.decrypt("i4tIbA==\n", "/OIuBW5osSA=\n"))).getConnectionInfo();
                jSONObject = new JSONObject();
                jSONObject.put(f4036, System.currentTimeMillis());
                if (connectionInfo != null) {
                    jSONObject.put(f4039, connectionInfo.getSupplicantState());
                    if (connectionInfo.getSupplicantState() == SupplicantState.COMPLETED) {
                        jSONObject.put(f4038, connectionInfo.getRssi());
                        jSONObject.put(f4037, connectionInfo.getLinkSpeed());
                    }
                }
                f4021 = jSONObject;
                f4020 = SystemClock.elapsedRealtime();
            }
        } else {
            connectionInfo = ((WifiManager) context.getSystemService(StringFog.decrypt("i4tIbA==\n", "/OIuBW5osSA=\n"))).getConnectionInfo();
            jSONObject = new JSONObject();
            jSONObject.put(f4036, System.currentTimeMillis());
            if (connectionInfo != null) {
                jSONObject.put(f4039, connectionInfo.getSupplicantState());
                if (connectionInfo.getSupplicantState() == SupplicantState.COMPLETED) {
                    jSONObject.put(f4038, connectionInfo.getRssi());
                    jSONObject.put(f4037, connectionInfo.getLinkSpeed());
                }
            }
            f4021 = jSONObject;
            f4020 = SystemClock.elapsedRealtime();
        }
        return AbstractC0939.m8815(f4021, false);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8955(Context context, JSONObject jSONObject) {
        try {
            ActivityManager activityManager = (ActivityManager) context.getSystemService(StringFog.decrypt("Q20Uaf+vk70=\n", "Ig5gAInG58Q=\n"));
            ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
            activityManager.getMemoryInfo(memoryInfo);
            jSONObject.put(f4046, memoryInfo.availMem / 1048576);
            jSONObject.put(f4045, memoryInfo.threshold / 1048576);
            boolean z = memoryInfo.lowMemory;
            if (z) {
                jSONObject.put(f4044, z);
            }
            jSONObject.put(f4043, memoryInfo.totalMem / 1048576);
        } catch (Throwable th) {
            AbstractC0323.m8470(f4049, StringFog.decrypt("FkRr/BGM3A4nQnD9BIzWDj5Za+pD2cgKNFMjsw==\n", "UzYZk2Osu2s=\n") + th.getLocalizedMessage());
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static int m8951(Context context) {
        try {
            ActivityManager activityManager = (ActivityManager) context.getSystemService(StringFog.decrypt("Q20Uaf+vk70=\n", "Ig5gAInG58Q=\n"));
            ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();
            activityManager.getMemoryInfo(memoryInfo);
            return (int) (memoryInfo.availMem / 1048576);
        } catch (Throwable th) {
            AbstractC0323.m8470(f4049, StringFog.decrypt("IgDQqbK5JRETBsuop7kjAgYbzqei9SdUChfPqbLgeFQ=\n", "Z3KixsCZQnQ=\n") + th.getLocalizedMessage());
            return 0;
        }
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static void m8956(JSONObject jSONObject) {
        JSONObject jSONObject2;
        synchronized (AbstractC1148.class) {
            jSONObject2 = f4022;
        }
        AbstractC0939.m8817(jSONObject, AbstractC0939.m8815(jSONObject2, false), false);
    }
}
