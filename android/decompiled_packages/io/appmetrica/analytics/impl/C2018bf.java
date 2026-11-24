package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.bf, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2018bf extends Fd implements Do {
    public static final long d = 0;
    public static final int e = -1;
    public static final String f = "";
    public static final String g = "";
    public static final String r = "SESSION_";
    public static final C2070df h = new C2070df("PERMISSIONS_CHECK_TIME", null);
    public static final C2070df i = new C2070df("PROFILE_ID", null);
    public static final C2070df j = new C2070df("APP_ENVIRONMENT", null);
    public static final C2070df k = new C2070df("APP_ENVIRONMENT_REVISION", null);
    public static final C2070df l = new C2070df("LAST_APP_VERSION_WITH_FEATURES", null);
    public static final C2070df m = new C2070df("APPLICATION_FEATURES", null);
    public static final C2070df n = new C2070df("CERTIFICATES_SHA1_FINGERPRINTS", null);
    public static final C2070df o = new C2070df("VITAL_DATA", null);
    public static final C2070df p = new C2070df("SENT_EXTERNAL_ATTRIBUTIONS", null);
    public static final C2070df q = new C2070df("AUTO_COLLECTED_DATA_SUBSCRIBERS", null);
    public static final C2070df s = new C2070df("MAIN_REPORTER_EVENTS_TRIGGER_CONDITION_MET", null);

    public C2018bf(Oa oa) {
        super(oa);
    }

    public final C2018bf a(C2184i0 c2184i0) {
        synchronized (this) {
            b(j.b, c2184i0.f6120a);
            b(k.b, c2184i0.b);
        }
        return this;
    }

    public final void b(boolean z) {
        b(s.b, z);
    }

    @Override // io.appmetrica.analytics.impl.AbstractC2044cf
    public final Set<String> c() {
        return this.f6030a.a();
    }

    public final C2184i0 d() {
        C2184i0 c2184i0;
        synchronized (this) {
            c2184i0 = new C2184i0(this.f6030a.getString(j.b, "{}"), this.f6030a.getLong(k.b, 0L));
        }
        return c2184i0;
    }

    public final String e() {
        return this.f6030a.getString(m.b, "");
    }

    public final Map<String, Long> f() {
        HashMap map = new HashMap();
        try {
            String string = this.f6030a.getString(q.b, null);
            if (!TextUtils.isEmpty(string)) {
                JSONObject jSONObject = new JSONObject(string);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    map.put(next, Long.valueOf(jSONObject.getLong(next)));
                }
            }
        } catch (Throwable unused) {
        }
        return map;
    }

    public final List<String> g() {
        String str = n.b;
        List list = Collections.EMPTY_LIST;
        String[] strArr = list == null ? null : (String[]) list.toArray(new String[list.size()]);
        String string = this.f6030a.getString(str, null);
        if (!TextUtils.isEmpty(string)) {
            try {
                JSONArray jSONArray = new JSONArray(string);
                strArr = new String[jSONArray.length()];
                for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                    strArr[i2] = jSONArray.optString(i2);
                }
            } catch (Throwable unused) {
            }
        }
        if (strArr == null) {
            return null;
        }
        return Arrays.asList(strArr);
    }

    public final int h() {
        return this.f6030a.getInt(l.b, -1);
    }

    public final long i() {
        return this.f6030a.getLong(h.b, 0L);
    }

    public final String j() {
        return this.f6030a.getString(i.b, null);
    }

    public final Map<Integer, String> k() {
        HashMap map = new HashMap();
        try {
            String string = this.f6030a.getString(p.b, null);
            if (string != null) {
                JSONObject jSONObject = new JSONObject(string);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    map.put(Integer.valueOf(Integer.parseInt(next)), jSONObject.getString(next));
                }
            }
        } catch (Throwable unused) {
        }
        return map;
    }

    public final void b(Map<Integer, String> map) {
        JSONObject jSONObject = new JSONObject();
        for (Map.Entry<Integer, String> entry : map.entrySet()) {
            try {
                jSONObject.put(entry.getKey().toString(), entry.getValue());
            } catch (Throwable unused) {
            }
        }
        b(p.b, jSONObject.toString());
    }

    public final String h(String str) {
        return this.f6030a.getString(new C2070df(r, str).b, "");
    }

    public final C2018bf i(String str) {
        return (C2018bf) b(m.b, str);
    }

    public final C2018bf j(String str) {
        return (C2018bf) b(i.b, str);
    }

    public final C2018bf e(String str, String str2) {
        return (C2018bf) b(new C2070df(r, str).b, str2);
    }

    public final C2018bf a(long j2) {
        return (C2018bf) b(h.b, j2);
    }

    @Override // io.appmetrica.analytics.impl.Fd
    public final String f(String str) {
        return new C2070df(str, null).b;
    }

    public final C2018bf a(int i2) {
        return (C2018bf) b(l.b, i2);
    }

    public final C2018bf a(List<String> list) {
        return (C2018bf) a(n.b, list);
    }

    public final boolean a(boolean z) {
        return this.f6030a.getBoolean(s.b, z);
    }

    @Override // io.appmetrica.analytics.impl.Do
    public final String a() {
        return this.f6030a.getString(o.b, null);
    }

    @Override // io.appmetrica.analytics.impl.Do
    public final void a(String str) {
        b(o.b, str);
    }

    public final void a(Map<String, Long> map) {
        JSONObject jSONObject = new JSONObject();
        for (Map.Entry<String, Long> entry : map.entrySet()) {
            try {
                jSONObject.put(entry.getKey(), entry.getValue());
            } catch (Throwable unused) {
            }
        }
        b(q.b, jSONObject.toString());
    }
}
