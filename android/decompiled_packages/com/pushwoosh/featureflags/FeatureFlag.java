package com.pushwoosh.featureflags;

import com.pushwoosh.d.h;
import java.util.Objects;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class FeatureFlag {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f5075a;
    private final boolean b;
    private final String c;
    private final JSONObject d;

    FeatureFlag(String str, boolean z, String str2, JSONObject jSONObject) {
        JSONObject jSONObject2;
        this.f5075a = str;
        this.b = z;
        this.c = str2;
        try {
            jSONObject2 = new JSONObject(jSONObject.toString());
        } catch (JSONException unused) {
            jSONObject2 = new JSONObject();
        }
        this.d = jSONObject2;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof FeatureFlag)) {
            return false;
        }
        FeatureFlag featureFlag = (FeatureFlag) obj;
        return this.b == featureFlag.b && this.f5075a.equals(featureFlag.f5075a) && this.c.equals(featureFlag.c) && h.a(this.d, featureFlag.d);
    }

    public boolean getBool(String str, boolean z) {
        Object objOpt = this.d.opt(str);
        return objOpt instanceof Boolean ? ((Boolean) objOpt).booleanValue() : z;
    }

    public JSONArray getJsonArray(String str, JSONArray jSONArray) {
        Object objOpt = this.d.opt(str);
        if (!(objOpt instanceof JSONArray)) {
            return jSONArray;
        }
        try {
            return new JSONArray(((JSONArray) objOpt).toString());
        } catch (JSONException unused) {
            return new JSONArray();
        }
    }

    public JSONObject getJsonObject(String str, JSONObject jSONObject) {
        Object objOpt = this.d.opt(str);
        if (!(objOpt instanceof JSONObject)) {
            return jSONObject;
        }
        try {
            return new JSONObject(((JSONObject) objOpt).toString());
        } catch (JSONException unused) {
            return new JSONObject();
        }
    }

    public String getKey() {
        return this.f5075a;
    }

    public double getNumber(String str, double d) {
        Object objOpt = this.d.opt(str);
        return objOpt instanceof Number ? ((Number) objOpt).doubleValue() : d;
    }

    public String getRuleId() {
        return this.c;
    }

    public String getString(String str, String str2) {
        Object objOpt = this.d.opt(str);
        return objOpt instanceof String ? (String) objOpt : str2;
    }

    public int hashCode() {
        return Objects.hash(this.f5075a, Boolean.valueOf(this.b), this.c);
    }

    public boolean isEnabled() {
        return this.b;
    }

    public String toString() {
        return "FeatureFlag{key=" + this.f5075a + ", enabled=" + this.b + ", ruleId=" + this.c + "}";
    }
}
