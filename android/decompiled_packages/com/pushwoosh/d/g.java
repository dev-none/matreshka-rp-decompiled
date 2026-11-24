package com.pushwoosh.d;

import androidx.media3.common.MimeTypes;
import com.pushwoosh.internal.network.PushRequest;
import io.sentry.protocol.FeatureFlags;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class g extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5056a;
    public final String b;
    public final String c;

    public g(String str, String str2, String str3) {
        this.f5056a = str;
        this.b = str2;
        this.c = str3;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getApiPath() {
        return "api/v2/device-api/";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getApplicationCode() {
        return this.f5056a;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "getFeatureFlags";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final JSONObject getParams() throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put(MimeTypes.BASE_TYPE_APPLICATION, this.f5056a);
        jSONObject.put("hwid", this.b);
        if (!this.c.isEmpty()) {
            jSONObject.put("etag", this.c);
        }
        return jSONObject;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) throws JSONException {
        boolean zOptBoolean = jSONObject.optBoolean("not_modified", false);
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(FeatureFlags.TYPE);
        if (jSONObjectOptJSONObject == null) {
            if (!zOptBoolean) {
                throw new JSONException("getFeatureFlags response has no flags");
            }
            jSONObjectOptJSONObject = new JSONObject();
        }
        JSONObject jSONObject2 = jSONObjectOptJSONObject;
        Object objOpt = jSONObject.opt("etag");
        return new d(jSONObject2, com.pushwoosh.featureflags.b.a(jSONObject2), objOpt instanceof String ? (String) objOpt : "", zOptBoolean, jSONObject.optBoolean("partial", false));
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final boolean shouldWrapRequest() {
        return false;
    }
}
