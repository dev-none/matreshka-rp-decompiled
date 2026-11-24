package com.my.target;

import android.content.Context;
import android.util.Base64;
import io.sentry.protocol.App;
import io.sentry.protocol.OperatingSystem;
import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class h6 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Map f4650a;
    public final Map b;
    public final long c;
    public final int d;
    public boolean e;

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f4651a;
        public boolean b = false;

        public a(int i) {
            this.f4651a = i;
        }

        public void a(boolean z) {
            this.b = z;
        }

        public h6 b() {
            h6 h6Var = new h6(this.f4651a, "myTarget", 4);
            h6Var.a(this.b);
            return h6Var;
        }

        public h6 a() {
            h6 h6Var = new h6(this.f4651a, "myTarget", 0);
            h6Var.a(this.b);
            return h6Var;
        }

        public h6 a(String str, float f) {
            h6 h6Var = new h6(this.f4651a, str, 5);
            h6Var.a(this.b);
            h6Var.f4650a.put("priority", Float.valueOf(f));
            return h6Var;
        }
    }

    public h6(int i, String str, int i2) {
        HashMap map = new HashMap();
        this.f4650a = map;
        this.b = new HashMap();
        this.d = i2;
        this.c = System.currentTimeMillis();
        map.put("slot", Integer.valueOf(i));
        map.put("network", str);
    }

    public static a a(int i) {
        return new a(i);
    }

    public void b() {
        b(this.d, System.currentTimeMillis() - this.c);
    }

    public void a(boolean z) {
        this.e = z;
    }

    public void b(int i, long j) {
        this.b.put(Integer.valueOf(i), Long.valueOf(j));
    }

    public void a(int i, long j) {
        Long l = (Long) this.b.get(Integer.valueOf(i));
        if (l != null) {
            j += l.longValue();
        }
        b(i, j);
    }

    public void b(final Context context) {
        if (!this.e) {
            gb.a("MetricMessage: Metrics sending disabled");
            return;
        }
        if (this.b.isEmpty()) {
            gb.a("MetricMessage: Metrics not send: empty");
            return;
        }
        t1 t1VarA = d2.b().a();
        if (t1VarA == null) {
            gb.a("MetricMessage: Metrics not send: basic info not collected");
            return;
        }
        this.f4650a.put("instanceId", t1VarA.f4822a);
        this.f4650a.put(OperatingSystem.TYPE, t1VarA.b);
        this.f4650a.put("osver", t1VarA.c);
        this.f4650a.put(App.TYPE, t1VarA.d);
        this.f4650a.put("appver", t1VarA.e);
        this.f4650a.put("sdkver", t1VarA.f);
        f0.e(new Runnable() { // from class: com.my.target.h6$$ExternalSyntheticLambda0
            @Override // java.lang.Runnable
            public final void run() {
                this.f$0.a(context);
            }
        });
    }

    public final /* synthetic */ void a(Context context) {
        String strA = a();
        gb.a("MetricMessage: Send metrics message - \n " + strA);
        m2.a().a("https://ad.mail.ru/sdk/ms/", Base64.encodeToString(strA.getBytes(StandardCharsets.UTF_8), 0), context);
    }

    public String a() {
        JSONObject jSONObject = new JSONObject();
        try {
            for (Map.Entry entry : this.f4650a.entrySet()) {
                jSONObject.put((String) entry.getKey(), entry.getValue());
            }
            JSONArray jSONArray = new JSONArray();
            jSONObject.put("events", jSONArray);
            for (Map.Entry entry2 : this.b.entrySet()) {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("type", entry2.getKey());
                jSONObject2.put("value", entry2.getValue());
                jSONArray.put(jSONObject2);
            }
        } catch (Throwable unused) {
        }
        return jSONObject.toString();
    }
}
