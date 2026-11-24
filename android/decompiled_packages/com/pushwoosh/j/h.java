package com.pushwoosh.j;

import com.pushwoosh.internal.network.PushRequest;
import java.util.Date;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.concurrent.TimeUnit;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class h extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5226a;

    public h(String str) {
        this.f5226a = str;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        String displayLanguage = Locale.getDefault().getDisplayLanguage();
        jSONObject.put("email", this.f5226a);
        jSONObject.put("tz_offset", TimeUnit.SECONDS.convert(TimeZone.getDefault().getOffset(new Date().getTime()), TimeUnit.MILLISECONDS));
        jSONObject.put("language", displayLanguage);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "registerEmail";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) {
        return (Map) super.parseResponse(jSONObject);
    }
}
