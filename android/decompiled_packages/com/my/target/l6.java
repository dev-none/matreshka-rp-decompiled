package com.my.target;

import android.content.Context;
import android.text.TextUtils;
import com.google.firebase.analytics.FirebaseAnalytics;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.sentry.ProfilingTraceData;
import io.sentry.protocol.App;
import io.sentry.protocol.OperatingSystem;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class l6 {
    public static JSONObject a(a aVar) throws JSONException {
        s1 s1Var = aVar.f4689a;
        Map map = aVar.b;
        JSONArray jSONArray = new JSONArray();
        for (Map.Entry entry : map.entrySet()) {
            o oVar = (o) entry.getKey();
            s9.a aVar2 = (s9.a) entry.getValue();
            if (!aVar2.f4814a.isEmpty()) {
                jSONArray.put(a(oVar, null, null, aVar2.f4814a));
            }
            for (Map.Entry entry2 : aVar2.b.entrySet()) {
                h0 h0Var = (h0) entry2.getKey();
                jSONArray.put(a(oVar, h0Var.b, h0Var.c, ((s9.b) entry2.getValue()).f4815a));
            }
        }
        JSONObject jSONObject = new JSONObject();
        a(jSONObject, s1Var);
        jSONObject.put("logs", jSONArray);
        return jSONObject;
    }

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final s1 f4689a;
        public final Map b;

        public a(s1 s1Var, o oVar, List list) {
            s9.a aVar = new s9.a();
            aVar.f4814a.addAll(list);
            HashMap map = new HashMap();
            map.put(oVar, aVar);
            this.f4689a = s1Var;
            this.b = map;
        }

        public a(s1 s1Var, o oVar, h0 h0Var, List list) {
            s9.b bVar = new s9.b();
            bVar.f4815a.addAll(list);
            s9.a aVar = new s9.a();
            aVar.b.put(h0Var, bVar);
            HashMap map = new HashMap();
            map.put(oVar, aVar);
            this.f4689a = s1Var;
            this.b = map;
        }
    }

    public static JSONObject a(o oVar, String str, String str2, List list) throws JSONException {
        JSONArray jSONArray = new JSONArray();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            jSONArray.put(a(str, str2, (s9.c) it.next()));
        }
        JSONObject jSONObject = new JSONObject();
        a(jSONObject, oVar);
        jSONObject.put("events", jSONArray);
        return jSONObject;
    }

    public static JSONObject a(String str, String str2, s9.c cVar) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        if (str != null) {
            jSONObject.put("banner_id", str);
        }
        if (str2 != null) {
            jSONObject.put("impression_id", str2);
        }
        jSONObject.put("stage", cVar.b);
        jSONObject.put("level", cVar.c);
        jSONObject.put("code", cVar.d);
        if (!TextUtils.isEmpty(cVar.e)) {
            jSONObject.put("message", cVar.e);
        }
        jSONObject.put("client_timestamp", cVar.f4816a);
        if (!TextUtils.isEmpty(cVar.f)) {
            jSONObject.put("add_data", cVar.f);
        }
        return jSONObject;
    }

    public static void a(JSONObject jSONObject, s1 s1Var) throws JSONException {
        Objects.requireNonNull(s1Var);
        jSONObject.put("sdk_version", "5.27.2");
        jSONObject.put("sdk_version_int", 5027002);
        jSONObject.put("app_bundle_id", s1Var.h);
        jSONObject.put(App.JsonKeys.APP_VERSION, s1Var.i);
        jSONObject.put(OperatingSystem.TYPE, "Android");
        String str = s1Var.b;
        if (str == null) {
            str = "";
        }
        jSONObject.put(CommonUrlParts.OS_VERSION, str);
        String str2 = s1Var.c;
        if (str2 == null) {
            str2 = "";
        }
        jSONObject.put("device_name", str2);
        String str3 = s1Var.d;
        if (str3 == null) {
            str3 = "";
        }
        jSONObject.put(ProfilingTraceData.JsonKeys.DEVICE_MODEL, str3);
        String str4 = s1Var.e;
        jSONObject.put(ProfilingTraceData.JsonKeys.DEVICE_MANUFACTURER, str4 != null ? str4 : "");
    }

    public static void a(JSONObject jSONObject, o oVar) throws JSONException {
        jSONObject.put(FirebaseAnalytics.Param.AD_FORMAT, oVar.c);
        jSONObject.put("cache_policy", oVar.b());
        Integer num = oVar.d;
        if (num != null) {
            jSONObject.put("slot_id", num.intValue());
        }
        jSONObject.put("ad_id", oVar.f4754a);
        String str = oVar.b;
        if (str != null) {
            jSONObject.put("handle_data_id", str);
        }
        jSONObject.put("source_type", oVar.e);
        String strA = oVar.a();
        if (strA != null) {
            jSONObject.put("ad_url", strA);
        }
    }

    public void a(s1 s1Var, Map map, Context context) {
        for (Map.Entry entry : map.entrySet()) {
            o oVar = (o) entry.getKey();
            s9.a aVar = (s9.a) entry.getValue();
            if (!aVar.f4814a.isEmpty()) {
                a(new a(s1Var, oVar, aVar.f4814a), context);
            }
            for (Map.Entry entry2 : aVar.b.entrySet()) {
                h0 h0Var = (h0) entry2.getKey();
                s9.b bVar = (s9.b) entry2.getValue();
                if (h0Var.b() && !bVar.f4815a.isEmpty()) {
                    a(new a(s1Var, oVar, h0Var, bVar.f4815a), context);
                }
            }
        }
    }

    public final void a(a aVar, Context context) {
        try {
            m2.a().a("https://ad.mail.ru/sdk/log/v2", a(aVar).toString(), context);
        } catch (Throwable unused) {
        }
    }
}
