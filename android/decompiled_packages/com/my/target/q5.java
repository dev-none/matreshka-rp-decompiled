package com.my.target;

import android.content.Context;
import android.os.Build;
import android.util.Base64;
import com.my.target.common.MyTargetVersion;
import io.sentry.protocol.App;
import io.sentry.protocol.OperatingSystem;
import java.nio.charset.StandardCharsets;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class q5 {
    public static boolean h = true;
    public static String i = "https://ad.mail.ru/sdk/log/";
    public static String j;
    public static String k;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f4781a;
    public final String b;
    public String c;
    public int d;
    public String e;
    public String f;
    public String g;

    public q5(String str, String str2) {
        this.f4781a = str;
        this.b = str2;
    }

    public static q5 a(String str) {
        return new q5(str, "error");
    }

    public static q5 b(String str) {
        return new q5(str, "info");
    }

    public q5 c(String str) {
        this.e = str;
        return this;
    }

    public q5 d(String str) {
        this.f = str;
        return this;
    }

    public q5 e(String str) {
        this.g = str;
        return this;
    }

    public q5 f(String str) {
        this.c = str;
        return this;
    }

    public q5 a(int i2) {
        this.d = i2;
        return this;
    }

    public void b(final Context context) {
        c(context);
        f0.e(new Runnable() { // from class: com.my.target.q5$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(context);
            }
        });
    }

    public final void c(Context context) {
        if (j == null) {
            j = context.getPackageName();
        }
        if (k != null || j == null) {
            return;
        }
        try {
            k = context.getPackageManager().getPackageInfo(j, 0).versionName;
        } catch (Exception unused) {
            k = null;
        }
    }

    public q5 a(Map map) {
        StringBuilder sb = new StringBuilder();
        for (Map.Entry entry : map.entrySet()) {
            if (sb.length() > 0) {
                sb.append("&");
            }
            sb.append((String) entry.getKey());
            sb.append("=");
            sb.append((String) entry.getValue());
        }
        return e(sb.toString());
    }

    public final /* synthetic */ void a(Context context) {
        String strA = a();
        gb.a("send message to log:\n " + strA);
        if (h) {
            m2.a().a(i, Base64.encodeToString(strA.getBytes(StandardCharsets.UTF_8), 0), context);
        }
    }

    public String a() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("sdk", "myTarget");
            jSONObject.put("sdkver", MyTargetVersion.VERSION);
            jSONObject.put(OperatingSystem.TYPE, "Android");
            jSONObject.put("osver", Build.VERSION.RELEASE);
            jSONObject.put("type", this.b);
            jSONObject.put("name", this.f4781a);
            String str = j;
            if (str != null) {
                jSONObject.put(App.TYPE, str);
            }
            String str2 = k;
            if (str2 != null) {
                jSONObject.put("appver", str2);
            }
            String str3 = this.c;
            if (str3 != null) {
                jSONObject.put("message", str3);
            }
            int i2 = this.d;
            if (i2 > 0) {
                jSONObject.put("slot", i2);
            }
            String str4 = this.e;
            if (str4 != null) {
                jSONObject.put("url", str4);
            }
            String str5 = this.f;
            if (str5 != null) {
                jSONObject.put("bannerId", str5);
            }
            String str6 = this.g;
            if (str6 != null) {
                jSONObject.put("data", str6);
            }
        } catch (Throwable unused) {
        }
        return jSONObject.toString();
    }
}
