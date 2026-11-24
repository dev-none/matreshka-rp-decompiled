package io.appmetrica.analytics.impl;

import android.text.TextUtils;
import io.appmetrica.analytics.AppMetricaConfig;
import io.appmetrica.analytics.coreapi.internal.identifiers.IdentifierStatus;
import io.appmetrica.analytics.coreapi.internal.model.ScreenInfo;
import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import io.appmetrica.analytics.internal.IdentifiersResult;
import java.util.Collection;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.af, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C1992af extends Fd {
    public static final C2070df d = new C2070df("UUID_RESULT", null);
    public static final C2070df e = new C2070df("DEVICE_ID_RESULT", null);
    public static final C2070df f = new C2070df("DEVICE_ID_HASH_RESULT", null);
    public static final C2070df g = new C2070df("AD_URL_GET_RESULT", null);
    public static final C2070df h = new C2070df("AD_URL_REPORT_RESULT", null);
    public static final C2070df i = new C2070df("CUSTOM_HOSTS", null);
    public static final C2070df j = new C2070df("SERVER_TIME_OFFSET", null);
    public static final C2070df k = new C2070df("RESPONSE_CLIDS_RESULT", null);
    public static final C2070df l = new C2070df("CUSTOM_SDK_HOSTS", null);
    public static final C2070df m = new C2070df("CLIENT_CLIDS", null);
    public static final C2070df n = new C2070df("DEFERRED_DEEP_LINK_WAS_CHECKED", null);
    public static final C2070df o = new C2070df("API_LEVEL", null);
    public static final C2070df p = new C2070df("NEXT_STARTUP_TIME", null);
    public static final C2070df q = new C2070df("GAID", null);
    public static final C2070df r = new C2070df("HOAID", null);
    public static final C2070df s = new C2070df("YANDEX_ADV_ID", null);
    public static final C2070df t = new C2070df("CLIENT_CLIDS_CHANGED_AFTER_LAST_IDENTIFIERS_UPDATE", null);
    public static final C2070df u = new C2070df("SCREEN_INFO", null);
    public static final C2070df v = new C2070df("SCREEN_SIZE_CHECKED_BY_DEPRECATED", null);
    public static final C2070df w = new C2070df("FEATURES", null);
    public static final C2070df x = new C2070df("APPMETRICA_CLIENT_CONFIG", null);

    public C1992af(Oa oa) {
        super(oa);
    }

    public final boolean a(boolean z) {
        return this.f6030a.getBoolean(t.b, z);
    }

    public final long b(long j2) {
        return this.f6030a.getLong(j.f6046a, j2);
    }

    public final C1992af c(IdentifiersResult identifiersResult) {
        return a(l.b, identifiersResult);
    }

    public final IdentifiersResult d() {
        return h(g.b);
    }

    public final IdentifiersResult e() {
        return h(h.b);
    }

    public final C1992af f(IdentifiersResult identifiersResult) {
        return a(q.b, identifiersResult);
    }

    public final IdentifiersResult h() {
        return h(l.b);
    }

    public final IdentifiersResult i() {
        return h(f.b);
    }

    public final IdentifiersResult j() {
        return h(e.b);
    }

    public final C2039ca k() {
        String string = this.f6030a.getString(w.b, null);
        try {
            if (!TextUtils.isEmpty(string)) {
                JSONObject jSONObject = new JSONObject(string);
                return new C2039ca(JsonUtils.optBooleanOrNull(jSONObject, "libSslEnabled"), IdentifierStatus.from(JsonUtils.optStringOrNull(jSONObject, "STATUS")), JsonUtils.optStringOrNull(jSONObject, "ERROR_EXPLANATION"));
            }
        } catch (Throwable unused) {
        }
        return new C2039ca(null, IdentifierStatus.UNKNOWN, null);
    }

    public final IdentifiersResult l() {
        return h(q.b);
    }

    public final IdentifiersResult m() {
        return h(r.b);
    }

    public final long n() {
        return this.f6030a.getLong(p.b, 0L);
    }

    public final IdentifiersResult o() {
        return h(k.b);
    }

    public final ScreenInfo p() {
        return AbstractC2322nb.e(this.f6030a.getString(u.b, null));
    }

    public final IdentifiersResult q() {
        return h(d.b);
    }

    public final IdentifiersResult r() {
        return h(s.b);
    }

    public final boolean s() {
        return this.f6030a.getBoolean(n.b, false);
    }

    public final boolean t() {
        return this.f6030a.getBoolean(v.b, false);
    }

    public final C1992af u() {
        return (C1992af) b(n.b, true);
    }

    public final void v() {
        b(v.b, true);
    }

    public final List<String> g() {
        String string = this.f6030a.getString(i.b, null);
        if (TextUtils.isEmpty(string)) {
            return null;
        }
        return AbstractC2322nb.b(string);
    }

    public final long a(long j2) {
        return this.f6030a.getLong(o.b, j2);
    }

    public final C1992af b(IdentifiersResult identifiersResult) {
        return a(h.b, identifiersResult);
    }

    public final C1992af c(long j2) {
        return (C1992af) b(o.b, j2);
    }

    public final C1992af d(IdentifiersResult identifiersResult) {
        return a(f.b, identifiersResult);
    }

    public final C1992af e(IdentifiersResult identifiersResult) {
        return a(e.b, identifiersResult);
    }

    public final AppMetricaConfig.Builder f() {
        String string = this.f6030a.getString(x.b, null);
        if (string == null) {
            return null;
        }
        return new O3().a(string);
    }

    public final IdentifiersResult h(String str) {
        IdentifiersResult identifiersResult;
        try {
            String string = this.f6030a.getString(str, null);
            if (string != null) {
                JSONObject jSONObject = new JSONObject(string);
                identifiersResult = new IdentifiersResult(JsonUtils.optStringOrNull(jSONObject, "ID"), IdentifierStatus.from(JsonUtils.optStringOrNull(jSONObject, "STATUS")), JsonUtils.optStringOrNull(jSONObject, "ERROR_EXPLANATION"));
            } else {
                identifiersResult = null;
            }
        } catch (Throwable unused) {
        }
        return identifiersResult == null ? new IdentifiersResult(null, IdentifierStatus.UNKNOWN, "no identifier in preferences") : identifiersResult;
    }

    public final C1992af i(IdentifiersResult identifiersResult) {
        return a(d.b, identifiersResult);
    }

    public final C1992af j(IdentifiersResult identifiersResult) {
        return a(s.b, identifiersResult);
    }

    public final C1992af g(IdentifiersResult identifiersResult) {
        return a(r.b, identifiersResult);
    }

    public final C1992af a(IdentifiersResult identifiersResult) {
        return a(g.b, identifiersResult);
    }

    public final C1992af b(boolean z) {
        return (C1992af) b(t.b, z);
    }

    public final C1992af d(long j2) {
        return (C1992af) b(p.b, j2);
    }

    public final C1992af e(long j2) {
        return (C1992af) b(j.b, j2);
    }

    public final String i(String str) {
        return this.f6030a.getString(m.b, str);
    }

    public final C1992af j(String str) {
        return (C1992af) b(m.b, str);
    }

    @Override // io.appmetrica.analytics.impl.Fd
    public final String f(String str) {
        return new C2070df(str, null).b;
    }

    public final C1992af a(List<String> list) {
        return (C1992af) b(i.b, no.a((Collection) list) ? null : new JSONArray((Collection) list).toString());
    }

    public final C1992af h(IdentifiersResult identifiersResult) {
        return a(k.b, identifiersResult);
    }

    public final C1992af a(C2039ca c2039ca) {
        String str = w.b;
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt("libSslEnabled", c2039ca.f6027a).put("STATUS", c2039ca.b.getValue()).putOpt("ERROR_EXPLANATION", c2039ca.c);
        } catch (Throwable unused) {
        }
        return (C1992af) b(str, jSONObject.toString());
    }

    @Override // io.appmetrica.analytics.impl.Fd
    /* JADX INFO: renamed from: k, reason: merged with bridge method [inline-methods] */
    public final C1992af g(String str) {
        return (C1992af) d(new C2070df(str, null).b);
    }

    public final void a(ScreenInfo screenInfo) {
        b(u.b, AbstractC2322nb.a(screenInfo));
    }

    public final void a(AppMetricaConfig appMetricaConfig) {
        b(x.b, appMetricaConfig.toJson());
    }

    public final C1992af a(String str, IdentifiersResult identifiersResult) {
        String string;
        if (identifiersResult != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("ID", identifiersResult.id).put("STATUS", identifiersResult.status.getValue()).put("ERROR_EXPLANATION", identifiersResult.errorExplanation);
                } catch (Throwable unused) {
                }
                string = jSONObject.toString();
            } catch (Throwable unused2) {
                string = null;
            }
        } else {
            string = null;
        }
        if (string != null) {
            b(str, string);
        }
        return this;
    }
}
