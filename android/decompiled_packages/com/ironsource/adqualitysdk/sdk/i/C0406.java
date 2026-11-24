package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.UUID;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ԅ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0406 extends AbstractC0759 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final String f1510 = StringFog.decrypt("KxwoZa776n06AA==\n", "SHNGC8uYnhI=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String f1509 = StringFog.decrypt("Cw==\n", "ePbvLh7wOBI=\n") + UUID.randomUUID().toString().replace(StringFog.decrypt("1A==\n", "+far52eQDsY=\n"), "");

    public C0406(C0941 c0941) {
        this.f2591 = c0941;
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final boolean m8511() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.has(this.f1510);
    }

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final String m8512(String str) {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(this.f1510);
        if (jSONObjectOptJSONObject == null) {
            jSONObjectOptJSONObject = new JSONObject();
        }
        JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject(str);
        if (jSONObjectOptJSONObject2 != null) {
            return jSONObjectOptJSONObject2.optString(StringFog.decrypt("3r5mP3hkUorPh20jbm5Jiw==\n", "vdEIUR0HJuU=\n"));
        }
        return null;
    }
}
