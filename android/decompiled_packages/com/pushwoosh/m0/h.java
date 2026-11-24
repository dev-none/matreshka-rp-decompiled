package com.pushwoosh.m0;

import com.pushwoosh.internal.network.PushRequest;
import com.pushwoosh.tags.Tags;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class h extends PushRequest {
    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "getTags";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) {
        return Tags.fromJson(jSONObject.getJSONObject("result"));
    }
}
