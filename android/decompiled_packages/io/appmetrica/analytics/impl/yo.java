package io.appmetrica.analytics.impl;

import android.util.Base64;
import com.adjust.sdk.Constants;
import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import kotlin.text.Charsets;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class yo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Ao f6420a;

    public yo(C2095ef c2095ef, C2194ia c2194ia) {
        this.f6420a = new Ao(c2095ef, c2194ia, new Bo() { // from class: io.appmetrica.analytics.impl.yo$$ExternalSyntheticLambda0
            @Override // io.appmetrica.analytics.impl.Bo
            public final JSONObject a(JSONObject jSONObject, JSONObject jSONObject2) {
                return yo.a(jSONObject, jSONObject2);
            }
        });
    }

    public static final JSONObject a(JSONObject jSONObject, JSONObject jSONObject2) throws JSONException {
        JSONObject jSONObject3 = new JSONObject();
        jSONObject3.put("device_id", JsonUtils.optStringOrNullable(jSONObject2, "device_id", JsonUtils.optStringOrNull(jSONObject, "device_id")));
        jSONObject3.put("device_id_hash", JsonUtils.optStringOrNullable(jSONObject2, "device_id_hash", JsonUtils.optStringOrNull(jSONObject, "device_id_hash")));
        jSONObject3.put(Constants.REFERRER, JsonUtils.optStringOrNullable(jSONObject2, Constants.REFERRER, JsonUtils.optStringOrNull(jSONObject, Constants.REFERRER)));
        jSONObject3.put("referrer_checked", JsonUtils.optBooleanOrNullable(jSONObject2, "referrer_checked", JsonUtils.optBooleanOrNullable(jSONObject, "referrer_checked", Boolean.FALSE)));
        jSONObject3.put("last_migration_api_level", AbstractC2322nb.a(jSONObject2, "last_migration_api_level", AbstractC2322nb.a(jSONObject, "last_migration_api_level", -1)));
        return jSONObject3;
    }

    public final synchronized void b(String str) {
        Ao ao = this.f6420a;
        ao.a(ao.a().put("device_id_hash", str));
    }

    public final synchronized boolean c() {
        return this.f6420a.a().optBoolean("referrer_checked", false);
    }

    public final synchronized void d() {
        Ao ao = this.f6420a;
        ao.a(ao.a().put("referrer_checked", true));
    }

    /* JADX WARN: Code duplicated, block: B:12:0x0026  */
    public final synchronized C2451sg b() {
        C2451sg c2451sg;
        String strOptStringOrNull = JsonUtils.optStringOrNull(this.f6420a.a(), Constants.REFERRER);
        if (strOptStringOrNull != null) {
            try {
                byte[] bArrDecode = Base64.decode(strOptStringOrNull.getBytes(Charsets.UTF_8), 0);
                if (bArrDecode == null || bArrDecode.length == 0) {
                    c2451sg = null;
                } else {
                    c2451sg = new C2451sg(bArrDecode);
                }
            } catch (Throwable unused) {
            }
        } else {
            c2451sg = null;
        }
        return c2451sg;
    }

    public final synchronized void a(String str) {
        Ao ao = this.f6420a;
        ao.a(ao.a().put("device_id", str));
    }

    public final synchronized String a() {
        return JsonUtils.optStringOrNull(this.f6420a.a(), "device_id_hash");
    }

    public final synchronized void a(C2451sg c2451sg) {
        Ao ao = this.f6420a;
        ao.a(ao.a().put(Constants.REFERRER, c2451sg != null ? new String(Base64.encode(c2451sg.a(), 0), Charsets.UTF_8) : null));
    }
}
