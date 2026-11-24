package com.pushwoosh.j;

import com.pushwoosh.internal.network.PushRequest;
import io.flutter.plugins.firebase.analytics.Constants;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class j extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5228a;

    public j(String str) {
        this.f5228a = str;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        jSONObject.put(Constants.USER_ID, this.f5228a);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "registerUser";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) {
        return (Map) super.parseResponse(jSONObject);
    }
}
