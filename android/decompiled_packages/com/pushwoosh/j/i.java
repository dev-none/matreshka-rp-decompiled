package com.pushwoosh.j;

import com.pushwoosh.internal.network.PushRequest;
import io.flutter.plugins.firebase.analytics.Constants;
import java.util.Date;
import java.util.Map;
import java.util.TimeZone;
import java.util.concurrent.TimeUnit;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class i extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5227a;
    public final String b;

    public i(String str, String str2) {
        this.f5227a = str2;
        this.b = str;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        jSONObject.put("email", this.f5227a);
        jSONObject.put("tz_offset", TimeUnit.SECONDS.convert(TimeZone.getDefault().getOffset(new Date().getTime()), TimeUnit.MILLISECONDS));
        jSONObject.put(Constants.USER_ID, this.b);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "registerEmailUser";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) {
        return (Map) super.parseResponse(jSONObject);
    }
}
