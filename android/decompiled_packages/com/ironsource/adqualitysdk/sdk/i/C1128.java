package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ｖ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1128 extends AbstractC0759 {

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public static final String f3973 = StringFog.decrypt("D8zC\n", "ari2UJv7NA0=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public static final String f3972 = StringFog.decrypt("e/vH7g==\n", "Ho+znbP/hYE=\n");

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public static final String f3971 = StringFog.decrypt("vWt2G7Jd\n", "yRkXcsYuOx4=\n");

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final String m8892() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optString(f3973);
    }

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final JSONObject m8893() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optJSONObject(f3971);
    }

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final JSONArray m8894() {
        JSONObject jSONObject;
        synchronized (this) {
            jSONObject = this.f2592;
        }
        return jSONObject.optJSONArray(f3972);
    }
}
