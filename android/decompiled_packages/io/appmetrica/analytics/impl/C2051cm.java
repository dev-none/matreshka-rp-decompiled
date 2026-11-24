package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import com.pichillilorenzo.flutter_inappwebview_android.credential_database.URLProtectionSpaceContract;
import io.appmetrica.analytics.coreutils.internal.parsing.RemoteConfigJsonUtils;
import io.appmetrica.analytics.networktasks.internal.RetryPolicyConfig;
import io.flutter.plugins.firebase.analytics.Constants;
import io.sentry.SentryReplayEvent;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.cm, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2051cm {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ea f6034a;
    public final C2065da b;
    public final Ki c;
    public final Fe d;
    public final Lm e;
    public final C2339o3 f;
    public final C2537w2 g;
    public final C2347ob h;
    public final Im i;
    public final C2598yd j;
    public final K9 k;

    public C2051cm() {
        this(new C2347ob(), new Ea(), new C2065da(), new Ki(), new Fe(), new Lm(), new C2339o3(), new C2537w2(), new Im(), new C2598yd(), new K9());
    }

    public final void a(C2180hm c2180hm, C2297mb c2297mb) {
        long jOptLong;
        long jOptLong2;
        String string;
        ArrayList arrayListA;
        JSONObject jSONObjectOptJSONObject;
        JSONObject jSONObjectOptJSONObject2;
        JSONObject jSONObjectOptJSONObject3;
        JSONObject jSONObjectOptJSONObject4 = c2297mb.optJSONObject("queries");
        if (jSONObjectOptJSONObject4 != null && (jSONObjectOptJSONObject2 = jSONObjectOptJSONObject4.optJSONObject("list")) != null && (jSONObjectOptJSONObject3 = jSONObjectOptJSONObject2.optJSONObject(URLProtectionSpaceContract.FeedEntry.COLUMN_NAME_HOST)) != null) {
            c2180hm.g = jSONObjectOptJSONObject3.optString("url", null);
        }
        Object jSONObject = new JSONObject();
        try {
            jSONObject = c2297mb.get("distribution_customization");
        } catch (Throwable unused) {
        }
        JSONObject jSONObjectOptJSONObject5 = ((JSONObject) jSONObject).optJSONObject("clids");
        if (jSONObjectOptJSONObject5 != null) {
            HashMap map = new HashMap();
            Iterator<String> itKeys = jSONObjectOptJSONObject5.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                JSONObject jSONObjectOptJSONObject6 = jSONObjectOptJSONObject5.optJSONObject(next);
                if (jSONObjectOptJSONObject6 != null && jSONObjectOptJSONObject6.has("value")) {
                    map.put(next, jSONObjectOptJSONObject6.getString("value"));
                }
            }
            c2180hm.j = Jm.a((Map) map);
        }
        JSONObject jSONObjectOptJSONObject7 = c2297mb.optJSONObject("locale");
        String string2 = "";
        c2180hm.m = (jSONObjectOptJSONObject7 == null || (jSONObjectOptJSONObject = jSONObjectOptJSONObject7.optJSONObject("country")) == null || !jSONObjectOptJSONObject.optBoolean("reliable", false)) ? "" : jSONObjectOptJSONObject.optString("value", "");
        JSONObject jSONObjectOptJSONObject8 = c2297mb.optJSONObject("time");
        if (jSONObjectOptJSONObject8 != null) {
            try {
                c2180hm.l = Long.valueOf(jSONObjectOptJSONObject8.getLong("max_valid_difference_seconds"));
            } catch (Throwable unused2) {
            }
        }
        C2632zm c2632zm = new C2632zm();
        JSONObject jSONObjectOptJSONObject9 = c2297mb.optJSONObject("stat_sending");
        if (jSONObjectOptJSONObject9 != null) {
            c2632zm.f6436a = RemoteConfigJsonUtils.extractMillisFromSecondsOrDefault(jSONObjectOptJSONObject9, "disabled_reporting_interval_seconds", c2632zm.f6436a);
        }
        this.e.getClass();
        c2180hm.p = new Km(c2632zm.f6436a);
        this.b.getClass();
        C2532vm c2532vm = new C2532vm();
        try {
            Object jSONObject2 = new JSONObject();
            try {
                jSONObject2 = c2297mb.get("features");
            } catch (Throwable unused3) {
            }
            JSONObject jSONObjectOptJSONObject10 = ((JSONObject) jSONObject2).optJSONObject("list");
            if (jSONObjectOptJSONObject10 != null) {
                C2390q4 c2390q4 = new C2390q4();
                c2390q4.f6265a = C2065da.a(jSONObjectOptJSONObject10, "permissions_collecting", c2532vm.f6375a);
                c2390q4.b = C2065da.a(jSONObjectOptJSONObject10, "features_collecting", c2532vm.b);
                c2390q4.c = C2065da.a(jSONObjectOptJSONObject10, "google_aid", c2532vm.c);
                c2390q4.d = C2065da.a(jSONObjectOptJSONObject10, "sim_info", c2532vm.d);
                c2390q4.e = C2065da.a(jSONObjectOptJSONObject10, "huawei_oaid", c2532vm.e);
                c2390q4.f = jSONObjectOptJSONObject10.has("ssl_pinning") ? Boolean.valueOf(jSONObjectOptJSONObject10.getJSONObject("ssl_pinning").getBoolean(Constants.ENABLED)) : null;
                c2180hm.b = new C2439s4(c2390q4);
            }
        } catch (Throwable unused4) {
        }
        this.f6034a.getClass();
        try {
            Object jSONObject3 = new JSONObject();
            try {
                jSONObject3 = c2297mb.get("query_hosts");
            } catch (Throwable unused5) {
            }
            JSONObject jSONObjectOptJSONObject11 = ((JSONObject) jSONObject3).optJSONObject("list");
            if (jSONObjectOptJSONObject11 != null) {
                try {
                    string = jSONObjectOptJSONObject11.getJSONObject("get_ad").getJSONArray(SentryReplayEvent.JsonKeys.URLS).getString(0);
                } catch (Throwable unused6) {
                    string = "";
                }
                if (!TextUtils.isEmpty(string)) {
                    c2180hm.d = string;
                }
                ArrayList arrayListA2 = Ea.a(jSONObjectOptJSONObject11, "report");
                if (!no.a((Collection) arrayListA2)) {
                    c2180hm.e = arrayListA2;
                }
                try {
                    string2 = jSONObjectOptJSONObject11.getJSONObject("report_ad").getJSONArray(SentryReplayEvent.JsonKeys.URLS).getString(0);
                } catch (Throwable unused7) {
                }
                if (!TextUtils.isEmpty(string2)) {
                    c2180hm.f = string2;
                }
                ArrayList arrayListA3 = Ea.a(jSONObjectOptJSONObject11, "startup");
                if (!no.a((Collection) arrayListA3)) {
                    c2180hm.c = arrayListA3;
                }
                ArrayList arrayListA4 = Ea.a(jSONObjectOptJSONObject11, "diagnostic");
                if (!no.a((Collection) arrayListA4)) {
                    c2180hm.n = arrayListA4;
                }
                HashMap map2 = new HashMap();
                Iterator<String> itKeys2 = jSONObjectOptJSONObject11.keys();
                while (itKeys2.hasNext()) {
                    String next2 = itKeys2.next();
                    if (!Ea.f5657a.contains(next2) && (arrayListA = Ea.a(jSONObjectOptJSONObject11, next2)) != null) {
                        map2.put(next2, arrayListA);
                    }
                }
                c2180hm.o = map2;
            }
        } catch (Throwable unused8) {
        }
        this.c.getClass();
        Am am = new Am();
        JSONObject jSONObjectOptJSONObject12 = c2297mb.optJSONObject("retry_policy");
        int iOptInt = am.w;
        int iOptInt2 = am.x;
        if (jSONObjectOptJSONObject12 != null) {
            iOptInt = jSONObjectOptJSONObject12.optInt("max_interval_seconds", iOptInt);
            iOptInt2 = jSONObjectOptJSONObject12.optInt("exponential_multiplier", am.x);
        }
        c2180hm.q = new RetryPolicyConfig(iOptInt, iOptInt2);
        this.d.getClass();
        if (c2180hm.b.f6305a) {
            JSONObject jSONObjectOptJSONObject13 = c2297mb.optJSONObject("permissions_collecting");
            C2582xm c2582xm = new C2582xm();
            if (jSONObjectOptJSONObject13 != null) {
                jOptLong = jSONObjectOptJSONObject13.optLong("check_interval_seconds", c2582xm.f6404a);
                jOptLong2 = jSONObjectOptJSONObject13.optLong("force_send_interval_seconds", c2582xm.b);
            } else {
                jOptLong = c2582xm.f6404a;
                jOptLong2 = c2582xm.b;
            }
            c2180hm.k = new De(jOptLong, jOptLong2);
        }
        C2339o3 c2339o3 = this.f;
        c2339o3.getClass();
        C2457sm c2457sm = new C2457sm();
        JSONObject jSONObjectOptJSONObject14 = c2297mb.optJSONObject("cache_control");
        if (jSONObjectOptJSONObject14 != null) {
            c2457sm.f6319a = RemoteConfigJsonUtils.extractMillisFromSecondsOrDefault(jSONObjectOptJSONObject14, "last_known_location_ttl", c2457sm.f6319a);
        }
        c2339o3.f6233a.getClass();
        c2180hm.r = new C2264l3(c2457sm.f6319a);
        this.g.getClass();
        C2537w2.a(c2180hm, c2297mb);
        Im im = this.i;
        im.getClass();
        JSONObject jSONObjectOptJSONObject15 = c2297mb.optJSONObject("startup_update");
        C2607ym c2607ym = new C2607ym();
        Integer numA = AbstractC2322nb.a(jSONObjectOptJSONObject15, "interval_seconds", null);
        if (numA != null) {
            c2607ym.f6418a = numA.intValue();
        }
        im.f5733a.getClass();
        c2180hm.t = new Gm(c2607ym.f6418a);
        Map<String, C2119fd> mapC = this.j.f6414a.c();
        C2573xd c2573xd = new C2573xd(c2297mb);
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Map.Entry<String, C2119fd> entry : mapC.entrySet()) {
            Object objInvoke = c2573xd.invoke(entry);
            if (objInvoke != null) {
                linkedHashMap.put(entry.getKey(), objInvoke);
            }
        }
        c2180hm.u = linkedHashMap;
        J9 j9 = this.k.f5758a;
        C2507um c2507um = new C2507um();
        JSONObject jSONObjectOptJSONObject16 = c2297mb.optJSONObject("external_attribution");
        if (jSONObjectOptJSONObject16 != null) {
            c2507um.f6357a = RemoteConfigJsonUtils.extractMillisFromSecondsOrDefault(jSONObjectOptJSONObject16, "collecting_interval_seconds", c2507um.f6357a);
        }
        j9.getClass();
        c2180hm.v = new I9(c2507um.f6357a);
    }

    public C2051cm(C2347ob c2347ob, Ea ea, C2065da c2065da, Ki ki, Fe fe, Lm lm, C2339o3 c2339o3, C2537w2 c2537w2, Im im, C2598yd c2598yd, K9 k9) {
        this.f6034a = ea;
        this.b = c2065da;
        this.c = ki;
        this.d = fe;
        this.e = lm;
        this.f = c2339o3;
        this.g = c2537w2;
        this.h = c2347ob;
        this.i = im;
        this.j = c2598yd;
        this.k = k9;
    }
}
