package com.pushwoosh.m0;

import androidx.media3.common.MimeTypes;
import com.pushwoosh.internal.network.PushRequest;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class u extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5257a;

    public u(String str) {
        this.f5257a = str;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "setMADID";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final JSONObject getParams() throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put(MimeTypes.BASE_TYPE_APPLICATION, getApplicationId());
        jSONObject.put("hwid", getHwid());
        Object obj = this.f5257a;
        if (obj == null) {
            obj = JSONObject.NULL;
        }
        jSONObject.put("madid", obj);
        return jSONObject;
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final boolean shouldWrapRequest() {
        return false;
    }
}
