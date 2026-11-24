package com.pushwoosh.m0;

import com.pushwoosh.internal.network.PushRequest;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class n extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5252a;
    public final String b;

    public n(String str, String str2) {
        this.f5252a = str;
        this.b = str2;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        String str = this.f5252a;
        if (str != null) {
            jSONObject.put("hash", str);
        }
        String str2 = this.b;
        if (str2 != null) {
            jSONObject.put("metaData", str2);
        }
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "messageDeliveryEvent";
    }
}
